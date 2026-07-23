/*
 * XREFs of AdtpBuildAccessesString @ 0x14096E498
 * Callers:
 *     AdtpPackageParameters @ 0x1403C0AE4 (AdtpPackageParameters.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C2B24 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1405C3584 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpBuildObjectTypeStrings @ 0x14096E948 (AdtpBuildObjectTypeStrings.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x14026D4E0 (RtlAppendUnicodeStringToString.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlIntegerToUnicodeString @ 0x14060F3A0 (RtlIntegerToUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildAccessesString(
        const UNICODE_STRING *a1,
        const UNICODE_STRING *a2,
        int a3,
        int a4,
        PUNICODE_STRING DestinationString,
        wchar_t **a6,
        __int64 a7,
        _DWORD *a8,
        _BYTE *a9)
{
  int v9; // r15d
  __int64 *v10; // r13
  int v11; // r8d
  NTSTATUS appended; // edx
  int v14; // ecx
  int v15; // r9d
  const WCHAR *v16; // r12
  unsigned int v17; // edi
  __int64 v18; // rax
  int v19; // ecx
  wchar_t *PoolWithTag; // rax
  unsigned int v21; // edi
  unsigned int v22; // esi
  __int64 *v23; // r14
  int *v24; // rsi
  wchar_t **v25; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v27; // rsi
  char v28; // di
  const UNICODE_STRING *v29; // rbx
  __int64 *v30; // r14
  _QWORD *v31; // rsi
  wchar_t *Buffer; // rax
  char v33; // r15
  const UNICODE_STRING *v34; // r12
  _QWORD *v35; // r14
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // r14d
  unsigned int v40; // edi
  int v41; // esi
  NTSTATUS v42; // [rsp+20h] [rbp-A9h]
  UNICODE_STRING Destination; // [rsp+28h] [rbp-A1h] BYREF
  int v44; // [rsp+38h] [rbp-91h]
  const WCHAR *v45; // [rsp+40h] [rbp-89h]
  wchar_t **v46; // [rsp+48h] [rbp-81h]
  _QWORD *v47; // [rsp+50h] [rbp-79h]
  PCUNICODE_STRING String2; // [rsp+58h] [rbp-71h]
  PCUNICODE_STRING v49; // [rsp+60h] [rbp-69h]
  wchar_t *v50; // [rsp+68h] [rbp-61h]
  UNICODE_STRING String; // [rsp+70h] [rbp-59h] BYREF
  UNICODE_STRING *v52; // [rsp+80h] [rbp-49h]
  UNICODE_STRING v53; // [rsp+88h] [rbp-41h] BYREF
  UNICODE_STRING v54; // [rsp+98h] [rbp-31h] BYREF
  char v55; // [rsp+A8h] [rbp-21h] BYREF

  v9 = a3;
  v10 = 0LL;
  v44 = a3;
  v11 = 0;
  v49 = a2;
  appended = 0;
  String2 = a1;
  v52 = DestinationString;
  v46 = a6;
  v47 = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v53 = 0LL;
  v54 = 0LL;
  if ( !v9 )
  {
    if ( a6 )
    {
      a6[1] = (wchar_t *)4;
      *a6 = (wchar_t *)"-";
    }
    else if ( DestinationString )
    {
      RtlInitUnicodeString(DestinationString, L"-");
    }
    return 0LL;
  }
  v14 = v9;
  do
  {
    ++v11;
    v14 &= v14 - 1;
  }
  while ( v14 );
  if ( a4 )
  {
    v15 = a4 - 1;
    if ( !v15 )
    {
      v16 = L"\r\n";
      goto LABEL_15;
    }
    if ( v15 == 1 )
    {
      v16 = L":\t";
      goto LABEL_15;
    }
  }
  v16 = L"\r\n\t\t\t\t";
LABEL_15:
  v45 = v16;
  v17 = 24 * v11 + 1;
  if ( a7 && a8 && (v18 = (unsigned int)*a8, v19 = v18 + v17, (unsigned int)v18 + v17 < 0x400) )
  {
    PoolWithTag = (wchar_t *)(a7 + 2 * v18);
    *a8 = v19;
    v50 = PoolWithTag;
  }
  else
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v17, 0x6B416553u);
    v50 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225495LL;
    *a9 = 1;
    appended = 0;
  }
  Destination.Length = 0;
  Destination.MaximumLength = 2 * v17;
  v21 = 5;
  Destination.Buffer = PoolWithTag;
  if ( (v9 & 0x1F0000) != 0 )
  {
    v22 = 0;
    v23 = AdtpStandardAccessTypes;
    do
    {
      if ( (v9 & *(_DWORD *)v23) != 0 )
      {
        RtlAppendUnicodeToString(&Destination, L"%%");
        RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)&AdtpEventIdStringStandard + v22);
        appended = RtlAppendUnicodeToString(&Destination, v16);
      }
      ++v22;
      v23 = (__int64 *)((char *)v23 + 4);
    }
    while ( v22 < 5 );
  }
  v24 = &dword_14001B5A4;
  do
  {
    if ( (v9 & *v24) != 0 )
    {
      RtlAppendUnicodeToString(&Destination, L"%%");
      RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)&AdtpEventIdStringStandard + v21);
      appended = RtlAppendUnicodeToString(&Destination, v16);
    }
    ++v21;
    ++v24;
  }
  while ( v21 < 7 );
  v25 = v46;
  v42 = appended;
  if ( (_WORD)v9 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&AdtpSourceModuleLock, 1u);
    v27 = &AdtpSourceModules;
    v28 = 0;
    if ( AdtpSourceModules )
    {
      v29 = String2;
      do
      {
        if ( v28 )
          break;
        v30 = (__int64 *)*v27;
        if ( RtlEqualUnicodeString((PCUNICODE_STRING)(*v27 + 8), v29, 1u) )
        {
          v28 = 1;
          *v27 = *v30;
          v10 = v30;
          *v30 = AdtpSourceModules;
          AdtpSourceModules = (__int64)v30;
        }
        else
        {
          v27 = v30;
        }
      }
      while ( *v27 );
      v25 = v46;
      if ( v28 == 1 )
      {
        v28 = 0;
        v31 = v10 + 3;
        RtlInitUnicodeString(&v53, L"DS");
        if ( !RtlEqualUnicodeString(String2, &v53, 1u)
          || v49->Length != 78
          || (Buffer = v49->Buffer, *Buffer != 37)
          || Buffer[1] != 123
          || (v33 = 1, Buffer[38] != 125) )
        {
          v33 = 0;
        }
        RtlInitUnicodeString(&v54, L"Directory Service Object");
        if ( v10[3] )
        {
          v34 = v49;
          do
          {
            if ( v28 )
              break;
            if ( v33 && (v35 = (_QWORD *)*v31, RtlEqualUnicodeString((PCUNICODE_STRING)(*v31 + 8LL), &v54, 1u))
              || (v35 = (_QWORD *)*v31, RtlEqualUnicodeString((PCUNICODE_STRING)(*v31 + 8LL), v34, 1u)) )
            {
              v28 = 1;
              v47 = v35;
              *v31 = *v35;
              *v35 = v10[3];
              v10[3] = (__int64)v35;
            }
            else
            {
              v31 = v35;
            }
          }
          while ( *v31 );
          v25 = v46;
          v16 = v45;
        }
        v9 = v44;
      }
    }
    ExReleaseResourceLite(&AdtpSourceModuleLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v36, v37, v38);
    if ( v28 )
      v39 = *((_DWORD *)v47 + 6);
    else
      v39 = 1552;
    *(_QWORD *)&String.Length = 1310720LL;
    v40 = 0;
    String.Buffer = (wchar_t *)&v55;
    v41 = 1;
    do
    {
      if ( (v41 & v9) != 0 )
      {
        v42 = RtlIntegerToUnicodeString(v40 + v39, 0xAu, &String);
        appended = v42;
        if ( v42 >= 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"%%");
          RtlAppendUnicodeStringToString(&Destination, &String);
          appended = RtlAppendUnicodeToString(&Destination, v16);
          v42 = appended;
        }
      }
      else
      {
        appended = v42;
      }
      ++v40;
      v41 *= 2;
    }
    while ( v40 < 0x10 );
  }
  if ( appended >= 0 )
  {
    if ( v25 )
    {
      *v25 = v50;
      v25[1] = (wchar_t *)((unsigned int)Destination.Length + 2);
    }
    else
    {
      *v52 = Destination;
    }
  }
  return (unsigned int)appended;
}
