/*
 * XREFs of PipResetDevices @ 0x140A51EC8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     DbgPrintEx @ 0x14037D2B0 (DbgPrintEx.c)
 *     _PnpCtxRegEnumValue @ 0x1406C2E60 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegOpenKey @ 0x1406C41E4 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegCloseKey @ 0x1406C506C (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegQueryValue @ 0x1406C54FC (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406C5534 (_PnpCtxRegQueryInfoKey.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x1406F7040 (_CmGetMatchingFilteredDeviceList.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 *     PipResetDevice @ 0x140A8DAC0 (PipResetDevice.c)
 */

__int64 __fastcall PipResetDevices(__int64 a1)
{
  __int64 v1; // r13
  ULONG v2; // r14d
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rcx
  void *v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v9; // edi
  PVOID PoolWithTag; // rsi
  __int64 v11; // rcx
  _WORD *v12; // rbx
  int v13; // r13d
  struct _KTHREAD *v14; // rax
  PVOID v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  ULONG v18; // r15d
  int v19; // r12d
  int v20; // eax
  int MatchingFilteredDeviceList; // eax
  int v22; // edi
  PVOID v23; // rax
  _WORD *i; // rdi
  __int64 v25; // rax
  ULONG v26; // r15d
  int v27; // r12d
  int v28; // eax
  int v29; // eax
  _WORD *v30; // rax
  _WORD *v31; // rsi
  __int64 v32; // r15
  __int64 v33; // rax
  ULONG v34; // [rsp+50h] [rbp-39h] BYREF
  int v35; // [rsp+54h] [rbp-35h] BYREF
  int v36; // [rsp+58h] [rbp-31h]
  int v37; // [rsp+5Ch] [rbp-2Dh] BYREF
  void *v38; // [rsp+60h] [rbp-29h] BYREF
  __int64 v39; // [rsp+68h] [rbp-21h]
  void *v40; // [rsp+70h] [rbp-19h] BYREF
  unsigned int v41; // [rsp+78h] [rbp-11h] BYREF
  int v42; // [rsp+7Ch] [rbp-Dh] BYREF
  int v43; // [rsp+80h] [rbp-9h] BYREF
  int v44; // [rsp+84h] [rbp-5h] BYREF
  unsigned int v45; // [rsp+88h] [rbp-1h]
  void *v46; // [rsp+90h] [rbp+7h] BYREF
  __int64 v47; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int v48; // [rsp+F8h] [rbp+6Fh] BYREF
  ULONG v49; // [rsp+100h] [rbp+77h] BYREF
  int v50; // [rsp+108h] [rbp+7Fh] BYREF

  v47 = a1;
  v1 = *(_QWORD *)&PiPnpRtlCtx;
  v2 = 0;
  v39 = *(_QWORD *)&PiPnpRtlCtx;
  v46 = 0LL;
  v42 = 0;
  v50 = 0;
  result = PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, 2147483650LL, (__int64)L"SYSTEM", 0, 1u, (__int64)&v46);
  if ( (int)result >= 0 )
  {
    v41 = 4;
    v5 = PnpCtxRegQueryValue(v4, v46, L"DevModeEverEnabled", &v42, &v50, &v41);
    v45 = v5;
    PnpCtxRegCloseKey(v6, v46);
    if ( v5 >= 0 && v50 )
    {
      return (unsigned int)v5;
    }
    else
    {
      LODWORD(v47) = 0;
      v38 = 0LL;
      v7 = 0LL;
      CurrentThread = KeGetCurrentThread();
      v9 = 0;
      v36 = 0;
      PoolWithTag = 0LL;
      v35 = 0;
      v34 = 0;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      if ( (int)PnpCtxRegOpenKey(
                  v1,
                  2147483650LL,
                  (__int64)L"System\\CurrentControlSet\\Control\\StateSeparation\\PnP\\ResetDevices\\Classes",
                  0,
                  0x20019u,
                  (__int64)&v38) >= 0
        && (int)PnpCtxRegQueryInfoKey(v11, (int)v38, 0, 0, (__int64)&v34, (__int64)&v35, 0LL) >= 0 )
      {
        v18 = v34;
        if ( v34 )
        {
          v19 = v35 + 1;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * (unsigned int)(v35 + 1), 0x6E697050u);
          if ( PoolWithTag )
          {
            v11 = 0LL;
            if ( v18 )
            {
              while ( 1 )
              {
                v43 = v19;
                v20 = PnpCtxRegEnumValue(0LL, v38, v2, PoolWithTag, (__int64)&v43, 0LL, 0LL, 0LL);
                v11 = 0LL;
                if ( v20 >= 0 )
                {
                  DbgPrintEx(0x20u, 0, "Resetting devices in device setup class '%ws'\n", PoolWithTag);
                  MatchingFilteredDeviceList = CmGetMatchingFilteredDeviceList(
                                                 v1,
                                                 (__int64)PoolWithTag,
                                                 128,
                                                 0LL,
                                                 0LL,
                                                 (__int64)v7,
                                                 v9,
                                                 (__int64)&v47);
                  if ( MatchingFilteredDeviceList == -1073741789 )
                  {
                    if ( v7 )
                      ExFreePoolWithTag(v7, 0);
                    v22 = v47;
                    v36 = v47;
                    v23 = ExAllocatePoolWithTag(PagedPool, 2LL * (unsigned int)v47, 0x6E697050u);
                    v11 = 0LL;
                    v7 = v23;
                    if ( !v23 )
                    {
LABEL_38:
                      v2 = 0;
                      break;
                    }
                    MatchingFilteredDeviceList = CmGetMatchingFilteredDeviceList(
                                                   v1,
                                                   (__int64)PoolWithTag,
                                                   128,
                                                   0LL,
                                                   0LL,
                                                   (__int64)v23,
                                                   v22,
                                                   (__int64)&v47);
                  }
                  v11 = 0LL;
                  if ( MatchingFilteredDeviceList >= 0 )
                  {
                    if ( (_DWORD)v47 )
                    {
                      for ( i = v7; *i; i += v25 + 1 )
                      {
                        PipResetDevice(v1, i);
                        v25 = -1LL;
                        v11 = 0LL;
                        do
                          ++v25;
                        while ( i[v25] );
                      }
                    }
                  }
                }
                v9 = v36;
                if ( ++v2 >= v18 )
                  goto LABEL_38;
              }
            }
          }
        }
      }
      if ( v38 )
        PnpCtxRegCloseKey(v11, v38);
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v48 = 0;
      v12 = 0LL;
      v40 = 0LL;
      v13 = 0;
      v14 = KeGetCurrentThread();
      v15 = 0LL;
      v37 = 0;
      v49 = 0;
      --v14->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      v16 = v39;
      if ( (int)PnpCtxRegOpenKey(
                  v39,
                  2147483650LL,
                  (__int64)L"System\\CurrentControlSet\\Control\\StateSeparation\\PnP\\ResetDevices\\Services",
                  0,
                  0x20019u,
                  (__int64)&v40) >= 0
        && (int)PnpCtxRegQueryInfoKey(v17, (int)v40, 0, 0, (__int64)&v49, (__int64)&v37, 0LL) >= 0 )
      {
        v26 = v49;
        if ( v49 )
        {
          v27 = v37 + 1;
          LODWORD(v47) = v37 + 1;
          v15 = ExAllocatePoolWithTag(PagedPool, 2LL * (unsigned int)(v37 + 1), 0x6E697050u);
          if ( v15 )
          {
            v17 = 0LL;
            if ( v26 )
            {
              do
              {
                v44 = v27;
                v28 = PnpCtxRegEnumValue(0LL, v40, v2, v15, (__int64)&v44, 0LL, 0LL, 0LL);
                v17 = 0LL;
                if ( v28 >= 0 )
                {
                  DbgPrintEx(0x20u, 0, "Resetting devices using service '%ws'\n", v15);
                  v29 = CmGetMatchingFilteredDeviceList(
                          v16,
                          (__int64)v15,
                          2,
                          0LL,
                          0LL,
                          (__int64)v12,
                          v13,
                          (__int64)&v48);
                  if ( v29 == -1073741789 )
                  {
                    if ( v12 )
                      ExFreePoolWithTag(v12, 0);
                    v13 = v48;
                    v30 = ExAllocatePoolWithTag(PagedPool, 2LL * v48, 0x6E697050u);
                    v17 = 0LL;
                    v12 = v30;
                    if ( !v30 )
                      break;
                    v29 = CmGetMatchingFilteredDeviceList(
                            v16,
                            (__int64)v15,
                            2,
                            0LL,
                            0LL,
                            (__int64)v30,
                            v13,
                            (__int64)&v48);
                  }
                  v17 = 0LL;
                  if ( v29 >= 0 && v48 )
                  {
                    v31 = v12;
                    if ( *v12 )
                    {
                      v32 = v39;
                      do
                      {
                        PipResetDevice(v32, v31);
                        v33 = -1LL;
                        v17 = 0LL;
                        do
                          ++v33;
                        while ( v31[v33] );
                        v31 += v33 + 1;
                      }
                      while ( *v31 );
                      v26 = v49;
                      v27 = v47;
                    }
                    v16 = v39;
                  }
                }
                ++v2;
              }
              while ( v2 < v26 );
            }
          }
        }
      }
      if ( v40 )
        PnpCtxRegCloseKey(v17, v40);
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return v45;
    }
  }
  return result;
}
