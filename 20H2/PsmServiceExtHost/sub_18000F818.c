/*
 * XREFs of sub_18000F818 @ 0x18000F818
 * Callers:
 *     sub_18000F5F8 @ 0x18000F5F8 (sub_18000F5F8.c)
 *     sub_180033820 @ 0x180033820 (sub_180033820.c)
 *     sub_180072B40 @ 0x180072B40 (sub_180072B40.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

_BOOL8 __fastcall sub_18000F818(__int64 a1, _QWORD *a2)
{
  return *(_QWORD *)a1 < 0x100uLL
      && (!a2 || (*(_QWORD *)a1 & *a2) == *(_QWORD *)a1)
      && ((*(_BYTE *)a1 & 1) != 0 || *(_QWORD *)(a1 + 8) == -1LL)
      && ((*(_BYTE *)a1 & 2) != 0 || *(_QWORD *)(a1 + 16) == -1LL)
      && ((*(_BYTE *)a1 & 4) != 0 || *(_QWORD *)(a1 + 24) == -1LL)
      && ((*(_BYTE *)a1 & 8) != 0 || *(_QWORD *)(a1 + 32) == -1LL)
      && ((*(_QWORD *)a1 & 0x10) != 0 || !*(_QWORD *)(a1 + 40))
      && ((*(_BYTE *)a1 & 0x20) != 0 || (*(_DWORD *)(a1 + 48) & 3) == 1)
      && ((*(_BYTE *)a1 & 0x40) != 0 || (*(_BYTE *)(a1 + 48) & 8) == 0)
      && (*(char *)a1 < 0 || (*(_BYTE *)(a1 + 48) & 0x20) == 0)
      && ((*(_QWORD *)a1 & 0x10LL) == 0 || (*(_BYTE *)(a1 + 48) & 0x20) != 0);
}
