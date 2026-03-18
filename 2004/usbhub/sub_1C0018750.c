/*
 * XREFs of sub_1C0018750 @ 0x1C0018750
 * Callers:
 *     CompletionFunction @ 0x1C000CC80 (CompletionFunction.c)
 *     sub_1C000DC30 @ 0x1C000DC30 (sub_1C000DC30.c)
 *     sub_1C00173C0 @ 0x1C00173C0 (sub_1C00173C0.c)
 *     sub_1C0018660 @ 0x1C0018660 (sub_1C0018660.c)
 *     sub_1C0019404 @ 0x1C0019404 (sub_1C0019404.c)
 *     sub_1C003BC30 @ 0x1C003BC30 (sub_1C003BC30.c)
 * Callees:
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

void __fastcall sub_1C0018750(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdx
  _QWORD *v6; // r8

  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  v3 = *(_QWORD *)(a1 + 64);
  if ( !v3 )
    sub_1C002DC78(a1, 0LL);
  if ( *(_DWORD *)v3 != 541218120 )
    sub_1C002DC78(a1, *(_QWORD *)(a1 + 64));
  v4 = *(_QWORD *)(a2 + 72);
  *(_BYTE *)(v4 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v4 + 136) = 1;
  stru_1C006B480.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&stru_1C006B480.Dpc.DeferredContext;
  if ( *(_BYTE *)(a2 + 136) )
    *(_QWORD *)(v3 + 912) = 0LL;
  v5 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(v5 + 8) != a2 + 8 || (v6 = *(_QWORD **)(a2 + 16), *v6 != a2 + 8) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  ExFreePoolWithTag((PVOID)a2, 0);
  *(_DWORD *)(v4 + 136) = 0;
  stru_1C006B480.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v4 + 132));
}
