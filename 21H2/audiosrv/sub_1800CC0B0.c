/*
 * XREFs of sub_1800CC0B0 @ 0x1800CC0B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002EAA8 @ 0x18002EAA8 (sub_18002EAA8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C2408 @ 0x1800C2408 (sub_1800C2408.c)
 */

__int64 __fastcall sub_1800CC0B0(__int64 a1, unsigned int a2, float a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r8
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800C2408(*((_QWORD *)off_18019C348 + 2), 0x20u, (__int64)&unk_18015DF00, 0LL, a2, a3);
  }
  if ( sub_18002EAA8(a3) )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 72) + 392LL))(
             *(_QWORD *)(a1 + 72),
             a2,
             v8,
             a4,
             a5);
  sub_18004BD84(
    (int)retaddr,
    1189,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessioncontrol.cpp",
    -2147024809);
  return 2147942487LL;
}
