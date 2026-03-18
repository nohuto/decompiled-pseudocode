/*
 * XREFs of PopPublishPowerButtonState @ 0x1408F49F8
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x140576E40 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     DbgPrintEx @ 0x14037EFE0 (DbgPrintEx.c)
 *     ZwUpdateWnfStateData @ 0x1403FBB50 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopPublishPowerButtonState(_DWORD *a1)
{
  DbgPrintEx(0x92u, 3u, "Power button hold update (down: %d, time: %d ms, sequence: %d)\n", *a1 & 1, *a1 >> 1, a1[1]);
  return ZwUpdateWnfStateData((__int64)&WNF_PO_POWER_BUTTON_STATE, (__int64)a1);
}
