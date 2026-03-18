/*
 * XREFs of ?vVecDrawCompute@WIDENER@@AAEXAAVLINEDATA@@@Z @ 0x23756E
 * Callers:
 *     ?vVecPerpCompute@WIDENER@@AAEXAAVLINEDATA@@@Z @ 0x2375D8 (-vVecPerpCompute@WIDENER@@AAEXAAVLINEDATA@@@Z.c)
 *     ?vecInDraw@WIDENER@@IAE?AVEVECTORFX@@XZ @ 0x237984 (-vecInDraw@WIDENER@@IAE-AVEVECTORFX@@XZ.c)
 *     ?vecOutDraw@WIDENER@@IAE?AVEVECTORFX@@XZ @ 0x2379E8 (-vecOutDraw@WIDENER@@IAE-AVEVECTORFX@@XZ.c)
 * Callees:
 *     ?vDetermineDrawVertex@WIDEPENOBJ@@QAEXAAVEVECTORFX@@AAVLINEDATA@@@Z @ 0x236A78 (-vDetermineDrawVertex@WIDEPENOBJ@@QAEXAAVEVECTORFX@@AAVLINEDATA@@@Z.c)
 */

void __thiscall WIDENER::vVecDrawCompute(WIDENER *this, int **a2)
{
  int *v2; // ecx
  int *v3; // edx
  int v4; // eax
  int v5; // eax

  WIDEPENOBJ::vDetermineDrawVertex(
    (WIDENER *)((char *)this + 824),
    (struct EVECTORFX *)(a2 + 10),
    (struct LINEDATA *)a2);
  v2 = a2[2];
  v3 = *a2;
  v4 = *v2;
  if ( ((unsigned __int8)*a2 & 1) != 0 )
  {
    a2[16] = (int *)-v4;
    v5 = -v2[1];
  }
  else
  {
    a2[16] = (int *)v4;
    v5 = v2[1];
  }
  a2[17] = (int *)v5;
  *a2 = (int *)((unsigned int)v3 | 8);
  a2[16] = (int *)(((unsigned int)a2[16] + ((int)a2[16] >> 31) + 4) & 0xFFFFFFF8);
  a2[17] = (int *)(((unsigned int)a2[17] + ((int)a2[17] >> 31) + 4) & 0xFFFFFFF8);
}
