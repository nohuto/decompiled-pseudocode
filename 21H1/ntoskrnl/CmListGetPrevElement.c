/*
 * XREFs of CmListGetPrevElement @ 0x140658EF0
 * Callers:
 *     CmpQueryKeyDataFromNode @ 0x1405F8180 (CmpQueryKeyDataFromNode.c)
 *     CmGetKCBCacheSecurity @ 0x14061CD74 (CmGetKCBCacheSecurity.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140622420 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmGetKeyLastWriteTime @ 0x140658D34 (CmGetKeyLastWriteTime.c)
 *     CmGetKeyFlags @ 0x1406EC930 (CmGetKeyFlags.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140716F70 (CmpUndoDeleteKeyForTrans.c)
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
