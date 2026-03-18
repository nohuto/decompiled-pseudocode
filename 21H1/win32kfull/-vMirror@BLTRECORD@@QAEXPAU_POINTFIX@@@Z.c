/*
 * XREFs of ?vMirror@BLTRECORD@@QAEXPAU_POINTFIX@@@Z @ 0x1ECB43
 * Callers:
 *     ?bCreateRegion@BLTRECORD@@QAEHAAVDCOBJ@@PAU_POINTFIX@@@Z @ 0x1EBFB9 (-bCreateRegion@BLTRECORD@@QAEHAAVDCOBJ@@PAU_POINTFIX@@@Z.c)
 *     ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x1EC095 (-bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 *     ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@AAVSURFMEM@@1KK@Z @ 0x1EC6D3 (-bRotate@BLTRECORD@@QAEHAAVDCOBJ@@AAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QAEHAAVSURFMEM@@K@Z @ 0x1EC88D (-bRotate@BLTRECORD@@QAEHAAVSURFMEM@@K@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall BLTRECORD::vMirror(BLTRECORD *this, struct _POINTFIX *a2)
{
  int v3; // eax
  FIX x; // ecx
  FIX y; // eax
  FIX v6; // ecx
  FIX v7; // eax
  FIX v8; // ecx
  FIX v9; // eax
  FIX v10; // ecx
  FIX v11; // ecx
  FIX v12; // eax
  FIX v13; // ecx
  FIX v14; // eax
  FIX v15; // ecx
  FIX v16; // eax
  FIX v17; // ecx

  v3 = *((_DWORD *)this + 42);
  if ( (v3 & 8) != 0 )
  {
    x = a2[1].x;
    a2[1].x = a2->x;
    y = a2->y;
    a2->x = x;
    v6 = a2[1].y;
    a2[1].y = y;
    v7 = a2[2].x;
    a2->y = v6;
    v8 = a2[3].x;
    a2[3].x = v7;
    v9 = a2[2].y;
    a2[2].x = v8;
    v10 = a2[3].y;
    a2[3].y = v9;
    a2[2].y = v10;
    v3 = *((_DWORD *)this + 42);
  }
  if ( (v3 & 0x10) != 0 )
  {
    v11 = a2[2].x;
    a2[2].x = a2->x;
    v12 = a2->y;
    a2->x = v11;
    v13 = a2[2].y;
    a2[2].y = v12;
    v14 = a2[1].x;
    a2->y = v13;
    v15 = a2[3].x;
    a2[3].x = v14;
    v16 = a2[1].y;
    a2[1].x = v15;
    v17 = a2[3].y;
    a2[3].y = v16;
    a2[1].y = v17;
  }
}
