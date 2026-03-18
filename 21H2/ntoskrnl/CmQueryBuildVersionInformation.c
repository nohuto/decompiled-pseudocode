/*
 * XREFs of CmQueryBuildVersionInformation @ 0x14075AF98
 * Callers:
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     CmpQueryDowncastString @ 0x14075AF34 (CmpQueryDowncastString.c)
 */

__int64 __fastcall CmQueryBuildVersionInformation(int *a1, int a2, char *a3, unsigned int a4, _DWORD *a5)
{
  int v6; // edi
  __int64 v7; // rbx

  if ( a2 == 4 && a4 >= 0x244 )
  {
    v6 = *a1;
    if ( *a1 >= (unsigned int)CmpLayerVersionCount )
    {
      *a5 = 0;
      return 2147483674LL;
    }
    else
    {
      v7 = CmpLayerVersions[v6];
      memset(a3, 0, a4);
      *(_WORD *)a3 = v6;
      *((_WORD *)a3 + 1) = CmpLayerVersionCount;
      *((_DWORD *)a3 + 1) = *(_DWORD *)v7;
      *((_DWORD *)a3 + 2) = *(_DWORD *)(v7 + 4);
      *((_DWORD *)a3 + 3) = *(_DWORD *)(v7 + 8);
      *((_DWORD *)a3 + 4) = *(_DWORD *)(v7 + 12);
      *((_DWORD *)a3 + 144) = *(_DWORD *)(v7 + 800);
      CmpQueryDowncastString(a3 + 20, 0x80u, (const UNICODE_STRING *)(v7 + 16));
      CmpQueryDowncastString(a3 + 148, 0x80u, (const UNICODE_STRING *)(v7 + 64));
      CmpQueryDowncastString(a3 + 276, 0x80u, (const UNICODE_STRING *)(v7 + 80));
      CmpQueryDowncastString(a3 + 404, 0x80u, (const UNICODE_STRING *)(v7 + 96));
      CmpQueryDowncastString(a3 + 532, 0x1Au, (const UNICODE_STRING *)(v7 + 32));
      CmpQueryDowncastString(a3 + 558, 0x10u, (const UNICODE_STRING *)(v7 + 48));
      *a5 = 580;
      return 0LL;
    }
  }
  else
  {
    *a5 = 0;
    return 3221225476LL;
  }
}
