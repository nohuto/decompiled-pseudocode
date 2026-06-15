/*
 * XREFs of sub_18002EA20 @ 0x18002EA20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002EAA8 @ 0x18002EAA8 (sub_18002EAA8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD2D0 @ 0x1800CD2D0 (sub_1800CD2D0.c)
 */

__int64 __fastcall sub_18002EA20(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  float v4; // xmm1_4
  __int64 v8; // rdx
  double v10; // [rsp+28h] [rbp-20h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    v10 = v4;
    sub_1800CD2D0(*((_QWORD *)off_18019C348 + 2), a2, a3, 0, 0LL, SLOBYTE(v10));
  }
  if ( (unsigned __int8)sub_18002EAA8() )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 72) + 360LL))(
             *(_QWORD *)(a1 + 72),
             v8,
             a3,
             a4);
  sub_18004BD84(retaddr, 1007LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessioncontrol.cpp", 2147942487LL);
  return 2147942487LL;
}
