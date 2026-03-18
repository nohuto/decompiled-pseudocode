/*
 * XREFs of ??_GCDirectFlipInfo@@QEAAPEAXI@Z @ 0x18017E5A8
 * Callers:
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1800D4990 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??1CDirectFlipInfo@@QEAA@XZ @ 0x1800D48B4 (--1CDirectFlipInfo@@QEAA@XZ.c)
 */

CDirectFlipInfo *__fastcall CDirectFlipInfo::`scalar deleting destructor'(CDirectFlipInfo *this, __int64 a2)
{
  CDirectFlipInfo::~CDirectFlipInfo(this, a2);
  operator delete(this);
  return this;
}
