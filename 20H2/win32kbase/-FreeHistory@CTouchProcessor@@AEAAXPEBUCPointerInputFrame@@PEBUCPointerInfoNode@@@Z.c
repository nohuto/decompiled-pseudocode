/*
 * XREFs of ?FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C018BEB4
 * Callers:
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C018C2EC (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 * Callees:
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C018C3C8 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C018E38C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0192A14 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C019AA04 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeHistory(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int HistoryCount; // esi
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // r12d
  CTouchProcessor *v17; // rdi
  bool v18; // zf
  char *v19; // rbp
  __int64 v20; // rbx
  unsigned int v21; // ebx

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)this, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
  HistoryCount = CPointerInfoNode::GetHistoryCount(a3);
  if ( HistoryCount <= 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14, v15);
  v16 = *((_DWORD *)a3 + 86);
  v17 = (CTouchProcessor *)*((_QWORD *)a2 + 1);
  while ( v17 != (CTouchProcessor *)(this + 16) )
  {
    v18 = HistoryCount == 1;
    if ( HistoryCount <= 1 )
      goto LABEL_24;
    v19 = (char *)v17 - 8;
    v17 = *(CTouchProcessor **)v17;
    if ( *((_QWORD *)v19 + 8) == *((_QWORD *)a2 + 8) )
    {
      if ( v16 >= *((_DWORD *)v19 + 12) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14, v15);
      v20 = *((_QWORD *)v19 + 17) + 480LL * v16;
      if ( (*(_DWORD *)v20 & 0x2000) != 0 || !*(_DWORD *)(v20 + 172) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14, v15);
      if ( *(_WORD *)(v20 + 172) != *((_WORD *)a3 + 86) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14, v15);
      if ( *(_QWORD *)(v20 + 16) != *((_QWORD *)a3 + 2) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14, v15);
      if ( (*(_DWORD *)v20 & 2) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14, v15);
      v21 = *(_DWORD *)(v20 + 344);
      _InterlockedIncrement((volatile signed __int32 *)v19 + 11);
      CTouchProcessor::FreePointerInfoNodeInt((CTouchProcessor *)this, (struct CPointerInputFrame *)v19, v16);
      CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, (struct CPointerInputFrame *)v19);
      --HistoryCount;
      v16 = v21;
    }
  }
  v18 = HistoryCount == 1;
LABEL_24:
  if ( !v18 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14, v15);
}
