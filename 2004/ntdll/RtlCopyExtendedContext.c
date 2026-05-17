/*
 * XREFs of RtlCopyExtendedContext @ 0x1800F59D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCopyExtendedContext @ 0x1800F5A64 (RtlpCopyExtendedContext.c)
 */

__int64 __fastcall RtlCopyExtendedContext(int a1, int a2, __int64 a3)
{
  return RtlpCopyExtendedContext(a1, a1, a3, a2, a3);
}
