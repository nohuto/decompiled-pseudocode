/*
 * XREFs of ?CurrentIncludedLampStates@HidLampRangeUpdateReportBuilder@@QEAAIXZ @ 0x1800A9598
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800A1628 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HidLampRangeUpdateReportBuilder::CurrentIncludedLampStates(HidLampRangeUpdateReportBuilder *this)
{
  if ( *((_BYTE *)this + 16) )
    return (unsigned int)(*((_DWORD *)this + 7) - *((_DWORD *)this + 6) + 1);
  else
    return 0LL;
}
