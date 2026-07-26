/*
 * XREFs of ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C0122AD0
 * Callers:
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C010A25C (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Sd @ 0x1C0023A9C (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_S @ 0x1C00332A0 (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D5B8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0101A88 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C010216C (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C0122C38 (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 */

bool __fastcall ndisBindReadFilterDriverFromV2Registry(struct NDIS_BIND_FILTER_DRIVER *a1)
{
  int v2; // eax
  bool v3; // bl
  char v5[4]; // [rsp+30h] [rbp-D0h]
  KRegKey v6; // [rsp+40h] [rbp-C0h] BYREF
  NTSTATUS (__stdcall *v7)(HANDLE); // [rsp+48h] [rbp-B8h] BYREF
  wchar_t Dst[256]; // [rsp+50h] [rbp-B0h] BYREF

  netsetupBuildObjectPath(3LL, &a1->Guid, 0, KernelSummary, Dst);
  v6.m_ptr = 0LL;
  v2 = KRegKey::Open(&v6, 1u, Dst, 0LL);
  if ( v2 >= 0 )
  {
    v3 = ndisBindReadFilterDriverSettingsFromV2Registry(a1, &v6);
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
          0xDu,
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
        0xEu,
        (struct _GUID *)&WPP_f6ee4bdc0fdd3b51b82310b53c412aee_Traceguids,
        Dst,
        *(_DWORD *)v5);
    }
    v3 = 0;
  }
  if ( v6.m_ptr )
  {
    v7 = ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v7, &v6);
  }
  return v3;
}
