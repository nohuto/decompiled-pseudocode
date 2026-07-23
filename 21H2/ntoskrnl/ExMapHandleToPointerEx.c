/*
 * XREFs of ExMapHandleToPointerEx @ 0x1406802E0
 * Callers:
 *     AlpcpFreeMessageFunction @ 0x140680330 (AlpcpFreeMessageFunction.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x1402011C8 (ExHandleLogBadReference.c)
 *     ExMapHandleToPointer @ 0x140685770 (ExMapHandleToPointer.c)
 */

__int64 __fastcall ExMapHandleToPointerEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1, char a3)
{
  __int64 v6; // rbx

  v6 = ExMapHandleToPointer(BugCheckParameter2, BugCheckParameter1);
  if ( !v6 )
    ExHandleLogBadReference(BugCheckParameter2, BugCheckParameter1, a3);
  return v6;
}
