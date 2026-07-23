/*
 * XREFs of CmpRefreshParent @ 0x14087FF60
 * Callers:
 *     <none>
 * Callees:
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1406643E8 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1406DED80 (CmpReferenceKeyControlBlockUnsafe.c)
 */

__int64 __fastcall CmpRefreshParent(__int64 a1, __int64 a2, __int64 a3, volatile signed __int64 **a4)
{
  volatile signed __int64 *v4; // rbx
  volatile signed __int64 *v5; // rax

  v4 = *a4;
  v5 = a4[1];
  if ( *(volatile signed __int64 **)(a1 + 72) == *a4 )
  {
    ++*(_QWORD *)(a1 + 304);
    *(_QWORD *)(a1 + 72) = v5;
    if ( *v4 )
    {
      CmpReferenceKeyControlBlockUnsafe(v5);
      CmpDereferenceKeyControlBlockUnsafe(v4);
    }
  }
  return 0LL;
}
