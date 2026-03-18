/*
 * XREFs of _WppClassicProviderCallback@16 @ 0x1780B5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __stdcall WppClassicProviderCallback(int a1, unsigned __int8 a2, int *a3, int a4)
{
  unsigned __int8 result; // al
  int v5; // edx
  int v6; // ecx

  result = a2;
  if ( a2 <= 1u )
  {
    if ( a2 )
    {
      *(_DWORD *)(a4 + 32) = a3[1];
      *(_BYTE *)(a4 + 29) = *((_BYTE *)a3 + 2);
      v5 = *a3;
      v6 = a3[1];
      *(_DWORD *)(a4 + 16) = *a3;
      *(_DWORD *)(a4 + 20) = v6;
      return imp_WppRecorderReplay(WPP_GLOBAL_Control, v5, v6, a3[1], *((unsigned __int8 *)a3 + 2));
    }
    else
    {
      result = 0;
      *(_BYTE *)(a4 + 29) = 0;
      *(_DWORD *)(a4 + 32) = 0;
      *(_DWORD *)(a4 + 16) = 0;
      *(_DWORD *)(a4 + 20) = 0;
    }
  }
  return result;
}
