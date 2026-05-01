/*
 * XREFs of ?DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x18005DA18
 * Callers:
 *     ?AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ @ 0x18005D8EC (-AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ.c)
 *     _lambda_0dfba51d9442314f5649f320fbc85f9d_::operator() @ 0x1800AEC34 (_lambda_0dfba51d9442314f5649f320fbc85f9d_--operator().c)
 * Callees:
 *     _lambda_8338bf6361c9edea54dfdf29e37ea07e_::operator() @ 0x1800AED08 (_lambda_8338bf6361c9edea54dfdf29e37ea07e_--operator().c)
 */

char __fastcall ImmersiveMonitorHelper::DoesMonitorSupportTaskbar(
        ImmersiveMonitorHelper *this,
        struct IImmersiveMonitor *a2)
{
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF
  char v4; // [rsp+50h] [rbp+8h] BYREF
  struct IImmersiveMonitor *v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2;
  v3[1] = this;
  v3[0] = &v5;
  v4 = 0;
  v3[2] = &v4;
  lambda_8338bf6361c9edea54dfdf29e37ea07e_::operator()(v3);
  return v4;
}
