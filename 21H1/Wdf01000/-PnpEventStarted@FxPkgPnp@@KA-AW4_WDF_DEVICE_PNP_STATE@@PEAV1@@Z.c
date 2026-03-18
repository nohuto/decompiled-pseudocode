/*
 * XREFs of ?PnpEventStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007B1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C00019B8 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     IsLoggingEnabledAndNeeded @ 0x1C005FF98 (IsLoggingEnabledAndNeeded.c)
 *     LogDriverInfoStream @ 0x1C0060030 (LogDriverInfoStream.c)
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1C007B42C (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventStarted(FxPkgPnp *This)
{
  FxDevice *m_Device; // rdi
  unsigned __int8 v3; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rsi

  m_Device = This->m_Device;
  This->m_AchievedStart = 1;
  if ( !FxDevice::IsPdo(m_Device) )
  {
    m_Globals = m_Device->m_Globals;
    if ( IsLoggingEnabledAndNeeded(m_Globals) )
      LogDriverInfoStream(m_Globals, m_Device);
  }
  FxPkgPnp::PnpFinishProcessingIrp(This, v3);
  return 314LL;
}
