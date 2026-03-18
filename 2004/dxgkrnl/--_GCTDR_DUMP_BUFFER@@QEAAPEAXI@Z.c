/*
 * XREFs of ??_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z @ 0x1C0263C1C
 * Callers:
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02652A0 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrDeleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0265734 (-TdrDeleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ @ 0x1C02643EC (-ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ.c)
 */

CTDR_DUMP_BUFFER *__fastcall CTDR_DUMP_BUFFER::`scalar deleting destructor'(CTDR_DUMP_BUFFER *P)
{
  CTDR_DUMP_BUFFER::ShrinkLastSegment(P);
  if ( P )
    ExFreePoolWithTag(P, 0x52445476u);
  return P;
}
