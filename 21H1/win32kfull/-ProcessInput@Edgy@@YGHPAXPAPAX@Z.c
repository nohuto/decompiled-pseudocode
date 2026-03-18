/*
 * XREFs of ?ProcessInput@Edgy@@YGHPAXPAPAX@Z @ 0x16E186
 * Callers:
 *     _EditionEdgyProcessInput@16 @ 0x16F107 (_EditionEdgyProcessInput@16.c)
 * Callees:
 *     ?_OnInput@Edgy@@YG?AUtagSTATE_TRANSITION_DATA@1@AAUtagEDGY_DATA@@PAX@Z @ 0x16ED29 (-_OnInput@Edgy@@YG-AUtagSTATE_TRANSITION_DATA@1@AAUtagEDGY_DATA@@PAX@Z.c)
 */

int __fastcall Edgy::ProcessInput(int a1, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax
  int v6; // esi
  int v7; // eax
  int v8; // edx
  int v9; // edx
  int v10; // [esp+8h] [ebp-4h]

  v3 = 0;
  if ( a2 )
    *a2 = 0;
  v4 = *(_DWORD *)(_grpdeskRitInput + 140);
  v10 = v4;
  if ( !v4 )
    return 1;
  *(_DWORD *)(v4 + 204) = a1;
  v6 = *(_DWORD *)(v4 + 12);
  v7 = Edgy::_OnInput(v4, a1);
  if ( v6 == 1 )
  {
    if ( v7 == 1 )
      return v3;
    if ( a2 )
      *a2 = v8;
    v9 = 0;
  }
  else
  {
    if ( v7 != 1 )
      return 1;
    v9 = _gptiCurrent;
  }
  *(_DWORD *)(v10 + 248) = v9;
  if ( v7 != 1 )
    return 1;
  return v3;
}
