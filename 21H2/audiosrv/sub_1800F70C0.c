/*
 * XREFs of sub_1800F70C0 @ 0x1800F70C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800741D8 @ 0x1800741D8 (sub_1800741D8.c)
 */

// Hidden C++ exception states: #wind=1
void *__fastcall sub_1800F70C0(void *a1, char a2)
{
  void *v4; // rcx

  *(_QWORD *)a1 = off_18014AB20;
  if ( *((_BYTE *)a1 + 44) )
    sub_1800741D8();
  sub_18000F708((__int64 *)a1 + 6);
  sub_18000F708((__int64 *)a1 + 4);
  v4 = (void *)*((_QWORD *)a1 + 3);
  if ( v4 )
    CoTaskMemFree(v4);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
