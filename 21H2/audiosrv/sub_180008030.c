/*
 * XREFs of sub_180008030 @ 0x180008030
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180008030(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  _BYTE pv[64]; // [rsp+30h] [rbp-58h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  v4 = *a1;
  sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v4 + 296LL))(v4, v7, a3, a4);
  v9 = v8;
  if ( v8 < 0 )
    sub_18004BD84(
      retaddr,
      2050LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessioncontrol.cpp",
      (unsigned int)v8);
  else
    v9 = 0;
  sub_18000F690(pv);
  return v9;
}
