/*
 * XREFs of FindRSAccess @ 0x1C002C490
 * Callers:
 *     SupportsOnlyRawAccess @ 0x1C0024D40 (SupportsOnlyRawAccess.c)
 *     RegRSAccess @ 0x1C002C3B8 (RegRSAccess.c)
 *     RawFieldAccess @ 0x1C0067D58 (RawFieldAccess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindRSAccess(int a1)
{
  __int64 result; // rax

  for ( result = gpRSAccessHead; result && *(_DWORD *)(result + 8) != a1; result = *(_QWORD *)result )
    ;
  return result;
}
