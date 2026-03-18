/*
 * XREFs of ??1CExpression@@UEAA@XZ @ 0x18006DD70
 * Callers:
 *     ??_ECExpression@@UEAAPEAXI@Z @ 0x18006DB00 (--_ECExpression@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18006DB44 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z @ 0x18006DE08 (--$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z.c)
 *     ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18006FC14 (--$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?UnregisterSources@CExpression@@IEAAXXZ @ 0x1800705C8 (-UnregisterSources@CExpression@@IEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 */

void __fastcall CExpression::~CExpression(void **this)
{
  __int64 i; // rdi

  *this = &CExpression::`vftable';
  ReleaseInterface<CD2DSharedBuffer>(this + 39);
  ReleaseInterface<CD2DSharedBuffer>(this + 41);
  CExpression::UnregisterSources((CExpression *)this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 100); i = (unsigned int)(i + 1) )
    ReleaseInterface<CHwLightCollectionBuffer>((char *)this[49] + 8 * i);
  operator delete(this[49]);
  operator delete(this[51]);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 45);
  CBaseExpression::~CBaseExpression((CBaseExpression *)this);
}
