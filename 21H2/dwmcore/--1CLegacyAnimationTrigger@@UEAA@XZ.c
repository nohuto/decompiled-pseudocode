/*
 * XREFs of ??1CLegacyAnimationTrigger@@UEAA@XZ @ 0x18019DD14
 * Callers:
 *     ??_GCLegacyAnimationTrigger@@UEAAPEAXI@Z @ 0x18019EF60 (--_GCLegacyAnimationTrigger@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CLegacyAnimationTrigger::~CLegacyAnimationTrigger(void **this)
{
  *this = &CLegacyAnimationTrigger::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 8);
  CResource::~CResource((CResource *)this);
}
