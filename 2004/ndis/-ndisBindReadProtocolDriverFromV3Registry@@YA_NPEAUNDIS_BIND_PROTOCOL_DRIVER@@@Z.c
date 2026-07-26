/*
 * XREFs of ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C01014F8
 * Callers:
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z @ 0x1C0100B04 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D7F8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01019F4 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0101B00 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C01020D8 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     KRegKey::QueryValueBlob__lambda_e39947f20d62f6dadaee29d84cf27eb0___ @ 0x1C0102254 (KRegKey--QueryValueBlob__lambda_e39947f20d62f6dadaee29d84cf27eb0___.c)
 */

char __fastcall ndisBindReadProtocolDriverFromV3Registry(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  __int64 v2; // rdx
  char v3; // bl
  const wchar_t *v4; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  NTSTATUS v7; // r8d
  Rtl::KString *value; // rdx
  bool v10[8]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  __int64 (__fastcall *m_ptr)(_QWORD); // [rsp+48h] [rbp-C0h] BYREF
  __int128 v13; // [rsp+50h] [rbp-B8h] BYREF
  KRegKey v14; // [rsp+60h] [rbp-A8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  struct _GUID v16; // [rsp+98h] [rbp-70h] BYREF
  wchar_t Dst[256]; // [rsp+A8h] [rbp-60h] BYREF

  a1->ProtocolBindFlags = 0;
  KeyHandle = 0LL;
  v2 = 0x7FFFLL;
  v3 = 1;
  v4 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
  v5 = 2LL;
  v13 = 0LL;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v2;
  }
  while ( v2 );
  v6 = (0x7FFF - v2) & -(__int64)(v2 != 0);
  v7 = v2 == 0 ? 0xC000000D : 0;
  if ( v2 )
  {
    *((_QWORD *)&v13 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
    LOWORD(v13) = 2 * v6;
    WORD1(v13) = 2 * v6 + 2;
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v13;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  }
  if ( v7 < 0
    || (value = a1->Name.__ptr_.__value_,
        v16 = 0LL,
        (int)KRegKey::QueryValueBlob__lambda_e39947f20d62f6dadaee29d84cf27eb0___(&KeyHandle, value, &v16, v5) < 0) )
  {
    v3 = 0;
  }
  else
  {
    netsetupBuildObjectPath(NetSetupObjectTypeProtocolDriver, &v16, System, PropertyBag, Dst);
    v14.m_ptr = 0LL;
    if ( (int)KRegKey::Open(&v14, 1u, Dst, 0LL) < 0
      || (v10[0] = 0,
          m_ptr = (__int64 (__fastcall *)(_QWORD))&v14,
          (unsigned int)NetSetupPropertyBag::ReadBoolean(
                          (NetSetupPropertyBag *)&m_ptr,
                          (const struct _NETSETUPPROPKEY *)&unk_1C00CC748,
                          v10)) )
    {
      v3 = 0;
    }
    else if ( !v10[0] )
    {
      a1->ProtocolBindFlags |= 1u;
    }
    if ( v14.m_ptr )
    {
      m_ptr = (__int64 (__fastcall *)(_QWORD))v14.m_ptr;
      *(_QWORD *)&v13 = ZwClose;
      wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v13, &m_ptr);
    }
  }
  if ( KeyHandle )
  {
    *(_QWORD *)&v13 = KeyHandle;
    m_ptr = (__int64 (__fastcall *)(_QWORD))ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>(&m_ptr, &v13);
  }
  return v3;
}
