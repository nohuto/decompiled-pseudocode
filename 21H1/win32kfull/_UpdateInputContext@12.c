/*
 * XREFs of _UpdateInputContext@12 @ 0xA6642
 * Callers:
 *     _NtUserUpdateInputContext@12 @ 0xA65E4 (_NtUserUpdateInputContext@12.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __fastcall UpdateInputContext(int a1, int a2, int a3)
{
  int v4; // ecx
  int v5; // ecx

  if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 232) != *(_DWORD *)(_gptiCurrent + 232) )
  {
    v5 = 5;
LABEL_11:
    UserSetLastError((struct _NT_TIB *)v5);
    return 0;
  }
  if ( !a2 )
  {
    v4 = *(_DWORD *)(a1 + 20);
    if ( !*(_DWORD *)(v4 + 12) )
    {
      *(_DWORD *)(v4 + 12) = a3;
      return 1;
    }
    v5 = 1247;
    goto LABEL_11;
  }
  if ( a2 == 1 )
  {
    *(_DWORD *)(*(_DWORD *)(a1 + 20) + 16) = a3;
    return 1;
  }
  return 0;
}
