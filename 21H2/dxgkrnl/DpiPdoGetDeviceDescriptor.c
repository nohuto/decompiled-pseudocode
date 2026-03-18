/*
 * XREFs of DpiPdoGetDeviceDescriptor @ 0x1C02067A4
 * Callers:
 *     DpiPdoAddPdo @ 0x1C0205A28 (DpiPdoAddPdo.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiIsValidEdid @ 0x1C0027070 (DpiIsValidEdid.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C01EF8F4 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C01EF978 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1C02075B0 (DpiDxgkDdiQueryDeviceDescriptor.c)
 *     DpiPdoPollChild @ 0x1C0397760 (DpiPdoPollChild.c)
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
  __int64 DeviceDescriptor; // rdi
  __int64 v15; // rcx
  size_t v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // edx
  int v21; // r9d
  bool v22; // al
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  PVOID PoolWithTag; // rax
  _WORD *v27; // rax
  size_t Size[2]; // [rsp+30h] [rbp-10h] BYREF

  v8 = *(_QWORD *)(a1 + 64);
  *(_OWORD *)Size = 0LL;
  v11 = *(_QWORD *)(v8 + 40);
  if ( *((_QWORD *)a2 + 14) )
  {
    HIDWORD(Size[0]) = 256;
    Size[1] = (size_t)ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x74727044u);
    if ( Size[1] )
    {
      v15 = *((unsigned __int16 *)a2 + 47);
      if ( (unsigned int)v15 >= HIDWORD(Size[0]) )
      {
        v16 = HIDWORD(Size[0]);
      }
      else
      {
        memset((void *)(Size[1] + v15), 0, (unsigned int)(HIDWORD(Size[0]) - v15));
        v16 = *((unsigned __int16 *)a2 + 47);
      }
      memmove((void *)Size[1], *((const void **)a2 + 14), v16);
      LODWORD(DeviceDescriptor) = 0;
LABEL_10:
      *a8 = *(_OWORD *)Size;
      goto LABEL_11;
    }
    goto LABEL_19;
  }
  if ( *a2 != 1 )
  {
    if ( *a2 != 2 )
    {
      LODWORD(DeviceDescriptor) = -1073741823;
      v17 = *a2;
      v18 = 2LL;
      goto LABEL_42;
    }
    HIDWORD(Size[0]) = 408;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x198uLL, 0x74727044u);
    Size[1] = (size_t)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, HIDWORD(Size[0]));
      KeWaitForSingleObject(*((PVOID *)a2 + 9), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3896), 1);
      DeviceDescriptor = (int)DpiDxgkDdiQueryDeviceDescriptor(v11, *(_QWORD *)(v8 + 48), (unsigned int)a2[6], Size);
      DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3896));
      KeReleaseMutex(*((PRKMUTEX *)a2 + 9), 0);
      if ( (int)DeviceDescriptor < 0 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v11 + 216), DeviceDescriptor);
        goto LABEL_12;
      }
      v27 = (_WORD *)Size[1];
      *(_WORD *)(Size[1] + 100) = 0;
      v27[101] = 0;
      v27[152] = 0;
      v27[203] = 0;
      goto LABEL_10;
    }
LABEL_19:
    v17 = -1073741801LL;
    LODWORD(DeviceDescriptor) = -1073741801;
    v18 = 6LL;
LABEL_42:
    WdLogSingleEntry1(v18, v17);
    goto LABEL_12;
  }
  HIDWORD(Size[0]) = 256;
  v12 = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x74727044u);
  Size[1] = (size_t)v12;
  if ( !v12 )
  {
    LODWORD(DeviceDescriptor) = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    goto LABEL_12;
  }
  memset(v12, 0, HIDWORD(Size[0]));
  KeWaitForSingleObject(*((PVOID *)a2 + 9), Executive, 0, 0, 0LL);
  DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3896), 1);
  LODWORD(DeviceDescriptor) = DpiDxgkDdiQueryDeviceDescriptor(v11, *(_QWORD *)(v8 + 48), (unsigned int)a2[6], Size);
  DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3896));
  KeReleaseMutex(*((PRKMUTEX *)a2 + 9), 0);
  if ( (_DWORD)DeviceDescriptor == -1071841272 )
  {
    Size[0] = 0x8000000000LL;
    memset((void *)Size[1], 0, 0x100uLL);
    KeWaitForSingleObject(*((PVOID *)a2 + 9), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3896), 1);
    LODWORD(DeviceDescriptor) = DpiDxgkDdiQueryDeviceDescriptor(v11, *(_QWORD *)(v8 + 48), (unsigned int)a2[6], Size);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3896));
    KeReleaseMutex(*((PRKMUTEX *)a2 + 9), 0);
  }
  if ( (_DWORD)DeviceDescriptor == -1071774719 || (_DWORD)DeviceDescriptor == -1071841279 )
  {
    if ( IsInternalVideoOutput((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)a2[1]) )
      WdLogSingleEntry2(2LL, DpiDxgkDdiQueryDeviceDescriptor, v25);
    else
      WdLogSingleEntry1(3LL, v25);
  }
  else
  {
    if ( (int)DeviceDescriptor >= 0 )
    {
      if ( !DpiIsValidEdid(Size[1]) )
      {
        v22 = IsInternalVideoOutput((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)a2[1]);
        v24 = 2LL;
        if ( !v22 )
          v24 = 3LL;
        WdLogSingleEntry1(v24, v23);
        LODWORD(DeviceDescriptor) = -1073741823;
        goto LABEL_12;
      }
      goto LABEL_10;
    }
    WdLogSingleEntry1(3LL, *(_QWORD *)(v11 + 216));
    if ( a6 != 1 || (unsigned int)a2[15] >= 3 )
      goto LABEL_12;
    KeWaitForSingleObject((PVOID)(v8 + 3408), Executive, 0, 0, 0LL);
    ++a2[15];
    if ( !*((_BYTE *)a2 + 64) )
    {
      v19 = *(_QWORD *)(a1 + 64);
      *((_BYTE *)a2 + 64) = 1;
      v20 = *(_DWORD *)(v19 + 3688);
      *(_DWORD *)(v19 + 3688) = v20 + 1;
      if ( !v20 )
        KeClearEvent((PRKEVENT)(v19 + 3696));
    }
    KeReleaseMutex((PRKMUTEX)(v8 + 3408), 0);
    LOBYTE(v21) = a4;
    LODWORD(DeviceDescriptor) = DpiPdoPollChild(a1, a2[6], a3, v21, a5);
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
