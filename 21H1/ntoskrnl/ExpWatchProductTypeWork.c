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
  NTSTATUS v5; // eax
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
  NTSTATUS v23; // eax
  ULONG *v24; // rdi
  NTSTATUS v25; // eax
  unsigned int v26; // eax
  ULONG_PTR v27; // rdi
  char result; // al
  __int64 v29; // rcx
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-59h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp-51h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-49h] BYREF
  HANDLE v33; // [rsp+78h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-29h] BYREF
  _QWORD v36[4]; // [rsp+98h] [rbp-19h] BYREF
  __int128 v37; // [rsp+B8h] [rbp+7h]
  _OWORD KeyValueInformation[2]; // [rsp+C8h] [rbp+17h] BYREF
  __int16 v39; // [rsp+E8h] [rbp+37h]

  v36[0] = 48LL;
  v36[3] = 576LL;
  Handle = 0LL;
  DestinationString = 0LL;
  ResultLength = 0;
  v0 = 1;
  v33 = 0LL;
  ValueName = 0LL;
  v1 = 0;
  v2 = 0;
  v3 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  v36[1] = 0LL;
  v36[2] = &DestinationString;
  v37 = 0LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
  if ( ExpProductTypeKey )
  {
    while ( 1 )
    {
      v4 = CmOpenKey(&v33, 131103, (__int64)v36, 0, 0LL);
      if ( v4 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v4 < 0 )
      KeBugCheckEx(0x9Au, 0xDuLL, (unsigned int)v4, 0LL, 0LL);
    v3 = ExpProductTypeKey;
    ExpProductTypeKey = v33;
    if ( !ExpSetupModeDetected )
    {
      RtlInitUnicodeString(&ValueName, L"ProductType");
      v5 = NtQueryValueKey(
             ExpProductTypeKey,
             &ValueName,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x22u,
             &ResultLength);
      if ( v5 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          v5 = NtQueryValueKey(
                 ExpProductTypeKey,
                 &ValueName,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x22u,
                 &ResultLength);
        }
        while ( v5 == -1073741670 );
      }
      if ( v5 >= 0 )
      {
        v6 = L"LanmanNT";
        do
        {
          v7 = *(const wchar_t *)((char *)v6 + (char *)KeyValueInformation + 12 - (char *)L"LanmanNT");
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
          v10 = *(const wchar_t *)((char *)v9 + (char *)KeyValueInformation + 12 - (char *)L"ServerNT");
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
          v29 = ExpProductTypeValueInfo;
          v0 = 0;
          *(_OWORD *)ExpProductTypeValueInfo = KeyValueInformation[0];
          *(_OWORD *)(v29 + 16) = KeyValueInformation[1];
          *(_WORD *)(v29 + 32) = v39;
        }
        v17 = (char *)((char *)KeyValueInformation + 12 - v14);
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
      v23 = NtSetValueKey(
              ExpProductTypeKey,
              &ValueName,
              0,
              *(_DWORD *)(ExpProductTypeValueInfo + 4),
              (PVOID)(ExpProductTypeValueInfo + 12),
              *(_DWORD *)(ExpProductTypeValueInfo + 8));
      if ( v23 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          v23 = NtSetValueKey(
                  ExpProductTypeKey,
                  &ValueName,
                  0,
                  *(_DWORD *)(ExpProductTypeValueInfo + 4),
                  (PVOID)(ExpProductTypeValueInfo + 12),
                  *(_DWORD *)(ExpProductTypeValueInfo + 8));
        }
        while ( v23 == -1073741670 );
      }
      if ( v23 < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v23, 1uLL, 0LL);
      v24 = (ULONG *)qword_140C541A0;
      RtlInitUnicodeString(&ValueName, L"ProductSuite");
      if ( v24 )
      {
        v25 = NtSetValueKey(ExpProductTypeKey, &ValueName, 0, v24[1], v24 + 3, v24[2]);
        if ( v25 == -1073741670 )
        {
          Interval.QuadPart = -10000000LL;
          do
          {
            KeDelayExecutionThread(0, 0, &Interval);
            v25 = NtSetValueKey(
                    ExpProductTypeKey,
                    &ValueName,
                    0,
                    *((_DWORD *)qword_140C541A0 + 1),
                    (char *)qword_140C541A0 + 12,
                    *((_DWORD *)qword_140C541A0 + 2));
          }
          while ( v25 == -1073741670 );
        }
        if ( v25 < 0 )
          KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v25, 2uLL, 0LL);
      }
      else
      {
        NtDeleteValueKey(ExpProductTypeKey, &ValueName);
      }
    }
    while ( 1 )
    {
      v26 = NtNotifyChangeKey(
              ExpProductTypeKey,
              0LL,
              ExpWatchProductTypeWorkItem,
              (PVOID)1,
              &ExpProductTypeIoSb,
              0x10000005u,
              0,
              &ExpProductTypeChangeBuffer,
              4u,
              1u);
      v27 = v26;
      if ( v26 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v1 )
      CmpUnlockRegistry();
    if ( (v27 & 0x80000000) != 0LL )
      KeBugCheckEx(0x9Au, 0x11uLL, v27, 4uLL, 0LL);
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
