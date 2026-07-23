/*
 * XREFs of CmpReferenceSecurityNode @ 0x1405CCCC8
 * Callers:
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 * Callees:
 *     CmpKeySecurityIncrementReferenceCount @ 0x1403F094C (CmpKeySecurityIncrementReferenceCount.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmpReferenceSecurityNode(ULONG_PTR a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0xFFFFFFFFLL;
  v2 = a2;
  v4 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64 *))(a1 + 8))(a1, a2, &v7);
  v5 = CmpKeySecurityIncrementReferenceCount(v4, a1, v2, 0);
  if ( v5 >= 0 )
  {
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a1 + 16))(a1, &v7);
    v4 = 0LL;
    v5 = 0;
  }
  if ( v4 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a1 + 16))(a1, &v7);
  return (unsigned int)v5;
}
