/*
 * XREFs of ?VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0037E90
 * Callers:
 *     ?VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z @ 0x1C0038650 (-VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z.c)
 *     VidSchiSuspendResumeHwContext @ 0x1C003C238 (VidSchiSuspendResumeHwContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiNotifyReadyQueueAdded(struct VIDSCH_HW_QUEUE *a1, __int64 a2)
{
  struct VIDSCH_HW_QUEUE *v2; // rdi
  __int64 v3; // rbx
  int v4; // eax
  void (__fastcall *v5)(_QWORD); // rax
  _QWORD *v6; // rax

  v2 = a1;
  v3 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
  v4 = *(_DWORD *)(v3 + 1704);
  if ( v4 == -1 || (a1 = *(struct VIDSCH_HW_QUEUE **)(v3 + 24), *((_DWORD *)a1 + 15) == -1) )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    v6[7] = 0LL;
    v6[3] = 281LL;
    v6[4] = 28672LL;
    v6[5] = v2;
    v6[6] = v3;
    WdLogEvent5_WdCriticalError(v6);
    __debugbreak();
    JUMPOUT(0x1C0037F4ALL);
  }
  *(_DWORD *)(v3 + 1704) = v4 + 1;
  if ( !*((_BYTE *)v2 + 144) )
    ++*(_DWORD *)(v3 + 1708);
  ++*((_DWORD *)a1 + 15);
  if ( *(_DWORD *)(v3 + 1704) == 1 && *(_DWORD *)(v3 + 11224) != -1 )
  {
    v5 = (void (__fastcall *)(_QWORD))*((_QWORD *)a1 + 373);
    if ( v5 )
      v5(*((_QWORD *)a1 + 378));
  }
}
