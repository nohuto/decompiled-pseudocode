/*
 * XREFs of ??1BLTENTRY@@QEAA@XZ @ 0x1C005CF00
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

void __fastcall BLTENTRY::~BLTENTRY(void **this)
{
  operator delete[](this[63]);
  operator delete[](this[29]);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)(this + 4));
}
