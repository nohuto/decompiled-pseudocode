/*
 * XREFs of ?_FindListener@Edgy@@YGPAUtagEDGY_LISTENER@@AAUtagEDGY_DATA@@PAXW4tagEDGY_LOCATION@@@Z @ 0x16E31F
 * Callers:
 *     ?_AddOrUpdateListener@Edgy@@YGHPAUtagDESKTOP@@PAXW4tagEDGY_LOCATION@@PAUHWND__@@@Z @ 0x16E23D (-_AddOrUpdateListener@Edgy@@YGHPAUtagDESKTOP@@PAXW4tagEDGY_LOCATION@@PAUHWND__@@@Z.c)
 *     ?_RemoveListener@Edgy@@YGHPAUtagDESKTOP@@PAXW4tagEDGY_LOCATION@@@Z @ 0x16EE85 (-_RemoveListener@Edgy@@YGHPAUtagDESKTOP@@PAXW4tagEDGY_LOCATION@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall Edgy::_FindListener(_DWORD *a1, int a2, int a3)
{
  int v3; // esi
  _DWORD *result; // eax

  v3 = 0;
  if ( !*a1 )
    return 0;
  for ( result = (_DWORD *)a1[2]; *result != a2 || result[2] != a3; result += 4 )
  {
    if ( (unsigned int)++v3 >= *a1 )
      return 0;
  }
  return result;
}
