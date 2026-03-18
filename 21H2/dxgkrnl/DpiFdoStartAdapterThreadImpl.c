/*
 * XREFs of DpiFdoStartAdapterThreadImpl @ 0x1C01F5298
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C01F4EF0 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0012BA4 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C001C320 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     wcsncmp_0 @ 0x1C002B205 (wcsncmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C00604C4 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C01F43EC (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiFdoStartNonLdaAdapter @ 0x1C01F5830 (DpiFdoStartNonLdaAdapter.c)
 *     DpiPnpNotifyGdi @ 0x1C01F5E0C (DpiPnpNotifyGdi.c)
 *     DpiPnpEnableVga @ 0x1C01F5F10 (DpiPnpEnableVga.c)
 *     DxgkStartPnPTransition @ 0x1C01FD15C (DxgkStartPnPTransition.c)
 *     DxgkCompletePnPTransition @ 0x1C0217CD4 (DxgkCompletePnPTransition.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C0388570 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C0388704 (DpiEnableMsBddFallbackDriver.c)
 *     DpiLdaStartAdapterInChain @ 0x1C0396848 (DpiLdaStartAdapterInChain.c)
 */

__int64 __fastcall DpiFdoStartAdapterThreadImpl(int *a1, char a2, _BYTE *a3)
{
  unsigned int v6; // r13d
  char v7; // si
  bool v8; // r14
  __int64 v9; // rdx
  unsigned int v10; // r15d
  int v11; // r14d
  __int64 v12; // r12
  char v13; // al
  __int64 v14; // rsi
  bool v15; // bl
  int v16; // edx
  void *v17; // rcx
  struct _DEVICE_OBJECT *v18; // rcx
  int v19; // eax
  bool v20; // al
  char v21; // cl
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 *v26; // rbx
  int v27; // ecx
  int v28; // eax
  ULONG v29; // r15d
  PVOID PoolWithTag; // rbx
  NTSTATUS DevicePropertyData; // eax
  struct _DEVICE_OBJECT *v32; // rcx
  int Timeout; // [rsp+20h] [rbp-E0h]
  int Timeouta; // [rsp+20h] [rbp-E0h]
  PVOID Data; // [rsp+28h] [rbp-D8h]
  char v36; // [rsp+40h] [rbp-C0h]
  char v37; // [rsp+41h] [rbp-BFh]
  char v38; // [rsp+42h] [rbp-BEh]
  char v39; // [rsp+43h] [rbp-BDh]
  char v41; // [rsp+45h] [rbp-BBh]
  unsigned int v42; // [rsp+48h] [rbp-B8h]
  bool v43; // [rsp+4Ch] [rbp-B4h]
  void *v44; // [rsp+50h] [rbp-B0h] BYREF
  void *started; // [rsp+58h] [rbp-A8h]
  ULONG Type; // [rsp+60h] [rbp-A0h] BYREF
  ULONG RequiredSize; // [rsp+64h] [rbp-9Ch] BYREF
  int *v48; // [rsp+68h] [rbp-98h]
  UNICODE_STRING String1; // [rsp+70h] [rbp-90h] BYREF
  void *v50; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v51; // [rsp+88h] [rbp-78h]
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-60h] BYREF
  int v54; // [rsp+A8h] [rbp-58h]
  _QWORD v55[10]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Str1[48]; // [rsp+100h] [rbp+0h] BYREF

  v51 = a3;
  memset(v55, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v55[1]);
  v48 = 0LL;
  v36 = 0;
  v6 = 0;
  v38 = 0;
  v7 = 0;
  v55[8] = MEMORY[0xFFFFF78000000014];
  v41 = *a3;
  LODWORD(v55[3]) = 7;
  LOBYTE(v55[6]) = -1;
  v37 = 0;
  v39 = 0;
  DestinationString = 0LL;
  if ( !a1 )
  {
    v8 = 1;
LABEL_3:
    v43 = v8;
    goto LABEL_4;
  }
  v28 = *a1;
  v8 = (*a1 & 2) != 0;
  v48 = a1;
  v43 = v8;
  if ( (v28 & 4) == 0 )
  {
    v36 = 0;
    goto LABEL_3;
  }
  *((_WORD *)a1 + 261) = 0;
  v36 = 1;
  v7 = 1;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)a1 + 2);
LABEL_4:
  if ( byte_1C013049A )
  {
    WdLogSingleEntry1(4LL, 0LL);
    return v6;
  }
  started = (void *)DxgkStartPnPTransition(0LL, (!v8 + 2LL) << 32);
  if ( !started )
  {
    v6 = -1073741670;
    WdLogSingleEntry1(6LL, -1073741670LL);
    return v6;
  }
  if ( v8 )
  {
    _InterlockedCompareExchange(&dword_1C01307F0, 5, 4);
    LOBYTE(v9) = 1;
    DpiPnpEnableVga(0LL, v9, 0LL, v55);
  }
  AcquireMiniportListMutex();
  if ( !qword_1C0130748 )
    WdLogSingleEntry1(2LL, -1073741823LL);
  if ( a2 )
  {
    byte_1C01304E2 = 1;
    DpiAcquirePostDisplayInfoFromBgfx((__int64)&xmmword_1C0130750, 1, 1);
    dword_1C013083C = 1;
    if ( qword_1C0130748 )
      (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)(qword_1C0130748 + 64) + 976LL))(
        *(_QWORD *)(*(_QWORD *)(qword_1C0130748 + 64) + 48LL),
        &xmmword_1C0130750);
    dword_1C01307F0 = 1;
    if ( v8 )
    {
LABEL_14:
      v10 = 0;
      goto LABEL_15;
    }
  }
  else if ( v8 )
  {
    if ( (unsigned int)(dword_1C01307F0 - 4) <= 1 )
      DpiDisableMsBddFallbackDriver(v55);
    goto LABEL_14;
  }
  v10 = 1;
LABEL_15:
  v11 = (int)started;
  v42 = v10;
  do
  {
    v12 = qword_1C01304C8;
    if ( *(_QWORD *)v12 != v12 )
    {
      do
      {
        v13 = *(_BYTE *)(v12 + 134);
        if ( v7 )
        {
          if ( v13 )
          {
LABEL_19:
            KeWaitForSingleObject((PVOID)(v12 + 72), Executive, 0, 0, 0LL);
            v14 = *(_QWORD *)(v12 + 56);
            if ( *(_QWORD *)v14 != v14 )
            {
              while ( 1 )
              {
                if ( *(_DWORD *)(v14 + 16) == 1953656900 && *(_DWORD *)(v14 + 20) == 4 )
                  goto LABEL_44;
                if ( !v36 )
                {
                  v15 = 1;
LABEL_24:
                  KeEnterCriticalRegion();
                  if ( *(_BYTE *)(v14 + 484) )
                    DpiCheckForOutstandingD3Requests(v14);
                  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v14 + 168), 1u);
                  v16 = 0;
                  v10 = v42;
                  if ( (v42 == 0) == (*(_BYTE *)(*(_QWORD *)(v14 + 168) + 108LL) != 0)
                    && *(_DWORD *)(v14 + 236) == 1
                    && !*(_BYTE *)(v14 + 232)
                    && (!v36 || v15) )
                  {
                    if ( !*(_BYTE *)(v14 + 481) || v41 )
                    {
                      v53 = 0LL;
                      v17 = 0LL;
                      v54 = 0;
                      if ( v48 && v48[131] )
                      {
                        v17 = v48 + 132;
                        v16 = v48[131];
                      }
                      Data = v17;
                      v18 = *(struct _DEVICE_OBJECT **)(v14 + 24);
                      Timeouta = v16;
                      LOBYTE(v16) = a2;
                      if ( *(_DWORD *)(v14 + 504) )
                        v19 = DpiLdaStartAdapterInChain(
                                (_DWORD)v18,
                                v16,
                                v11,
                                (unsigned int)v55,
                                Timeouta,
                                (__int64)Data,
                                (__int64)&v53);
                      else
                        v19 = DpiFdoStartNonLdaAdapter(v18, Timeouta, (__int64)Data, (__int64)&v53);
                      v6 = v19;
                      if ( v19 != 1075708986 )
                      {
                        if ( v19 < 0 )
                        {
                          v32 = *(struct _DEVICE_OBJECT **)(v14 + 152);
                          *(_BYTE *)(v14 + 232) = 1;
                          IoInvalidateDeviceState(v32);
                        }
                        else
                        {
                          v20 = (v53 & 1) != 0 || (_BYTE)word_1C013049C && (v53 & 0x40) != 0;
                          v38 |= v20;
                          if ( (v53 & 2) == 0 || (v21 = 1, (v53 & 0x2000) != 0) )
                            v21 = 0;
                          v37 |= v21;
                          v39 |= (v53 & 0x4000) != 0;
                        }
                      }
                    }
                    else
                    {
                      *v51 = 1;
                    }
                  }
                  if ( *(_BYTE *)(v14 + 484) )
                    DpiEnableD3Requests(*(_QWORD *)(v14 + 24));
                  ExReleaseResourceLite(*(PERESOURCE *)(v14 + 168));
                  KeLeaveCriticalRegion();
                  goto LABEL_44;
                }
                v29 = DestinationString.Length + 2;
                RequiredSize = 0;
                Type = 0;
                v44 = 0LL;
                PoolWithTag = ExAllocatePoolWithTag(PagedPool, v29, 0x74727044u);
                AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v44);
                v44 = PoolWithTag;
                v50 = 0LL;
                AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v50);
                if ( !PoolWithTag )
                  break;
                DevicePropertyData = IoGetDevicePropertyData(
                                       *(PDEVICE_OBJECT *)(v14 + 152),
                                       &DEVPKEY_Device_InstanceId,
                                       0,
                                       0,
                                       v29,
                                       PoolWithTag,
                                       &RequiredSize,
                                       &Type);
                v6 = DevicePropertyData;
                if ( DevicePropertyData < 0 )
                {
                  WdLogSingleEntry1(2LL, DevicePropertyData);
                  goto LABEL_87;
                }
                String1 = 0LL;
                RtlInitUnicodeString(&String1, (PCWSTR)PoolWithTag);
                if ( !*(_BYTE *)(v14 + 1160)
                  || (wcscpy(Str1, L"SWD\\VirtualDisplayAdapter\\VirtualDisplayDevice_"), String1.Length >= 0x60u)
                  && !wcsncmp_0(Str1, String1.Buffer, 0x2FuLL) )
                {
                  v15 = RtlCompareUnicodeString(&String1, &DestinationString, 1u) == 0;
                  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v44);
                  goto LABEL_24;
                }
                WdLogSingleEntry0(2LL);
                AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v44);
                v10 = v42;
LABEL_44:
                v14 = *(_QWORD *)v14;
                if ( *(_QWORD *)v14 == *(_QWORD *)(v12 + 56) )
                  goto LABEL_45;
              }
              v6 = -1073741801;
              WdLogSingleEntry0(2LL);
LABEL_87:
              AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v44);
              v10 = v42;
              goto LABEL_44;
            }
LABEL_45:
            KeReleaseMutex((PRKMUTEX)(v12 + 72), 0);
            v7 = v36;
          }
        }
        else if ( !v13 )
        {
          goto LABEL_19;
        }
        v12 = *(_QWORD *)v12;
      }
      while ( *(_QWORD *)v12 != qword_1C01304C8 );
    }
    v42 = ++v10;
  }
  while ( v10 < 2 );
  if ( v43 && (unsigned int)(dword_1C01307F0 - 1) <= 1 )
    DpiEnableMsBddFallbackDriver(v55);
  if ( v37 )
  {
    v22 = qword_1C01304C8;
    if ( *(_QWORD *)v22 != v22 )
    {
      do
      {
        if ( *(_BYTE *)(v22 + 133) )
        {
          KeWaitForSingleObject((PVOID)(v22 + 72), Executive, 0, 0, 0LL);
          v26 = *(__int64 **)(v22 + 56);
          if ( (__int64 *)*v26 != v26 )
          {
            do
            {
              KeEnterCriticalRegion();
              if ( *((_BYTE *)v26 + 484) )
                _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v26[3] + 64) + 4088LL), 1u);
              ExAcquireResourceSharedLite((PERESOURCE)v26[21], 1u);
              if ( *((_DWORD *)v26 + 4) == 1953656900 && *((_DWORD *)v26 + 5) == 2 )
              {
                v27 = *((_DWORD *)v26 + 59);
                if ( v27 == 2 || *((_DWORD *)v26 + 60) == 2 && ((v27 - 3) & 0xFFFFFFFC) == 0 && v27 != 4 )
                  IoInvalidateDeviceRelations((PDEVICE_OBJECT)v26[19], PowerRelations);
              }
              if ( *((_BYTE *)v26 + 484) )
                DpiEnableD3Requests(v26[3]);
              ExReleaseResourceLite((PERESOURCE)v26[21]);
              KeLeaveCriticalRegion();
              v26 = (__int64 *)*v26;
            }
            while ( *v26 != *(_QWORD *)(v22 + 56) );
          }
          KeReleaseMutex((PRKMUTEX)(v22 + 72), 0);
        }
        v22 = *(_QWORD *)v22;
      }
      while ( *(_QWORD *)v22 != qword_1C01304C8 );
    }
  }
  _InterlockedExchange64(&qword_1C01304D8, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v38 || v39 )
  {
    LOBYTE(v23) = 1;
    LOBYTE(Timeout) = v36;
    DpiPnpNotifyGdi(0LL, v23, started, 0x100000000LL, Timeout, v55);
  }
  else if ( v43 )
  {
    LOBYTE(v23) = 1;
    LOBYTE(v24) = 1;
    DpiPnpEnableVga(v24, v23, started, v55);
  }
  else
  {
    DxgkCompletePnPTransition(started);
  }
  return v6;
}
