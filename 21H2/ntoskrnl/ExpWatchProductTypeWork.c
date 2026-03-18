/*
 * XREFs of ExpWatchProductTypeWork @ 0x1406A5770
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmInitializeThreadInfo @ 0x14022EA4C (CmInitializeThreadInfo.c)
 *     CmSizeOfThreadInfo @ 0x14022EA70 (CmSizeOfThreadInfo.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _alloca_probe @ 0x14042A4D0 (_alloca_probe.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     CmpLockRegistryFreezeAware @ 0x140689388 (CmpLockRegistryFreezeAware.c)
 *     NtOpenKey @ 0x1406A5B90 (NtOpenKey.c)
 *     NtFlushKey @ 0x1406A5C00 (NtFlushKey.c)
 *     PsCreateSystemThreadEx @ 0x1406F0360 (PsCreateSystemThreadEx.c)
 *     NtDeleteValueKey @ 0x140714980 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14071FAA0 (NtSetValueKey.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     NtQueryValueKey @ 0x1407C9930 (NtQueryValueKey.c)
 *     NtNotifyChangeKey @ 0x1407E5590 (NtNotifyChangeKey.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 */

NTSTATUS ExpWatchProductTypeWork()
{
  char v0; // di
  char v1; // bl
  HANDLE v2; // r14
  LARGE_INTEGER *p_Interval; // rsi
  char v4; // r15
  int v5; // eax
  int ValueKey; // eax
  const wchar_t *v7; // rax
  int v8; // r8d
  int v9; // ecx
  const wchar_t *v10; // rax
  int v11; // r8d
  int v12; // ecx
  char v13; // r10
  const wchar_t *v14; // rax
  char *v15; // rdx
  int v16; // r8d
  int v17; // ecx
  char *v18; // rcx
  unsigned __int16 v19; // ax
  int v20; // eax
  __int64 v21; // rcx
  ULONG_PTR v22; // r8
  int v23; // eax
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  void *v26; // rsp
  int v27; // eax
  _DWORD *v28; // rbx
  int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  ULONG_PTR v35; // rbx
  NTSTATUS result; // eax
  __int64 v37; // rcx
  size_t BugCheckParameter4; // [rsp+20h] [rbp-30h]
  size_t BugCheckParameter4a; // [rsp+20h] [rbp-30h]
  size_t Size; // [rsp+28h] [rbp-28h]
  size_t Sizea; // [rsp+28h] [rbp-28h]
  size_t Sizeb; // [rsp+28h] [rbp-28h]
  int v43; // [rsp+30h] [rbp-20h]
  int v44; // [rsp+48h] [rbp-8h]
  LARGE_INTEGER Interval; // [rsp+50h] [rbp+0h] BYREF
  __int64 v46; // [rsp+58h] [rbp+8h] BYREF
  UNICODE_STRING v47; // [rsp+60h] [rbp+10h] BYREF
  void *v48; // [rsp+70h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp+30h] BYREF
  _QWORD v51[4]; // [rsp+90h] [rbp+40h] BYREF
  __int128 v52; // [rsp+B0h] [rbp+60h]
  _OWORD v53[2]; // [rsp+C0h] [rbp+70h] BYREF
  __int16 v54; // [rsp+E0h] [rbp+90h]

  v51[0] = 48LL;
  Handle = 0LL;
  LODWORD(v46) = 0;
  DestinationString = 0LL;
  v0 = 0;
  v1 = 0;
  v47 = 0LL;
  v48 = 0LL;
  v2 = 0LL;
  p_Interval = 0LL;
  v51[3] = 576LL;
  v4 = 1;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  v51[1] = 0LL;
  v51[2] = &DestinationString;
  v52 = 0LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
  if ( ExpProductTypeKey )
  {
    while ( 1 )
    {
      v5 = NtOpenKey(&v48, 131103LL, v51);
      if ( v5 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v5 < 0 )
      KeBugCheckEx(0x9Au, 0xDuLL, (unsigned int)v5, 0LL, 0LL);
    v2 = ExpProductTypeKey;
    ExpProductTypeKey = v48;
    if ( !ExpSetupModeDetected )
    {
      RtlInitUnicodeString(&v47, L"ProductType");
      LODWORD(BugCheckParameter4) = 34;
      ValueKey = NtQueryValueKey(ExpProductTypeKey, BugCheckParameter4, (__int64)&v46);
      if ( ValueKey == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          LODWORD(BugCheckParameter4a) = 34;
          ValueKey = NtQueryValueKey(ExpProductTypeKey, BugCheckParameter4a, (__int64)&v46);
        }
        while ( ValueKey == -1073741670 );
      }
      if ( ValueKey >= 0 )
      {
        v7 = L"LanmanNT";
        do
        {
          v8 = *(const wchar_t *)((char *)v7 + (char *)v53 + 12 - (char *)L"LanmanNT");
          v9 = *v7 - v8;
          if ( v9 )
            break;
          ++v7;
        }
        while ( v8 );
        if ( !v9 )
          goto LABEL_52;
        v10 = L"ServerNT";
        do
        {
          v11 = *(const wchar_t *)((char *)v10 + (char *)v53 + 12 - (char *)L"ServerNT");
          v12 = *v10 - v11;
          if ( v12 )
            break;
          ++v10;
        }
        while ( v11 );
        v13 = 0;
        if ( !v12 )
LABEL_52:
          v13 = 1;
        v14 = L"WinNT";
        v15 = (char *)(ExpProductTypeValueInfo + 12);
        do
        {
          v16 = *(const wchar_t *)((char *)v14 + ExpProductTypeValueInfo + 12 - (_QWORD)L"WinNT");
          v17 = *v14 - v16;
          if ( v17 )
            break;
          ++v14;
        }
        while ( v16 );
        if ( v17 && v13 )
        {
          v37 = ExpProductTypeValueInfo;
          v4 = 0;
          *(_OWORD *)ExpProductTypeValueInfo = v53[0];
          *(_OWORD *)(v37 + 16) = v53[1];
          *(_WORD *)(v37 + 32) = v54;
        }
        v18 = (char *)((char *)v53 + 12 - v15);
        while ( 1 )
        {
          v19 = *(_WORD *)v15;
          if ( *(_WORD *)v15 != *(_WORD *)&v18[(_QWORD)v15] )
            break;
          v15 += 2;
          if ( !v19 )
          {
            v20 = 0;
            goto LABEL_23;
          }
        }
        v20 = v19 < *(_WORD *)&v18[(_QWORD)v15] ? -1 : 1;
LABEL_23:
        v4 = v20 != 0 ? v4 : 0;
      }
      v21 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
      if ( !qword_140D3B4A8 || (v23 = qword_140D3B4A8(v21), v22 = (unsigned int)v23, v23 < 0) )
        KeBugCheckEx(0x9Au, 0x11uLL, v22, 1uLL, 0LL);
      v24 = (unsigned int)CmSizeOfThreadInfo();
      v25 = v24 + 15;
      if ( v24 + 15 <= v24 )
        v25 = 0xFFFFFFFFFFFFFF0LL;
      v26 = alloca(v25 & 0xFFFFFFFFFFFFFFF0uLL);
      p_Interval = &Interval;
      CmInitializeThreadInfo();
      CmpLockRegistryFreezeAware(1);
      v0 = 1;
      LODWORD(Size) = *(_DWORD *)(ExpProductTypeValueInfo + 8);
      v27 = NtSetValueKey(
              (int)ExpProductTypeKey,
              (int)&v47,
              0,
              *(_DWORD *)(ExpProductTypeValueInfo + 4),
              ExpProductTypeValueInfo + 12,
              Size);
      if ( v27 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          LODWORD(Sizea) = *(_DWORD *)(ExpProductTypeValueInfo + 8);
          v27 = NtSetValueKey(
                  (int)ExpProductTypeKey,
                  (int)&v47,
                  0,
                  *(_DWORD *)(ExpProductTypeValueInfo + 4),
                  ExpProductTypeValueInfo + 12,
                  Sizea);
        }
        while ( v27 == -1073741670 );
      }
      if ( v27 < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v27, 1uLL, 0LL);
      v28 = qword_140C5ABE0;
      RtlInitUnicodeString(&v47, L"ProductSuite");
      if ( v28 )
      {
        LODWORD(Sizea) = v28[2];
        v29 = NtSetValueKey((int)ExpProductTypeKey, (int)&v47, 0, v28[1], (__int64)(v28 + 3), Sizea);
        if ( v29 == -1073741670 )
        {
          Interval.QuadPart = -10000000LL;
          do
          {
            KeDelayExecutionThread(0, 0, &Interval);
            LODWORD(Sizeb) = *((_DWORD *)qword_140C5ABE0 + 2);
            v29 = NtSetValueKey(
                    (int)ExpProductTypeKey,
                    (int)&v47,
                    0,
                    *((_DWORD *)qword_140C5ABE0 + 1),
                    (__int64)qword_140C5ABE0 + 12,
                    Sizeb);
          }
          while ( v29 == -1073741670 );
        }
        if ( v29 < 0 )
          KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v29, 2uLL, 0LL);
      }
      else
      {
        NtDeleteValueKey(ExpProductTypeKey, &v47);
      }
    }
    while ( 1 )
    {
      LOBYTE(v44) = 1;
      LOBYTE(v43) = 0;
      v30 = NtNotifyChangeKey(
              ExpProductTypeKey,
              0LL,
              &ExpWatchProductTypeWorkItem,
              1LL,
              &ExpProductTypeIoSb,
              268435461,
              v43,
              &ExpProductTypeChangeBuffer,
              4,
              v44);
      v35 = v30;
      if ( v30 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v0 )
      CmpUnlockRegistry(v32, v31, v33, v34);
    if ( p_Interval )
      CmCleanupThreadInfo((__int64 *)p_Interval);
    if ( (v35 & 0x80000000) != 0LL )
      KeBugCheckEx(0x9Au, 0x11uLL, v35, 4uLL, 0LL);
    v1 = v0;
    if ( !ExpSetupModeDetected
      && v4
      && (int)PsCreateSystemThreadEx((unsigned int)&Handle, 0LL, (__int64)ExpExpirationThread, 3221226090LL, 0LL, 0LL) >= 0 )
    {
      ZwClose(Handle);
    }
  }
  result = ExReleasePushLockEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
  if ( v2 )
  {
    if ( v1 )
      NtFlushKey(v2);
    return ObCloseHandle(v2, 0);
  }
  return result;
}
