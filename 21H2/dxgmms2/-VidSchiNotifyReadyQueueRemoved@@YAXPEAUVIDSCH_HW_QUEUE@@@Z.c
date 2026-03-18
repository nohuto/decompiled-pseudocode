/*
 * XREFs of ?VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001F010
 * Callers:
 *     ?VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z @ 0x1C00406D0 (-VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z.c)
 *     VidSchiSuspendResumeHwContext @ 0x1C0043E14 (VidSchiSuspendResumeHwContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z @ 0x1C003ED08 (-VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z.c)
 */

void __fastcall VidSchiNotifyReadyQueueRemoved(struct VIDSCH_HW_QUEUE *a1)
{
  __int64 v1; // rbx
  int v2; // eax
  __int64 v3; // rdi
  void (__fastcall *v4)(_QWORD); // rax

  v1 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
  v2 = *(_DWORD *)(v1 + 1712);
  if ( !v2 || (v3 = *(_QWORD *)(v1 + 24), !*(_DWORD *)(v3 + 68)) )
  {
    WdLogSingleEntry5(0LL, 281LL, 4096LL, a1, v1, 0LL);
    __debugbreak();
    JUMPOUT(0x1C001F0BBLL);
  }
  *(_DWORD *)(v1 + 1712) = v2 - 1;
  if ( !*((_BYTE *)a1 + 144) )
    --*(_DWORD *)(v1 + 1716);
  --*(_DWORD *)(v3 + 68);
  if ( !*(_DWORD *)(v1 + 1712) )
  {
    VidSchiCheckHwSchNodeProgress((struct _VIDSCH_NODE *)v1, 0);
    if ( *(_DWORD *)(v1 + 11240) != -1 )
    {
      v4 = *(void (__fastcall **)(_QWORD))(v3 + 3088);
      if ( v4 )
        v4(*(_QWORD *)(v3 + 3120));
    }
  }
}
