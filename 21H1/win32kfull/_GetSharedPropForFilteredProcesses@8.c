/*
 * XREFs of _GetSharedPropForFilteredProcesses@8 @ 0x83DD4
 * Callers:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _NtUserGetProp@8 @ 0x83CF0 (_NtUserGetProp@8.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall GetSharedPropForFilteredProcesses(int a1, __int16 a2)
{
  int v3; // eax
  char *i; // edi
  int v5; // esi
  int v6; // eax
  __int16 v7; // cx
  int result; // eax

  v3 = *(_DWORD *)(a1 + 20);
  if ( *(char *)(v3 + 11) >= 0 )
  {
    for ( i = *(char **)(*(_DWORD *)(v3 + 128) + *(_DWORD *)(v3 + 192) - 4); i; i = *(char **)&i[v6] )
    {
      v5 = 0;
      ProbeForRead(i, 0x30Cu, 1u);
      while ( 1 )
      {
        v6 = 12 * v5;
        if ( v5 >= 64 )
          break;
        v7 = *(_WORD *)&i[v6 + 8];
        result = *(_DWORD *)&i[12 * v5 + 4];
        if ( !v7 )
          return 0;
        if ( v7 == a2 )
          return result;
        ++v5;
      }
    }
  }
  return 0;
}
