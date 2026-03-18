/*
 * XREFs of EtwpCovSampModuleCleanup @ 0x140940A68
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x14093EC10 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampContextPruneModules @ 0x14093FAC4 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampContextRemoveAndFreeModule @ 0x14093FFD4 (EtwpCovSampContextRemoveAndFreeModule.c)
 * Callees:
 *     EtwpCovSampModuleNameInfoCleanup @ 0x140940C08 (EtwpCovSampModuleNameInfoCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCovSampModuleCleanup(__int64 a1)
{
  _QWORD *v2; // rcx
  void *v3; // rcx

  v2 = (_QWORD *)(a1 + 104);
  if ( *v2 )
  {
    EtwpCovSampModuleNameInfoCleanup(v2);
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_WORD *)(a1 + 120) = 0;
  }
  v3 = *(void **)(a1 + 48);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_DWORD *)(a1 + 56) = 0;
  }
}
