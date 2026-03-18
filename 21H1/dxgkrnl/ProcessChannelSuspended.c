/*
 * XREFs of ProcessChannelSuspended @ 0x1C02AF470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?NotifyChannelSuspended@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C02AED30 (-NotifyChannelSuspended@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void ProcessChannelSuspended()
{
  PRKEVENT *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  v0 = (PRKEVENT *)((__int64 (*)(void))qword_1C00B0F68)();
  if ( v0 )
    DXGVMBUSCHANNEL::NotifyChannelSuspended(v0, v1, v2, v3);
}
