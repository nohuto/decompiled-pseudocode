/*
 * XREFs of ?CitpInvalidateAllWeakReferences@@YAXXZ @ 0x1C01FF520
 * Callers:
 *     ?CitpResetTracking@@YAJXZ @ 0x1C01FFE88 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C00267C8 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1C006B474 (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 */

void CitpInvalidateAllWeakReferences(void)
{
  __int64 i; // rbx
  __int64 v1; // rcx

  for ( i = gppiList; i; i = *(_QWORD *)(i + 376) )
  {
    if ( CitpProcessInfoIsValid(*(struct _CIT_PROCESS **)(i + 928)) )
    {
      *(_DWORD *)(v1 + 24) = 0;
      CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)(*(_QWORD *)(i + 928) + 16LL));
    }
  }
}
