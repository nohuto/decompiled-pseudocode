/*
 * XREFs of CmpCloneHwProfile @ 0x1408772E4
 * Callers:
 *     CmSetAcpiHwProfile @ 0x1407A5B08 (CmSetAcpiHwProfile.c)
 *     CmpCreateHardwareProfiles @ 0x140A59540 (CmpCreateHardwareProfiles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     CmpInitializeDelayDerefContext @ 0x14035BE38 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x14035BE50 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _wtoi @ 0x1403D25A0 (_wtoi.c)
 *     swprintf_s @ 0x1403D6A60 (swprintf_s.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1403FA840 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x1403FABC0 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 *     ZwQuerySecurityObject @ 0x1403FD100 (ZwQuerySecurityObject.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpRebuildKcbCache @ 0x140614584 (CmpRebuildKcbCache.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     CmpLockRegistryExclusive @ 0x1406679BC (CmpLockRegistryExclusive.c)
 *     RtlStringFromGUID @ 0x14066DF00 (RtlStringFromGUID.c)
 *     ExUuidCreate @ 0x1406F73B0 (ExUuidCreate.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140877AA0 (CmpCreateHwProfileFriendlyName.c)
 *     CmpCopySyncTree @ 0x140878644 (CmpCopySyncTree.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpCloneHwProfile(
        void *a1,
        void *a2,
        void *a3,
        unsigned int a4,
        unsigned __int16 a5,
        PHANDLE KeyHandle,
        unsigned int *a7)
{
  PVOID v8; // r12
  unsigned int v10; // eax
  NTSTATUS v11; // ebx
  PVOID PoolWithTag; // rdi
  ULONG v13; // edi
  int v14; // eax
  ULONG v15; // ebx
  HANDLE v16; // rcx
  _QWORD *v17; // rbx
  _QWORD *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  unsigned int Data; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Length; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE v26; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v27; // [rsp+68h] [rbp-98h] BYREF
  ULONG Disposition; // [rsp+70h] [rbp-90h] BYREF
  ULONG ResultLength; // [rsp+74h] [rbp-8Ch] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  HANDLE v31; // [rsp+80h] [rbp-80h] BYREF
  PVOID Object[2]; // [rsp+88h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING GuidString; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v36; // [rsp+E8h] [rbp-18h] BYREF
  UUID Uuid; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD KeyInformation[2]; // [rsp+110h] [rbp+10h] BYREF
  unsigned int v39; // [rsp+118h] [rbp+18h]
  unsigned int v40; // [rsp+11Ch] [rbp+1Ch]
  wchar_t Str[2]; // [rsp+120h] [rbp+20h] BYREF
  ULONG v42; // [rsp+124h] [rbp+24h]
  wchar_t Dst[64]; // [rsp+210h] [rbp+110h] BYREF

  v27 = a3;
  Length = 0;
  *KeyHandle = 0LL;
  *a7 = a4;
  v8 = a3;
  v26 = 0LL;
  DestinationString = 0LL;
  Disposition = 0;
  ValueName = 0LL;
  Data = 0;
  *(_OWORD *)Object = 0LL;
  ResultLength = 0;
  GuidString = 0LL;
  v31 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Handle = 0LL;
  Uuid = 0LL;
  v36 = 0LL;
  CmpInitializeDelayDerefContext(&v36);
  v10 = *a7;
  if ( *a7 >= 0xC8 )
    goto LABEL_8;
  while ( 1 )
  {
    *a7 = v10 + 1;
    swprintf_s(Dst, 0x40uLL, L"%04d");
    RtlInitUnicodeString(&DestinationString, Dst);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v11 = ZwOpenKey(KeyHandle, 0x2001Fu, &ObjectAttributes);
    if ( v11 < 0 )
      break;
    ZwClose(*KeyHandle);
    v10 = *a7;
    if ( *a7 >= 0xC8 )
      goto LABEL_7;
  }
  if ( v11 == -1073741772 )
    v11 = 0;
LABEL_7:
  if ( v11 >= 0 )
  {
LABEL_8:
    if ( ZwQuerySecurityObject(v8, 4u, 0LL, 0, &Length) == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x20204D43u);
      if ( !PoolWithTag || ZwQuerySecurityObject(v8, 4u, PoolWithTag, Length, &Length) >= 0 )
        goto LABEL_13;
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    PoolWithTag = 0LL;
LABEL_13:
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityDescriptor = PoolWithTag;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v11 = ZwCreateKey(KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( v11 >= 0 )
    {
      if ( Disposition == 1 )
      {
        swprintf_s(Dst, 0x40uLL, L"Hardware Profiles\\%04d", *a7);
        RtlInitUnicodeString(&ValueName, Dst);
        ObjectAttributes.RootDirectory = a1;
        ObjectAttributes.ObjectName = &ValueName;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.Length = 48;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v11 = ZwCreateKey(&v26, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        if ( v11 >= 0 )
        {
          RtlInitUnicodeString(&ValueName, L"Hardware Profiles");
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &ValueName;
          ObjectAttributes.RootDirectory = a1;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v11 = ZwOpenKey(&v31, 0x20019u, &ObjectAttributes);
          if ( v11 >= 0 )
          {
            v11 = ZwQueryKey(v31, KeyFullInformation, KeyInformation, 0x100u, &ResultLength);
            if ( v11 >= 0 )
            {
              v13 = v42;
              v14 = -1;
              Data = -1;
              v15 = 0;
              if ( v42 )
              {
                do
                {
                  if ( ZwEnumerateKey(v31, v15, KeyBasicInformation, KeyInformation, 0xFEu, &ResultLength) < 0 )
                    break;
                  Str[(unsigned __int64)v40 >> 1] = 0;
                  if ( wtoi(Str) && wtoi(Str) != *a7 )
                  {
                    ValueName.Length = v40;
                    ObjectAttributes.Length = 48;
                    ValueName.MaximumLength = v40 + 2;
                    ObjectAttributes.Attributes = 576;
                    ValueName.Buffer = Str;
                    ObjectAttributes.RootDirectory = v31;
                    ObjectAttributes.ObjectName = &ValueName;
                    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                    if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
                    {
                      RtlInitUnicodeString(&ValueName, L"PreferenceOrder");
                      if ( ZwQueryValueKey(
                             Handle,
                             &ValueName,
                             KeyValueFullInformation,
                             KeyInformation,
                             0x100u,
                             &ResultLength) >= 0
                        && KeyInformation[1] == 4
                        && (*(_DWORD *)((char *)KeyInformation + v39) > Data || Data == -1) )
                      {
                        Data = *(_DWORD *)((char *)KeyInformation + v39);
                      }
                      ZwClose(Handle);
                    }
                    Handle = 0LL;
                  }
                  ++v15;
                }
                while ( v15 < v13 );
                v14 = Data;
                v8 = v27;
              }
              Data = v14 + 1;
              RtlInitUnicodeString(&ValueName, L"PreferenceOrder");
              ZwSetValueKey(v26, &ValueName, 0, 4u, &Data, 4u);
              if ( (int)CmpCreateHwProfileFriendlyName(a1, a5, *a7, Object) >= 0 )
              {
                RtlInitUnicodeString(&ValueName, L"FriendlyName");
                ZwSetValueKey(v26, &ValueName, 0, 1u, Object[1], LOWORD(Object[0]) + 2);
                RtlFreeAnsiString((PUNICODE_STRING)Object);
              }
              Data = 0;
              RtlInitUnicodeString(&ValueName, L"Aliasable");
              ZwSetValueKey(v26, &ValueName, 0, 4u, &Data, 4u);
              Data = 1;
              RtlInitUnicodeString(&ValueName, L"Cloned");
              ZwSetValueKey(v26, &ValueName, 0, 4u, &Data, 4u);
              if ( ExUuidCreate(&Uuid) >= 0 && RtlStringFromGUID(&Uuid, &GuidString) >= 0 )
              {
                RtlInitUnicodeString(&ValueName, L"HwProfileGuid");
                ZwSetValueKey(v26, &ValueName, 0, 1u, GuidString.Buffer, GuidString.MaximumLength);
                RtlFreeAnsiString(&GuidString);
              }
              Object[0] = 0LL;
              v11 = ObReferenceObjectByHandle(v8, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, Object, 0LL);
              if ( v11 >= 0 )
              {
                v16 = *KeyHandle;
                v27 = 0LL;
                v11 = ObReferenceObjectByHandle(v16, 0x20006u, (POBJECT_TYPE)CmKeyObjectType, 0, &v27, 0LL);
                if ( v11 >= 0 )
                {
                  CmpLockRegistryExclusive();
                  v17 = v27;
                  v18 = Object[0];
                  if ( (unsigned __int8)CmpCopySyncTree(*(_QWORD *)(*((_QWORD *)Object[0] + 1) + 32LL), 2, 0) )
                  {
                    v19 = v18[1];
                    v27 = (PVOID)0xFFFFFFFFLL;
                    Object[0] = (PVOID)0xFFFFFFFFLL;
                    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, PVOID *))(*(_QWORD *)(v19 + 32) + 8LL))(
                            *(_QWORD *)(v19 + 32),
                            *(unsigned int *)(v19 + 40),
                            &v27);
                    if ( v20 )
                    {
                      v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, PVOID *))(*(_QWORD *)(v17[1] + 32LL) + 8LL))(
                              *(_QWORD *)(v17[1] + 32LL),
                              *(unsigned int *)(v17[1] + 40LL),
                              Object);
                      if ( v21 )
                      {
                        *(_WORD *)(v21 + 52) = *(_WORD *)(v20 + 52);
                        *(_DWORD *)(v21 + 56) = *(_DWORD *)(v20 + 56);
                        CmpRebuildKcbCache(v17[1]);
                        (*(void (__fastcall **)(_QWORD, PVOID *))(*(_QWORD *)(v17[1] + 32LL) + 16LL))(
                          *(_QWORD *)(v17[1] + 32LL),
                          Object);
                        v11 = 0;
                      }
                      else
                      {
                        v11 = -1073741670;
                      }
                      (*(void (__fastcall **)(_QWORD, PVOID *))(*(_QWORD *)(v18[1] + 32LL) + 16LL))(
                        *(_QWORD *)(v18[1] + 32LL),
                        &v27);
                    }
                    else
                    {
                      v11 = -1073741670;
                    }
                  }
                  else
                  {
                    v11 = -1073741492;
                  }
                  CmpDrainDelayDerefContext((_QWORD **)&v36);
                  CmpUnlockRegistry();
                }
              }
            }
          }
          else
          {
            v31 = 0LL;
          }
        }
        else
        {
          v26 = 0LL;
        }
      }
      else
      {
        v11 = 0;
      }
    }
  }
  ZwClose(v8);
  if ( v26 )
    ZwClose(v26);
  if ( v31 )
    ZwClose(v31);
  if ( v11 < 0 && *KeyHandle )
    ZwClose(*KeyHandle);
  return (unsigned int)v11;
}
