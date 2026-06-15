/*
 * XREFs of sub_1800051F0 @ 0x1800051F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180005374 @ 0x180005374 (sub_180005374.c)
 */

__int64 __fastcall sub_1800051F0(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( !a2 )
  {
    if ( *(_DWORD *)(a1 + 20) == 1 )
    {
      return sub_180005224(a1, a3);
    }
    else if ( *(_DWORD *)(a1 + 20) == 2 )
    {
      return sub_180005374(a1, a3);
    }
  }
  return result;
}
