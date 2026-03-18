/*
 * XREFs of ProcessChannelPostStarted @ 0x1C0356910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyChannelPostStarted@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C035613C (-NotifyChannelPostStarted@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void ProcessChannelPostStarted()
{
  DXGVMBUSCHANNEL *v0; // rax
  __int64 v1; // rdx

  v0 = (DXGVMBUSCHANNEL *)((__int64 (*)(void))qword_1C0131BE8)();
  if ( v0 )
    DXGVMBUSCHANNEL::NotifyChannelPostStarted(v0, v1);
}
