/*
 * XREFs of ??1DXGBLACKBOX@@QEAA@XZ @ 0x1C02BBC84
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0267F50 (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000653C (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall DXGBLACKBOX::~DXGBLACKBOX(void **this)
{
  __int64 v2; // rdx

  operator delete(this[6]);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)(this + 1), v2);
}
