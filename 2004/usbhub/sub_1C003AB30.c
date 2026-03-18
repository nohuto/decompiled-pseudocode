/*
 * XREFs of sub_1C003AB30 @ 0x1C003AB30
 * Callers:
 *     sub_1C004CDC0 @ 0x1C004CDC0 (sub_1C004CDC0.c)
 *     sub_1C0053F94 @ 0x1C0053F94 (sub_1C0053F94.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001CDA8 @ 0x1C001CDA8 (sub_1C001CDA8.c)
 *     sub_1C0054AFC @ 0x1C0054AFC (sub_1C0054AFC.c)
 */

void __fastcall sub_1C003AB30(__int64 a1, __int64 a2, __int64 a3)
{
  KIRQL v6; // dl

  sub_1C001CDA8(a1, a3, 4);
  sub_1C000FD80(a1, 2, 1716736630, 0LL, a3);
  if ( sub_1C0011220(a2)[281] == 1 )
  {
    sub_1C0054AFC(a1, a2, 1LL);
  }
  else
  {
    *(_DWORD *)(a3 + 136) = 0;
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    v6 = *(_BYTE *)(a3 + 132);
    *(_DWORD *)(a3 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v6);
  }
}
