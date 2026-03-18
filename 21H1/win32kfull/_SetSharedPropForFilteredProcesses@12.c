/*
 * XREFs of _SetSharedPropForFilteredProcesses@12 @ 0xC36AE
 * Callers:
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall SetSharedPropForFilteredProcesses(int a1, __int16 a2, int a3)
{
  int v4; // eax
  char *v5; // edi
  int v6; // esi
  int v7; // eax
  __int16 v8; // ax

  v4 = *(_DWORD *)(a1 + 20);
  if ( *(char *)(v4 + 11) < 0 )
    return 0;
  v5 = *(char **)(*(_DWORD *)(v4 + 128) + *(_DWORD *)(v4 + 192) - 4);
LABEL_3:
  if ( !v5 )
    return 0;
  v6 = 0;
  ProbeForWrite(v5, 0x30Cu, 1u);
  while ( 1 )
  {
    v7 = 12 * v6;
    if ( v6 >= 64 )
    {
      v5 = *(char **)&v5[v7];
      goto LABEL_3;
    }
    v8 = *(_WORD *)&v5[v7 + 8];
    if ( !v8 )
      return 0;
    if ( v8 == a2 )
      break;
    ++v6;
  }
  *(_DWORD *)&v5[12 * v6 + 4] = a3;
  return 1;
}
