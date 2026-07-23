/*
 * XREFs of ExpWatchProductTypeInitialization @ 0x140A42C04
 * Callers:
 *     ExInitSystemPhase2 @ 0x140A42BB4 (ExInitSystemPhase2.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     wcsncmp @ 0x1403D41B0 (wcsncmp.c)
 *     wcscat_s @ 0x1403D8340 (wcscat_s.c)
 *     wcscpy_s @ 0x1403D83E0 (wcscpy_s.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     NtOpenKey @ 0x1405F29F0 (NtOpenKey.c)
 *     NtNotifyChangeKey @ 0x140657FE0 (NtNotifyChangeKey.c)
 *     NtEnumerateKey @ 0x1406E35B0 (NtEnumerateKey.c)
 *     NtClose @ 0x140707D60 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     NtQueryValueKey @ 0x14070EEC0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x14070F950 (NtQueryKey.c)
 *     ExpGetNtProductTypeFromLicenseValue @ 0x140798F18 (ExpGetNtProductTypeFromLicenseValue.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140A4308C (ExpUpdateProductSuiteTypeInRegistry.c)
 *     ExpLicenseWatchInitWorker @ 0x140A43344 (ExpLicenseWatchInitWorker.c)
 */

char __fastcall ExpWatchProductTypeInitialization(__int64 a1)
{
  struct _DMA_ADAPTER *v1; // rsi
  NTSTATUS v2; // eax
  NTSTATUS v3; // eax
  struct _DMA_ADAPTER *v4; // rdi
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  PVOID PoolWithTag; // rax
  NTSTATUS v10; // eax
  size_t v11; // r8
  NTSTATUS v12; // eax
  char v14; // r14
  __int64 v15; // rax
  HANDLE v16; // r12
  NTSTATUS v17; // eax
  ULONG v18; // r15d
  wchar_t *v19; // rsi
  bool v20; // di
  SIZE_T v21; // r14
  _DWORD *v22; // r13
  ULONG_PTR v23; // r8
  ULONG v24; // edx
  ULONG i; // r14d
  __int64 v26; // rax
  __int64 v27; // rdi
  NTSTATUS v28; // eax
  NTSTATUS v29; // eax
  wchar_t *v30; // rax
  __int64 v31; // rcx
  NTSTATUS v32; // eax
  NTSTATUS v33; // eax
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v36; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING v41; // [rsp+C0h] [rbp-40h] BYREF
  __int128 KeyInformation; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v43; // [rsp+E0h] [rbp-20h]
  __int128 v44; // [rsp+F0h] [rbp-10h]
  __int128 v45; // [rsp+100h] [rbp+0h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+110h] [rbp+10h] BYREF
  int v47; // [rsp+11Ch] [rbp+1Ch]

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ResultLength = 0;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  DestinationString = 0LL;
  v1 = 0LL;
  KeyHandle = 0LL;
  v45 = 0LL;
  MEMORY[0xFFFFF78000000268] = 1;
  ValueName = 0LL;
  ExpSetupModeDetected = 0;
  ExpSystemSetupInProgress = 0;
  ExpGetNtProductTypeFromLicenseValue(a1);
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = NtOpenKey(&ExpSetupKey, 0x2001Fu, &ObjectAttributes);
  if ( v2 < 0 )
    KeBugCheckEx(0x9Au, 2uLL, (unsigned int)v2, 0LL, 0LL);
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(ExpSetupKey, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  v4 = (struct _DMA_ADAPTER *)Object;
  if ( v3 < 0 )
    KeBugCheckEx(0x9Au, 0xBuLL, (unsigned int)v3, 0LL, 0LL);
  RtlInitUnicodeString(&ValueName, L"SetupType");
  v5 = NtQueryValueKey(ExpSetupKey, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x48u, &ResultLength);
  if ( v5 < 0 )
    KeBugCheckEx(0x9Au, 3uLL, (unsigned int)v5, 0LL, 0LL);
  if ( v47 == 1 || v47 == 4 )
  {
    ExpSetupModeDetected = 1;
    MEMORY[0xFFFFF78000000268] = 0;
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
    v4 = 0LL;
  }
  RtlInitUnicodeString(&ValueName, L"SystemSetupInProgress");
  v6 = NtQueryValueKey(ExpSetupKey, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x48u, &ResultLength);
  if ( v6 < 0 )
    KeBugCheckEx(0x9Au, 3uLL, (unsigned int)v6, 0LL, 0LL);
  if ( v47 == 1 )
    ExpSystemSetupInProgress = 1;
  ExpLicenseWatchInitWorker();
  if ( InitIsWinPEMode )
  {
    ExpControlKey = v4;
    return 1;
  }
  qword_140C19530 = (__int64)ExpWatchProductTypeWork;
  qword_140C19538 = 0LL;
  *(_QWORD *)ExpWatchProductTypeWorkItem = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = NtOpenKey(&ExpProductTypeKey, 0x2001Fu, &ObjectAttributes);
  if ( v7 < 0 )
  {
    if ( !ExpSetupModeDetected )
      KeBugCheckEx(0x9Au, 6uLL, (unsigned int)v7, 0LL, 0LL);
  }
  else
  {
    if ( !ExpSetupModeDetected )
    {
      Object = 0LL;
      v8 = ObReferenceObjectByHandle(ExpProductTypeKey, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
      v1 = (struct _DMA_ADAPTER *)Object;
      if ( v8 < 0 )
        KeBugCheckEx(0x9Au, 0xCuLL, (unsigned int)v8, 0LL, 0LL);
    }
    ExpControlKey = v4;
    DmaAdapter = v1;
    ExpUpdateProductSuiteTypeInRegistry();
    RtlInitUnicodeString(&ValueName, L"ProductType");
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x22uLL, 0x2079654Bu);
    ExpProductTypeValueInfo = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      v10 = NtQueryValueKey(
              ExpProductTypeKey,
              &ValueName,
              KeyValuePartialInformation,
              PoolWithTag,
              0x22u,
              &ResultLength);
      if ( v10 < 0 )
      {
        if ( !ExpSetupModeDetected )
          KeBugCheckEx(0x9Au, 7uLL, (unsigned int)v10, 0LL, 0LL);
      }
      else
      {
        RtlInitUnicodeString(&ValueName, L"ProductSuite");
        if ( NtQueryValueKey(ExpProductTypeKey, &ValueName, KeyValuePartialInformation, &v45, 0x10u, &ResultLength) != -2147483643 )
          goto LABEL_18;
        ResultLength += 16;
        qword_140C542E0 = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x2079654Bu);
        if ( !qword_140C542E0 )
          KeBugCheckEx(0x9Au, 0x14uLL, ResultLength, 2uLL, 0LL);
        if ( NtQueryValueKey(
               ExpProductTypeKey,
               &ValueName,
               KeyValuePartialInformation,
               qword_140C542E0,
               ResultLength,
               &ResultLength) >= 0
          || (ExFreePoolWithTag(qword_140C542E0, 0), qword_140C542E0 = 0LL, !ExpSetupModeDetected) )
        {
LABEL_18:
          v11 = -1LL;
          do
            ++v11;
          while ( aLanmannt[v11] );
          if ( !wcsncmp(L"LanmanNT", (const wchar_t *)(ExpProductTypeValueInfo + 12), v11)
            && InitSafeBootMode == 3
            && !ExpSetupModeDetected )
          {
            MEMORY[0xFFFFF78000000268] = 1;
            MEMORY[0xFFFFF78000000264] = 3;
          }
          v12 = NtNotifyChangeKey(
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
          if ( v12 >= 0 )
          {
            RtlInitUnicodeString(
              &DestinationString,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites");
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
            {
              v36 = 0;
              KeyInformation = 0LL;
              v14 = 0;
              v15 = -1LL;
              v43 = 0LL;
              v44 = 0LL;
              ValueName = 0LL;
              v41 = 0LL;
              do
                ++v15;
              while ( aRegistryMachin_157[v15] );
              ValueName.Length = 2 * (v15 + 64);
              ValueName.MaximumLength = ValueName.Length;
              ValueName.Buffer = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, ValueName.Length, 0x2079654Bu);
              if ( !ValueName.Buffer )
                KeBugCheckEx(0x9Au, 0x14uLL, ValueName.Length, 3uLL, 0LL);
              v16 = KeyHandle;
              v17 = NtQueryKey(KeyHandle, KeyFullInformation, &KeyInformation, 0x30u, &v36);
              if ( v17 < 0 )
                KeBugCheckEx(0x9Au, 0x13uLL, v17, 1uLL, 0LL);
              v18 = 2 * DWORD2(v43) + 56;
              if ( v18 < DWORD2(v43) || v18 < 2 * (unsigned __int64)(unsigned int)(DWORD2(v43) + 16) )
                v14 = 1;
              v19 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x2079654Bu);
              if ( !v19 || v14 )
                KeBugCheckEx(0x9Au, 0x14uLL, v18, 4uLL, 0LL);
              LODWORD(Object) = DWORD2(v44) + 32;
              v20 = (unsigned int)(DWORD2(v44) + 32) < DWORD2(v44);
              v21 = (unsigned int)(DWORD2(v44) + 32);
              v22 = ExAllocatePoolWithTag(NonPagedPoolNx, v21, 0x2079654Bu);
              if ( !v22 || v20 )
                KeBugCheckEx(0x9Au, 0x14uLL, v21, 5uLL, 0LL);
              ExpLicenseInfoCount = DWORD1(v43);
              v23 = 80LL * DWORD1(v43);
              if ( v23 > 0xFFFFFFFF )
                KeBugCheckEx(0x9Au, 0x14uLL, v23, 6uLL, 0LL);
              ExpLicenseInfo = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v23, 0x2079654Bu);
              if ( !ExpLicenseInfo )
                KeBugCheckEx(0x9Au, 0x14uLL, 80LL * (unsigned int)ExpLicenseInfoCount, 6uLL, 0LL);
              RtlInitUnicodeString(&v41, L"ConcurrentLimit");
              v24 = 0;
              for ( i = 0; ; v24 = i )
              {
                v33 = NtEnumerateKey(v16, v24, KeyBasicInformation, v19, v18, &v36);
                if ( v33 == -2147483622 )
                  break;
                if ( v33 < 0 )
                  KeBugCheckEx(0x9Au, 0x1AuLL, v33, 0LL, 0LL);
                v19[((unsigned __int64)*((unsigned int *)v19 + 3) >> 1) + 8] = 0;
                wcscpy_s(
                  ValueName.Buffer,
                  (unsigned __int64)ValueName.MaximumLength >> 1,
                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites");
                wcscat_s(ValueName.Buffer, (unsigned __int64)ValueName.MaximumLength >> 1, L"\\");
                wcscat_s(ValueName.Buffer, (unsigned __int64)ValueName.MaximumLength >> 1, v19 + 8);
                v26 = -1LL;
                do
                  ++v26;
                while ( ValueName.Buffer[v26] );
                ObjectAttributes.RootDirectory = 0LL;
                ValueName.Length = 2 * v26;
                ObjectAttributes.Length = 48;
                ObjectAttributes.ObjectName = &ValueName;
                ObjectAttributes.Attributes = 576;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                v27 = 80LL * i;
                v28 = NtOpenKey((PHANDLE)(v27 + ExpLicenseInfo), 0x2001Fu, &ObjectAttributes);
                if ( v28 < 0 )
                  KeBugCheckEx(0x9Au, 0x16uLL, v28, 1uLL, 0LL);
                v29 = NtQueryValueKey(
                        *(HANDLE *)(v27 + ExpLicenseInfo),
                        &v41,
                        KeyValuePartialInformation,
                        v22,
                        (ULONG)Object,
                        &v36);
                if ( v29 < 0 )
                  KeBugCheckEx(0x9Au, 0x13uLL, v29, 2uLL, 0LL);
                v30 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, ValueName.Length, 0x2079654Bu);
                *(_QWORD *)(v27 + ExpLicenseInfo + 16) = v30;
                if ( !v30 )
                  KeBugCheckEx(0x9Au, 0x14uLL, ValueName.Length, 7uLL, 0LL);
                wcscpy_s(v30, (unsigned __int64)ValueName.Length >> 1, ValueName.Buffer);
                v31 = v27 + ExpLicenseInfo;
                *(_DWORD *)(v31 + 8) = v22[3];
                *(_QWORD *)(v31 + 48) = v31;
                *(_QWORD *)(v31 + 24) = 0LL;
                *(_QWORD *)(v31 + 40) = ExpWatchLicenseInfoWork;
                v32 = NtNotifyChangeKey(
                        *(HANDLE *)v31,
                        0LL,
                        (PIO_APC_ROUTINE)(v31 + 24),
                        (PVOID)1,
                        (PIO_STATUS_BLOCK)(v31 + 56),
                        0x10000005u,
                        1u,
                        (PVOID)(v31 + 72),
                        4u,
                        1u);
                if ( v32 < 0 )
                  KeBugCheckEx(0x9Au, 0x18uLL, v32, 1uLL, 0LL);
                ++i;
              }
              ExFreePoolWithTag(v19, 0);
              ExFreePoolWithTag(v22, 0);
              ExFreePoolWithTag(ValueName.Buffer, 0);
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
