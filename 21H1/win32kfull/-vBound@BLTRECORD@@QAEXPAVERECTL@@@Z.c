/*
 * XREFs of ?vBound@BLTRECORD@@QAEXPAVERECTL@@@Z @ 0x1ECA6C
 * Callers:
 *     ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x1EC095 (-bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 *     ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@AAVSURFMEM@@1KK@Z @ 0x1EC6D3 (-bRotate@BLTRECORD@@QAEHAAVDCOBJ@@AAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QAEHAAVSURFMEM@@K@Z @ 0x1EC88D (-bRotate@BLTRECORD@@QAEHAAVSURFMEM@@K@Z.c)
 *     _GrePlgBlt@44 @ 0x1EDD56 (_GrePlgBlt@44.c)
 * Callees:
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 */

void __thiscall BLTRECORD::vBound(BLTRECORD *this, struct ERECTL *a2)
{
  *(_DWORD *)a2 = (*((_DWORD *)this + 2 * *((_DWORD *)this + 43) + 17) + 15) >> 4;
  *((_DWORD *)a2 + 1) = (*((_DWORD *)this + 2 * *((_DWORD *)this + 44) + 18) + 15) >> 4;
  *((_DWORD *)a2 + 2) = (*((_DWORD *)this + 2 * (*((_DWORD *)this + 43) ^ 3) + 17) + 15) >> 4;
  *((_DWORD *)a2 + 3) = (*((_DWORD *)this + 2 * (*((_DWORD *)this + 44) ^ 3) + 18) + 15) >> 4;
  ERECTL::vOrder(a2);
}
