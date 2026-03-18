/*
 * XREFs of sub_1C001BB74 @ 0x1C001BB74
 * Callers:
 *     sub_1C0001010 @ 0x1C0001010 (sub_1C0001010.c)
 *     sub_1C000C0F0 @ 0x1C000C0F0 (sub_1C000C0F0.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0010D74 @ 0x1C0010D74 (sub_1C0010D74.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0012400 @ 0x1C0012400 (sub_1C0012400.c)
 *     sub_1C001BCC4 @ 0x1C001BCC4 (sub_1C001BCC4.c)
 */

__int64 __fastcall sub_1C001BB74(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3)
{
  unsigned int v6; // esi
  _DWORD *v7; // r14
  int v8; // ebx
  KIRQL v9; // dl

  v6 = 0;
  v7 = sub_1C0011220((__int64)a3);
  sub_1C000FD80(a1, 0x10000, 1400066130, a1, (__int64)a3);
  if ( (v7[355] & 4) != 0 )
  {
    v6 = sub_1C001BCC4(a1, a3, 2232227LL);
    sub_1C0012400(a1, 0LL, 0LL, &stru_1C0061ED8);
    *(_BYTE *)(a2 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
    *(_DWORD *)(a2 + 136) = 1;
    *(_DWORD *)(a2 + 88) = 2018460752;
    *(_DWORD *)(a2 + 92) = 26;
    stru_1C006B480.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)a2;
    *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
    v8 = sub_1C0011220((__int64)a3)[281];
    *(_DWORD *)(a2 + 136) = 0;
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    v9 = *(_BYTE *)(a2 + 132);
    *(_DWORD *)(a2 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v9);
    if ( (unsigned int)(v8 - 1) <= 2 )
      sub_1C0010D74(a3, (POWER_STATE)1);
  }
  return v6;
}
