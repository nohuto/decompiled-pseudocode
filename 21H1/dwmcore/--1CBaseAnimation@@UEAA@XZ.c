/*
 * XREFs of ??1CBaseAnimation@@UEAA@XZ @ 0x1800AC02C
 * Callers:
 *     ??1CAnimation@@UEAA@XZ @ 0x1800ABF04 (--1CAnimation@@UEAA@XZ.c)
 *     ??_GCBaseAnimation@@UEAAPEAXI@Z @ 0x1801710A0 (--_GCBaseAnimation@@UEAAPEAXI@Z.c)
 *     ??1CScalar@@MEAA@XZ @ 0x1801EC3DC (--1CScalar@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180096BB0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CBaseAnimation::~CBaseAnimation(CBaseAnimation *this)
{
  *(_QWORD *)this = &CBaseAnimation::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 64);
  CResource::~CResource(this);
}
