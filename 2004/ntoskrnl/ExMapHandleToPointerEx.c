/*
 * XREFs of ExMapHandleToPointerEx @ 0x14069BB9C
 * Callers:
 *     AlpcpFreeMessageFunction @ 0x140698E00 (AlpcpFreeMessageFunction.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x1402011B8 (ExHandleLogBadReference.c)
 *     ExMapHandleToPointer @ 0x140603450 (ExMapHandleToPointer.c)
 */

signed __int64 *__fastcall ExMapHandleToPointerEx(
        unsigned int *BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        char a3)
{
  signed __int64 *v6; // rbx

  v6 = ExMapHandleToPointer(BugCheckParameter2, BugCheckParameter1);
  if ( !v6 )
    ExHandleLogBadReference((ULONG_PTR)BugCheckParameter2, BugCheckParameter1, a3);
  return v6;
}
