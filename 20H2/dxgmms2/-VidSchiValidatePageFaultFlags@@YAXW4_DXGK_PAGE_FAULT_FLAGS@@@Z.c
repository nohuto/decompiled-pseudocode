/*
 * XREFs of ?VidSchiValidatePageFaultFlags@@YAXW4_DXGK_PAGE_FAULT_FLAGS@@@Z @ 0x1C00396A8
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000CC80 (VidSchDdiNotifyInterruptWorker.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x1C003ACC8 (VidSchiProcessHwQueuePageFaultedDpc.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiValidatePageFaultFlags(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  v2 = (int)a1;
  if ( (a1 & 0x10) != 0 )
  {
    v3 = WdLogNewEntry5_WdCriticalError(a1, a2);
    *(_QWORD *)(v3 + 24) = 281LL;
    *(_QWORD *)(v3 + 32) = 12LL;
    *(_QWORD *)(v3 + 40) = v2;
    *(_OWORD *)(v3 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v3);
    __debugbreak();
  }
  if ( (v2 & 0xC) == 0xC )
  {
    v4 = WdLogNewEntry5_WdCriticalError(a1, a2);
    *(_QWORD *)(v4 + 24) = 281LL;
    *(_QWORD *)(v4 + 32) = 13LL;
    *(_QWORD *)(v4 + 40) = v2;
    *(_OWORD *)(v4 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v4);
    __debugbreak();
  }
  if ( (unsigned int)v2 >= 0x100 )
  {
    v5 = WdLogNewEntry5_WdCriticalError(a1, a2);
    *(_QWORD *)(v5 + 24) = 281LL;
    *(_QWORD *)(v5 + 32) = 13LL;
    *(_QWORD *)(v5 + 40) = v2;
    *(_OWORD *)(v5 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v5);
    __debugbreak();
  }
}
