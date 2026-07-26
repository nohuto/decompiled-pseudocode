/*
 * XREFs of ndisBindReadFilterDriverFromV3Registry @ 0x1C010A298
 * Callers:
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C010A25C (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Sd @ 0x1C0023A9C (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_S @ 0x1C00332A0 (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D5B8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ndisBindReadFilterDriverSettingsFromV3Registry @ 0x1C01017B0 (ndisBindReadFilterDriverSettingsFromV3Registry.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0101A88 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C010216C (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 */

bool __fastcall ndisBindReadFilterDriverFromV3Registry(__int64 a1)
{
  int v2; // eax
  bool FilterDriverSettingsFromV3Registry; // bl
  char v5[4]; // [rsp+30h] [rbp-D0h]
  KRegKey v6; // [rsp+40h] [rbp-C0h] BYREF
  void *m_ptr; // [rsp+48h] [rbp-B8h] BYREF
  NTSTATUS (__stdcall *v8)(HANDLE); // [rsp+50h] [rbp-B0h] BYREF
  wchar_t Dst[256]; // [rsp+60h] [rbp-A0h] BYREF

  netsetupBuildObjectPath(3LL, (const struct _GUID *)(a1 + 24), 0, PropertyBag, Dst);
  v6.m_ptr = 0LL;
  v2 = KRegKey::Open(&v6, 1u, Dst, 0LL);
  if ( v2 >= 0 )
  {
    FilterDriverSettingsFromV3Registry = ndisBindReadFilterDriverSettingsFromV3Registry(a1, (__int64)&v6);
  }
  else
  {
    if ( v2 == -1073741772 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xAu,
          0xAu,
          (struct _GUID *)&WPP_f6ee4bdc0fdd3b51b82310b53c412aee_Traceguids,
          Dst);
    }
    else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v5 = v2;
      WPP_RECORDER_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xAu,
        0xBu,
        (struct _GUID *)&WPP_f6ee4bdc0fdd3b51b82310b53c412aee_Traceguids,
        Dst,
        *(_DWORD *)v5);
    }
    FilterDriverSettingsFromV3Registry = 0;
  }
  if ( v6.m_ptr )
  {
    m_ptr = v6.m_ptr;
    v8 = ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v8, &m_ptr);
  }
  return FilterDriverSettingsFromV3Registry;
}
