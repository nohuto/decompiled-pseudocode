/*
 * XREFs of ??YERECTL@@QAEXABU_RECTL@@@Z @ 0xA93D0
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     _GreDrawStream@12 @ 0x5C150 (_GreDrawStream@12.c)
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 *     ?bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1DD39B (-bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_.c)
 *     ?EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAH@Z @ 0x1EE497 (-EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 * Callees:
 *     <none>
 */

void __thiscall ERECTL::operator+=(_DWORD *this, _DWORD *a2)
{
  int v2; // ebx
  int v3; // edi
  int v5; // edx
  int v6; // edx
  int v7; // eax
  int v8; // [esp+Ch] [ebp-4h]
  int v9; // [esp+18h] [ebp+8h]

  v8 = this[2];
  if ( *this == v8 || (v2 = this[1], v3 = this[3], v2 == v3) )
  {
    *this = *a2;
    this[1] = a2[1];
    this[2] = a2[2];
    this[3] = a2[3];
  }
  else
  {
    v9 = *a2;
    if ( v9 < *this )
      *this = v9;
    v5 = a2[1];
    if ( v5 < v2 )
      this[1] = v5;
    v6 = a2[2];
    if ( v6 > v8 )
      this[2] = v6;
    v7 = a2[3];
    if ( v7 > v3 )
      this[3] = v7;
  }
}
