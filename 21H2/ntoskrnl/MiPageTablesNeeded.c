/*
 * XREFs of MiPageTablesNeeded @ 0x1403B5DA0
 * Callers:
 *     MmCreateShadowMapping @ 0x1407A02AC (MmCreateShadowMapping.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageTablesNeeded(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  int i; // r9d

  v2 = 0LL;
  for ( i = 0; i <= 3; ++i )
  {
    a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( i >= 1 )
      v2 += ((__int64)(a2 - a1) >> 3) + 1;
  }
  return v2;
}
