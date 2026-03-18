/*
 * XREFs of ZwSetSystemPowerState @ 0x1403F5890
 * Callers:
 *     PopIssueActionRequest @ 0x140761B68 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemPowerState(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
