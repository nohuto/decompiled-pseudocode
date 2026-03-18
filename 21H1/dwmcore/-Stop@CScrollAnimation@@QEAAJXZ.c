/*
 * XREFs of ?Stop@CScrollAnimation@@QEAAJXZ @ 0x180205E88
 * Callers:
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801CCF34 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x1802051E0 (--1CScrollAnimation@@UEAA@XZ.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x180205908 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x1800970B0 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 */

__int64 __fastcall CScrollAnimation::Stop(CScrollAnimation *this)
{
  *((_BYTE *)this + 208) &= ~1u;
  if ( (*((_BYTE *)this + 344) & 1) != 0 )
  {
    CBaseExpression::EnsureExpressionIsUnregistered(this);
    *((_BYTE *)this + 344) &= ~1u;
    *((_DWORD *)this + 66) = 16;
  }
  return 0LL;
}
