/*
 * XREFs of ?VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001EF2A
 * Callers:
 *     ?VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z @ 0x1C00406D0 (-VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z.c)
 *     VidSchiSuspendResumeHwContext @ 0x1C0043E14 (VidSchiSuspendResumeHwContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiNotifyReadyQueueAdded(struct VIDSCH_HW_QUEUE *a1)
{
  __int64 v1; // rdx
  int v2; // eax
  __int64 v3; // rbx
  int v4; // ecx
  int v5; // eax

  v1 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
  v2 = *(_DWORD *)(v1 + 1712);
  v3 = *(_QWORD *)(v1 + 24);
  if ( v2 == -1 || *(_DWORD *)(v3 + 68) == -1 )
  {
    WdLogSingleEntry5(0LL, 281LL, 28672LL, a1, v1, 0LL);
    __debugbreak();
    JUMPOUT(0x1C001F00ALL);
  }
  *(_DWORD *)(v1 + 1712) = v2 + 1;
  if ( !*((_BYTE *)a1 + 144) )
    ++*(_DWORD *)(v1 + 1716);
  v4 = *(_DWORD *)(v3 + 68) + 1;
  *(_DWORD *)(v3 + 68) = v4;
  v5 = v4;
  if ( *(_DWORD *)(v1 + 1712) == 1 && *(_DWORD *)(v1 + 11240) != -1 && *(_QWORD *)(v3 + 3080) )
  {
    (*(void (__fastcall **)(_QWORD))(v3 + 3080))(*(_QWORD *)(v3 + 3120));
    v5 = *(_DWORD *)(v3 + 68);
  }
  if ( v5 == 1 )
  {
    *(_QWORD *)(v3 + 1224) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v3 + 1192), 0, 0);
  }
}
