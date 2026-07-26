/*
 * XREFs of netsetupEnumerateObjectIds__lambda_86c1c4c730e7c498c85e738815d56adf___ @ 0x1C0108740
 * Callers:
 *     ndisIfInitializePhase2 @ 0x1C01086E0 (ndisIfInitializePhase2.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D7F8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     _lambda_86c1c4c730e7c498c85e738815d56adf_::operator() @ 0x1C0100B38 (_lambda_86c1c4c730e7c498c85e738815d56adf_--operator().c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01019F4 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C01088B8 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wi.c)
 *     ?netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z @ 0x1C01089B8 (-netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z.c)
 */

__int64 __fastcall netsetupEnumerateObjectIds__lambda_86c1c4c730e7c498c85e738815d56adf_(
        __int64 a1,
        enum NetSetupStoreType a2,
        int a3)
{
  unsigned int v3; // eax
  unsigned int SubkeyName; // edi
  unsigned int v5; // esi
  __int64 i; // rdx
  UNICODE_STRING *v7; // rbx
  PCUNICODE_STRING GuidString; // [rsp+28h] [rbp-E0h] BYREF
  KRegKey Guid[3]; // [rsp+30h] [rbp-D8h] BYREF
  wchar_t v11[256]; // [rsp+48h] [rbp-C0h] BYREF
  int v12; // [rsp+278h] [rbp+170h] BYREF

  v12 = a3;
  Guid[0].m_ptr = 0LL;
  netsetupBuildStorePath(NetSetupObjectTypeInterface, a2, v11);
  v3 = KRegKey::Open(Guid, 8u, v11, 0LL);
  SubkeyName = v3;
  if ( v3 == -1073741772 )
  {
    SubkeyName = 0;
  }
  else if ( !v3 )
  {
    v5 = 0;
    GuidString = 0LL;
    for ( i = 0LL; ; i = v5 )
    {
      SubkeyName = KRegKey::GetSubkeyName(Guid, i, &GuidString);
      if ( SubkeyName == -2147483622 )
        break;
      if ( SubkeyName )
        goto LABEL_13;
      v7 = (UNICODE_STRING *)GuidString;
      *(_OWORD *)&Guid[1].m_ptr = 0LL;
      if ( !RtlGUIDFromString(GuidString, (GUID *)&Guid[1]) )
      {
        SubkeyName = lambda_86c1c4c730e7c498c85e738815d56adf_::operator()(
                       (enum NetSetupStoreType *)&v12,
                       (const struct _GUID *)&Guid[1]);
        if ( SubkeyName )
          goto LABEL_14;
      }
      if ( v7 )
        ExFreePoolWithTag(v7, 0x7274534Bu);
      ++v5;
      GuidString = 0LL;
    }
    SubkeyName = 0;
LABEL_13:
    v7 = (UNICODE_STRING *)GuidString;
LABEL_14:
    if ( v7 )
      ExFreePoolWithTag(v7, 0x7274534Bu);
  }
  if ( Guid[0].m_ptr )
  {
    GuidString = (PCUNICODE_STRING)ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&GuidString, Guid);
  }
  return SubkeyName;
}
