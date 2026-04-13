/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIProcessLockScreenEvent@ContentManagement@@UIProcessStartMenuEvent@5@UIProcessContextualSuggestionsEvent@5@UILayoutResolver@5@UILockScreenRegistrySettingProvider@5@UITaskBarAppProperties@5@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180029060
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800270C0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800270C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 != 820887424
    || a2[1] != *(_DWORD *)&GUID_30edbf80_0d30_4f30_a533_63ab65344500.Data2
    || a2[2] != *(_DWORD *)GUID_30edbf80_0d30_4f30_a533_63ab65344500.Data4
    || a2[3] != *(_DWORD *)&GUID_30edbf80_0d30_4f30_a533_63ab65344500.Data4[4] )
  {
    a1 += 8LL;
    if ( *a2 != -1053577386
      || a2[1] != *(_DWORD *)&GUID_c133af56_71bc_4a53_8020_2af3cc1ba2f5.Data2
      || a2[2] != *(_DWORD *)GUID_c133af56_71bc_4a53_8020_2af3cc1ba2f5.Data4
      || a2[3] != *(_DWORD *)&GUID_c133af56_71bc_4a53_8020_2af3cc1ba2f5.Data4[4] )
    {
      a1 += 8LL;
      if ( *a2 != -1919884319
        || a2[1] != *(_DWORD *)&GUID_8d90e3e1_f1d7_4681_aec8_5c436a53c1d4.Data2
        || a2[2] != *(_DWORD *)GUID_8d90e3e1_f1d7_4681_aec8_5c436a53c1d4.Data4
        || a2[3] != *(_DWORD *)&GUID_8d90e3e1_f1d7_4681_aec8_5c436a53c1d4.Data4[4] )
      {
        a1 += 8LL;
        if ( *a2 != 1938342417
          || a2[1] != *(_DWORD *)&GUID_7388c211_2265_4968_9ad8_ac1df1d7a3a1.Data2
          || a2[2] != *(_DWORD *)GUID_7388c211_2265_4968_9ad8_ac1df1d7a3a1.Data4
          || a2[3] != *(_DWORD *)&GUID_7388c211_2265_4968_9ad8_ac1df1d7a3a1.Data4[4] )
        {
          a1 += 8LL;
          if ( *a2 != 1718283639
            || a2[1] != *(_DWORD *)&GUID_666aed77_8284_49e0_bbe2_7f593622c839.Data2
            || a2[2] != *(_DWORD *)GUID_666aed77_8284_49e0_bbe2_7f593622c839.Data4
            || a2[3] != *(_DWORD *)&GUID_666aed77_8284_49e0_bbe2_7f593622c839.Data4[4] )
          {
            a1 += 8LL;
            if ( *a2 != -458275121
              || a2[1] != *(_DWORD *)&GUID_e4af46cf_a6b0_441e_b0bb_ef482455534d.Data2
              || a2[2] != *(_DWORD *)GUID_e4af46cf_a6b0_441e_b0bb_ef482455534d.Data4
              || a2[3] != *(_DWORD *)&GUID_e4af46cf_a6b0_441e_b0bb_ef482455534d.Data4[4] )
            {
              return 2147500034LL;
            }
          }
        }
      }
    }
  }
  *a3 = a1;
  return 0LL;
}
