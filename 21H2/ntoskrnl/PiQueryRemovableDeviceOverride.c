/*
 * XREFs of PiQueryRemovableDeviceOverride @ 0x1407640C0
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140744650 (PiProcessNewDeviceNode.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1407472B4 (PnpDeviceObjectToDeviceInstance.c)
 *     PipFindDeviceOverrideEntry @ 0x1407643BC (PipFindDeviceOverrideEntry.c)
 *     PnpGetDeviceLocationStrings @ 0x1407658E4 (PnpGetDeviceLocationStrings.c)
 *     PnpOpenFirstMatchingSubKey @ 0x1408A2184 (PnpOpenFirstMatchingSubKey.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiQueryRemovableDeviceOverride(__int64 a1, void *a2, void *a3, bool *a4)
{
  int v4; // r12d
  void *v5; // r14
  bool *v6; // r13
  int DeviceRegProp; // ebx
  char v11; // cl
  int DeviceOverrideEntry; // eax
  char v13; // dl
  char v14; // r8
  __int64 v15; // rcx
  int *v16; // r12
  int v17; // esi
  unsigned int v18; // eax
  unsigned int i; // r15d
  PVOID PoolWithTag; // rax
  __int64 v21; // rax
  char v22; // cl
  int v24; // eax
  int v25; // eax
  PVOID v26; // rax
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+60h] [rbp-A0h]
  __int128 v31; // [rsp+68h] [rbp-98h]
  HANDLE v32[2]; // [rsp+78h] [rbp-88h]
  HANDLE Handle; // [rsp+88h] [rbp-78h] BYREF
  int v34; // [rsp+90h] [rbp-70h] BYREF
  ULONG ResultLength; // [rsp+94h] [rbp-6Ch] BYREF
  PVOID P; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v37[2]; // [rsp+A0h] [rbp-60h] BYREF
  bool *v38; // [rsp+A8h] [rbp-58h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  char KeyValueInformation[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v41; // [rsp+E4h] [rbp-1Ch]
  int v42; // [rsp+E8h] [rbp-18h]
  int v43; // [rsp+ECh] [rbp-14h]

  Handle = 0LL;
  v4 = 0;
  ResultLength = 0;
  v5 = 0LL;
  P = 0LL;
  v34 = 0;
  v6 = a4;
  NumberOfBytes = 0LL;
  v38 = a4;
  DeviceRegProp = -1073741772;
  v30 = 0;
  ValueName = 0LL;
  if ( PnpDeviceOverrideHashList )
  {
    v11 = *(_BYTE *)(a1 + 680);
    DeviceOverrideEntry = -1073741772;
    v13 = v11;
    v31 = 0LL;
    *(_OWORD *)v32 = 0LL;
    if ( (v11 & 1) == 0 )
    {
      LODWORD(v31) = 2490404;
      v14 = v11;
      *((_QWORD *)&v31 + 1) = L"ChildLocationPaths";
      if ( a2 )
      {
        DeviceOverrideEntry = PipFindDeviceOverrideEntry(a2);
        v13 = *(_BYTE *)(a1 + 680);
        v14 = v13;
      }
      v11 = v14;
      if ( DeviceOverrideEntry >= 0 )
        goto LABEL_40;
      if ( a3 )
      {
        DeviceOverrideEntry = PipFindDeviceOverrideEntry(a3);
        v11 = *(_BYTE *)(a1 + 680);
        v13 = v11;
      }
      if ( DeviceOverrideEntry >= 0 )
      {
LABEL_40:
        ZwClose(v32[0]);
        *(_BYTE *)(a1 + 680) |= 4u;
        v11 = *(_BYTE *)(a1 + 680);
        v13 = v11;
      }
    }
    if ( (v11 & 3) != 1 )
    {
      LODWORD(v31) = 1835034;
      *((_QWORD *)&v31 + 1) = L"LocationPaths";
      if ( a2 )
      {
        v24 = PipFindDeviceOverrideEntry(a2);
        v11 = *(_BYTE *)(a1 + 680);
        DeviceRegProp = v24;
        v13 = v11;
      }
      if ( DeviceRegProp >= 0 )
        goto LABEL_41;
      if ( a3 )
      {
        v25 = PipFindDeviceOverrideEntry(a3);
        v11 = *(_BYTE *)(a1 + 680);
        DeviceRegProp = v25;
        v13 = v11;
      }
      if ( DeviceRegProp >= 0 )
LABEL_41:
        v11 = v13 | 2;
    }
    *(_BYTE *)(a1 + 680) = v11 | 1;
    if ( DeviceRegProp < 0 )
    {
      v15 = *(_QWORD *)(a1 + 16);
      if ( (*(_BYTE *)(v15 + 680) & 5) != 1 )
      {
        LODWORD(v31) = 2490404;
        *((_QWORD *)&v31 + 1) = L"ChildLocationPaths";
        DeviceRegProp = PnpDeviceObjectToDeviceInstance(*(_QWORD *)(v15 + 32), (__int64)&Handle, 131097);
        if ( DeviceRegProp < 0 )
          return (unsigned int)DeviceRegProp;
        v37[0] = 2;
        v16 = v37;
        v17 = 256;
        v37[1] = 3;
        LODWORD(NumberOfBytes) = 256;
        v18 = 256;
        for ( i = 0; i < 2; ++i )
        {
          DeviceRegProp = 0;
          if ( !v5 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v18, 0x6E697050u);
            v17 = NumberOfBytes;
            v5 = PoolWithTag;
            if ( !PoolWithTag )
              DeviceRegProp = -1073741670;
          }
          if ( DeviceRegProp >= 0 )
          {
            DeviceRegProp = CmGetDeviceRegProp(
                              *(__int64 *)&PiPnpRtlCtx,
                              *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL),
                              (__int64)Handle,
                              *v16,
                              (__int64)&NumberOfBytes + 4,
                              (__int64)v5,
                              (__int64)&NumberOfBytes,
                              0);
            if ( DeviceRegProp == -1073741789 )
            {
              ExFreePoolWithTag(v5, 0);
              v26 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6E697050u);
              v17 = NumberOfBytes;
              v5 = v26;
              if ( !v26 )
                DeviceRegProp = -1073741670;
            }
            else if ( DeviceRegProp >= 0 )
            {
              if ( HIDWORD(NumberOfBytes) == 7 )
                DeviceRegProp = PipFindDeviceOverrideEntry(v5);
              else
                DeviceRegProp = -1073741823;
            }
          }
          LODWORD(NumberOfBytes) = v17;
          if ( DeviceRegProp >= 0 )
            break;
          ++v16;
          v18 = v17;
        }
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        ZwClose(Handle);
        v21 = *(_QWORD *)(a1 + 16);
        v22 = *(_BYTE *)(v21 + 680);
        if ( (v22 & 1) == 0 )
        {
          if ( DeviceRegProp >= 0 )
          {
            *(_BYTE *)(v21 + 680) = v22 | 4;
            v21 = *(_QWORD *)(a1 + 16);
          }
          *(_BYTE *)(v21 + 680) |= 1u;
        }
        v6 = v38;
        v4 = v30;
      }
      if ( DeviceRegProp < 0 )
        return (unsigned int)DeviceRegProp;
    }
    KeyHandle = 0LL;
    if ( LODWORD(v32[1]) != 1 )
      goto LABEL_50;
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = v32[0];
    *(_DWORD *)&ValueName.Length = 262146;
    ObjectAttributes.ObjectName = &ValueName;
    ValueName.Buffer = (wchar_t *)L"*";
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    DeviceRegProp = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( DeviceRegProp < 0 )
    {
LABEL_50:
      DeviceRegProp = PnpGetDeviceLocationStrings(a1, &P, &v34);
      if ( DeviceRegProp < 0
        || (DeviceRegProp = PnpOpenFirstMatchingSubKey((PCWSTR)P, &KeyHandle), ExFreePoolWithTag(P, 0),
                                                                               DeviceRegProp < 0) )
      {
        if ( LODWORD(v32[1]) > 1 )
        {
          *(&ObjectAttributes.Length + 1) = 0;
          memset(&ObjectAttributes.Attributes + 1, 0, 20);
          KeyHandle = 0LL;
          ObjectAttributes.RootDirectory = v32[0];
          ObjectAttributes.ObjectName = &ValueName;
          *(_DWORD *)&ValueName.Length = 262146;
          ValueName.Buffer = (wchar_t *)L"*";
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          DeviceRegProp = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        }
      }
    }
    ZwClose(v32[0]);
    if ( DeviceRegProp >= 0 )
    {
      *(_DWORD *)&ValueName.Length = 1310738;
      ValueName.Buffer = L"Removable";
      DeviceRegProp = ZwQueryValueKey(
                        KeyHandle,
                        &ValueName,
                        KeyValuePartialInformation,
                        KeyValueInformation,
                        0x14u,
                        &ResultLength);
      if ( DeviceRegProp >= 0 )
      {
        if ( v41 == 4 && v42 == 4 )
          v4 = v43;
        else
          DeviceRegProp = -1073741823;
      }
      ZwClose(KeyHandle);
      *v6 = v4 != 0;
    }
  }
  return (unsigned int)DeviceRegProp;
}
