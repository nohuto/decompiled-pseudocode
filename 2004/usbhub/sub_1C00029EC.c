/*
 * XREFs of sub_1C00029EC @ 0x1C00029EC
 * Callers:
 *     sub_1C00023E0 @ 0x1C00023E0 (sub_1C00023E0.c)
 *     sub_1C0008BD0 @ 0x1C0008BD0 (sub_1C0008BD0.c)
 *     sub_1C0010540 @ 0x1C0010540 (sub_1C0010540.c)
 *     sub_1C00162A8 @ 0x1C00162A8 (sub_1C00162A8.c)
 *     sub_1C00195F0 @ 0x1C00195F0 (sub_1C00195F0.c)
 *     sub_1C0033FC4 @ 0x1C0033FC4 (sub_1C0033FC4.c)
 *     sub_1C00342BC @ 0x1C00342BC (sub_1C00342BC.c)
 *     sub_1C004C7A4 @ 0x1C004C7A4 (sub_1C004C7A4.c)
 *     sub_1C004CB90 @ 0x1C004CB90 (sub_1C004CB90.c)
 *     sub_1C004CC80 @ 0x1C004CC80 (sub_1C004CC80.c)
 *     sub_1C004CDC0 @ 0x1C004CDC0 (sub_1C004CDC0.c)
 *     sub_1C004D520 @ 0x1C004D520 (sub_1C004D520.c)
 *     sub_1C004D8C0 @ 0x1C004D8C0 (sub_1C004D8C0.c)
 *     sub_1C004E0B0 @ 0x1C004E0B0 (sub_1C004E0B0.c)
 *     sub_1C004E668 @ 0x1C004E668 (sub_1C004E668.c)
 * Callees:
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1C00029EC(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rbx
  KIRQL v7; // al
  __int64 v8; // rdx
  KIRQL v9; // r10

  v3 = a3;
  v6 = sub_1C000F050(a1);
  sub_1C000FD80(a1, 4, 1967281491, *(_DWORD *)(v6 + 3072), v3);
  if ( *(_QWORD *)(v6 + 4400) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 3064));
    if ( *(_DWORD *)(v6 + 3072) == (_DWORD)v3 && *(_QWORD *)(v6 + 3080) == a2 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3064), v7);
      sub_1C0003610(a1, v8, *(_QWORD *)(v6 + 3088));
      *(_QWORD *)(v6 + 3088) = 0LL;
      *(_DWORD *)(v6 + 3072) = 0;
      *(_QWORD *)(v6 + 3080) = 0LL;
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 3096));
      (*(void (__fastcall **)(_QWORD))(v6 + 4400))(*(_QWORD *)(v6 + 4232));
    }
    else
    {
      sub_1C000FD80(a1, 4, 1967281016, *(_DWORD *)(v6 + 3072), *(_QWORD *)(v6 + 3080));
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3064), v9);
    }
  }
}
