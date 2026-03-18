/*
 * XREFs of ??1CCD_BTL@@MEAA@XZ @ 0x1C02ECBD8
 * Callers:
 *     ??_ECCD_BTL@@MEAAPEAXI@Z @ 0x1C005CEF0 (--_ECCD_BTL@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C00DFC28 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01331A4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 */

void __fastcall CCD_BTL::~CCD_BTL(CCD_BTL *this)
{
  *(_QWORD *)this = &CCD_BTL_FULL::`vftable';
  CDS_JOURNAL::Purge((CCD_BTL *)((char *)this + 104));
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_BTL *)((char *)this + 8));
}
