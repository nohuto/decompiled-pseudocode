/*
 * XREFs of ??_GCDirectFlipInfo@@QEAAPEAXI@Z @ 0x18017B9A8
 * Callers:
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x180024B64 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 * Callees:
 *     ??1CDirectFlipInfo@@QEAA@XZ @ 0x180024A88 (--1CDirectFlipInfo@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 */

std::_Ref_count_base **__fastcall CDirectFlipInfo::`scalar deleting destructor'(std::_Ref_count_base **this)
{
  CDirectFlipInfo::~CDirectFlipInfo(this);
  operator delete(this);
  return this;
}
