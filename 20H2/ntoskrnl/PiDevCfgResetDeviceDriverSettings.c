/*
 * XREFs of PiDevCfgResetDeviceDriverSettings @ 0x14072C408
 * Callers:
 *     PpDevCfgProcessDeviceReset @ 0x14072C1B4 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgConfigureDevice @ 0x140731D80 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x140267E90 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F83B0 (ZwOpenKey.c)
 *     ZwDeleteValueKey @ 0x1403F9C50 (ZwDeleteValueKey.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     _PnpOpenObjectRegKey @ 0x14063FA94 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x14063FDAC (_PnpGetObjectProperty.c)
 *     PnpIsNullGuid @ 0x14064AEA0 (PnpIsNullGuid.c)
 *     _CmOpenDeviceRegKey @ 0x14066D59C (_CmOpenDeviceRegKey.c)
 *     RtlStringFromGUIDEx @ 0x1406FA618 (RtlStringFromGUIDEx.c)
 *     PiDevCfgResetDeviceKeys @ 0x14072C6FC (PiDevCfgResetDeviceKeys.c)
 *     PiDevCfgSetObjectProperty @ 0x14073424C (PiDevCfgSetObjectProperty.c)
 *     _RegRtlDeleteTreeInternal @ 0x140763384 (_RegRtlDeleteTreeInternal.c)
 */

__int64 __fastcall PiDevCfgResetDeviceDriverSettings(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, PGUID Guid)
{
  __int64 *v5; // rbx
  __int64 v8; // rdi
  GUID **v9; // rdi
  __int64 v10; // r12
  NTSTATUS v11; // r15d
  _QWORD *v12; // rdx
  __int64 v13; // rax
  bool v14; // zf
  const WCHAR *v15; // rdx
  NTSTATUS v16; // ebx
  const WCHAR *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  HANDLE v24; // rbx
  __int64 v25; // rcx
  int v26; // eax
  int v27; // [rsp+28h] [rbp-D8h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  int v29; // [rsp+68h] [rbp-98h] BYREF
  __int64 v30; // [rsp+70h] [rbp-90h]
  int v31; // [rsp+78h] [rbp-88h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v33; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-70h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING ValueName; // [rsp+B8h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  __int128 Source2; // [rsp+F8h] [rbp-8h] BYREF

  v5 = (__int64 *)&off_140D2DB90;
  v35 = a4;
  v30 = a1;
  Handle = 0LL;
  KeyHandle = 0LL;
  v8 = 17LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  Source2 = 0LL;
  UnicodeString.Buffer = 0LL;
  v33 = 0LL;
  DestinationString = 0LL;
  v29 = 0;
  v31 = 0;
  do
  {
    PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(a2 + 8), 1, *(_QWORD *)(a2 + 16), v27, *v5++, 0, 0LL, 0, 0);
    --v8;
  }
  while ( v8 );
  if ( (int)PnpGetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(a2 + 8),
              1LL,
              *(_QWORD *)(a2 + 16),
              0LL,
              (__int64)&DEVPKEY_Device_BusTypeGuid,
              (__int64)&v29,
              (__int64)&Source2,
              16,
              (__int64)&v31,
              0) < 0
    || v29 != 13 )
  {
    Source2 = 0LL;
  }
  v9 = &off_1409885E8;
  v10 = 2LL;
  v11 = 0;
  do
  {
    v12 = *(v9 - 1);
    if ( !v12 )
    {
      if ( !*v9 || PnpIsNullGuid(&Source2) )
        goto LABEL_24;
      v13 = *(_QWORD *)&(*v9)->Data1 - Source2;
      if ( !v13 )
        v13 = *(_QWORD *)(*v9)->Data4 - *((_QWORD *)&Source2 + 1);
      v14 = v13 == 0;
      goto LABEL_12;
    }
    if ( !a3 )
      goto LABEL_38;
    v22 = *v12 - *a3;
    if ( *v12 == *a3 )
      v22 = v12[1] - a3[1];
    if ( v22 )
    {
LABEL_38:
      if ( !Guid )
        goto LABEL_24;
      v23 = *v12 - *(_QWORD *)&Guid->Data1;
      if ( *v12 == *(_QWORD *)&Guid->Data1 )
        v23 = v12[1] - *(_QWORD *)Guid->Data4;
      v14 = v23 == 0;
LABEL_12:
      if ( !v14 )
        goto LABEL_24;
    }
    if ( (int)CmOpenDeviceRegKey(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(a2 + 8),
                *((_DWORD *)v9 + 2),
                0,
                983103,
                1,
                (__int64)&Handle,
                0LL) < 0 )
      goto LABEL_24;
    v15 = (const WCHAR *)v9[2];
    if ( v15 )
    {
      RtlInitUnicodeString(&DestinationString, v15);
      ObjectAttributes.RootDirectory = Handle;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      KeyHandle = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v16 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      ZwClose(Handle);
      if ( v16 < 0 )
        goto LABEL_24;
      Handle = KeyHandle;
    }
    v17 = (const WCHAR *)v9[3];
    if ( v17 )
    {
      v24 = Handle;
      ValueName = 0LL;
      if ( RtlInitUnicodeStringEx(&ValueName, v17) >= 0 )
        ZwDeleteValueKey(v24, &ValueName);
    }
    else if ( v9[2] )
    {
      if ( *(_QWORD *)&PiPnpRtlCtx && (v18 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
        v19 = *(_QWORD *)(v18 + 8);
      else
        v19 = 0LL;
      RegRtlDeleteTreeInternal(Handle, 0LL, v19, 0LL);
    }
    ZwClose(Handle);
LABEL_24:
    v9 += 5;
    --v10;
  }
  while ( v10 );
  if ( !Guid )
    goto LABEL_26;
  if ( !a3 )
    goto LABEL_49;
  v25 = *(_QWORD *)&Guid->Data1 - *a3;
  if ( *(_QWORD *)&Guid->Data1 == *a3 )
    v25 = *(_QWORD *)Guid->Data4 - a3[1];
  if ( v25 )
  {
LABEL_49:
    v11 = RtlStringFromGUIDEx(Guid, &UnicodeString, 1u);
    if ( v11 >= 0 )
    {
      v26 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)UnicodeString.Buffer, 2u, 131097, 0, (__int64)&v33);
      v20 = v30;
      if ( v26 < 0 )
        goto LABEL_27;
      v11 = PiDevCfgResetDeviceKeys(v30, a2, v33);
      if ( v11 >= 0 )
        goto LABEL_27;
    }
  }
  else
  {
LABEL_26:
    v20 = v30;
LABEL_27:
    if ( a3 && v35 )
      v11 = PiDevCfgResetDeviceKeys(v20, a2, v35);
  }
  RtlFreeAnsiString(&UnicodeString);
  if ( v33 )
    ZwClose(v33);
  return (unsigned int)v11;
}
