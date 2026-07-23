/*
 * XREFs of CmGetKCBCacheSecurity @ 0x1406DECD0
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x140661B1C (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1406DEBC0 (CmpGetSecurityCacheEntryForKcbStack.c)
 * Callees:
 *     CmEqualTrans @ 0x14066440C (CmEqualTrans.c)
 *     CmListGetPrevElement @ 0x140768C48 (CmListGetPrevElement.c)
 */

__int64 __fastcall CmGetKCBCacheSecurity(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rbp
  __int64 PrevElement; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 88);
  if ( !a2 )
    return *(_QWORD *)(a1 + 88);
  v7 = a1 + 208;
  v11 = 0LL;
  PrevElement = CmListGetPrevElement(a1 + 208, &v11, a3, a4);
  if ( !PrevElement )
    return v4;
  while ( !CmEqualTrans(*(_QWORD *)(PrevElement + 56), a2) || *(_DWORD *)(PrevElement + 68) != 9 )
  {
    PrevElement = CmListGetPrevElement(v7, &v11, v9, v10);
    if ( !PrevElement )
      return v4;
  }
  return *(_QWORD *)(PrevElement + 88);
}
