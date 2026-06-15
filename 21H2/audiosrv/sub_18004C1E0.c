/*
 * XREFs of sub_18004C1E0 @ 0x18004C1E0
 * Callers:
 *     sub_18004997C @ 0x18004997C (sub_18004997C.c)
 *     sub_180049F80 @ 0x180049F80 (sub_180049F80.c)
 *     sub_18005CD7C @ 0x18005CD7C (sub_18005CD7C.c)
 *     sub_18005D590 @ 0x18005D590 (sub_18005D590.c)
 *     sub_180125A30 @ 0x180125A30 (sub_180125A30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004C1E0(__int64 a1, __int64 a2)
{
  *(_WORD *)a1 = 0;
  *(_QWORD *)(a1 + 4) = 0LL;
  *(_OWORD *)(a1 + 12) = 0LL;
  *(_DWORD *)(a1 + 28) = 0;
  if ( a2 )
  {
    *(_WORD *)a1 = *(_WORD *)(a2 + 2);
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
    *(_WORD *)(a1 + 8) = *(_WORD *)(a2 + 14);
    if ( *(_WORD *)a2 == 0xFFFE )
    {
      *(_WORD *)(a1 + 10) = *(_WORD *)(a2 + 18);
      *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 20);
      *(_OWORD *)(a1 + 12) = *(_OWORD *)(a2 + 24);
    }
  }
  return a1;
}
