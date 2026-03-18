/*
 * XREFs of ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x1C0022020
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x1C0021FC0 (UpdateTPCurrentActiveState.c)
 *     RIMSetExtendedPointerDeviceProperty @ 0x1C016BAA8 (RIMSetExtendedPointerDeviceProperty.c)
 * Callees:
 *     ?EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z @ 0x1C0022060 (-EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z.c)
 */

void CPTPProcessor::EnvironmentChanged(void)
{
  if ( gpHidInput )
  {
    if ( CBaseInput::_sessionInitialized )
      CBaseInput::EnumDevices(gpHidInput, 0LL, lambda_8b25baf4e42159d6485b143ed09b1133_::_lambda_invoker_cdecl_);
  }
}
