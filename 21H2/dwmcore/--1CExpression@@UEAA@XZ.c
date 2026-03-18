/*
 * XREFs of ??1CExpression@@UEAA@XZ @ 0x18006FB8C
 * Callers:
 *     ??_ECExpression@@UEAAPEAXI@Z @ 0x18006F9C0 (--_ECExpression@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCResource@@@@@@YAXAEAPEAV?$CWeakReference@VCResource@@@@@Z @ 0x18004A0BC (--$ReleaseInterface@V-$CWeakReference@VCResource@@@@@@YAXAEAPEAV-$CWeakReference@VCResource@@@@@.c)
 *     ??$ReleaseInterface@VCSharedSection@@@@YAXAEAPEAVCSharedSection@@@Z @ 0x18006FC24 (--$ReleaseInterface@VCSharedSection@@@@YAXAEAPEAVCSharedSection@@@Z.c)
 *     ?UnregisterSources@CExpression@@IEAAXXZ @ 0x18006FC4C (-UnregisterSources@CExpression@@IEAAXXZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void __fastcall CExpression::~CExpression(void **this)
{
  __int64 i; // rdi

  *this = &CExpression::`vftable';
  ReleaseInterface<CSharedSection>(this + 42);
  ReleaseInterface<CSharedSection>(this + 44);
  CExpression::UnregisterSources((CExpression *)this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 106); i = (unsigned int)(i + 1) )
    ReleaseInterface<CWeakReference<CResource>>((__int64 *)this[52] + i);
  DefaultHeap::Free(this[52]);
  DefaultHeap::Free(this[54]);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 48);
  CBaseExpression::~CBaseExpression((CBaseExpression *)this);
}
