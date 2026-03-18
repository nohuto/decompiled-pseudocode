/*
 * XREFs of ?NotifyISMPenButtonYieldSettingChange@@YGXXZ @ 0xF0400
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

void __stdcall NotifyISMPenButtonYieldSettingChange()
{
  _DWORD v0[2]; // [esp+0h] [ebp-8h] BYREF

  v0[0] = 2;
  v0[1] = ((int)*(&_gpdwCPUserPreferencesMask + 1) & 0x200) == 0;
  SendMessageTo(17, v0, 8);
}
