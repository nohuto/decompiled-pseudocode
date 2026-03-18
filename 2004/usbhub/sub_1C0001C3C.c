/*
 * XREFs of sub_1C0001C3C @ 0x1C0001C3C
 * Callers:
 *     sub_1C00018E8 @ 0x1C00018E8 (sub_1C00018E8.c)
 * Callees:
 *     sub_1C00015A0 @ 0x1C00015A0 (sub_1C00015A0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0034E5C @ 0x1C0034E5C (sub_1C0034E5C.c)
 */

void __fastcall sub_1C0001C3C(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v4; // rdi
  KIRQL v5; // al

  v4 = (KSPIN_LOCK *)(sub_1C000F050(a1) + 4944);
  v5 = KeAcquireSpinLockRaiseToDpc(v4);
  if ( *(_DWORD *)(a2 + 696) == 2 )
  {
    KeReleaseSpinLock(v4, v5);
    sub_1C000FD80(a1, 16, 1666207794, a1, *(unsigned __int16 *)(a2 + 4));
    sub_1C0034E5C(a1, a2);
  }
  else if ( *(_DWORD *)(a2 + 696) == 3 )
  {
    KeReleaseSpinLock(v4, v5);
    sub_1C000FD80(a1, 16, 1666207793, a1, *(unsigned __int16 *)(a2 + 4));
    sub_1C00015A0(a1, a2);
  }
  else
  {
    KeReleaseSpinLock(v4, v5);
  }
}
