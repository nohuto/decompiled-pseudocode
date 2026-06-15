/*
 * XREFs of ??9?$_Flist_unchecked_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@std@@QEBA_NU_Default_sentinel@1@@Z @ 0x18002E398
 * Callers:
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18002D9A0 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ?GetDuckingManagerGain@CAudioSession@@MEAAXPEAMPEA_J@Z @ 0x1800381A0 (-GetDuckingManagerGain@CAudioSession@@MEAAXPEAMPEA_J@Z.c)
 *     ?GetDuckingState@CAudioSession@@QEAAJPEAM@Z @ 0x1800C8690 (-GetDuckingState@CAudioSession@@QEAAJPEAM@Z.c)
 *     ?CaptureState@CVADServer@@QEAAXXZ @ 0x1800DB9D4 (-CaptureState@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_Flist_unchecked_const_iterator<std::_Flist_val<std::_Flist_simple_types<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>>,std::_Iterator_base0>::operator!=(
        _QWORD *a1)
{
  return *a1 != 0LL;
}
