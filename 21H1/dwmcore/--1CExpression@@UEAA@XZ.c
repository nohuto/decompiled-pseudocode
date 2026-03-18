/*
 * XREFs of ??1CExpression@@UEAA@XZ @ 0x180094EF4
 * Callers:
 *     ??_ECExpression@@UEAAPEAXI@Z @ 0x180094DD0 (--_ECExpression@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180093288 (--$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ??$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z @ 0x180094F8C (--$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z.c)
 *     ?UnregisterSources@CExpression@@IEAAXXZ @ 0x1800967B0 (-UnregisterSources@CExpression@@IEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180097A38 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
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
