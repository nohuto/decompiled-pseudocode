/*
 * XREFs of CmpFreeExtraParameter @ 0x1405CDC74
 * Callers:
 *     VrpPostOpenOrCreate @ 0x1405C9FF0 (VrpPostOpenOrCreate.c)
 *     VrpPreOpenOrCreate @ 0x1405CA2E0 (VrpPreOpenOrCreate.c)
 *     CmpCleanupParseContext @ 0x1405EAEC0 (CmpCleanupParseContext.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14025C5D8 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

void __fastcall CmpFreeExtraParameter(_QWORD *a1)
{
  void (__fastcall *v1)(_QWORD *, _QWORD *); // rax

  v1 = (void (__fastcall *)(_QWORD *, _QWORD *))a1[4];
  if ( v1 )
    v1(a1 + 2, a1 + 6);
  CmpFreeTransientPoolWithTag(a1, 0x50454D43u);
}
