/*
 * XREFs of ExpWatchProductTypeWork @ 0x1406B3870
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x140257490 (KeDelayExecutionThread.c)
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     ObCloseHandle @ 0x14061AB80 (ObCloseHandle.c)
 *     CmOpenKey @ 0x140655330 (CmOpenKey.c)
 *     NtNotifyChangeKey @ 0x1406631C0 (NtNotifyChangeKey.c)
 *     NtSetValueKey @ 0x140663DC0 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x140669100 (NtDeleteValueKey.c)
 *     CmpLockRegistryFreezeAware @ 0x1406726F0 (CmpLockRegistryFreezeAware.c)
 *     NtFlushKey @ 0x1406B3C40 (NtFlushKey.c)
 *     PsCreateSystemThreadEx @ 0x1406D0190 (PsCreateSystemThreadEx.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     NtQueryValueKey @ 0x1406F7AE0 (NtQueryValueKey.c)
 */

char ExpWatchProductTypeWork()
{
  char v0; // r15
  char v1; // si
  char v2; // di
  HANDLE v3; // r14
  int v4; // eax
  int ValueKey; // eax
  __int64 v6; // rdx
  char *v7; // rcx
  const wchar_t *v8; // rax
  int v9; // r8d
  int v10; // ecx
  const wchar_t *v11; // rax
  int v12; // r8d
  int v13; // ecx
  char v14; // r10
  const wchar_t *v15; // rax
  int v16; // r8d
  int v17; // ecx
  unsigned __int16 v18; // ax
  int v19; // eax
  HANDLE v20; // rsi
  int v21; // edi
  __int64 v22; // rcx
  int v23; // eax
  unsigned int *v24; // rdi
  int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
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
      v4 = CmOpenKey(&v40, 131103, (__int64)v43, 0, 0LL);
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
      ValueKey = NtQueryValueKey(ExpProductTypeKey, BugCheckParameter4, (__int64)&v38);
      if ( ValueKey == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          LODWORD(BugCheckParameter4a) = 34;
          ValueKey = NtQueryValueKey(ExpProductTypeKey, BugCheckParameter4a, (__int64)&v38);
        }
        while ( ValueKey == -1073741670 );
      }
      if ( ValueKey >= 0 )
      {
        v8 = L"LanmanNT";
        do
        {
          v9 = *(const wchar_t *)((char *)v8 + (char *)v45 + 12 - (char *)L"LanmanNT");
          v10 = *v8 - v9;
          if ( v10 )
            break;
          ++v8;
        }
        while ( v9 );
        if ( !v10 )
          goto LABEL_48;
        v11 = L"ServerNT";
        do
        {
          v12 = *(const wchar_t *)((char *)v11 + (char *)v45 + 12 - (char *)L"ServerNT");
          v13 = *v11 - v12;
          if ( v13 )
            break;
          ++v11;
        }
        while ( v12 );
        v14 = 0;
        if ( !v13 )
LABEL_48:
          v14 = 1;
        v15 = L"WinNT";
        v6 = ExpProductTypeValueInfo + 12;
        do
        {
          v16 = *(const wchar_t *)((char *)v15 + ExpProductTypeValueInfo + 12 - (_QWORD)L"WinNT");
          v17 = *v15 - v16;
          if ( v17 )
            break;
          ++v15;
        }
        while ( v16 );
        if ( v17 && v14 )
        {
          v31 = ExpProductTypeValueInfo;
          v0 = 0;
          *(_OWORD *)ExpProductTypeValueInfo = v45[0];
          *(_OWORD *)(v31 + 16) = v45[1];
          *(_WORD *)(v31 + 32) = v46;
        }
        v7 = (char *)v45 - v6 + 12;
        while ( 1 )
        {
          v18 = *(_WORD *)v6;
          if ( *(_WORD *)v6 != *(_WORD *)&v7[v6] )
            break;
          v6 += 2LL;
          if ( !v18 )
          {
            v19 = 0;
            goto LABEL_23;
          }
        }
        v19 = v18 < *(_WORD *)&v7[v6] ? -1 : 1;
LABEL_23:
        v0 = v19 != 0 ? v0 : 0;
      }
      v20 = ExpProductTypeKey;
      v21 = -1073741822;
      v22 = *((_QWORD *)PsGetCurrentServerSiloGlobals((__int64)v7, v6) + 113);
      if ( !qword_140D2D4D8 || (v21 = qword_140D2D4D8(v22, v20), v21 < 0) )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v21, 1uLL, 0LL);
      CmpLockRegistryFreezeAware(1);
      v1 = 1;
      LODWORD(Size) = *(_DWORD *)(ExpProductTypeValueInfo + 8);
      v23 = NtSetValueKey(
              (__int64)ExpProductTypeKey,
              (unsigned __int64)&v39,
              0,
              *(_DWORD *)(ExpProductTypeValueInfo + 4),
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
                  0,
                  *(_DWORD *)(ExpProductTypeValueInfo + 4),
                  (void *)(ExpProductTypeValueInfo + 12),
                  Sizea);
        }
        while ( v23 == -1073741670 );
      }
      if ( v23 < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v23, 1uLL, 0LL);
      v24 = (unsigned int *)qword_140C542A0;
      RtlInitUnicodeString(&v39, L"ProductSuite");
      if ( v24 )
      {
        LODWORD(Sizea) = v24[2];
        v25 = NtSetValueKey((__int64)ExpProductTypeKey, (unsigned __int64)&v39, 0, v24[1], v24 + 3, Sizea);
        if ( v25 == -1073741670 )
        {
          Interval.QuadPart = -10000000LL;
          do
          {
            KeDelayExecutionThread(0, 0, &Interval);
            LODWORD(Sizeb) = *((_DWORD *)qword_140C542A0 + 2);
            v25 = NtSetValueKey(
                    (__int64)ExpProductTypeKey,
                    (unsigned __int64)&v39,
                    0,
                    *((_DWORD *)qword_140C542A0 + 1),
                    (char *)qword_140C542A0 + 12,
                    Sizeb);
          }
          while ( v25 == -1073741670 );
        }
        if ( v25 < 0 )
          KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v25, 2uLL, 0LL);
      }
      else
      {
        NtDeleteValueKey(ExpProductTypeKey, (unsigned __int64)&v39);
      }
    }
    while ( 1 )
    {
      v26 = NtNotifyChangeKey(
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
      v29 = v26;
      if ( v26 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v1 )
      CmpUnlockRegistry(v28, v27);
    if ( (v29 & 0x80000000) != 0LL )
      KeBugCheckEx(0x9Au, 0x11uLL, v29, 4uLL, 0LL);
    v2 = v1;
    if ( !ExpSetupModeDetected
      && v0
      && (int)PsCreateSystemThreadEx((int)&Handle, 0LL, (__int64)ExpExpirationThread, 3221226090LL, 0LL, 0LL) >= 0 )
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
