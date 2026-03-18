/*
 * XREFs of _DestroyProcessesClasses@4 @ 0x48122
 * Callers:
 *     <none>
 * Callees:
 *     _DestroyClass@8 @ 0x472A4 (_DestroyClass@8.c)
 */

int __stdcall DestroyProcessesClasses(int a1)
{
  _DWORD **i; // edi
  int result; // eax

  for ( i = (_DWORD **)(a1 + 192); *i; result = DestroyClass(a1, i) )
    ;
  while ( *(_DWORD *)(a1 + 196) )
    result = DestroyClass(a1, (_DWORD **)(a1 + 196));
  return result;
}
