/*
 * XREFs of ExpWatchProductTypeWork @ 0x1406BF270
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     CmOpenKey @ 0x14060C320 (CmOpenKey.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     NtQueryValueKey @ 0x140618560 (NtQueryValueKey.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     NtDeleteValueKey @ 0x140668FB0 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14066DEB0 (NtSetValueKey.c)
 *     NtFlushKey @ 0x1406BF640 (NtFlushKey.c)
 *     NtNotifyChangeKey @ 0x1406BF900 (NtNotifyChangeKey.c)
 *     PsCreateSystemThreadEx @ 0x1406EE080 (PsCreateSystemThreadEx.c)
 *     CmpLockRegistryFreezeAware @ 0x140701310 (CmpLockRegistryFreezeAware.c)
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
  __int64 v23; // rcx
  int v24; // eax
  unsigned int *v25; // rdi
  int v26; // eax
  unsigned int v27; // eax
  ULONG_PTR v28; // rdi
  char result; // al
  __int64 v30; // rcx
  size_t BugCheckParameter4; // [rsp+28h] [rbp-89h]
  size_t BugCheckParameter4a; // [rsp+28h] [rbp-89h]
  size_t Size; // [rsp+30h] [rbp-81h]
  size_t Sizea; // [rsp+30h] [rbp-81h]
  size_t Sizeb; // [rsp+30h] [rbp-81h]
  int v36; // [rsp+38h] [rbp-79h]
  int v37; // [rsp+50h] [rbp-61h]
  LARGE_INTEGER Interval; // [rsp+58h] [rbp-59h] BYREF
  __int64 v39; // [rsp+60h] [rbp-51h] BYREF
  UNICODE_STRING v40; // [rsp+68h] [rbp-49h] BYREF
  HANDLE v41; // [rsp+78h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-29h] BYREF
  _QWORD v44[4]; // [rsp+98h] [rbp-19h] BYREF
  __int128 v45; // [rsp+B8h] [rbp+7h]
  _OWORD v46[2]; // [rsp+C8h] [rbp+17h] BYREF
  __int16 v47; // [rsp+E8h] [rbp+37h]

  v44[0] = 48LL;
  v44[3] = 576LL;
  Handle = 0LL;
  DestinationString = 0LL;
  LODWORD(v39) = 0;
  v0 = 1;
  v41 = 0LL;
  v40 = 0LL;
  v1 = 0;
  v2 = 0;
  v3 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  v44[1] = 0LL;
  v44[2] = &DestinationString;
  v45 = 0LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
  if ( ExpProductTypeKey )
  {
    while ( 1 )
    {
      v4 = CmOpenKey(&v41, 131103, (__int64)v44, 0, 0LL);
      if ( v4 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v4 < 0 )
      KeBugCheckEx(0x9Au, 0xDuLL, (unsigned int)v4, 0LL, 0LL);
    v3 = ExpProductTypeKey;
    ExpProductTypeKey = v41;
    if ( !ExpSetupModeDetected )
    {
      RtlInitUnicodeString(&v40, L"ProductType");
      LODWORD(BugCheckParameter4) = 34;
      ValueKey = NtQueryValueKey(
                   ExpProductTypeKey,
                   (unsigned __int64)&v40,
                   2u,
                   (char *)v46,
                   BugCheckParameter4,
                   (unsigned __int64)&v39);
      if ( ValueKey == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          LODWORD(BugCheckParameter4a) = 34;
          ValueKey = NtQueryValueKey(
                       ExpProductTypeKey,
                       (unsigned __int64)&v40,
                       2u,
                       (char *)v46,
                       BugCheckParameter4a,
                       (unsigned __int64)&v39);
        }
        while ( ValueKey == -1073741670 );
      }
      if ( ValueKey >= 0 )
      {
        v6 = L"LanmanNT";
        do
        {
          v7 = *(const wchar_t *)((char *)v6 + (char *)v46 + 12 - (char *)L"LanmanNT");
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
          v10 = *(const wchar_t *)((char *)v9 + (char *)v46 + 12 - (char *)L"ServerNT");
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
          v30 = ExpProductTypeValueInfo;
          v0 = 0;
          *(_OWORD *)ExpProductTypeValueInfo = v46[0];
          *(_OWORD *)(v30 + 16) = v46[1];
          *(_WORD *)(v30 + 32) = v47;
        }
        v17 = (char *)((char *)v46 + 12 - v14);
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
      if ( !qword_140D2D4F8 || (v21 = qword_140D2D4F8(v22, v20), v21 < 0) )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v21, 1uLL, 0LL);
      LOBYTE(v23) = 1;
      CmpLockRegistryFreezeAware(v23);
      v1 = 1;
      LODWORD(Size) = *(_DWORD *)(ExpProductTypeValueInfo + 8);
      v24 = NtSetValueKey(
              (__int64)ExpProductTypeKey,
              (unsigned __int64)&v40,
              0,
              *(_DWORD *)(ExpProductTypeValueInfo + 4),
              (void *)(ExpProductTypeValueInfo + 12),
              Size);
      if ( v24 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          LODWORD(Sizea) = *(_DWORD *)(ExpProductTypeValueInfo + 8);
          v24 = NtSetValueKey(
                  (__int64)ExpProductTypeKey,
                  (unsigned __int64)&v40,
                  0,
                  *(_DWORD *)(ExpProductTypeValueInfo + 4),
                  (void *)(ExpProductTypeValueInfo + 12),
                  Sizea);
        }
        while ( v24 == -1073741670 );
      }
      if ( v24 < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v24, 1uLL, 0LL);
      v25 = (unsigned int *)qword_140C54120;
      RtlInitUnicodeString(&v40, L"ProductSuite");
      if ( v25 )
      {
        LODWORD(Sizea) = v25[2];
        v26 = NtSetValueKey((__int64)ExpProductTypeKey, (unsigned __int64)&v40, 0, v25[1], v25 + 3, Sizea);
        if ( v26 == -1073741670 )
        {
          Interval.QuadPart = -10000000LL;
          do
          {
            KeDelayExecutionThread(0, 0, &Interval);
            LODWORD(Sizeb) = *((_DWORD *)qword_140C54120 + 2);
            v26 = NtSetValueKey(
                    (__int64)ExpProductTypeKey,
                    (unsigned __int64)&v40,
                    0,
                    *((_DWORD *)qword_140C54120 + 1),
                    (char *)qword_140C54120 + 12,
                    Sizeb);
          }
          while ( v26 == -1073741670 );
        }
        if ( v26 < 0 )
          KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v26, 2uLL, 0LL);
      }
      else
      {
        NtDeleteValueKey((__int64)ExpProductTypeKey, (unsigned __int64)&v40);
      }
    }
    while ( 1 )
    {
      LOBYTE(v37) = 1;
      LOBYTE(v36) = 0;
      v27 = NtNotifyChangeKey(
              ExpProductTypeKey,
              0LL,
              &ExpWatchProductTypeWorkItem,
              1LL,
              &ExpProductTypeIoSb,
              268435461,
              v36,
              &ExpProductTypeChangeBuffer,
              4,
              v37);
      v28 = v27;
      if ( v27 != -1073741670 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( v1 )
      CmpUnlockRegistry();
    if ( (v28 & 0x80000000) != 0LL )
      KeBugCheckEx(0x9Au, 0x11uLL, v28, 4uLL, 0LL);
    v2 = v1;
    if ( !ExpSetupModeDetected
      && v0
      && (int)PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, 0LL, 0LL, 0LL, ExpExpirationThread, 3221226090LL, 0LL, 0LL) >= 0 )
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
