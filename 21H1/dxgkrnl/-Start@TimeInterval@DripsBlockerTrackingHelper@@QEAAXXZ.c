/*
 * XREFs of ?Start@TimeInterval@DripsBlockerTrackingHelper@@QEAAXXZ @ 0x1C02BF278
 * Callers:
 *     ?SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1C02BAD88 (-SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z.c)
 *     ?EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z @ 0x1C02BC29C (-EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DripsBlockerTrackingHelper::TimeInterval::Start(LARGE_INTEGER *this)
{
  if ( !LOBYTE(this->LowPart) )
  {
    this[1] = KeQueryPerformanceCounter(0LL);
    LOBYTE(this->LowPart) = 1;
  }
}
