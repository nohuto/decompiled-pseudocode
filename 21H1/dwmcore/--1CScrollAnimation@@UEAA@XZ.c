/*
 * XREFs of ??1CScrollAnimation@@UEAA@XZ @ 0x1802051E0
 * Callers:
 *     ??_ECScrollAnimation@@UEAAPEAXI@Z @ 0x180205230 (--_ECScrollAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z @ 0x180207220 (--_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z @ 0x180207950 (--_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180096BB0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x18019D534 (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x180205E88 (-Stop@CScrollAnimation@@QEAAJXZ.c)
 */

void __fastcall CScrollAnimation::~CScrollAnimation(CScrollAnimation *this)
{
  *(_QWORD *)this = &CScrollAnimation::`vftable';
  CScrollAnimation::Stop(this);
  ReleaseInterface<CPolygon>((__int64 *)this + 41);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 376);
  CBaseExpression::~CBaseExpression(this);
}
