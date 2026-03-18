/*
 * XREFs of CmpFreeExtraParameter @ 0x1405D54E8
 * Callers:
 *     VrpPostOpenOrCreate @ 0x1405D1A20 (VrpPostOpenOrCreate.c)
 *     VrpPreOpenOrCreate @ 0x1405D1D10 (VrpPreOpenOrCreate.c)
 *     CmpCleanupParseContext @ 0x14060C8A0 (CmpCleanupParseContext.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140268308 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

void __fastcall CmpFreeExtraParameter(_QWORD *a1)
{
  void (__fastcall *v1)(_QWORD *, _QWORD *); // rax

  v1 = (void (__fastcall *)(_QWORD *, _QWORD *))a1[4];
  if ( v1 )
    v1(a1 + 2, a1 + 6);
  CmpFreeTransientPoolWithTag(a1, 0x50454D43u);
}
