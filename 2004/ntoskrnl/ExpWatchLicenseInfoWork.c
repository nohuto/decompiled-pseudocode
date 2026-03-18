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
  int v5; // eax
  unsigned int v6; // r12d
  wchar_t *PoolWithTag; // r15
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 v11; // cx
  SIZE_T v12; // r9
  unsigned __int64 v13; // rax
  int v14; // eax
  ULONG v15; // esi
  ULONG i; // edx
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  NTSTATUS result; // eax
  SIZE_T BugCheckParameter4; // [rsp+20h] [rbp-99h]
  size_t Size; // [rsp+28h] [rbp-91h]
  size_t Sizea; // [rsp+28h] [rbp-91h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-69h] BYREF
  __int64 v26; // [rsp+60h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-51h] BYREF
  HANDLE v28; // [rsp+70h] [rbp-49h] BYREF
  _DWORD v29[2]; // [rsp+78h] [rbp-41h] BYREF
  __int64 v30; // [rsp+80h] [rbp-39h]
  UNICODE_STRING *p_DestinationString; // [rsp+88h] [rbp-31h]
  int v32; // [rsp+90h] [rbp-29h]
  int v33; // [rsp+94h] [rbp-25h]
  __int128 v34; // [rsp+98h] [rbp-21h]
  UNICODE_STRING v35; // [rsp+A8h] [rbp-11h] BYREF
  __int128 v36; // [rsp+B8h] [rbp-1h] BYREF
  __int128 v37; // [rsp+C8h] [rbp+Fh]
  __int128 v38; // [rsp+D8h] [rbp+1Fh]

  v28 = 0LL;
  v2 = 0;
  v36 = 0LL;
  LODWORD(v26) = 0;
  v37 = 0LL;
  Handle = 0LL;
  v38 = 0LL;
  v29[1] = 0;
  DestinationString = 0LL;
  v33 = 0;
  v35 = 0LL;
  if ( !ExpSetupModeDetected )
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 16));
    v3 = *(HANDLE *)a1;
    p_DestinationString = &DestinationString;
    v30 = 0LL;
    v34 = 0LL;
    v29[0] = 48;
    v32 = 576;
    NtClose(v3);
    v4 = CmOpenKey((HANDLE *)a1, 131103, (__int64)v29, 0, 0LL);
    if ( v4 < 0 )
      KeBugCheckEx(0x9Au, 0x12uLL, v4, 0LL, 0LL);
    v5 = NtQueryKey(*(HANDLE *)a1, 2u, &v36, 0x30u, &v26);
    if ( v5 < 0 )
      KeBugCheckEx(0x9Au, 0x13uLL, v5, 0LL, 0LL);
    v6 = 2 * DWORD2(v37) + 56;
    if ( v6 < DWORD2(v37) || v6 < 2 * (unsigned __int64)(unsigned int)(DWORD2(v37) + 16) )
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
    v11 = 2 * (WORD4(v37) + v10);
    DestinationString.Length = v11;
    if ( (unsigned int)v11 < DWORD2(v37) )
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
    if ( v11 < (unsigned __int64)DWORD2(v37) + v9 )
    {
LABEL_19:
      v2 = 1;
      v12 = v11;
    }
    DestinationString.MaximumLength = v11;
    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x2079654Bu);
    if ( !DestinationString.Buffer || v2 )
      KeBugCheckEx(0x9Au, 0x14uLL, DestinationString.Length, 1uLL, 0LL);
    RtlInitUnicodeString(&v35, L"ConcurrentLimit");
    LODWORD(Size) = 4;
    v14 = NtSetValueKey(*(_QWORD *)a1, (unsigned __int64)&v35, 0, 4u, (void *)(a1 + 8), Size);
    if ( v14 < 0 )
      KeBugCheckEx(0x9Au, 0x15uLL, v14, 0LL, 0LL);
    v15 = 0;
    for ( i = 0; ; i = v15 )
    {
      LODWORD(BugCheckParameter4) = v6;
      v20 = NtEnumerateKey(*(HANDLE *)a1, i, 0, PoolWithTag, BugCheckParameter4, &v26);
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
        v29[0] = 48;
        DestinationString.Length = 2 * v17;
        v30 = 0LL;
        p_DestinationString = &DestinationString;
        v32 = 576;
        v34 = 0LL;
        v18 = CmOpenKey(&Handle, 131103, (__int64)v29, 0, 0LL);
        if ( v18 < 0 )
          KeBugCheckEx(0x9Au, 0x16uLL, v18, 0LL, 0LL);
        LODWORD(Sizea) = 4;
        v19 = NtSetValueKey((__int64)Handle, (unsigned __int64)&v35, 0, 4u, (void *)(a1 + 8), Sizea);
        if ( v19 < 0 )
          KeBugCheckEx(0x9Au, 0x17uLL, v19, 0LL, 0LL);
        NtClose(Handle);
      }
      ++v15;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  }
  result = NtNotifyChangeKey(
             *(_QWORD *)a1,
             0,
             a1 + 24,
             1LL,
             (volatile void *)(a1 + 56),
             268435461,
             1,
             (volatile void *)(a1 + 72),
             4,
             1);
  if ( result < 0 )
    KeBugCheckEx(0x9Au, 0x18uLL, result, 0LL, 0LL);
  if ( !ExpSetupModeDetected )
  {
    result = PsCreateSystemThreadEx(
               (__int64)&v28,
               0x1FFFFF,
               0LL,
               0LL,
               0LL,
               (__int64)ExpExpirationThread,
               3221226090LL,
               0LL,
               0LL);
    if ( result >= 0 )
      return ZwClose(v28);
  }
  return result;
}
