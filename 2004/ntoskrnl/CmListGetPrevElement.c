/*
 * XREFs of CmListGetPrevElement @ 0x140654590
 * Callers:
 *     CmGetKCBCacheSecurity @ 0x1405E7754 (CmGetKCBCacheSecurity.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405ECE00 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmGetKeyLastWriteTime @ 0x1406543D4 (CmGetKeyLastWriteTime.c)
 *     CmpQueryKeyDataFromNode @ 0x140670220 (CmpQueryKeyDataFromNode.c)
 *     CmGetKeyFlags @ 0x140710410 (CmGetKeyFlags.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140719300 (CmpUndoDeleteKeyForTrans.c)
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
