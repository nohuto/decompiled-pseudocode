/*
 * XREFs of ?CompletePStateTransitionCB@DXGADAPTER@@QEAAXII@Z @ 0x1C00435D8
 * Callers:
 *     DxgkCompletePStateTransitionCB @ 0x1C004BCC0 (DxgkCompletePStateTransitionCB.c)
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0044DE4 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     ?RecordPStateChange@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z @ 0x1C0056E5C (-RecordPStateChange@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z.c)
 */

void __fastcall DXGADAPTER::CompletePStateTransitionCB(DXGADAPTER *this, unsigned int a2, unsigned int a3)
{
  int v4; // r8d
  __int64 v5; // rdi

  if ( *((_QWORD *)this + 363) )
  {
    v5 = *(_QWORD *)(520LL
                   * ((unsigned __int16)a2
                    + (unsigned int)*((unsigned __int16 *)this + ((unsigned __int64)a2 >> 16) + 1456))
                   + *((_QWORD *)this + 362)
                   + 512);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      {
        v4 = (unsigned __int16)a2 + *((unsigned __int16 *)this + ((unsigned __int64)a2 >> 16) + 1456);
        McTemplateK0pqqq_EtwWriteTransfer(
          (_DWORD)this,
          (unsigned int)&Dxgk_PowerPStateCompleted,
          v4,
          (_DWORD)this,
          v4,
          *(_DWORD *)(v5 + 192),
          a3);
      }
    }
    DXGPOWERSTATISTICSTRANSITIONENGINE::RecordPStateChange((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v5 + 136), a3);
  }
}
