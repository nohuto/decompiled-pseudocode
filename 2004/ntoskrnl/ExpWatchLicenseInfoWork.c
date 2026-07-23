/*
 * XREFs of ExpWatchLicenseInfoWork @ 0x140948A40
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     wcscat_s @ 0x1403D4BD0 (wcscat_s.c)
 *     wcscpy_s @ 0x1403D4C70 (wcscpy_s.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     NtNotifyChangeKey @ 0x1405E2150 (NtNotifyChangeKey.c)
 *     NtSetValueKey @ 0x1405E3650 (NtSetValueKey.c)
 *     NtClose @ 0x1405F78C0 (NtClose.c)
 *     NtEnumerateKey @ 0x140672B00 (NtEnumerateKey.c)
 *     CmOpenKey @ 0x140693E90 (CmOpenKey.c)
 *     NtQueryKey @ 0x140695470 (NtQueryKey.c)
 *     PsCreateSystemThreadEx @ 0x1406CFBE0 (PsCreateSystemThreadEx.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall ExpWatchLicenseInfoWork(__int64 a1)
{
  char v2; // r14
  HANDLE v3; // rcx
  int v4; // eax
  NTSTATUS v5; // eax
  ULONG v6; // r12d
  wchar_t *PoolWithTag; // r15
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 v11; // cx
  SIZE_T v12; // r9
  unsigned __int64 v13; // rax
  NTSTATUS v14; // eax
  ULONG v15; // esi
  ULONG i; // edx
  __int64 v17; // rax
  int v18; // eax
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-69h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp-59h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-51h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-49h] BYREF
  _DWORD v26[2]; // [rsp+78h] [rbp-41h] BYREF
  __int64 v27; // [rsp+80h] [rbp-39h]
  UNICODE_STRING *p_DestinationString; // [rsp+88h] [rbp-31h]
  int v29; // [rsp+90h] [rbp-29h]
  int v30; // [rsp+94h] [rbp-25h]
  __int128 v31; // [rsp+98h] [rbp-21h]
  UNICODE_STRING ValueName; // [rsp+A8h] [rbp-11h] BYREF
  __int128 KeyInformation; // [rsp+B8h] [rbp-1h] BYREF
  __int128 v34; // [rsp+C8h] [rbp+Fh]
  __int128 v35; // [rsp+D8h] [rbp+1Fh]

  Handle = 0LL;
  v2 = 0;
  KeyInformation = 0LL;
  ResultLength = 0;
  v34 = 0LL;
  KeyHandle = 0LL;
  v35 = 0LL;
  v26[1] = 0;
  DestinationString = 0LL;
  v30 = 0;
  ValueName = 0LL;
  if ( !ExpSetupModeDetected )
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 16));
    v3 = *(HANDLE *)a1;
    p_DestinationString = &DestinationString;
    v27 = 0LL;
    v31 = 0LL;
    v26[0] = 48;
    v29 = 576;
    NtClose(v3);
    v4 = CmOpenKey((HANDLE *)a1, 131103, (__int64)v26, 0, 0LL);
    if ( v4 < 0 )
      KeBugCheckEx(0x9Au, 0x12uLL, v4, 0LL, 0LL);
    v5 = NtQueryKey(*(HANDLE *)a1, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
    if ( v5 < 0 )
      KeBugCheckEx(0x9Au, 0x13uLL, v5, 0LL, 0LL);
    v6 = 2 * DWORD2(v34) + 56;
    if ( v6 < DWORD2(v34) || v6 < 2 * (unsigned __int64)(unsigned int)(DWORD2(v34) + 16) )
      v2 = 1;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x2079654Bu);
    if ( !PoolWithTag || v2 )
      KeBugCheckEx(0x9Au, 0x14uLL, v6, 0LL, 0LL);
    v8 = *(_QWORD *)(a1 + 16);
    v9 = -1LL;
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(v8 + 2 * v10 + 32) );
    v11 = 2 * (WORD4(v34) + v10);
    DestinationString.Length = v11;
    if ( (unsigned int)v11 < DWORD2(v34) )
      goto LABEL_19;
    v12 = v11;
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)(v8 + 2 * v13 + 32) );
    if ( v11 < v13 )
      goto LABEL_19;
    do
      ++v9;
    while ( *(_WORD *)(v8 + 2 * v9 + 32) );
    if ( v11 < (unsigned __int64)DWORD2(v34) + v9 )
    {
LABEL_19:
      v2 = 1;
      v12 = v11;
    }
    DestinationString.MaximumLength = v11;
    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x2079654Bu);
    if ( !DestinationString.Buffer || v2 )
      KeBugCheckEx(0x9Au, 0x14uLL, DestinationString.Length, 1uLL, 0LL);
    RtlInitUnicodeString(&ValueName, L"ConcurrentLimit");
    v14 = NtSetValueKey(*(HANDLE *)a1, &ValueName, 0, 4u, (PVOID)(a1 + 8), 4u);
    if ( v14 < 0 )
      KeBugCheckEx(0x9Au, 0x15uLL, v14, 0LL, 0LL);
    v15 = 0;
    for ( i = 0; ; i = v15 )
    {
      v20 = NtEnumerateKey(*(HANDLE *)a1, i, KeyBasicInformation, PoolWithTag, v6, &ResultLength);
      if ( v20 == -2147483622 )
        break;
      if ( v20 >= 0 )
      {
        PoolWithTag[((unsigned __int64)*((unsigned int *)PoolWithTag + 3) >> 1) + 8] = 0;
        wcscpy_s(
          DestinationString.Buffer,
          (unsigned __int64)DestinationString.MaximumLength >> 1,
          *(const wchar_t **)(a1 + 16));
        wcscat_s(DestinationString.Buffer, (unsigned __int64)DestinationString.MaximumLength >> 1, L"\\");
        wcscat_s(DestinationString.Buffer, (unsigned __int64)DestinationString.MaximumLength >> 1, PoolWithTag + 8);
        v17 = -1LL;
        do
          ++v17;
        while ( DestinationString.Buffer[v17] );
        v26[0] = 48;
        DestinationString.Length = 2 * v17;
        v27 = 0LL;
        p_DestinationString = &DestinationString;
        v29 = 576;
        v31 = 0LL;
        v18 = CmOpenKey(&KeyHandle, 131103, (__int64)v26, 0, 0LL);
        if ( v18 < 0 )
          KeBugCheckEx(0x9Au, 0x16uLL, v18, 0LL, 0LL);
        v19 = NtSetValueKey(KeyHandle, &ValueName, 0, 4u, (PVOID)(a1 + 8), 4u);
        if ( v19 < 0 )
          KeBugCheckEx(0x9Au, 0x17uLL, v19, 0LL, 0LL);
        NtClose(KeyHandle);
      }
      ++v15;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  }
  result = NtNotifyChangeKey(
             *(HANDLE *)a1,
             0LL,
             (PIO_APC_ROUTINE)(a1 + 24),
             (PVOID)1,
             (PIO_STATUS_BLOCK)(a1 + 56),
             0x10000005u,
             1u,
             (PVOID)(a1 + 72),
             4u,
             1u);
  if ( result < 0 )
    KeBugCheckEx(0x9Au, 0x18uLL, result, 0LL, 0LL);
  if ( !ExpSetupModeDetected )
  {
    result = PsCreateSystemThreadEx(
               (__int64)&Handle,
               0x1FFFFF,
               0LL,
               0LL,
               0LL,
               (__int64)ExpExpirationThread,
               3221226090LL,
               0LL,
               0LL);
    if ( result >= 0 )
      return ZwClose(Handle);
  }
  return result;
}
