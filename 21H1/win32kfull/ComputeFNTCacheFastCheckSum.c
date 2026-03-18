/*
 * XREFs of ComputeFNTCacheFastCheckSum @ 0xDEEA0
 * Callers:
 *     ?LookUpFNTCacheTable@@YGHKPAGPAK1PAPAVPDEV@@1HPAH3PAPAU_FONTFILEVIEW@@KPAUtagDESIGNVECTOR@@K@Z @ 0xDE012 (-LookUpFNTCacheTable@@YGHKPAGPAK1PAPAVPDEV@@1HPAH3PAPAU_FONTFILEVIEW@@KPAUtagDESIGNVECTOR@@K@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall ComputeFNTCacheFastCheckSum(int a1, unsigned __int16 *a2, _DWORD *a3, int a4)
{
  unsigned int v4; // edi
  int i; // esi
  int v6; // eax
  _DWORD *v7; // edx
  unsigned int v9; // eax

  v4 = 0;
  for ( i = 0; a1; --a1 )
  {
    v6 = *a2++;
    i = v6 + 257 * i;
  }
  v7 = a3;
  if ( a3 )
  {
    if ( a4 )
    {
      v9 = (_DWORD *)((char *)a3 + (a4 & 0xFFFFFFFC)) >= a3 ? (a4 & 0xFFFFFFFC) >> 2 : 0;
      if ( v9 )
      {
        do
        {
          i = *v7 + 257 * i;
          ++v4;
          ++v7;
        }
        while ( v4 < v9 );
      }
    }
  }
  return i;
}
