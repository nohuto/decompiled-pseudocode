/*
 * XREFs of ?FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C01940D4
 * Callers:
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C019450C (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 * Callees:
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C01945E8 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C01965AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C019AC44 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C01A2C64 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeHistory(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int HistoryCount; // esi
  unsigned int v9; // r12d
  CTouchProcessor *v10; // rdi
  bool v11; // zf
  char *v12; // rbp
  __int64 v13; // rbx
  unsigned int v14; // ebx

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)this, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  HistoryCount = CPointerInfoNode::GetHistoryCount(a3);
  if ( HistoryCount <= 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
  v9 = *((_DWORD *)a3 + 86);
  v10 = (CTouchProcessor *)*((_QWORD *)a2 + 1);
  while ( v10 != (CTouchProcessor *)(this + 16) )
  {
    v11 = HistoryCount == 1;
    if ( HistoryCount <= 1 )
      goto LABEL_24;
    v12 = (char *)v10 - 8;
    v10 = *(CTouchProcessor **)v10;
    if ( *((_QWORD *)v12 + 8) == *((_QWORD *)a2 + 8) )
    {
      if ( v9 >= *((_DWORD *)v12 + 12) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
      v13 = *((_QWORD *)v12 + 17) + 480LL * v9;
      if ( (*(_DWORD *)v13 & 0x2000) != 0 || !*(_DWORD *)(v13 + 172) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
      if ( *(_WORD *)(v13 + 172) != *((_WORD *)a3 + 86) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
      if ( *(_QWORD *)(v13 + 16) != *((_QWORD *)a3 + 2) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
      if ( (*(_DWORD *)v13 & 2) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
      v14 = *(_DWORD *)(v13 + 344);
      _InterlockedIncrement((volatile signed __int32 *)v12 + 11);
      CTouchProcessor::FreePointerInfoNodeInt((CTouchProcessor *)this, (struct CPointerInputFrame *)v12, v9);
      CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, (struct CPointerInputFrame *)v12);
      --HistoryCount;
      v9 = v14;
    }
  }
  v11 = HistoryCount == 1;
LABEL_24:
  if ( !v11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
}
