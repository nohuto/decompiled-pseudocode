/*
 * XREFs of ?OnInput@CManipulationManager@@IEAAXXZ @ 0x1802269B4
 * Callers:
 *     _lambda_19664e0b56b7920f045ba8c67b2f55c3_::_lambda_invoker_cdecl_ @ 0x180222FE0 (_lambda_19664e0b56b7920f045ba8c67b2f55c3_--_lambda_invoker_cdecl_.c)
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18022765C (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1800352B8 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x18003531C (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x1800E0A3C (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x180155E28 (McTemplateU0qq_EventWriteTransfer.c)
 *     ?DequeueFrame@GestureTargeting@InputTraceLogging@@SAXPEAVCManipulationFrame@@@Z @ 0x180225CFC (-DequeueFrame@GestureTargeting@InputTraceLogging@@SAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1802274C8 (-ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 */

void __fastcall CManipulationManager::OnInput(CManipulationManager *this)
{
  int *v2; // rbx
  int *v3; // rsi
  int *v4; // rdi
  __int64 v5; // rcx
  int v7; // [rsp+20h] [rbp-39h] BYREF
  struct CManipulationFrame *v8; // [rsp+28h] [rbp-31h] BYREF
  _BYTE v9[48]; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v10[48]; // [rsp+60h] [rbp+7h] BYREF

  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v9, "GestureTargetingInput", 0LL);
  v2 = 0LL;
  v3 = &v7;
  do
  {
    v4 = v2;
    InputTraceLogging::PerfRegion::PerfRegion(
      (InputTraceLogging::PerfRegion *)v10,
      "GestureTargetingInputFrame",
      (const struct InputTraceLogging::PerfRegion *)v9);
    CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(v5, &v8, 1, v3);
    v2 = (int *)v8;
    v8 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(int *))(*(_QWORD *)v4 + 8LL))(v4);
    v3 = 0LL;
    if ( v2 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
        McTemplateU0qq_EventWriteTransfer(
          Microsoft_Windows_Dwm_Core_Provider_Context,
          &MANIPULATION_FRAME_DEQUEUED,
          v2[6],
          v2[4]);
      InputTraceLogging::GestureTargeting::DequeueFrame((struct CManipulationFrame *)v2);
      CManipulationManager::ProcessManipulationInfo(this, (struct CManipulationFrame *)v2);
    }
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v10);
  }
  while ( v7-- );
  if ( v2 )
    (*(void (__fastcall **)(int *))(*(_QWORD *)v2 + 8LL))(v2);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v9);
}
