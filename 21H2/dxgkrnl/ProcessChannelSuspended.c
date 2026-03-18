/*
 * XREFs of ProcessChannelSuspended @ 0x1C0356980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyChannelSuspended@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C0356238 (-NotifyChannelSuspended@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void ProcessChannelSuspended()
{
  PRKEVENT *v0; // rax
  __int64 v1; // rdx

  v0 = (PRKEVENT *)((__int64 (*)(void))qword_1C0131BE8)();
  if ( v0 )
    DXGVMBUSCHANNEL::NotifyChannelSuspended(v0, v1);
}
