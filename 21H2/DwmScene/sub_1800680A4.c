/*
 * XREFs of sub_1800680A4 @ 0x1800680A4
 * Callers:
 *     sub_18000F62C @ 0x18000F62C (sub_18000F62C.c)
 *     sub_1800174E8 @ 0x1800174E8 (sub_1800174E8.c)
 *     sub_1800244C4 @ 0x1800244C4 (sub_1800244C4.c)
 *     sub_18003E2B8 @ 0x18003E2B8 (sub_18003E2B8.c)
 *     sub_18003E534 @ 0x18003E534 (sub_18003E534.c)
 *     sub_18006E3F0 @ 0x18006E3F0 (sub_18006E3F0.c)
 *     sub_1800CC478 @ 0x1800CC478 (sub_1800CC478.c)
 *     sub_1800CCD98 @ 0x1800CCD98 (sub_1800CCD98.c)
 *     sub_1800CD014 @ 0x1800CD014 (sub_1800CD014.c)
 *     sub_1800CD290 @ 0x1800CD290 (sub_1800CD290.c)
 *     sub_1800CD50C @ 0x1800CD50C (sub_1800CD50C.c)
 *     sub_1800CD788 @ 0x1800CD788 (sub_1800CD788.c)
 *     sub_1800CF3D0 @ 0x1800CF3D0 (sub_1800CF3D0.c)
 *     sub_1800CF834 @ 0x1800CF834 (sub_1800CF834.c)
 *     sub_1800D1604 @ 0x1800D1604 (sub_1800D1604.c)
 *     sub_1800F3AFC @ 0x1800F3AFC (sub_1800F3AFC.c)
 *     sub_1800F6348 @ 0x1800F6348 (sub_1800F6348.c)
 * Callees:
 *     sub_18007040C @ 0x18007040C (sub_18007040C.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800680A4(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  volatile signed __int32 *v5; // rcx
  __int64 result; // rax

  v2 = a2[1];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 12));
    v2 = a2[1];
  }
  *(_QWORD *)(a1 + 72) = *a2;
  v5 = *(volatile signed __int32 **)(a1 + 80);
  *(_QWORD *)(a1 + 80) = v2;
  if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  result = sub_18007040C(*a2);
  *(_DWORD *)(a1 + 88) = result;
  return result;
}
