/*
 * XREFs of DpiPdoGetDeviceDescriptor @ 0x1C0165E94
 * Callers:
 *     DpiPdoAddPdo @ 0x1C016594C (DpiPdoAddPdo.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000F30C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiIsValidEdid @ 0x1C00209CC (DpiIsValidEdid.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0161AF0 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0161B70 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1C0166050 (DpiDxgkDdiQueryDeviceDescriptor.c)
 *     DpiPdoPollChild @ 0x1C02D48BC (DpiPdoPollChild.c)
 */

__int64 __fastcall DpiPdoGetDeviceDescriptor(
        __int64 a1,
        int *a2,
        int a3,
        char a4,
        char a5,
        char a6,
        __int64 a7,
        _OWORD *a8)
{
  __int64 v8; // r15
  __int64 v11; // r13
  PVOID v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  size_t v16; // r9
  __int64 DeviceDescriptor; // rdi
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rcx
  size_t v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // edx
  int v30; // r9d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 (__fastcall *v40)(_QWORD, _QWORD, _QWORD, _QWORD); // rcx
  __int64 v41; // rax
  PVOID PoolWithTag; // rax
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  _WORD *v46; // rax
  size_t Size[2]; // [rsp+30h] [rbp-10h] BYREF

  v8 = *(_QWORD *)(a1 + 64);
  *(_OWORD *)Size = 0LL;
  v11 = *(_QWORD *)(v8 + 40);
  if ( *((_QWORD *)a2 + 14) )
  {
    HIDWORD(Size[0]) = 256;
    Size[1] = (size_t)ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x74727044u);
    v16 = Size[1];
    if ( !Size[1] )
      goto LABEL_22;
    v23 = *((unsigned __int16 *)a2 + 47);
    if ( (unsigned int)v23 >= HIDWORD(Size[0]) )
    {
      v24 = HIDWORD(Size[0]);
    }
    else
    {
      memset((void *)(Size[1] + v23), 0, (unsigned int)(HIDWORD(Size[0]) - v23));
      v24 = *((unsigned __int16 *)a2 + 47);
    }
    memmove((void *)Size[1], *((const void **)a2 + 14), v24);
    LODWORD(DeviceDescriptor) = 0;
    goto LABEL_10;
  }
  if ( *a2 != 1 )
  {
    if ( *a2 != 2 )
    {
      LODWORD(DeviceDescriptor) = -1073741823;
      v39 = WdLogNewEntry5_WdError(a1, a2);
      v40 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))*a2;
      goto LABEL_43;
    }
    HIDWORD(Size[0]) = 408;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x198uLL, 0x74727044u);
    Size[1] = (size_t)PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_22;
    memset(PoolWithTag, 0, HIDWORD(Size[0]));
    KeWaitForSingleObject(*((PVOID *)a2 + 9), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3896), 1LL);
    DeviceDescriptor = (int)DpiDxgkDdiQueryDeviceDescriptor(v11, *(_QWORD *)(v8 + 48), (unsigned int)a2[6], Size);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3896), v43);
    KeReleaseMutex(*((PRKMUTEX *)a2 + 9), 0);
    if ( (int)DeviceDescriptor < 0 )
    {
      v39 = WdLogNewEntry5_WdError(v45, v44);
      v40 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v11 + 216);
      *(_QWORD *)(v39 + 32) = DeviceDescriptor;
LABEL_43:
      *(_QWORD *)(v39 + 24) = v40;
      WdLogEvent5_WdError(v39);
      goto LABEL_11;
    }
    v46 = (_WORD *)Size[1];
    *(_WORD *)(Size[1] + 100) = 0;
    v46[101] = 0;
    v46[152] = 0;
    v46[203] = 0;
LABEL_10:
    *a8 = *(_OWORD *)Size;
    goto LABEL_11;
  }
  HIDWORD(Size[0]) = 256;
  v12 = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x74727044u);
  Size[1] = (size_t)v12;
  if ( !v12 )
  {
LABEL_22:
    LODWORD(DeviceDescriptor) = -1073741801;
    v25 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
    *(_QWORD *)(v25 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v25);
    goto LABEL_12;
  }
  memset(v12, 0, HIDWORD(Size[0]));
  KeWaitForSingleObject(*((PVOID *)a2 + 9), Executive, 0, 0, 0LL);
  DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3896), 1LL);
  LODWORD(DeviceDescriptor) = DpiDxgkDdiQueryDeviceDescriptor(v11, *(_QWORD *)(v8 + 48), (unsigned int)a2[6], Size);
  DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3896), v18);
  KeReleaseMutex(*((PRKMUTEX *)a2 + 9), 0);
  if ( (_DWORD)DeviceDescriptor == -1071841272 )
  {
    Size[0] = 0x8000000000LL;
    memset((void *)Size[1], 0, 0x100uLL);
    KeWaitForSingleObject(*((PVOID *)a2 + 9), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3896), 1LL);
    LODWORD(DeviceDescriptor) = DpiDxgkDdiQueryDeviceDescriptor(v11, *(_QWORD *)(v8 + 48), (unsigned int)a2[6], Size);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3896), v26);
    KeReleaseMutex(*((PRKMUTEX *)a2 + 9), 0);
  }
  if ( (_DWORD)DeviceDescriptor == -1071774719 || (_DWORD)DeviceDescriptor == -1071841279 )
  {
    if ( !IsInternalVideoOutput((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)a2[1]) )
    {
      v41 = WdLogNewEntry5_WdWarning(v37, v36, v38);
      *(_QWORD *)(v41 + 24) = (int)DeviceDescriptor;
      WdLogEvent5_WdWarning(v41);
      goto LABEL_11;
    }
    v39 = WdLogNewEntry5_WdError(v37, v36);
    v40 = DpiDxgkDdiQueryDeviceDescriptor;
    *(_QWORD *)(v39 + 32) = (int)DeviceDescriptor;
    goto LABEL_43;
  }
  if ( (int)DeviceDescriptor >= 0 )
  {
    if ( !DpiIsValidEdid(Size[1]) )
    {
      if ( IsInternalVideoOutput((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)a2[1]) )
      {
        v34 = WdLogNewEntry5_WdError(v32, v31);
        *(_QWORD *)(v34 + 24) = (int)DeviceDescriptor;
        WdLogEvent5_WdError(v34);
      }
      else
      {
        v35 = WdLogNewEntry5_WdWarning(v32, v31, v33);
        *(_QWORD *)(v35 + 24) = (int)DeviceDescriptor;
        WdLogEvent5_WdWarning(v35);
      }
      LODWORD(DeviceDescriptor) = -1073741823;
      goto LABEL_12;
    }
    goto LABEL_10;
  }
  v27 = WdLogNewEntry5_WdWarning(v20, v19, v21);
  *(_QWORD *)(v27 + 24) = *(_QWORD *)(v11 + 216);
  WdLogEvent5_WdWarning(v27);
  if ( a6 == 1 && (unsigned int)a2[15] < 3 )
  {
    KeWaitForSingleObject((PVOID)(v8 + 3408), Executive, 0, 0, 0LL);
    ++a2[15];
    if ( !*((_BYTE *)a2 + 64) )
    {
      v28 = *(_QWORD *)(a1 + 64);
      *((_BYTE *)a2 + 64) = 1;
      v29 = *(_DWORD *)(v28 + 3688);
      *(_DWORD *)(v28 + 3688) = v29 + 1;
      if ( !v29 )
        KeClearEvent((PRKEVENT)(v28 + 3696));
    }
    KeReleaseMutex((PRKMUTEX)(v8 + 3408), 0);
    LOBYTE(v30) = a4;
    LODWORD(DeviceDescriptor) = DpiPdoPollChild(a1, a2[6], a3, v30, a5);
    if ( (int)DeviceDescriptor >= 0 )
      LODWORD(DeviceDescriptor) = 259;
  }
LABEL_11:
  if ( (_DWORD)DeviceDescriptor != 259 )
  {
LABEL_12:
    KeWaitForSingleObject((PVOID)(v8 + 3408), Executive, 0, 0, 0LL);
    a2[15] = 0;
    KeReleaseMutex((PRKMUTEX)(v8 + 3408), 0);
  }
  if ( (int)DeviceDescriptor < 0 || (_DWORD)DeviceDescriptor == 259 )
  {
    if ( Size[1] )
      ExFreePoolWithTag((PVOID)Size[1], 0);
  }
  return (unsigned int)DeviceDescriptor;
}
