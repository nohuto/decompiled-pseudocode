/*
 * XREFs of ??1FxTagTrackingBlock@@QEAA@XZ @ 0x1C006CE90
 * Callers:
 *     ??_GFxTagTrackingBlock@@QEAAPEAXI@Z @ 0x1C006E504 (--_GFxTagTrackingBlock@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxTagTrackingBlock::~FxTagTrackingBlock(FxTagTrackingBlock *this)
{
  FxTagTrackingStackFrames *StackFrames; // rcx

  StackFrames = this->StackFrames;
  if ( StackFrames )
  {
    FxPoolFree((FX_POOL_TRACKER *)StackFrames);
    this->StackFrames = 0LL;
  }
}
