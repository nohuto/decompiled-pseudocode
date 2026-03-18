/*
 * XREFs of sub_1C0033D58 @ 0x1C0033D58
 * Callers:
 *     sub_1C0034E5C @ 0x1C0034E5C (sub_1C0034E5C.c)
 *     sub_1C0036088 @ 0x1C0036088 (sub_1C0036088.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

__int64 __fastcall sub_1C0033D58(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  KSPIN_LOCK *v5; // rbp
  KIRQL v6; // r14

  v4 = 0;
  v5 = (KSPIN_LOCK *)(sub_1C000F050(a1) + 1236);
  v6 = KeAcquireSpinLockRaiseToDpc(v5);
  sub_1C000FD80(a1, 16, 1936282453, 0LL, *(unsigned __int16 *)(a2 + 4));
  if ( *(_DWORD *)(a2 + 696) == 2 )
  {
    *(_DWORD *)(a2 + 696) = 0;
    KeSetEvent((PRKEVENT)(a2 + 744), 0, 0);
    v4 = 1;
  }
  KeReleaseSpinLock(v5, v6);
  return v4;
}
