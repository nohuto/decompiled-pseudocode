/*
 * XREFs of sub_1C0018364 @ 0x1C0018364
 * Callers:
 *     sub_1C00099C0 @ 0x1C00099C0 (sub_1C00099C0.c)
 *     sub_1C000CA20 @ 0x1C000CA20 (sub_1C000CA20.c)
 *     sub_1C000DC30 @ 0x1C000DC30 (sub_1C000DC30.c)
 *     sub_1C000E210 @ 0x1C000E210 (sub_1C000E210.c)
 *     sub_1C000E9B0 @ 0x1C000E9B0 (sub_1C000E9B0.c)
 *     sub_1C00101B0 @ 0x1C00101B0 (sub_1C00101B0.c)
 *     sub_1C00109A0 @ 0x1C00109A0 (sub_1C00109A0.c)
 *     sub_1C0016F40 @ 0x1C0016F40 (sub_1C0016F40.c)
 *     sub_1C00173C0 @ 0x1C00173C0 (sub_1C00173C0.c)
 *     sub_1C001820C @ 0x1C001820C (sub_1C001820C.c)
 *     sub_1C0018BE0 @ 0x1C0018BE0 (sub_1C0018BE0.c)
 *     sub_1C00304E0 @ 0x1C00304E0 (sub_1C00304E0.c)
 *     sub_1C003AEF8 @ 0x1C003AEF8 (sub_1C003AEF8.c)
 *     sub_1C003BC30 @ 0x1C003BC30 (sub_1C003BC30.c)
 *     sub_1C003E6C4 @ 0x1C003E6C4 (sub_1C003E6C4.c)
 *     sub_1C0056E30 @ 0x1C0056E30 (sub_1C0056E30.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

void __fastcall sub_1C0018364(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = sub_1C000F050(a1);
  sub_1C000F050(*(_QWORD *)(a2 + 8));
  *(_DWORD *)(a2 + 32) = 1734964085;
  *((_QWORD *)v3 + 168) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)v3 + 632, *((_BYTE *)v3 + 5064));
}
