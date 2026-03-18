/*
 * XREFs of CmpReleaseKeyNodeForKcb @ 0x14085F494
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1405CDD00 (CmpEnumerateLayeredKey.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     CmpSetKeySecurity @ 0x14068AE1C (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x14071F748 (CmpCommitDeleteKeyUoW.c)
 *     CmpAssignKeySecurity @ 0x1407BA790 (CmpAssignKeySecurity.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1408696D8 (CmSetKeyFlags.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmpReleaseKeyNodeForKcb(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 16LL))();
}
