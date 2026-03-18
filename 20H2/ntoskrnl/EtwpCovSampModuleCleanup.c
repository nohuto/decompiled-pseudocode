/*
 * XREFs of EtwpCovSampModuleCleanup @ 0x140947AA8
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x140945C50 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampContextPruneModules @ 0x140946B04 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampContextRemoveAndFreeModule @ 0x140947014 (EtwpCovSampContextRemoveAndFreeModule.c)
 * Callees:
 *     EtwpCovSampModuleNameInfoCleanup @ 0x140947C48 (EtwpCovSampModuleNameInfoCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
