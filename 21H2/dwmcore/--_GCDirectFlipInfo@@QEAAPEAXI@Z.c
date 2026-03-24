/*
 * XREFs of ??_GCDirectFlipInfo@@QEAAPEAXI@Z @ 0x18017A228
 * Callers:
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1800E0638 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     ??1CDirectFlipInfo@@QEAA@XZ @ 0x1800E050C (--1CDirectFlipInfo@@QEAA@XZ.c)
 */

CDirectFlipInfo *__fastcall CDirectFlipInfo::`scalar deleting destructor'(CDirectFlipInfo *this, __int64 a2)
{
  CDirectFlipInfo::~CDirectFlipInfo(this, a2);
  operator delete(this);
  return this;
}
