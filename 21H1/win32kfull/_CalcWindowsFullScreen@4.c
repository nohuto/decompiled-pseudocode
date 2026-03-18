/*
 * XREFs of _CalcWindowsFullScreen@4 @ 0xAAA8C
 * Callers:
 *     <none>
 * Callees:
 *     _CalcWindowFullScreen@4 @ 0x34B60 (_CalcWindowFullScreen@4.c)
 */

_DWORD *__stdcall CalcWindowsFullScreen(int a1)
{
  _DWORD *result; // eax
  _DWORD **v2; // esi

  result = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 12) + 60);
  if ( result )
  {
    while ( 1 )
    {
      v2 = (_DWORD **)(result + 12);
      if ( !result[12] )
        break;
      CalcWindowFullScreen(result);
      result = *v2;
    }
  }
  return result;
}
