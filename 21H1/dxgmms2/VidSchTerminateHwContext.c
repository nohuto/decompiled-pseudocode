/*
 * XREFs of VidSchTerminateHwContext @ 0x1C003ABE0
 * Callers:
 *     ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x1C0037098 (-VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEX.c)
 *     VidSchTerminateAdapter @ 0x1C00D3F70 (VidSchTerminateAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1C0033778 (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     ?VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z @ 0x1C0037570 (-VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z.c)
 */

void __fastcall VidSchTerminateHwContext(_QWORD *P)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // r9
  int v6; // ecx

  v2 = *(_QWORD *)(P[2] + 24LL);
  *(_QWORD *)(P[4] + 8LL) = 0LL;
  if ( (P[7] & 1) != 0 )
  {
    if ( P[6] )
    {
      ((void (__fastcall *)(_QWORD))DxgCoreInterface[23])(*(_QWORD *)(v2 + 8));
      P[6] = 0LL;
      if ( bTracingEnabled )
      {
        v4 = P[1];
        if ( v4 )
        {
          v5 = *(_QWORD *)(v4 + 8);
          if ( !v5 )
            v5 = P[1];
        }
        else
        {
          v5 = 0LL;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v6 = *(unsigned __int16 *)(P[2] + 4LL);
          McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
            v6,
            &EventDestroyContext,
            v3,
            v5,
            v6,
            1 << *((_DWORD *)P + 16),
            0,
            0,
            0,
            0,
            0,
            3,
            P);
        }
      }
    }
  }
  VidSchiDecrementHwContextReference((unsigned int *)P, 0LL);
}
