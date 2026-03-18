/*
 * XREFs of ??1CBaseAnimation@@UEAA@XZ @ 0x1800CDC30
 * Callers:
 *     ??1CAnimation@@UEAA@XZ @ 0x1800CDB54 (--1CAnimation@@UEAA@XZ.c)
 *     ??_GCBaseAnimation@@UEAAPEAXI@Z @ 0x18019E9C0 (--_GCBaseAnimation@@UEAAPEAXI@Z.c)
 *     ??1CScalar@@MEAA@XZ @ 0x18023B7CC (--1CScalar@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CBaseAnimation::~CBaseAnimation(CBaseAnimation *this)
{
  *(_QWORD *)this = &CBaseAnimation::`vftable'{for `CResource'};
  *((_QWORD *)this + 8) = &IBitmapDest2::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 9);
  CResource::~CResource(this);
}
