/*
 * XREFs of ?EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z @ 0x1C00D6D14
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E3C0 (McTemplateK0p_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_GLOBAL::EvictFromFaultedList(VIDMM_GLOBAL *this, struct VIDMM_DEVICE *a2, __int64 a3, __int64 a4)
{
  char *v4; // rdi
  __int64 i; // rbx
  __int64 v6; // rsi
  int v7; // [rsp+20h] [rbp-28h]

  v4 = (char *)a2 + 144;
  for ( i = *((_QWORD *)a2 + 19); (char *)i != v4; i = *(_QWORD *)(i + 8) )
  {
    v6 = **(_QWORD **)(i - 56);
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = i - 56;
    if ( *(_DWORD *)(v6 + 112) == 1 )
    {
      LOBYTE(a3) = 1;
      LOBYTE(v7) = 0;
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, _QWORD))(**(_QWORD **)(v6 + 120) + 48LL))(
        *(_QWORD *)(v6 + 120),
        v6,
        a3,
        0LL,
        v7,
        0LL);
      if ( bTracingEnabled )
      {
        if ( (byte_1C006E941 & 1) != 0 )
          McTemplateK0p_EtwWriteTransfer((__int64)this, &EventEvictAllocation, a3, v6);
      }
    }
  }
}
