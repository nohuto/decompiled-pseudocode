/*
 * XREFs of sub_1800E3AC0 @ 0x1800E3AC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800E2DBC @ 0x1800E2DBC (sub_1800E2DBC.c)
 */

__int64 __fastcall sub_1800E3AC0(__int64 a1, char a2)
{
  __int64 *v2; // rbx

  v2 = (__int64 *)(a1 + 56);
  sub_1800E2DBC(a1 + 56, a1 + 56, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL));
  sub_1800472E0(*v2, 0x48uLL);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_18006A148((void *)a1);
  return a1;
}
