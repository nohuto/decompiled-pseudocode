/*
 * XREFs of sub_1C00126A8 @ 0x1C00126A8
 * Callers:
 *     sub_1C00017D0 @ 0x1C00017D0 (sub_1C00017D0.c)
 *     sub_1C0008BD0 @ 0x1C0008BD0 (sub_1C0008BD0.c)
 *     sub_1C0010540 @ 0x1C0010540 (sub_1C0010540.c)
 *     sub_1C00162A8 @ 0x1C00162A8 (sub_1C00162A8.c)
 *     sub_1C004CDC0 @ 0x1C004CDC0 (sub_1C004CDC0.c)
 * Callees:
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0012810 @ 0x1C0012810 (sub_1C0012810.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1C00126A8(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // r15
  _DWORD *v6; // rbx
  KIRQL v7; // al
  KIRQL v8; // r10

  v3 = a3;
  v6 = sub_1C000F050(a1);
  sub_1C000FD80(a1, 4, 1631737171, (unsigned int)v6[768], v3);
  sub_1C000FD80(a1, 4, 1631734851, (unsigned int)v6[768], a2);
  if ( *((_QWORD *)v6 + 549) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 383);
    if ( v6[768] == (_DWORD)v3 || *((_QWORD *)v6 + 385) == a2 )
    {
      sub_1C000FD80(a1, 4, 2017613139, (unsigned int)v6[768], v3);
      KeReleaseSpinLock((PKSPIN_LOCK)v6 + 383, v8);
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v6 + 383, v7);
      sub_1C0012810(a1, 6LL, a2);
      (*((void (__fastcall **)(_QWORD))v6 + 549))(*((_QWORD *)v6 + 529));
      sub_1C000FD80(a1, 4, 1816286547, (unsigned int)v6[768], v3);
      v6[768] = v3;
      *((_QWORD *)v6 + 385) = a2;
      *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
      _InterlockedIncrement(v6 + 774);
      *((_QWORD *)v6 + 386) = sub_1C0004060(a1, a2, a1, 1430416236, 1);
    }
  }
}
