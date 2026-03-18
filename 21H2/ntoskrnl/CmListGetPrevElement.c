/*
 * XREFs of CmListGetPrevElement @ 0x140721F88
 * Callers:
 *     CmpGetEffectiveCellType @ 0x140657A88 (CmpGetEffectiveCellType.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140657ADC (CmpUndoDeleteKeyForTransEx.c)
 *     CmGetKeyLastWriteTime @ 0x1406A50C8 (CmGetKeyLastWriteTime.c)
 *     CmGetKeyFlags @ 0x1406EB534 (CmGetKeyFlags.c)
 *     CmGetKCBCacheSecurity @ 0x140721D00 (CmGetKCBCacheSecurity.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpQueryKeyDataFromNode @ 0x1407C3490 (CmpQueryKeyDataFromNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmListGetPrevElement(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8

  v2 = *a2;
  if ( !*a2 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    *a2 = v2;
  }
  if ( a1 == v2 )
    return 0LL;
  *a2 = *(_QWORD *)(v2 + 8);
  return v2 - 32;
}
