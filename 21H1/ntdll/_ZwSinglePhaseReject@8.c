/*
 * XREFs of _ZwSinglePhaseReject@8 @ 0x4B2F44F0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwSinglePhaseReject(int a1, int a2)
{
  return Wow64SystemServiceCall();
}
