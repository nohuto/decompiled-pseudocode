/*
 * XREFs of CmSetAcpiHwProfile @ 0x1407A5B08
 * Callers:
 *     IopExecuteHardwareProfileChange @ 0x1408B8CA4 (IopExecuteHardwareProfileChange.c)
 *     CmpCreateHardwareProfiles @ 0x140A59540 (CmpCreateHardwareProfiles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x14036F14C (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403D6A60 (swprintf_s.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     CmpFilterAcpiDockingState @ 0x1407A6048 (CmpFilterAcpiDockingState.c)
 *     CmpGetAcpiProfileInformation @ 0x1407A621C (CmpGetAcpiProfileInformation.c)
 *     CmpOpenDevicesControlSet @ 0x1407A6964 (CmpOpenDevicesControlSet.c)
 *     CmpAddAcpiAliasEntry @ 0x14087706C (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x1408772E4 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140877D78 (CmpMoveBiosAliasTable.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmSetAcpiHwProfile(
        unsigned __int16 *a1,
        __int64 (__fastcall *a2)(PVOID, unsigned int *, _QWORD),
        __int64 a3,
        HANDLE *a4,
        _BYTE *a5)
{
  PVOID PoolWithTag; // rdi
  HANDLE *v7; // rsi
  NTSTATUS AcpiProfileInformation; // ebx
  void *v10; // r12
  int v11; // ebx
  unsigned int v12; // esi
  int v13; // eax
  __int64 v14; // rcx
  int v15; // r14d
  unsigned int v16; // edx
  _DWORD *v17; // rcx
  unsigned int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rax
  _DWORD *v21; // rcx
  unsigned int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rax
  HANDLE v26; // rcx
  NTSTATUS v27; // eax
  int Length; // [rsp+20h] [rbp-E0h]
  unsigned int v29; // [rsp+40h] [rbp-C0h] BYREF
  int Data; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v34; // [rsp+68h] [rbp-98h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v36; // [rsp+74h] [rbp-8Ch] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  HANDLE *v38; // [rsp+A8h] [rbp-58h]
  PVOID P; // [rsp+B0h] [rbp-50h] BYREF
  ULONG Disposition; // [rsp+B8h] [rbp-48h] BYREF
  HANDLE v41; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v42; // [rsp+C8h] [rbp-38h] BYREF
  HANDLE v43; // [rsp+D0h] [rbp-30h] BYREF
  void *v44; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v45; // [rsp+E0h] [rbp-20h] BYREF
  int KeyValueInformation; // [rsp+F0h] [rbp-10h] BYREF
  int v47; // [rsp+F4h] [rbp-Ch]
  unsigned int v48; // [rsp+F8h] [rbp-8h]
  SIZE_T NumberOfBytes; // [rsp+FCh] [rbp-4h]
  wchar_t Dst[128]; // [rsp+1F0h] [rbp+F0h] BYREF

  v44 = 0LL;
  KeyHandle = 0LL;
  PoolWithTag = 0LL;
  v34 = 0LL;
  Handle = 0LL;
  v43 = 0LL;
  v41 = 0LL;
  v7 = a4;
  ResultLength = 0;
  Data = 0;
  v36 = 0;
  v29 = 0;
  Disposition = 0;
  v42 = 0LL;
  P = 0LL;
  *a5 = 0;
  v38 = a4;
  v45 = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  AcpiProfileInformation = CmpOpenDevicesControlSet(a1, &v44, &v45);
  if ( AcpiProfileInformation < 0 )
    goto LABEL_56;
  v10 = v44;
  ObjectAttributes.RootDirectory = v44;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"$&";
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  AcpiProfileInformation = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( AcpiProfileInformation < 0 )
  {
    KeyHandle = 0LL;
  }
  else
  {
    AcpiProfileInformation = CmpGetAcpiProfileInformation(
                               (int)KeyHandle,
                               (int)&P,
                               (int)&v42,
                               (int)Dst,
                               &KeyValueInformation);
    if ( AcpiProfileInformation < 0 )
      goto LABEL_56;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"24";
    ObjectAttributes.RootDirectory = v10;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    AcpiProfileInformation = ZwOpenKey(&v34, 0x20019u, &ObjectAttributes);
    if ( AcpiProfileInformation < 0 )
    {
      v34 = 0LL;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, L"CurrentDockInfo");
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      AcpiProfileInformation = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      if ( AcpiProfileInformation < 0 )
      {
        Handle = 0LL;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, L"DockingState");
        if ( ZwQueryValueKey(
               Handle,
               &DestinationString,
               KeyValueFullInformation,
               &KeyValueInformation,
               0x100u,
               &ResultLength) >= 0
          && v47 == 4 )
        {
          v11 = *(int *)((char *)&KeyValueInformation + v48);
          RtlInitUnicodeString(&DestinationString, L"AcpiSerialNumber");
          if ( ZwQueryValueKey(
                 Handle,
                 &DestinationString,
                 KeyValueFullInformation,
                 &KeyValueInformation,
                 0x100u,
                 &ResultLength) >= 0
            && v47 == 3 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20204D43u);
            if ( !PoolWithTag )
            {
              AcpiProfileInformation = -1073741670;
              goto LABEL_56;
            }
            memmove(PoolWithTag, (char *)&KeyValueInformation + v48, (unsigned int)NumberOfBytes);
          }
          RtlInitUnicodeString(&DestinationString, L"CurrentConfig");
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 KeyValueFullInformation,
                 &KeyValueInformation,
                 0x100u,
                 &ResultLength) >= 0
            && v47 == 4 )
          {
            v12 = *(int *)((char *)&KeyValueInformation + v48);
            AcpiProfileInformation = CmpFilterAcpiDockingState(
                                       (_DWORD)a1,
                                       v11,
                                       (_DWORD)PoolWithTag,
                                       v12,
                                       (__int64)P,
                                       (__int64)v42);
            if ( AcpiProfileInformation < 0 )
              goto LABEL_56;
            v13 = a2(P, &v36, 0LL);
            AcpiProfileInformation = v13;
            if ( v36 == -1 )
              goto LABEL_22;
            if ( v13 < 0 )
              goto LABEL_56;
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)L"\"$";
            ObjectAttributes.RootDirectory = v10;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            AcpiProfileInformation = ZwOpenKey(&v41, 0x20019u, &ObjectAttributes);
            if ( AcpiProfileInformation < 0 )
            {
              v41 = 0LL;
LABEL_22:
              v7 = v38;
              goto LABEL_23;
            }
            v14 = 32LL * v36;
            v15 = *(_DWORD *)((char *)P + v14 + 32);
            v16 = *(_DWORD *)((char *)P + v14 + 28);
            v29 = v16;
            if ( (v15 & 8) != 0 )
            {
              AcpiProfileInformation = CmpMoveBiosAliasTable(KeyHandle, Handle, v12, v16, Dst);
              if ( AcpiProfileInformation < 0 )
                goto LABEL_56;
              v16 = v29;
            }
            if ( (v15 & 4) == 0 && v16 == v12 )
              goto LABEL_18;
            v26 = Handle;
            *a5 = 1;
            ZwClose(v26);
            Handle = 0LL;
            if ( (v15 & 4) != 0 )
            {
              LOWORD(Length) = *a1;
              v27 = CmpCloneHwProfile(KeyHandle, v41, v34, v29, Length, &v34, &v29);
            }
            else
            {
              ZwClose(v34);
              swprintf_s(Dst, 0x80uLL, L"%04d", v29);
              RtlInitUnicodeString(&DestinationString, Dst);
              ObjectAttributes.RootDirectory = v41;
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = &DestinationString;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              v27 = ZwOpenKey(&v34, 0x20019u, &ObjectAttributes);
            }
            AcpiProfileInformation = v27;
            if ( v27 < 0 )
            {
              v34 = 0LL;
              goto LABEL_22;
            }
            RtlInitUnicodeString(&DestinationString, L"CurrentDockInfo");
            ObjectAttributes.RootDirectory = KeyHandle;
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            AcpiProfileInformation = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
            if ( AcpiProfileInformation < 0 )
            {
              Handle = 0LL;
              goto LABEL_22;
            }
            RtlInitUnicodeString(&DestinationString, L"CurrentConfig");
            if ( ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &v29, 4u) >= 0 )
            {
LABEL_18:
              Data = *a1;
              RtlInitUnicodeString(&DestinationString, L"DockingState");
              ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
              RtlInitUnicodeString(&DestinationString, L"AcpiSerialNumber");
              AcpiProfileInformation = ZwSetValueKey(Handle, &DestinationString, 0, 3u, a1 + 2, a1[1]);
              if ( (v15 & 2) == 0 )
                AcpiProfileInformation = CmpAddAcpiAliasEntry(KeyHandle, a1, v29, Dst);
              if ( v29 != v12 )
              {
                ObjectAttributes.Length = 48;
                ObjectAttributes.ObjectName = (PUNICODE_STRING)L"24";
                ObjectAttributes.RootDirectory = v10;
                ObjectAttributes.Attributes = 832;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                ZwCreateKey(&v43, 0x20u, &ObjectAttributes, 0, 0LL, 8u, &Disposition);
                *(_QWORD *)&DestinationString.Length = 0x1000000LL;
                DestinationString.Buffer = Dst;
                RtlUnicodeStringPrintf(
                  &DestinationString,
                  L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\Hardware Profiles\\%04d",
                  &v45,
                  v29);
                AcpiProfileInformation = ZwSetValueKey(
                                           v43,
                                           &CmSymbolicLinkValueName,
                                           0,
                                           6u,
                                           DestinationString.Buffer,
                                           DestinationString.Length);
              }
              goto LABEL_22;
            }
          }
          AcpiProfileInformation = -1073741492;
          goto LABEL_56;
        }
        AcpiProfileInformation = -1073741492;
      }
    }
  }
LABEL_23:
  if ( AcpiProfileInformation >= 0 )
  {
    *v7 = v34;
    goto LABEL_25;
  }
LABEL_56:
  if ( v34 )
    ZwClose(v34);
LABEL_25:
  if ( v43 )
    ZwClose(v43);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v41 )
    ZwClose(v41);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  v17 = P;
  if ( P )
  {
    v18 = 0;
    Data = 0;
    if ( *((_DWORD *)P + 1) )
    {
      v19 = 0LL;
      do
      {
        v20 = 8 * v19;
        if ( *(_QWORD *)&v17[v20 + 4] )
        {
          ExFreePoolWithTag(*(PVOID *)&v17[v20 + 4], 0);
          v18 = Data;
          v17 = P;
        }
        Data = ++v18;
        v19 = v18;
      }
      while ( v18 < v17[1] );
    }
    ExFreePoolWithTag(v17, 0);
  }
  v21 = v42;
  if ( v42 )
  {
    v22 = 0;
    Data = 0;
    if ( *((_DWORD *)v42 + 1) )
    {
      v23 = 0LL;
      do
      {
        v24 = 3 * (v23 + 1);
        if ( *(_QWORD *)&v21[2 * v24] )
        {
          ExFreePoolWithTag(*(PVOID *)&v21[2 * v24], 0);
          v22 = Data;
          v21 = v42;
        }
        Data = ++v22;
        v23 = v22;
      }
      while ( v22 < v21[1] );
    }
    ExFreePoolWithTag(v21, 0);
  }
  return (unsigned int)AcpiProfileInformation;
}
