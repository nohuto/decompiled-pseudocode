/*
 * XREFs of ??1DXGBLACKBOX@@QEAA@XZ @ 0x1C02BC0B4
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0268200 (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002824 (--3@YAXPEAX@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00066E0 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall DXGBLACKBOX::~DXGBLACKBOX(void **this)
{
  __int64 v2; // rdx

  operator delete(this[6]);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)(this + 1), v2);
}
