/*
 * XREFs of ??1CContentResourceState@@UEAA@XZ @ 0x1C0081418
 * Callers:
 *     ??_ECContentResourceState@@UEAAPEAXI@Z @ 0x1C007F580 (--_ECContentResourceState@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CFlipResourceState@@MEAA@XZ @ 0x1C007EDB4 (--1CFlipResourceState@@MEAA@XZ.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C00816B4 (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C0081710 (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 */

void __fastcall CContentResourceState::~CContentResourceState(CContentResourceState *this)
{
  *(_QWORD *)this = &CContentResourceState::`vftable';
  CContentResourceState::SetBoundPropertySet(this, 0LL);
  CContentResourceState::SetBoundBuffer(this, 0LL);
  CFlipResourceState::~CFlipResourceState(this);
}
