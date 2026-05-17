/*
 * XREFs of _LdrpGetDelayloadAPIInfo@20 @ 0x4B32F789
 * Callers:
 *     _LdrpLogDelayLoadTrigger@16 @ 0x4B2C02B9 (_LdrpLogDelayLoadTrigger@16.c)
 *     _LdrpRedirectDelayloadFailure@28 @ 0x4B32F8F2 (_LdrpRedirectDelayloadFailure@28.c)
 *     _LdrpResolveDelayloadAddress@24 @ 0x4B32FA18 (_LdrpResolveDelayloadAddress@24.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall LdrpGetDelayloadAPIInfo(int a1, int a2, int a3, int *a4, _DWORD *a5)
{
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  _DWORD *result; // eax

  v5 = *(_DWORD *)(a1 + 24);
  v6 = *(_DWORD *)(*(_DWORD *)(a2 + 16) + 4 * ((a3 - *(_DWORD *)(a2 + 12) - v5) >> 2) + v5);
  if ( v6 >= 0 )
  {
    v7 = 0;
    v8 = v6 + v5 + 2;
  }
  else
  {
    v7 = (unsigned __int16)v6;
    v8 = 0;
  }
  *a4 = v8;
  result = a5;
  *a5 = v7;
  return result;
}
