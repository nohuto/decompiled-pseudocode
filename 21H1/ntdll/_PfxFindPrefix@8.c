/*
 * XREFs of _PfxFindPrefix@8 @ 0x4B345160
 * Callers:
 *     <none>
 * Callees:
 *     _RtlSplay@4 @ 0x4B2E8250 (_RtlSplay@4.c)
 *     _CompareNamesCaseSensitive@8 @ 0x4B344F9C (_CompareNamesCaseSensitive@8.c)
 *     _ComputeNameLength@4 @ 0x4B3450EB (_ComputeNameLength@4.c)
 */

_DWORD *__stdcall PfxFindPrefix(int a1, unsigned __int16 *a2)
{
  int v2; // edi
  __int16 v3; // ax
  int i; // ebx
  int v5; // eax
  _DWORD *result; // eax
  int v7; // esi

  v2 = *(_DWORD *)(a1 + 4);
  v3 = ComputeNameLength(a2);
  while ( *(__int16 *)(v2 + 2) > v3 )
  {
    a1 = v2;
    v2 = *(_DWORD *)(v2 + 4);
  }
LABEL_12:
  if ( *(__int16 *)(v2 + 2) <= 0 )
    return 0;
  for ( i = v2 + 8; ; i = *(_DWORD *)(i + 8) )
  {
    while ( 1 )
    {
      if ( !i )
      {
        a1 = v2;
        v2 = *(_DWORD *)(v2 + 4);
        goto LABEL_12;
      }
      v5 = CompareNamesCaseSensitive(*(unsigned __int16 **)(i + 12), (__int16 *)a2);
      if ( v5 != 3 )
        break;
      i = *(_DWORD *)(i + 4);
    }
    if ( v5 )
      break;
  }
  result = (_DWORD *)(i - 8);
  if ( *(_WORD *)(i - 8) == 514 )
  {
    v7 = *(_DWORD *)(v2 + 4);
    *(_DWORD *)(v2 + 4) = 0;
    *(_WORD *)v2 = 514;
    result = RtlSplay((_DWORD *)i) - 2;
    *(_WORD *)result = 513;
    *(_DWORD *)(a1 + 4) = result;
    result[1] = v7;
  }
  return result;
}
