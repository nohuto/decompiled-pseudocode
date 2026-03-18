/*
 * XREFs of ExpWatchProductTypeWork @ 0x1406DF6A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmOpenKey @ 0x1405EA950 (CmOpenKey.c)
 *     NtQueryValueKey @ 0x1405EC5D0 (NtQueryValueKey.c)
 *     NtNotifyChangeKey @ 0x1405F3C90 (NtNotifyChangeKey.c)
 *     NtSetValueKey @ 0x140618C70 (NtSetValueKey.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x140655580 (PsCreateSystemThreadEx.c)
 *     CmpLockRegistryFreezeAware @ 0x140691170 (CmpLockRegistryFreezeAware.c)
 *     NtDeleteValueKey @ 0x140693CE0 (NtDeleteValueKey.c)
 *     NtFlushKey @ 0x1406DFA70 (NtFlushKey.c)
 */

char ExpWatchProductTypeWork()
{
  char v0; // r15
  char v1; // si
  char v2; // di
  HANDLE v3; // r14
  int v4; // eax
  int ValueKey; // eax
  const wchar_t *v6; // rax
  int v7; // r8d
  int v8; // ecx
  const wchar_t *v9; // rax
  int v10; // r8d
  int v11; // ecx
  char v12; // r10
  const wchar_t *v13; // rax
  char *v14; // rdx
  int v15; // r8d
  int v16; // ecx
  char *v17; // rcx
  unsigned __int16 v18; // ax
  int v19; // eax
  HANDLE v20; // rsi
  int v21; // edi
  __int64 v22; // rcx
  int v23; // eax
  unsigned int *v24; // rdi
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  unsigned int v28; // eax
  ULONG_PTR v29; // rdi
  char result; // al
  __int64 v31; // rcx
  size_t BugCheckParameter4; // [rsp+28h] [rbp-89h]
  size_t BugCheckParameter4a; // [rsp+28h] [rbp-89h]
  size_t Size; // [rsp+30h] [rbp-81h]
  size_t Sizea; // [rsp+30h] [rbp-81h]
  size_t Sizeb; // [rsp+30h] [rbp-81h]
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-59h] BYREF
  __int64 v38; // [rsp+60h] [rbp-51h] BYREF
  UNICODE_STRING v39; // [rsp+68h] [rbp-49h] BYREF
  HANDLE v40; // [rsp+78h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-29h] BYREF
  _QWORD v43[4]; // [rsp+98h] [rbp-19h] BYREF
  __int128 v44; // [rsp+B8h] [rbp+7h]
  _OWORD v45[2]; // [rsp+C8h] [rbp+17h] BYREF
  __int16 v46; // [rsp+E8h] [rbp+37h]

  v43[0] = 48LL;
  v43[3] = 576LL;
  Handle = 0LL;
  DestinationString = 0LL;
  LODWORD(v38) = 0;
  v0 = 1;
  v40 = 0LL;
  v39 = 0LL;
  v1 = 0;
  v2 = 0;
  v3 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  v43[1] = 0LL;
  v43[2] = &DestinationString;
  v44 = 0LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
  if ( ExpProductTypeKey )
  {
    while ( 1 )
    {
      v4 = CmOpenKey(&v40, 131103, (__int64)v43, 0LL, 0LL);
      if ( v4 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v4 < 0 )
      KeBugCheckEx(0x9Au, 0xDuLL, (unsigned int)v4, 0LL, 0LL);
    v3 = ExpProductTypeKey;
    ExpProductTypeKey = v40;
    if ( !ExpSetupModeDetected )
    {
      RtlInitUnicodeString(&v39, L"ProductType");
      LODWORD(BugCheckParameter4) = 34;
      ValueKey = NtQueryValueKey(
                   ExpProductTypeKey,
                   (unsigned __int64)&v39,
                   2LL,
                   (unsigned __int64)v45,
                   BugCheckParameter4,
                   (unsigned __int64)&v38);
      if ( ValueKey == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          LODWORD(BugCheckParameter4a) = 34;
          ValueKey = NtQueryValueKey(
                       ExpProductTypeKey,
                       (unsigned __int64)&v39,
                       2LL,
                       (unsigned __int64)v45,
                       BugCheckParameter4a,
                       (unsigned __int64)&v38);
        }
        while ( ValueKey == -1073741670 );
      }
      if ( ValueKey >= 0 )
      {
        v6 = L"LanmanNT";
        do
        {
          v7 = *(const wchar_t *)((char *)v6 + (char *)v45 + 12 - (char *)L"LanmanNT");
          v8 = *v6 - v7;
          if ( v8 )
            break;
          ++v6;
        }
        while ( v7 );
        if ( !v8 )
          goto LABEL_48;
        v9 = L"ServerNT";
        do
        {
          v10 = *(const wchar_t *)((char *)v9 + (char *)v45 + 12 - (char *)L"ServerNT");
          v11 = *v9 - v10;
          if ( v11 )
            break;
          ++v9;
        }
        while ( v10 );
        v12 = 0;
        if ( !v11 )
LABEL_48:
          v12 = 1;
        v13 = L"WinNT";
        v14 = (char *)(ExpProductTypeValueInfo + 12);
        do
        {
          v15 = *(const wchar_t *)((char *)v13 + ExpProductTypeValueInfo + 12 - (_QWORD)L"WinNT");
          v16 = *v13 - v15;
          if ( v16 )
            break;
          ++v13;
        }
        while ( v15 );
        if ( v16 && v12 )
        {
          v31 = ExpProductTypeValueInfo;
          v0 = 0;
          *(_OWORD *)ExpProductTypeValueInfo = v45[0];
          *(_OWORD *)(v31 + 16) = v45[1];
          *(_WORD *)(v31 + 32) = v46;
        }
        v17 = (char *)((char *)v45 + 12 - v14);
        while ( 1 )
        {
          v18 = *(_WORD *)v14;
          if ( *(_WORD *)v14 != *(_WORD *)&v17[(_QWORD)v14] )
            break;
          v14 += 2;
          if ( !v18 )
          {
            v19 = 0;
            goto LABEL_23;
          }
        }
        v19 = v18 < *(_WORD *)&v17[(_QWORD)v14] ? -1 : 1;
LABEL_23:
        v0 = v19 != 0 ? v0 : 0;
      }
      v20 = ExpProductTypeKey;
      v21 = -1073741822;
      v22 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
      if ( !qword_140D2C4F0 || (v21 = qword_140D2C4F0(v22, v20), v21 < 0) )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v21, 1uLL, 0LL);
      CmpLockRegistryFreezeAware(1);
      v1 = 1;
      LODWORD(Size) = *(_DWORD *)(ExpProductTypeValueInfo + 8);
      v23 = NtSetValueKey(
              (__int64)ExpProductTypeKey,
              (unsigned __int64)&v39,
              0LL,
              *(unsigned int *)(ExpProductTypeValueInfo + 4),
              (void *)(ExpProductTypeValueInfo + 12),
              Size);
      if ( v23 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          LODWORD(Sizea) = *(_DWORD *)(ExpProductTypeValueInfo + 8);
          v23 = NtSetValueKey(
                  (__int64)ExpProductTypeKey,
                  (unsigned __int64)&v39,
                  0LL,
                  *(unsigned int *)(ExpProductTypeValueInfo + 4),
                  (void *)(ExpProductTypeValueInfo + 12),
                  Sizea);
        }
        while ( v23 == -1073741670 );
      }
      if ( v23 < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v23, 1uLL, 0LL);
      v24 = (unsigned int *)qword_140C541A0;
      RtlInitUnicodeString(&v39, L"ProductSuite");
      if ( v24 )
      {
        LODWORD(Sizea) = v24[2];
        v27 = NtSetValueKey((__int64)ExpProductTypeKey, (unsigned __int64)&v39, 0LL, v24[1], v24 + 3, Sizea);
        if ( v27 == -1073741670 )
        {
          Interval.QuadPart = -10000000LL;
          do
          {
            KeDelayExecutionThread(0, 0, &Interval);
            LODWORD(Sizeb) = *((_DWORD *)qword_140C541A0 + 2);
            v27 = NtSetValueKey(
                    (__int64)ExpProductTypeKey,
                    (unsigned __int64)&v39,
                    0LL,
                    *((unsigned int *)qword_140C541A0 + 1),
                    (char *)qword_140C541A0 + 12,
                    Sizeb);
          }
          while ( v27 == -1073741670 );
        }
        if ( v27 < 0 )
          KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v27, 2uLL, 0LL);
      }
      else
      {
        NtDeleteValueKey(ExpProductTypeKey, (unsigned __int64)&v39, v25, v26);
      }
    }
    while ( 1 )
    {
      v28 = NtNotifyChangeKey(
              (int)ExpProductTypeKey,
              0,
              (__int64)&ExpWatchProductTypeWorkItem,
              1LL,
              &ExpProductTypeIoSb,
              268435461,
              0,
              &ExpProductTypeChangeBuffer,
              4,
              1);
      v29 = v28;
      if ( v28 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v1 )
      CmpUnlockRegistry();
    if ( (v29 & 0x80000000) != 0LL )
      KeBugCheckEx(0x9Au, 0x11uLL, v29, 4uLL, 0LL);
    v2 = v1;
    if ( !ExpSetupModeDetected
      && v0
      && (int)PsCreateSystemThreadEx(
                (__int64)&Handle,
                0x1FFFFFu,
                0LL,
                0LL,
                0LL,
                (__int64)ExpExpirationThread,
                3221226090LL,
                0LL,
                0LL) >= 0 )
    {
      ZwClose(Handle);
    }
  }
  result = ExReleasePushLockEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
  if ( v3 )
  {
    if ( v2 )
      NtFlushKey(v3);
    return ObCloseHandle(v3, 0);
  }
  return result;
}
