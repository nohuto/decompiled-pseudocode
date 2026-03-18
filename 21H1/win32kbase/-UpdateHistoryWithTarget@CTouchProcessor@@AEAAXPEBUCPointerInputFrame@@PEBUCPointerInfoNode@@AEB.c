/*
 * XREFs of ?UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHH@Z @ 0x1C01A3438
 * Callers:
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01A1690 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 * Callees:
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C01965AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C019AC44 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01A1798 (-SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUta.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UpdateHistoryWithTarget(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        const struct CInputDest *a4,
        int a5,
        const struct tagPOINT *a6,
        int a7,
        int a8,
        int a9)
{
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int HistoryCount; // edi
  unsigned int v15; // r15d
  char *v16; // r12
  char *v17; // rsi
  char *v18; // r14
  bool v19; // zf
  __int64 v20; // rbx
  CTouchProcessor *v21; // rcx

  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
  HistoryCount = CPointerInfoNode::GetHistoryCount(a3);
  if ( HistoryCount <= 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
  v15 = *((_DWORD *)a3 + 86);
  v16 = (char *)this + 128;
  v17 = (char *)*((_QWORD *)a2 + 1);
  while ( v17 != v16 )
  {
    v18 = v17;
    v19 = HistoryCount == 1;
    if ( HistoryCount <= 1 )
      goto LABEL_21;
    v17 = *(char **)v17;
    if ( *((_QWORD *)v18 + 7) == *((_QWORD *)a2 + 8) )
    {
      if ( v15 >= *((_DWORD *)v18 + 10) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
      v20 = *((_QWORD *)v18 + 16) + 480LL * v15;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v20) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
      if ( *(_WORD *)(v20 + 172) != *((_WORD *)a3 + 86) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
      if ( *(_QWORD *)(v20 + 16) != *((_QWORD *)a3 + 2) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
      if ( (*(_DWORD *)v20 & 2) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
      CTouchProcessor::SetPointerInfoNodeTargetInt(v21, (struct CPointerInfoNode *)v20, a4, a5, a6, a7, 0, a8, a9);
      v15 = *(_DWORD *)(v20 + 344);
      --HistoryCount;
    }
  }
  v19 = HistoryCount == 1;
LABEL_21:
  if ( !v19 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
}
