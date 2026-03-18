/*
 * XREFs of ExprOp1 @ 0x1C002F9C0
 * Callers:
 *     <none>
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C00022D4 (IsCompatableDSDTRevision.c)
 *     ExprOp1_64 @ 0x1C002FA00 (ExprOp1_64.c)
 *     ExprOp1_32 @ 0x1C0069154 (ExprOp1_32.c)
 */

__int64 __fastcall ExprOp1(__int64 a1, __int64 a2)
{
  if ( IsCompatableDSDTRevision() )
    return ExprOp1_64(a1, a2);
  else
    return ExprOp1_32(a1, a2);
}
