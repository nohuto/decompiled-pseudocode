/*
 * XREFs of ??1CLegacyAnimationTrigger@@UEAA@XZ @ 0x180020724
 * Callers:
 *     ??_GCLegacyAnimationTrigger@@UEAAPEAXI@Z @ 0x1800206E0 (--_GCLegacyAnimationTrigger@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180096BB0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CLegacyAnimationTrigger::~CLegacyAnimationTrigger(CLegacyAnimationTrigger *this)
{
  *(_QWORD *)this = &CLegacyAnimationTrigger::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 56);
  CResource::~CResource(this);
}
