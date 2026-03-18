/*
 * XREFs of CmListGetPrevElement @ 0x1406D5A2C
 * Callers:
 *     CmGetKCBCacheSecurity @ 0x1405F3B88 (CmGetKCBCacheSecurity.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405F3F40 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmGetKeyFlags @ 0x1406E26E0 (CmGetKeyFlags.c)
 *     CmGetKeyLastWriteTime @ 0x140703198 (CmGetKeyLastWriteTime.c)
 *     CmpQueryKeyDataFromNode @ 0x140703360 (CmpQueryKeyDataFromNode.c)
 *     CmpUndoDeleteKeyForTrans @ 0x1407272EC (CmpUndoDeleteKeyForTrans.c)
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
