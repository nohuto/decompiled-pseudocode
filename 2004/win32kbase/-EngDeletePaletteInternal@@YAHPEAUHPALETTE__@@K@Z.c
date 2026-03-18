/*
 * XREFs of ?EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z @ 0x1C00CFA40
 * Callers:
 *     EngDeletePalette @ 0x1C0022330 (EngDeletePalette.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0091F88 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00922F0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00C10F4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

__int64 __fastcall EngDeletePaletteInternal(HPALETTE a1, __int16 a2)
{
  unsigned int v2; // ebx
  int v3; // edi
  int v4; // ecx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a2 & 0x8000;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v6, a1);
  if ( v6 )
  {
    v4 = *(_DWORD *)(v6 + 24);
    if ( (v4 & 0x100) == 0 && (!v3 || (v4 & 0x2000000) != 0) )
    {
      *(_DWORD *)(v6 + 24) = v4 & 0xFEFFFFFF;
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v6);
      v2 = 1;
    }
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v6);
  return v2;
}
