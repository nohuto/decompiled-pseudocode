/*
 * XREFs of sub_18002C060 @ 0x18002C060
 * Callers:
 *     sub_180022880 @ 0x180022880 (sub_180022880.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18001B6E8 @ 0x18001B6E8 (sub_18001B6E8.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002C060(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // ebx

  *(_QWORD *)(a1 + 8) = a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 32LL))(*(_QWORD *)(a1 + 8), a1 + 16);
  if ( v5 < 0 || (v5 = sub_18001B6E8(v4, a2, a1 + 24), v5 < 0) )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xFu, &stru_180045198, v5);
    }
    sub_180005724("CStreamStoppedWorkItem::Initialize", 325, v5);
  }
  return (unsigned int)v5;
}
