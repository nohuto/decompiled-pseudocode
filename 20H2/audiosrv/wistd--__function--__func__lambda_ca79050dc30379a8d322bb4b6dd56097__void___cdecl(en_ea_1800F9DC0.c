/*
 * XREFs of wistd::__function::__func__lambda_ca79050dc30379a8d322bb4b6dd56097__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x1800F9DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAudioMirrorEnabledChange@CMonitorManager@@AEAAXXZ @ 0x1800FD164 (-OnAudioMirrorEnabledChange@CMonitorManager@@AEAAXXZ.c)
 *     ?UpdateAudioMirroringEnabled@CMonitorManager@@AEAAJPEA_N@Z @ 0x1800FF914 (-UpdateAudioMirroringEnabled@CMonitorManager@@AEAAJPEA_N@Z.c)
 *     ?UpdateRoutedEndpointId@CMonitorManager@@AEAAXPEA_N@Z @ 0x1800FF9C8 (-UpdateRoutedEndpointId@CMonitorManager@@AEAAXPEA_N@Z.c)
 */

void __fastcall wistd::__function::__func__lambda_ca79050dc30379a8d322bb4b6dd56097__void___cdecl_enum_wil::RegistryChangeKind__::operator()(
        __int64 a1,
        __int64 a2)
{
  CMonitorManager *v3; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  LOBYTE(v4) = 0;
  CMonitorManager::UpdateRoutedEndpointId(*(CMonitorManager **)(a1 + 8), (bool *)&v4);
  v3 = *(CMonitorManager **)(a1 + 8);
  LOBYTE(v4) = 0;
  if ( (int)CMonitorManager::UpdateAudioMirroringEnabled(v3, (bool *)&v4) >= 0 )
  {
    if ( (_BYTE)v4 )
      CMonitorManager::OnAudioMirrorEnabledChange(*(CMonitorManager **)(a1 + 8));
  }
}
