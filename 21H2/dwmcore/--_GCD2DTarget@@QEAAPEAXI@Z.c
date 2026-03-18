/*
 * XREFs of ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x180020C1C
 * Callers:
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x180020BF4 (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x18007EE30 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 * Callees:
 *     ??1CD2DTarget@@QEAA@XZ @ 0x180020C48 (--1CD2DTarget@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CD2DTarget *__fastcall CD2DTarget::`scalar deleting destructor'(CD2DTarget *this)
{
  CD2DTarget::~CD2DTarget(this);
  operator delete(this, 0x50uLL);
  return this;
}
