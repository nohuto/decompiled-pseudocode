/*
 * XREFs of sub_18010B1AC @ 0x18010B1AC
 * Callers:
 *     sub_180107BC8 @ 0x180107BC8 (sub_180107BC8.c)
 *     sub_180108FA0 @ 0x180108FA0 (sub_180108FA0.c)
 *     sub_18010B4E4 @ 0x18010B4E4 (sub_18010B4E4.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB330 @ 0x1800BB330 (sub_1800BB330.c)
 *     sub_1800D8E60 @ 0x1800D8E60 (sub_1800D8E60.c)
 */

__int64 __fastcall sub_18010B1AC(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    sub_1800D8E60(
      (int)retaddr,
      379,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp");
    __debugbreak();
  }
  *a2 = 0LL;
  v2 = *a1;
  if ( !v2 )
  {
    sub_1800BB330(
      (int)retaddr,
      382,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      -2005139196);
    __debugbreak();
  }
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  sub_18004BD84(
    (int)retaddr,
    384,
    (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
    v3);
  return v4;
}
