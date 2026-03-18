/*
 * XREFs of ??1CExpression@@UEAA@XZ @ 0x18009A688
 * Callers:
 *     ??_ECExpression@@UEAAPEAXI@Z @ 0x18009A5E0 (--_ECExpression@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x1800987CC (--$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A624 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z @ 0x18009A720 (--$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z.c)
 *     ?UnregisterSources@CExpression@@IEAAXXZ @ 0x18009B58C (-UnregisterSources@CExpression@@IEAAXXZ.c)
 */

void __fastcall CExpression::~CExpression(void **this)
{
  __int64 i; // rdi

  *this = &CExpression::`vftable';
  ReleaseInterface<CD2DSharedBuffer>(this + 39);
  ReleaseInterface<CD2DSharedBuffer>(this + 41);
  CExpression::UnregisterSources((CExpression *)this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 100); i = (unsigned int)(i + 1) )
    ReleaseInterface<CHwLightCollectionBuffer>((__int64 *)this[49] + i);
  operator delete(this[49]);
  operator delete(this[51]);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 45);
  CBaseExpression::~CBaseExpression((CBaseExpression *)this);
}
