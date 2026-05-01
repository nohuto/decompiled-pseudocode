/*
 * XREFs of ??$GetImplementedIIDS@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIToastCenterExperienceManager@5678@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIHolographicExperienceExtension@Holographic@678@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIToastCenterExperienceManager@5678@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIHolographicExperienceExtension@Holographic@678@UIInputHostLayoutChanges@@@123@PEAKPEAPEAU_GUID@@@Z @ 0x1801C0C4C
 * Callers:
 *     ?GetIids@CToastCenterExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801C27F0 (-GetIids@CToastCenterExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::GetImplementedIIDS<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IToastCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension,IInputHostLayoutChanges>>(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  GUID *v5; // rax

  *a3 = 0LL;
  *a2 = 0;
  v5 = (GUID *)CoTaskMemAlloc(0x90uLL);
  if ( !v5 )
    return 2147942414LL;
  *v5 = GUID_fd8022e5_1099_53f9_b49a_b39bf3f15861;
  v5[1] = GUID_00000038_0000_0000_c000_000000000046;
  v5[2] = GUID_8b6ebc6f_30f2_401b_a050_9f0b7f35f35d;
  v5[3] = GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2;
  v5[4] = GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0;
  v5[5] = GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270;
  v5[6] = GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e;
  v5[7] = GUID_8397449b_59a3_4c1d_868d_68f27513cee4;
  v5[8] = GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e;
  *a2 = 9;
  *a3 = v5;
  return 0LL;
}
