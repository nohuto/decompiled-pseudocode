/*
 * XREFs of sub_1C0001648 @ 0x1C0001648
 * Callers:
 *     sub_1C0001120 @ 0x1C0001120 (sub_1C0001120.c)
 *     sub_1C00015A0 @ 0x1C00015A0 (sub_1C00015A0.c)
 *     sub_1C0036048 @ 0x1C0036048 (sub_1C0036048.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

__int64 __fastcall sub_1C0001648(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int v4; // ebx
  __int64 v5; // rax
  KSPIN_LOCK *v6; // rbp
  KIRQL v7; // r14
  int v8; // r10d

  v2 = 0;
  v4 = a1;
  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
    sub_1C002DC78(a1, 0LL);
  if ( *(_DWORD *)v5 != 541218120 )
    sub_1C002DC78(a1, *(_QWORD *)(a1 + 64));
  v6 = (KSPIN_LOCK *)(v5 + 4944);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 4944));
  sub_1C000FD80(v4, 16, 1936282195, *(_DWORD *)(a2 + 696), *(unsigned __int16 *)(a2 + 4));
  if ( *(_DWORD *)(a2 + 696) == 3 )
  {
    sub_1C000FD80(v4, v8, 1936282232, 3, *(unsigned __int16 *)(a2 + 4));
    *(_DWORD *)(a2 + 696) = 0;
    KeSetEvent((PRKEVENT)(a2 + 712), 0, 0);
    v2 = 1;
  }
  KeReleaseSpinLock(v6, v7);
  return v2;
}
