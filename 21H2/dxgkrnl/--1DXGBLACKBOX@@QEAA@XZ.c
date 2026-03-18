/*
 * XREFs of ??1DXGBLACKBOX@@QEAA@XZ @ 0x1C02FEE60
 * Callers:
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1C0308FE4 (--1DXGGLOBAL@@EEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000E608 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall DXGBLACKBOX::~DXGBLACKBOX(void **this)
{
  operator delete(this[7]);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)(this + 1));
}
