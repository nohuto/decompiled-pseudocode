/*
 * XREFs of sub_1800F0860 @ 0x1800F0860
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800EFEC4 @ 0x1800EFEC4 (sub_1800EFEC4.c)
 */

__int64 __fastcall sub_1800F0860(__int64 a1, char a2)
{
  _QWORD *v2; // rdi

  v2 = *(_QWORD **)(a1 + 56);
  if ( v2 )
  {
    sub_1800EFEC4(v2, *(_QWORD **)(a1 + 64));
    sub_1800472E0((__int64)v2, (*(_QWORD *)(a1 + 72) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_18006A148((void *)a1);
  return a1;
}
