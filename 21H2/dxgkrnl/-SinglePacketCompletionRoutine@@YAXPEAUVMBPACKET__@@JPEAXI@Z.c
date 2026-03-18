/*
 * XREFs of ?SinglePacketCompletionRoutine@@YAXPEAUVMBPACKET__@@JPEAXI@Z @ 0x1C005D140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0044948 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ @ 0x1C0059434 (-ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ.c)
 */

void __fastcall SinglePacketCompletionRoutine(struct VMBPACKET__ *a1, __int64 a2, void *a3)
{
  volatile __int64 *v4; // rdi
  __int64 v5; // r8

  v4 = (volatile __int64 *)((__int64 (__fastcall *)(struct VMBPACKET__ *, __int64, void *))qword_1C0131CB0)(a1, a2, a3);
  if ( _InterlockedExchange64(v4 + 1, 0LL) )
    ((void (__fastcall *)(struct VMBPACKET__ *))qword_1C0131CA0)(a1);
  DXGKVMB_SINGLEPACKETCONTEXT::ReleaseReference((DXGKVMB_SINGLEPACKETCONTEXT *)v4);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventVmBusCompletePacketAsync, v5, a1);
  }
}
