/*
 * XREFs of ??1CContentResourceState@@UEAA@XZ @ 0x1C006E364
 * Callers:
 *     ??_ECContentResourceState@@UEAAPEAXI@Z @ 0x1C006C000 (--_ECContentResourceState@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CFlipResourceState@@MEAA@XZ @ 0x1C006BF5C (--1CFlipResourceState@@MEAA@XZ.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C006E8C8 (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C006E924 (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 */

void __fastcall CContentResourceState::~CContentResourceState(CContentResourceState *this)
{
  *(_QWORD *)this = &CContentResourceState::`vftable';
  CContentResourceState::SetBoundPropertySet(this, 0LL);
  CContentResourceState::SetBoundBuffer(this, 0LL);
  CFlipResourceState::~CFlipResourceState(this);
}
