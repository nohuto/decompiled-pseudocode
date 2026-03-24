/*
 * XREFs of ExpWatchProductTypeInitialization @ 0x140A41C04
 * Callers:
 *     ExInitSystemPhase2 @ 0x140A41BB4 (ExInitSystemPhase2.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     wcsncmp @ 0x1403D4040 (wcsncmp.c)
 *     wcscat_s @ 0x1403D81D0 (wcscat_s.c)
 *     wcscpy_s @ 0x1403D8270 (wcscpy_s.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     NtEnumerateKey @ 0x1405F3E50 (NtEnumerateKey.c)
 *     NtNotifyChangeKey @ 0x1406631C0 (NtNotifyChangeKey.c)
 *     NtOpenKey @ 0x140693490 (NtOpenKey.c)
 *     NtClose @ 0x1406F0980 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     NtQueryValueKey @ 0x1406F7AE0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x1406F8570 (NtQueryKey.c)
 *     ExpGetNtProductTypeFromLicenseValue @ 0x140798D18 (ExpGetNtProductTypeFromLicenseValue.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140A4208C (ExpUpdateProductSuiteTypeInRegistry.c)
 *     ExpLicenseWatchInitWorker @ 0x140A42344 (ExpLicenseWatchInitWorker.c)
 */

char __fastcall ExpWatchProductTypeInitialization(__int64 a1)
{
  struct _DMA_ADAPTER *v1; // rsi
  int v2; // eax
  NTSTATUS v3; // eax
  struct _DMA_ADAPTER *v4; // rdi
  int ValueKey; // eax
  int v6; // eax
  int v7; // eax
  NTSTATUS v8; // eax
  PVOID PoolWithTag; // rax
  int v10; // eax
  size_t v11; // r8
  int v12; // eax
  char v14; // r14
  __int64 v15; // rax
  HANDLE v16; // r12
  int v17; // eax
  unsigned int v18; // r15d
  wchar_t *v19; // rsi
  bool v20; // di
  SIZE_T v21; // r14
  _DWORD *v22; // r13
  ULONG_PTR v23; // r8
  unsigned int v24; // edx
  unsigned int i; // r14d
  __int64 v26; // rax
  __int64 v27; // rdi
  int v28; // eax
  int v29; // eax
  wchar_t *v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  PVOID *Object; // [rsp+20h] [rbp-E0h]
  PVOID *Objecta; // [rsp+20h] [rbp-E0h]
  PVOID *Objectb; // [rsp+20h] [rbp-E0h]
  PVOID *Objectc; // [rsp+20h] [rbp-E0h]
  PVOID *Objectd; // [rsp+20h] [rbp-E0h]
  PVOID *Objecte; // [rsp+20h] [rbp-E0h]
  PVOID *Objectf; // [rsp+20h] [rbp-E0h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v42; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+68h] [rbp-98h] BYREF
  PVOID v44; // [rsp+70h] [rbp-90h] BYREF
  __int64 v45; // [rsp+78h] [rbp-88h] BYREF
  __int64 v46; // [rsp+80h] [rbp-80h]
  UNICODE_STRING *p_DestinationString; // [rsp+88h] [rbp-78h]
  __int64 v48; // [rsp+90h] [rbp-70h]
  __int128 v49; // [rsp+98h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING v52; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v53; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v54; // [rsp+E0h] [rbp-20h]
  __int128 v55; // [rsp+F0h] [rbp-10h]
  __int128 v56; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v57[12]; // [rsp+110h] [rbp+10h] BYREF
  int v58; // [rsp+11Ch] [rbp+1Ch]

  v45 = 48LL;
  LODWORD(BugCheckParameter2) = 0;
  v48 = 576LL;
  DestinationString = 0LL;
  v1 = 0LL;
  Handle = 0LL;
  v56 = 0LL;
  MEMORY[0xFFFFF78000000268] = 1;
  v42 = 0LL;
  ExpSetupModeDetected = 0;
  ExpSystemSetupInProgress = 0;
  ExpGetNtProductTypeFromLicenseValue(a1);
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
  v46 = 0LL;
  p_DestinationString = &DestinationString;
  v49 = 0LL;
  v2 = NtOpenKey(&ExpSetupKey, 131103, (__int64)&v45);
  if ( v2 < 0 )
    KeBugCheckEx(0x9Au, 2uLL, (unsigned int)v2, 0LL, 0LL);
  v44 = 0LL;
  v3 = ObReferenceObjectByHandle(ExpSetupKey, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v44, 0LL);
  v4 = (struct _DMA_ADAPTER *)v44;
  if ( v3 < 0 )
    KeBugCheckEx(0x9Au, 0xBuLL, (unsigned int)v3, 0LL, 0LL);
  RtlInitUnicodeString(&v42, L"SetupType");
  LODWORD(Object) = 72;
  ValueKey = NtQueryValueKey(
               ExpSetupKey,
               (unsigned __int64)&v42,
               2u,
               (unsigned __int64)v57,
               (size_t)Object,
               (unsigned __int64)&BugCheckParameter2);
  if ( ValueKey < 0 )
    KeBugCheckEx(0x9Au, 3uLL, (unsigned int)ValueKey, 0LL, 0LL);
  if ( v58 == 1 || v58 == 4 )
  {
    ExpSetupModeDetected = 1;
    MEMORY[0xFFFFF78000000268] = 0;
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
    v4 = 0LL;
  }
  RtlInitUnicodeString(&v42, L"SystemSetupInProgress");
  LODWORD(Objecta) = 72;
  v6 = NtQueryValueKey(
         ExpSetupKey,
         (unsigned __int64)&v42,
         2u,
         (unsigned __int64)v57,
         (size_t)Objecta,
         (unsigned __int64)&BugCheckParameter2);
  if ( v6 < 0 )
    KeBugCheckEx(0x9Au, 3uLL, (unsigned int)v6, 0LL, 0LL);
  if ( v58 == 1 )
    ExpSystemSetupInProgress = 1;
  ExpLicenseWatchInitWorker();
  if ( InitIsWinPEMode )
  {
    ExpControlKey = v4;
    return 1;
  }
  qword_140C194B0 = (__int64)ExpWatchProductTypeWork;
  qword_140C194B8 = 0LL;
  ExpWatchProductTypeWorkItem = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  LODWORD(v45) = 48;
  p_DestinationString = &DestinationString;
  v46 = 0LL;
  LODWORD(v48) = 576;
  v49 = 0LL;
  v7 = NtOpenKey(&ExpProductTypeKey, 131103, (__int64)&v45);
  if ( v7 < 0 )
  {
    if ( !ExpSetupModeDetected )
      KeBugCheckEx(0x9Au, 6uLL, (unsigned int)v7, 0LL, 0LL);
  }
  else
  {
    if ( !ExpSetupModeDetected )
    {
      v44 = 0LL;
      v8 = ObReferenceObjectByHandle(ExpProductTypeKey, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v44, 0LL);
      v1 = (struct _DMA_ADAPTER *)v44;
      if ( v8 < 0 )
        KeBugCheckEx(0x9Au, 0xCuLL, (unsigned int)v8, 0LL, 0LL);
    }
    ExpControlKey = v4;
    DmaAdapter = v1;
    ExpUpdateProductSuiteTypeInRegistry();
    RtlInitUnicodeString(&v42, L"ProductType");
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x22uLL, 0x2079654Bu);
    ExpProductTypeValueInfo = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      LODWORD(Objectb) = 34;
      v10 = NtQueryValueKey(
              ExpProductTypeKey,
              (unsigned __int64)&v42,
              2u,
              (unsigned __int64)PoolWithTag,
              (size_t)Objectb,
              (unsigned __int64)&BugCheckParameter2);
      if ( v10 < 0 )
      {
        if ( !ExpSetupModeDetected )
          KeBugCheckEx(0x9Au, 7uLL, (unsigned int)v10, 0LL, 0LL);
      }
      else
      {
        RtlInitUnicodeString(&v42, L"ProductSuite");
        LODWORD(Objectc) = 16;
        if ( (unsigned int)NtQueryValueKey(
                             ExpProductTypeKey,
                             (unsigned __int64)&v42,
                             2u,
                             (unsigned __int64)&v56,
                             (size_t)Objectc,
                             (unsigned __int64)&BugCheckParameter2) != -2147483643 )
          goto LABEL_18;
        LODWORD(BugCheckParameter2) = BugCheckParameter2 + 16;
        qword_140C542A0 = ExAllocatePoolWithTag(PagedPool, (unsigned int)BugCheckParameter2, 0x2079654Bu);
        if ( !qword_140C542A0 )
          KeBugCheckEx(0x9Au, 0x14uLL, (unsigned int)BugCheckParameter2, 2uLL, 0LL);
        LODWORD(Objectd) = BugCheckParameter2;
        if ( (int)NtQueryValueKey(
                    ExpProductTypeKey,
                    (unsigned __int64)&v42,
                    2u,
                    (unsigned __int64)qword_140C542A0,
                    (size_t)Objectd,
                    (unsigned __int64)&BugCheckParameter2) >= 0
          || (ExFreePoolWithTag(qword_140C542A0, 0), qword_140C542A0 = 0LL, !ExpSetupModeDetected) )
        {
LABEL_18:
          v11 = -1LL;
          do
            ++v11;
          while ( aLanmannt[v11] );
          if ( !wcsncmp(L"LanmanNT", (const wchar_t *)(ExpProductTypeValueInfo + 12), v11)
            && (_DWORD)InitSafeBootMode == 3
            && !ExpSetupModeDetected )
          {
            MEMORY[0xFFFFF78000000268] = 1;
            MEMORY[0xFFFFF78000000264] = 3;
          }
          v12 = NtNotifyChangeKey(
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
          if ( v12 >= 0 )
          {
            RtlInitUnicodeString(
              &DestinationString,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites");
            LODWORD(v45) = 48;
            p_DestinationString = &DestinationString;
            v46 = 0LL;
            LODWORD(v48) = 576;
            v49 = 0LL;
            if ( (int)NtOpenKey(&Handle, 131097, (__int64)&v45) >= 0 )
            {
              LODWORD(v43) = 0;
              v53 = 0LL;
              v14 = 0;
              v15 = -1LL;
              v54 = 0LL;
              v55 = 0LL;
              v42 = 0LL;
              v52 = 0LL;
              do
                ++v15;
              while ( aRegistryMachin_157[v15] );
              v42.Length = 2 * (v15 + 64);
              v42.MaximumLength = v42.Length;
              v42.Buffer = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v42.Length, 0x2079654Bu);
              if ( !v42.Buffer )
                KeBugCheckEx(0x9Au, 0x14uLL, v42.Length, 3uLL, 0LL);
              v16 = Handle;
              v17 = NtQueryKey(Handle, 2u, &v53, 0x30u, &v43);
              if ( v17 < 0 )
                KeBugCheckEx(0x9Au, 0x13uLL, v17, 1uLL, 0LL);
              v18 = 2 * DWORD2(v54) + 56;
              if ( v18 < DWORD2(v54) || v18 < 2 * (unsigned __int64)(unsigned int)(DWORD2(v54) + 16) )
                v14 = 1;
              v19 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x2079654Bu);
              if ( !v19 || v14 )
                KeBugCheckEx(0x9Au, 0x14uLL, v18, 4uLL, 0LL);
              LODWORD(v44) = DWORD2(v55) + 32;
              v20 = (unsigned int)(DWORD2(v55) + 32) < DWORD2(v55);
              v21 = (unsigned int)(DWORD2(v55) + 32);
              v22 = ExAllocatePoolWithTag(NonPagedPoolNx, v21, 0x2079654Bu);
              if ( !v22 || v20 )
                KeBugCheckEx(0x9Au, 0x14uLL, v21, 5uLL, 0LL);
              ExpLicenseInfoCount = DWORD1(v54);
              v23 = 80LL * DWORD1(v54);
              if ( v23 > 0xFFFFFFFF )
                KeBugCheckEx(0x9Au, 0x14uLL, v23, 6uLL, 0LL);
              ExpLicenseInfo = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v23, 0x2079654Bu);
              if ( !ExpLicenseInfo )
                KeBugCheckEx(0x9Au, 0x14uLL, 80LL * (unsigned int)ExpLicenseInfoCount, 6uLL, 0LL);
              RtlInitUnicodeString(&v52, L"ConcurrentLimit");
              v24 = 0;
              for ( i = 0; ; v24 = i )
              {
                LODWORD(Objecte) = v18;
                v33 = NtEnumerateKey(v16, v24, 0, v19, (SIZE_T)Objecte, &v43);
                if ( v33 == -2147483622 )
                  break;
                if ( v33 < 0 )
                  KeBugCheckEx(0x9Au, 0x1AuLL, v33, 0LL, 0LL);
                v19[((unsigned __int64)*((unsigned int *)v19 + 3) >> 1) + 8] = 0;
                wcscpy_s(
                  v42.Buffer,
                  (unsigned __int64)v42.MaximumLength >> 1,
                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites");
                wcscat_s(v42.Buffer, (unsigned __int64)v42.MaximumLength >> 1, L"\\");
                wcscat_s(v42.Buffer, (unsigned __int64)v42.MaximumLength >> 1, v19 + 8);
                v26 = -1LL;
                do
                  ++v26;
                while ( v42.Buffer[v26] );
                v46 = 0LL;
                v42.Length = 2 * v26;
                LODWORD(v45) = 48;
                p_DestinationString = &v42;
                LODWORD(v48) = 576;
                v49 = 0LL;
                v27 = 80LL * i;
                v28 = NtOpenKey((HANDLE *)(v27 + ExpLicenseInfo), 131103, (__int64)&v45);
                if ( v28 < 0 )
                  KeBugCheckEx(0x9Au, 0x16uLL, v28, 1uLL, 0LL);
                LODWORD(Objectf) = (_DWORD)v44;
                v29 = NtQueryValueKey(
                        *(HANDLE *)(v27 + ExpLicenseInfo),
                        (unsigned __int64)&v52,
                        2u,
                        (unsigned __int64)v22,
                        (size_t)Objectf,
                        (unsigned __int64)&v43);
                if ( v29 < 0 )
                  KeBugCheckEx(0x9Au, 0x13uLL, v29, 2uLL, 0LL);
                v30 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v42.Length, 0x2079654Bu);
                *(_QWORD *)(v27 + ExpLicenseInfo + 16) = v30;
                if ( !v30 )
                  KeBugCheckEx(0x9Au, 0x14uLL, v42.Length, 7uLL, 0LL);
                wcscpy_s(v30, (unsigned __int64)v42.Length >> 1, v42.Buffer);
                v31 = v27 + ExpLicenseInfo;
                *(_DWORD *)(v31 + 8) = v22[3];
                *(_QWORD *)(v31 + 48) = v31;
                *(_QWORD *)(v31 + 24) = 0LL;
                *(_QWORD *)(v31 + 40) = ExpWatchLicenseInfoWork;
                v32 = NtNotifyChangeKey(
                        *(_QWORD *)v31,
                        0,
                        v31 + 24,
                        1LL,
                        (volatile void *)(v31 + 56),
                        268435461,
                        1,
                        (volatile void *)(v31 + 72),
                        4,
                        1);
                if ( v32 < 0 )
                  KeBugCheckEx(0x9Au, 0x18uLL, v32, 1uLL, 0LL);
                ++i;
              }
              ExFreePoolWithTag(v19, 0);
              ExFreePoolWithTag(v22, 0);
              ExFreePoolWithTag(v42.Buffer, 0);
              NtClose(v16);
            }
            return 1;
          }
          if ( !ExpSetupModeDetected )
            KeBugCheckEx(0x9Au, 8uLL, (unsigned int)v12, 0LL, 0LL);
        }
      }
    }
  }
  return 0;
}
