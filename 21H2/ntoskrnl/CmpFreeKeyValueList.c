/*
 * XREFs of CmpFreeKeyValueList @ 0x140879164
 * Callers:
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140729760 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpFreeValue @ 0x140660258 (CmpFreeValue.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 */

char __fastcall CmpFreeKeyValueList(ULONG_PTR BugCheckParameter2, _DWORD *a2)
{
  char result; // al
  __int64 v5; // rsi
  __int64 i; // r14
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0xFFFFFFFFLL;
  result = 0;
  if ( *a2 )
  {
    v5 = 0LL;
    for ( i = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                (unsigned int)a2[1],
                &v7); (unsigned int)v5 < *a2; v5 = (unsigned int)(v5 + 1) )
      CmpFreeValue(BugCheckParameter2, *(unsigned int *)(i + 4 * v5));
    result = HvFreeCell(BugCheckParameter2, (unsigned int)a2[1]);
    if ( i )
      return (*(__int64 (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v7);
  }
  return result;
}
