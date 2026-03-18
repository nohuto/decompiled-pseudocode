/*
 * XREFs of ProcessChannelPostStarted @ 0x1C02B2960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?NotifyChannelPostStarted@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C02B2194 (-NotifyChannelPostStarted@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void ProcessChannelPostStarted()
{
  DXGVMBUSCHANNEL *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  v0 = (DXGVMBUSCHANNEL *)((__int64 (*)(void))qword_1C00B2098)();
  if ( v0 )
    DXGVMBUSCHANNEL::NotifyChannelPostStarted(v0, v1, v2, v3);
}
