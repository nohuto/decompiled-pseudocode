/*
 * XREFs of ?ReportBlockStates@VIDMM_RECYCLE_HEAP@@QEAAXXZ @ 0x1C00C19E0
 * Callers:
 *     ?ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C00C1A94 (-ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x1C0027FFC (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     ?ReportStates@VIDMM_RECYCLE_BLOCK@@QEAAXXZ @ 0x1C00C1BA8 (-ReportStates@VIDMM_RECYCLE_BLOCK@@QEAAXXZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::ReportBlockStates(VIDMM_RECYCLE_HEAP *this)
{
  char *v1; // rsi
  char *i; // rbx
  __int64 v4; // r9
  __int64 v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  v1 = (char *)this + 32;
  for ( i = (char *)*((_QWORD *)this + 4); i != v1; i = *(char **)i )
  {
    if ( bTracingEnabled )
    {
      if ( (unsigned int)(*(_DWORD *)this - 3) > 3 )
        v4 = *((_QWORD *)i + 3);
      else
        v4 = *((_QWORD *)i + 5);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      {
        LODWORD(v7) = 1;
        LODWORD(v6) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 8LL);
        LODWORD(v5) = *(_DWORD *)this;
        McTemplateK0pxqqt_EtwWriteTransfer(
          *((_QWORD *)i + 4) - *((_QWORD *)i + 3),
          &EventCreateProcessAllocation,
          *((_QWORD *)i + 3),
          v4,
          *((_QWORD *)i + 4) - *((_QWORD *)i + 3),
          v5,
          v6,
          v7);
      }
    }
    VIDMM_RECYCLE_BLOCK::ReportStates((VIDMM_RECYCLE_BLOCK *)(i - 16));
  }
}
