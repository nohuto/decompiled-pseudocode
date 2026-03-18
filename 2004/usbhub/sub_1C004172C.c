/*
 * XREFs of sub_1C004172C @ 0x1C004172C
 * Callers:
 *     sub_1C0042560 @ 0x1C0042560 (sub_1C0042560.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C004172C(struct _KBUGCHECK_REASON_CALLBACK_RECORD *P)
{
  if ( P )
  {
    KeDeregisterBugCheckReasonCallback(P);
    ExFreePoolWithTag(P, 0);
  }
}
