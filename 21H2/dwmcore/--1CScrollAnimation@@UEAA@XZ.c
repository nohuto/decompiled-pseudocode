/*
 * XREFs of ??1CScrollAnimation@@UEAA@XZ @ 0x180253D68
 * Callers:
 *     ??_ECScrollAnimation@@UEAAPEAXI@Z @ 0x180253DB0 (--_ECScrollAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z @ 0x180255E00 (--_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z @ 0x180256560 (--_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCInteractionTracker@@@@@@YAXAEAPEAV?$CWeakReference@VCInteractionTracker@@@@@Z @ 0x180253B4C (--$ReleaseInterface@V-$CWeakReference@VCInteractionTracker@@@@@@YAXAEAPEAV-$CWeakReference@VCInt.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x180254A78 (-Stop@CScrollAnimation@@QEAAJXZ.c)
 */

void __fastcall CScrollAnimation::~CScrollAnimation(CScrollAnimation *this)
{
  *(_QWORD *)this = &CScrollAnimation::`vftable';
  CScrollAnimation::Stop(this);
  ReleaseInterface<CWeakReference<CInteractionTracker>>((__int64 *)this + 44);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 50);
  CBaseExpression::~CBaseExpression(this);
}
