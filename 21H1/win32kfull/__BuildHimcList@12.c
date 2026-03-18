/*
 * XREFs of __BuildHimcList@12 @ 0xABCF6
 * Callers:
 *     _NtUserBuildHimcList@16 @ 0xABC28 (_NtUserBuildHimcList@16.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

unsigned int __fastcall _BuildHimcList(int a1, unsigned int a2, int a3)
{
  _DWORD *i; // eax
  int j; // eax
  _DWORD *k; // eax
  int v8; // [esp+1Ch] [ebp-24h]
  unsigned int v9; // [esp+20h] [ebp-20h]

  v9 = 0;
  if ( a1 )
  {
    for ( i = *(_DWORD **)(a1 + 440); i && v9 < a2; i = (_DWORD *)i[7] )
      *(_DWORD *)(a3 + 4 * v9++) = *i;
  }
  else
  {
    for ( j = *(_DWORD *)(PsGetCurrentProcessWin32Process() + 180); ; j = *(_DWORD *)(v8 + 364) )
    {
      v8 = j;
      if ( !j )
        break;
      for ( k = *(_DWORD **)(j + 440); k && v9 < a2; k = (_DWORD *)k[7] )
        *(_DWORD *)(a3 + 4 * v9++) = *k;
    }
  }
  return v9;
}
