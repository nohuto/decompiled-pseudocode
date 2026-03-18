/*
 * XREFs of KiMayStealStandbyThread @ 0x140266540
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x140265FF0 (KiSearchForNewThreadOnProcessor.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiMayStealStandbyThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  return *(_BYTE *)(a1 + 33209) == *(_BYTE *)(a2 + 33209)
      && (v2 = *(_QWORD *)(a1 + 16)) != 0
      && v2 != *(_QWORD *)(a1 + 24)
      && **(_BYTE **)(a1 + 56) >= 16;
}
