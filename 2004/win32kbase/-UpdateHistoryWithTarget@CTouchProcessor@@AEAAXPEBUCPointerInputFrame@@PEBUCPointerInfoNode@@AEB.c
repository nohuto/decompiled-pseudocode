/*
 * XREFs of ?UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHH@Z @ 0x1C019D6D8
 * Callers:
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C019B930 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 * Callees:
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C01908AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0194F44 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0195650 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C019BA38 (-SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUta.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int HistoryCount; // edi
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // r15d
  char *v22; // r12
  char *v23; // rsi
  char *v24; // r14
  bool v25; // zf
  __int64 v26; // rbx
  __int64 v27; // rdx
  CTouchProcessor *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9

  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, a2, (__int64)a3, (__int64)a4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
  HistoryCount = CPointerInfoNode::GetHistoryCount(a3);
  if ( HistoryCount <= 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v19, v20);
  v21 = *((_DWORD *)a3 + 86);
  v22 = (char *)this + 128;
  v23 = (char *)*((_QWORD *)a2 + 1);
  while ( v23 != v22 )
  {
    v24 = v23;
    v25 = HistoryCount == 1;
    if ( HistoryCount <= 1 )
      goto LABEL_21;
    v23 = *(char **)v23;
    if ( *((_QWORD *)v24 + 7) == *((_QWORD *)a2 + 8) )
    {
      if ( v21 >= *((_DWORD *)v24 + 10) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v19, v20);
      v26 = *((_QWORD *)v24 + 16) + 480LL * v21;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v26) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29, v30);
      if ( *(_WORD *)(v26 + 172) != *((_WORD *)a3 + 86) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29, v30);
      if ( *(_QWORD *)(v26 + 16) != *((_QWORD *)a3 + 2) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29, v30);
      if ( (*(_DWORD *)v26 & 2) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29, v30);
      CTouchProcessor::SetPointerInfoNodeTargetInt(v28, (struct CPointerInfoNode *)v26, a4, a5, a6, a7, 0, a8, a9);
      v21 = *(_DWORD *)(v26 + 344);
      --HistoryCount;
    }
  }
  v25 = HistoryCount == 1;
LABEL_21:
  if ( !v25 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v19, v20);
}
