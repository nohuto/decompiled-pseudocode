/*
 * XREFs of _lambda_86c1c4c730e7c498c85e738815d56adf_::operator() @ 0x1C0100BCC
 * Callers:
 *     netsetupEnumerateObjectIds__lambda_86c1c4c730e7c498c85e738815d56adf___ @ 0x1C01087D0 (netsetupEnumerateObjectIds__lambda_86c1c4c730e7c498c85e738815d56adf___.c)
 * Callees:
 *     WPP_RECORDER_SF_Sd @ 0x1C0023A9C (WPP_RECORDER_SF_Sd.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D5B8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0101A88 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C010216C (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C01056C4 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 */

__int64 __fastcall lambda_86c1c4c730e7c498c85e738815d56adf_::operator()(
        enum NetSetupStoreType *a1,
        const struct _GUID *a2)
{
  int v4; // eax
  int v5; // eax
  char v7[4]; // [rsp+30h] [rbp-D0h]
  char v8[4]; // [rsp+30h] [rbp-D0h]
  KRegKey v9; // [rsp+40h] [rbp-C0h] BYREF
  KRegKey v10; // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall *v11[2])(_QWORD); // [rsp+50h] [rbp-B0h] BYREF
  wchar_t Dst[256]; // [rsp+60h] [rbp-A0h] BYREF

  netsetupBuildObjectPath(NetSetupObjectTypeInterface, a2, *a1, PropertyBag, Dst);
  v10.m_ptr = 0LL;
  v4 = KRegKey::Open(&v10, 1u, Dst, 0LL);
  if ( v4 >= 0 )
  {
    netsetupBuildObjectPath(NetSetupObjectTypeInterface, a2, *a1, Writeback, Dst);
    v9.m_ptr = 0LL;
    v5 = KRegKey::Open(&v9, 1u, Dst, 0LL);
    if ( (int)(v5 + 0x80000000) < 0 || v5 == -1073741772 )
    {
      ndisLoadNetworkInterfaceFromPersistedState(a2, &v10, &v9);
    }
    else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v8 = v5;
      WPP_RECORDER_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x16u,
        0x11u,
        (struct _GUID *)&WPP_60f1718a360437c4e49774f56675e7c4_Traceguids,
        Dst,
        *(_DWORD *)v8);
    }
    if ( v9.m_ptr )
    {
      v11[0] = (__int64 (__fastcall *)(_QWORD))ZwClose;
      wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>(v11, &v9);
    }
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = v4;
    WPP_RECORDER_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0x16u,
      0x10u,
      (struct _GUID *)&WPP_60f1718a360437c4e49774f56675e7c4_Traceguids,
      Dst,
      *(_DWORD *)v7);
  }
  if ( v10.m_ptr )
  {
    v11[0] = (__int64 (__fastcall *)(_QWORD))v10.m_ptr;
    v9.m_ptr = ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>(&v9, v11);
  }
  return 0LL;
}
