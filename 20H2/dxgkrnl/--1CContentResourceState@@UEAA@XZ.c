/*
 * XREFs of ??1CContentResourceState@@UEAA@XZ @ 0x1C006D454
 * Callers:
 *     ??_ECContentResourceState@@UEAAPEAXI@Z @ 0x1C006B0F0 (--_ECContentResourceState@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CFlipResourceState@@MEAA@XZ @ 0x1C006B04C (--1CFlipResourceState@@MEAA@XZ.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C006D9B8 (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C006DA14 (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 */

void __fastcall CContentResourceState::~CContentResourceState(CContentResourceState *this)
{
  *(_QWORD *)this = &CContentResourceState::`vftable';
  CContentResourceState::SetBoundPropertySet(this, 0LL);
  CContentResourceState::SetBoundBuffer(this, 0LL);
  CFlipResourceState::~CFlipResourceState(this);
}
