/*
 * XREFs of ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0154FD8
 * Callers:
 *     ?ADAPTER_RENDER_NotifyDeferredDestructionComplete@@YAXPEAVADAPTER_RENDER@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0016950 (-ADAPTER_RENDER_NotifyDeferredDestructionComplete@@YAXPEAVADAPTER_RENDER@@PEAVDXGTERMINATIONTRAC.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::NotifyDeferredDestructionComplete(
        ADAPTER_RENDER *this,
        struct DXGTERMINATIONTRACKER *a2)
{
  char *v3; // rsi
  char v5; // di
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  v3 = (char *)this + 1144;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  if ( *((_BYTE *)this + 1200) )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)this + 152) )
    {
      v8 = WdLogNewEntry5_WdCriticalError(v7, v6);
      *(_QWORD *)(v8 + 24) = 275LL;
      *(_QWORD *)(v8 + 32) = 31LL;
      *(_QWORD *)(v8 + 40) = this;
      *(_OWORD *)(v8 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v8);
    }
  }
  *((_QWORD *)a2 + 7) = *((_QWORD *)this + 142);
  *((_QWORD *)this + 142) = (char *)a2 + 56;
  *((_BYTE *)this + 1200) = 1;
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 2) + 24LL));
    ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)this + 1168), DelayedWorkQueue);
  }
}
