/*
 * XREFs of __GetWindowRect@8 @ 0x1B6E03
 * Callers:
 *     _xxxSoundSentry@0 @ 0x1782B3 (_xxxSoundSentry@0.c)
 * Callees:
 *     _GetPrimaryMonitorRect@0 @ 0xB3136 (_GetPrimaryMonitorRect@0.c)
 */

_DWORD *__fastcall _GetWindowRect(int a1, _DWORD *a2)
{
  int v2; // esi
  _DWORD *result; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // esi
  _DWORD v7[4]; // [esp+10h] [ebp-20h] BYREF
  _DWORD v8[4]; // [esp+20h] [ebp-10h] BYREF

  v2 = *(_DWORD *)(a1 + 20);
  result = (_DWORD *)(*(_WORD *)(v2 + 30) & 0x3FFF);
  if ( result == (_DWORD *)669 )
  {
    result = GetPrimaryMonitorRect(v7);
    v8[0] = *result;
    v8[1] = result[1];
    v8[2] = result[2];
    v8[3] = result[3];
    v5 = v8;
  }
  else
  {
    v5 = (_DWORD *)(v2 + 52);
  }
  *a2 = *v5;
  v6 = v5 + 1;
  a2[1] = *v6++;
  a2[2] = *v6;
  a2[3] = v6[1];
  return result;
}
