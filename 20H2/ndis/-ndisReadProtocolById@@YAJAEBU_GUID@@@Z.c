/*
 * XREFs of ?ndisReadProtocolById@@YAJAEBU_GUID@@@Z @ 0x1C0125420
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D7F8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ??1ProtocolBindProperties@@QEAA@XZ @ 0x1C00AC364 (--1ProtocolBindProperties@@QEAA@XZ.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0100DE4 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01019F4 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0101B00 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C01020D8 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ?append@?$KArray@UProtocolBindProperties@@$00@Rtl@@QEAA_N$$QEAUProtocolBindProperties@@@Z @ 0x1C0123FCC (-append@-$KArray@UProtocolBindProperties@@$00@Rtl@@QEAA_N$$QEAUProtocolBindProperties@@@Z.c)
 *     ndisBlowStringListIntoAtoms @ 0x1C0124640 (ndisBlowStringListIntoAtoms.c)
 */

__int64 __fastcall ndisReadProtocolById(const struct _GUID *a1)
{
  struct _GUID v1; // xmm0
  unsigned int v2; // ebx
  void **m_ptr; // [rsp+30h] [rbp-D0h] BYREF
  KRegKey v5; // [rsp+38h] [rbp-C8h] BYREF
  NTSTATUS (__stdcall *v6)(HANDLE); // [rsp+40h] [rbp-C0h] BYREF
  struct _GUID v7; // [rsp+50h] [rbp-B0h] BYREF
  void *v8; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v9[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v10; // [rsp+70h] [rbp-90h]
  _DWORD v11[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v12; // [rsp+80h] [rbp-80h]
  bool v13; // [rsp+88h] [rbp-78h] BYREF
  int v14; // [rsp+8Ch] [rbp-74h]
  wchar_t Dst[256]; // [rsp+90h] [rbp-70h] BYREF

  v1 = *a1;
  v8 = 0LL;
  v9[0] = 0;
  v9[1] = 0;
  v10 = 0LL;
  v11[0] = 0;
  v11[1] = 0;
  v12 = 0LL;
  v14 = 0;
  v5.m_ptr = 0LL;
  v13 = 0;
  v7 = v1;
  netsetupBuildObjectPath(4LL, a1, 0, PropertyBag, Dst);
  v2 = KRegKey::Open(&v5, 1u, Dst, 0LL);
  if ( !v2 )
  {
    m_ptr = (void **)&v5;
    v2 = ndisBlowStringListIntoAtoms(&m_ptr, (const struct _NETSETUPPROPKEY *)&unk_1C00D35B8, (__int64)v9);
    if ( !v2 )
    {
      v2 = ndisBlowStringListIntoAtoms(&m_ptr, (const struct _NETSETUPPROPKEY *)&unk_1C00D34E0, (__int64)v11);
      if ( !v2 )
      {
        v2 = NetSetupPropertyBag::ReadString(
               (NetSetupPropertyBag *)&m_ptr,
               (const struct _NETSETUPPROPKEY *)&unk_1C00D3618,
               &v8);
        if ( !v2 )
        {
          v2 = NetSetupPropertyBag::ReadBoolean(&m_ptr, (const struct _NETSETUPPROPKEY *)&unk_1C00D35A0, &v13);
          if ( !v2 )
          {
            if ( Rtl::KArray<ProtocolBindProperties,1>::append((__int64)qword_1C00E45D8 + 24, (__int64)&v7) )
              v2 = 0;
            else
              v2 = -1073741670;
          }
        }
      }
    }
  }
  if ( v5.m_ptr )
  {
    m_ptr = (void **)v5.m_ptr;
    v6 = ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v6, &m_ptr);
  }
  ProtocolBindProperties::~ProtocolBindProperties((ProtocolBindProperties *)&v7);
  return v2;
}
