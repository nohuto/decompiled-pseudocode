/*
 * XREFs of CmListGetPrevElement @ 0x140768A88
 * Callers:
 *     CmpGetEffectiveCellType @ 0x1405CD2B4 (CmpGetEffectiveCellType.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x1405CD308 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405EC7E0 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmGetKCBCacheSecurity @ 0x1405EF570 (CmGetKCBCacheSecurity.c)
 *     CmGetKeyLastWriteTime @ 0x14066A960 (CmGetKeyLastWriteTime.c)
 *     CmpQueryKeyDataFromNode @ 0x14066AB20 (CmpQueryKeyDataFromNode.c)
 *     CmGetKeyFlags @ 0x1406C2850 (CmGetKeyFlags.c)
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
