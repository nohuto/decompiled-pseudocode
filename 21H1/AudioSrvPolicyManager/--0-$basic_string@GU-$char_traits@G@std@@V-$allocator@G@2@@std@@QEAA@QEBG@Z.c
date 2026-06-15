/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800126C4
 * Callers:
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180010644 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 *     std::_Func_impl_no_alloc__lambda_788b487376d721320aa661d5faa65294__void_::_Do_call @ 0x1800135E0 (std--_Func_impl_no_alloc__lambda_788b487376d721320aa661d5faa65294__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_0f6faf35369883a3f4cbdf25b7153501__void_::_Do_call @ 0x180013870 (std--_Func_impl_no_alloc__lambda_0f6faf35369883a3f4cbdf25b7153501__void_--_Do_call.c)
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180018D2C (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x18001A650 (-GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z.c)
 *     ?GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z @ 0x180034190 (-GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z.c)
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x180034280 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x180034520 (-ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180037044 (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 * Callees:
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x1800146E8 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     memmove_0 @ 0x1800406E7 (memmove_0.c)
 */

_QWORD *__fastcall std::wstring::wstring(_QWORD *a1, _WORD *a2)
{
  unsigned __int64 v3; // rdx
  __int64 v5; // rbx

  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  if ( v3 > 7 )
  {
    std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>();
  }
  else
  {
    v5 = 2 * v3;
    a1[2] = v3;
    memmove_0(a1, a2, 2 * v3);
    *(_WORD *)((char *)a1 + v5) = 0;
  }
  return a1;
}
