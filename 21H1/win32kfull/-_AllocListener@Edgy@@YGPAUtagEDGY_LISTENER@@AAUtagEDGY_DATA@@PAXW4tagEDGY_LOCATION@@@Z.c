/*
 * XREFs of ?_AllocListener@Edgy@@YGPAUtagEDGY_LISTENER@@AAUtagEDGY_DATA@@PAXW4tagEDGY_LOCATION@@@Z @ 0x16E2E5
 * Callers:
 *     ?_AddOrUpdateListener@Edgy@@YGHPAUtagDESKTOP@@PAXW4tagEDGY_LOCATION@@PAUHWND__@@@Z @ 0x16E23D (-_AddOrUpdateListener@Edgy@@YGHPAUtagDESKTOP@@PAXW4tagEDGY_LOCATION@@PAUHWND__@@@Z.c)
 * Callees:
 *     ?_GrowListeners@Edgy@@YGHAAUtagEDGY_DATA@@@Z @ 0x16E975 (-_GrowListeners@Edgy@@YGHAAUtagEDGY_DATA@@@Z.c)
 */

_DWORD *__fastcall Edgy::_AllocListener(_DWORD *a1, int a2, int a3)
{
  _DWORD *result; // eax
  Edgy *v6; // [esp+0h] [ebp-8h]
  struct tagEDGY_DATA *v7; // [esp+4h] [ebp-4h]

  if ( *a1 < a1[1] || (result = (_DWORD *)Edgy::_GrowListeners(v6, v7)) != 0 )
  {
    result = (_DWORD *)(a1[2] + 16 * (*a1)++);
    result[1] = 0;
    *result = a2;
    result[2] = a3;
  }
  return result;
}
