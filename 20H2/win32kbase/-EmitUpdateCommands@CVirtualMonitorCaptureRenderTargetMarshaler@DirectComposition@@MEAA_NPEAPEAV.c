/*
 * XREFs of ?EmitUpdateCommands@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01EFA10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01EF260 (-EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CCaptureRenderTargetMarshaler::EmitUpdateCommands(this, a2)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 224LL))(
         this,
         a2)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 232LL))(
         this,
         a2) )
  {
    return (*(unsigned __int8 (__fastcall **)(DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 240LL))(
             this,
             a2) != 0;
  }
  return v4;
}
