/*
 * XREFs of ?vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C0135FB0
 * Callers:
 *     ?vVecPerpCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C0135E34 (-vVecPerpCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 *     ?vecInDraw@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C02CE464 (-vecInDraw@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecOutDraw@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C02CE4AC (-vecOutDraw@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 * Callees:
 *     ?vDetermineDrawVertex@WIDEPENOBJ@@QEAAXAEAVEVECTORFX@@AEAVLINEDATA@@@Z @ 0x1C0136028 (-vDetermineDrawVertex@WIDEPENOBJ@@QEAAXAEAVEVECTORFX@@AEAVLINEDATA@@@Z.c)
 */

void __fastcall WIDENER::vVecDrawCompute(WIDENER *this, struct LINEDATA *a2)
{
  int *v3; // rcx
  int v4; // edx
  int v5; // eax
  int v6; // eax

  WIDEPENOBJ::vDetermineDrawVertex((WIDENER *)((char *)this + 824), (struct LINEDATA *)((char *)a2 + 48), a2);
  v3 = (int *)*((_QWORD *)a2 + 2);
  v4 = *(_DWORD *)a2;
  v5 = *v3;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    *((_DWORD *)a2 + 18) = -v5;
    v6 = -v3[1];
  }
  else
  {
    *((_DWORD *)a2 + 18) = v5;
    v6 = v3[1];
  }
  *((_DWORD *)a2 + 19) = v6;
  *(_DWORD *)a2 = v4 | 8;
  *((_DWORD *)a2 + 18) = ((*((int *)a2 + 18) >> 31) + *((_DWORD *)a2 + 18) + 4) & 0xFFFFFFF8;
  *((_DWORD *)a2 + 19) = ((*((int *)a2 + 19) >> 31) + *((_DWORD *)a2 + 19) + 4) & 0xFFFFFFF8;
}
