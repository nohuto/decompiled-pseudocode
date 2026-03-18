/*
 * XREFs of PiQueryRemovableDeviceOverride @ 0x14076AD40
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     PnpGetDeviceLocationStrings @ 0x14074ABF0 (PnpGetDeviceLocationStrings.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x14076E894 (PnpDeviceObjectToDeviceInstance.c)
 *     _CmGetDeviceRegProp @ 0x14077CD90 (_CmGetDeviceRegProp.c)
 *     PipFindDeviceOverrideEntry @ 0x14078A988 (PipFindDeviceOverrideEntry.c)
 *     PnpOpenFirstMatchingSubKey @ 0x140947190 (PnpOpenFirstMatchingSubKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiQueryRemovableDeviceOverride(__int64 a1, void *a2, void *a3, bool *a4)
{
  unsigned int v4; // r12d
  void *Pool2; // r14
  bool *v6; // r13
  int DeviceLocationStrings; // ebx
  char v11; // cl
  int DeviceOverrideEntry; // eax
  char v13; // dl
  char v14; // r8
  __int64 v15; // rcx
  int v16; // eax
  _DWORD *v17; // r13
  unsigned int v18; // edi
  int DeviceRegProp; // eax
  __int64 v20; // rax
  char v21; // cl
  int v23; // eax
  int v24; // eax
  __int64 v25; // rax
  bool v26; // zf
  unsigned int v27; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v31; // [rsp+68h] [rbp-98h]
  HANDLE v32[2]; // [rsp+78h] [rbp-88h]
  unsigned int v33; // [rsp+88h] [rbp-78h]
  int v34; // [rsp+8Ch] [rbp-74h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  PVOID P; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v38[2]; // [rsp+A8h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  bool *v40; // [rsp+E0h] [rbp-20h]
  char KeyValueInformation[4]; // [rsp+E8h] [rbp-18h] BYREF
  int v42; // [rsp+ECh] [rbp-14h]
  int v43; // [rsp+F0h] [rbp-10h]
  unsigned int v44; // [rsp+F4h] [rbp-Ch]

  Handle = 0LL;
  v4 = 0;
  ResultLength = 0;
  Pool2 = 0LL;
  P = 0LL;
  v34 = 0;
  v6 = a4;
  v27 = 0;
  v30 = 0;
  v40 = a4;
  DeviceLocationStrings = -1073741772;
  v33 = 0;
  ValueName = 0LL;
  if ( !PnpDeviceOverrideHashList )
    return (unsigned int)DeviceLocationStrings;
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
      goto LABEL_38;
    if ( a3 )
    {
      DeviceOverrideEntry = PipFindDeviceOverrideEntry(a3);
      v11 = *(_BYTE *)(a1 + 680);
      v13 = v11;
    }
    if ( DeviceOverrideEntry >= 0 )
    {
LABEL_38:
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
      v23 = PipFindDeviceOverrideEntry(a2);
      v11 = *(_BYTE *)(a1 + 680);
      DeviceLocationStrings = v23;
      v13 = v11;
    }
    if ( DeviceLocationStrings >= 0 )
      goto LABEL_39;
    if ( a3 )
    {
      v24 = PipFindDeviceOverrideEntry(a3);
      v11 = *(_BYTE *)(a1 + 680);
      DeviceLocationStrings = v24;
      v13 = v11;
    }
    if ( DeviceLocationStrings >= 0 )
LABEL_39:
      v11 = v13 | 2;
  }
  *(_BYTE *)(a1 + 680) = v11 | 1;
  if ( DeviceLocationStrings >= 0 )
    goto LABEL_46;
  v15 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(v15 + 680) & 5) == 1 )
    return (unsigned int)DeviceLocationStrings;
  LODWORD(v31) = 2490404;
  *((_QWORD *)&v31 + 1) = L"ChildLocationPaths";
  DeviceLocationStrings = PnpDeviceObjectToDeviceInstance(*(_QWORD *)(v15 + 32), &Handle, 131097LL);
  if ( DeviceLocationStrings < 0 )
    return (unsigned int)DeviceLocationStrings;
  v16 = 256;
  v38[0] = 2;
  v27 = 256;
  v17 = v38;
  v18 = 256;
  v38[1] = 3;
  do
  {
    if ( !Pool2 )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, v18, 1852403792LL);
      if ( !Pool2 )
      {
        v18 = v27;
        DeviceLocationStrings = -1073741670;
        v16 = v27;
        goto LABEL_22;
      }
      v16 = v27;
    }
    v18 = v16;
    DeviceRegProp = CmGetDeviceRegProp(
                      PiPnpRtlCtx,
                      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL),
                      (_DWORD)Handle,
                      *v17,
                      (__int64)&v30,
                      (__int64)Pool2,
                      (__int64)&v27,
                      0);
    DeviceLocationStrings = DeviceRegProp;
    if ( DeviceRegProp == -1073741789 )
    {
      ExFreePoolWithTag(Pool2, 0);
      v25 = ExAllocatePool2(256LL, v27, 1852403792LL);
      v18 = v27;
      Pool2 = (void *)v25;
      v26 = v25 == 0;
      v16 = v27;
      if ( v26 )
        DeviceLocationStrings = -1073741670;
    }
    else
    {
      if ( DeviceRegProp >= 0 )
      {
        if ( v30 != 7 )
        {
          v16 = v18;
          DeviceLocationStrings = -1073741823;
          v27 = v18;
          goto LABEL_22;
        }
        DeviceLocationStrings = PipFindDeviceOverrideEntry(Pool2);
      }
      v16 = v18;
      v27 = v18;
      if ( DeviceLocationStrings >= 0 )
        break;
    }
LABEL_22:
    ++v4;
    ++v17;
  }
  while ( v4 < 2 );
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  ZwClose(Handle);
  v20 = *(_QWORD *)(a1 + 16);
  v21 = *(_BYTE *)(v20 + 680);
  if ( (v21 & 1) == 0 )
  {
    if ( DeviceLocationStrings >= 0 )
    {
      *(_BYTE *)(v20 + 680) = v21 | 4;
      v20 = *(_QWORD *)(a1 + 16);
    }
    *(_BYTE *)(v20 + 680) |= 1u;
  }
  if ( DeviceLocationStrings >= 0 )
  {
    v4 = v33;
    v6 = v40;
LABEL_46:
    KeyHandle = 0LL;
    if ( LODWORD(v32[1]) != 1 )
      goto LABEL_50;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = v32[0];
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &ValueName;
    *(_DWORD *)&ValueName.Length = 262146;
    ValueName.Buffer = (wchar_t *)L"*";
    ObjectAttributes.Attributes = 576;
    DeviceLocationStrings = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( DeviceLocationStrings < 0 )
    {
LABEL_50:
      DeviceLocationStrings = PnpGetDeviceLocationStrings(a1, &P, &v34);
      if ( DeviceLocationStrings < 0
        || (DeviceLocationStrings = PnpOpenFirstMatchingSubKey((PCWSTR)P, &KeyHandle),
            ExFreePoolWithTag(P, 0),
            DeviceLocationStrings < 0) )
      {
        if ( LODWORD(v32[1]) > 1 )
        {
          memset(&ObjectAttributes.Attributes + 1, 0, 20);
          KeyHandle = 0LL;
          ObjectAttributes.RootDirectory = v32[0];
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          ObjectAttributes.ObjectName = &ValueName;
          *(_DWORD *)&ValueName.Length = 262146;
          ValueName.Buffer = (wchar_t *)L"*";
          ObjectAttributes.Attributes = 576;
          DeviceLocationStrings = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        }
      }
    }
    ZwClose(v32[0]);
    if ( DeviceLocationStrings >= 0 )
    {
      *(_DWORD *)&ValueName.Length = 1310738;
      ValueName.Buffer = L"Removable";
      DeviceLocationStrings = ZwQueryValueKey(
                                KeyHandle,
                                &ValueName,
                                KeyValuePartialInformation,
                                KeyValueInformation,
                                0x14u,
                                &ResultLength);
      if ( DeviceLocationStrings >= 0 )
      {
        if ( v42 == 4 && v43 == 4 )
          v4 = v44;
        else
          DeviceLocationStrings = -1073741823;
      }
      ZwClose(KeyHandle);
      *v6 = v4 != 0;
    }
  }
  return (unsigned int)DeviceLocationStrings;
}
