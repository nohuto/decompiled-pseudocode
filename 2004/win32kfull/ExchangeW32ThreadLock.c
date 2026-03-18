/*
 * XREFs of ExchangeW32ThreadLock @ 0x1C0036D0C
 * Callers:
 *     LockExchangeW32Thread @ 0x1C0007E80 (LockExchangeW32Thread.c)
 *     xxxSendMessageBSM @ 0x1C0036BC0 (xxxSendMessageBSM.c)
 *     xxxDoPaint @ 0x1C0092318 (xxxDoPaint.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C0122570 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExchangeW32ThreadLock(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = a1;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(a2 + 16))(v2);
  return result;
}
