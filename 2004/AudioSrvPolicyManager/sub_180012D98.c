/*
 * XREFs of sub_180012D98 @ 0x180012D98
 * Callers:
 *     sub_18001E848 @ 0x18001E848 (sub_18001E848.c)
 *     sub_18001F6D0 @ 0x18001F6D0 (sub_18001F6D0.c)
 * Callees:
 *     sub_1800050D0 @ 0x1800050D0 (sub_1800050D0.c)
 *     sub_18000FD24 @ 0x18000FD24 (sub_18000FD24.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

void __fastcall sub_180012D98(__int64 a1, int a2)
{
  int v4; // r8d
  _UNKNOWN **v5; // rcx
  int v6; // eax
  bool v7; // cc
  int v8; // [rsp+20h] [rbp-28h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v10 = 0;
  sub_18001A330(&lpCriticalSection);
  v4 = a2 + *(_DWORD *)(a1 + 616);
  *(_DWORD *)(a1 + 616) = v4;
  v5 = (_UNKNOWN **)off_18004F000;
  v6 = v4;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    v8 = v4;
    sub_18000FD24(*((_QWORD *)off_18004F000 + 2), 0x23u, &stru_180043390, a2, v8);
    v6 = *(_DWORD *)(a1 + 616);
    v5 = (_UNKNOWN **)off_18004F000;
  }
  v7 = v6 <= 0;
  if ( v6 < 0 )
  {
    if ( v5 != &off_18004F000 && (*((_DWORD *)v5 + 7) & 0x40000000) != 0 && *((_BYTE *)v5 + 25) >= 2u )
      sub_1800050D0((TRACEHANDLE)v5[2], 0x24u, &stru_180043390);
    *(_DWORD *)(a1 + 616) = 0;
    v7 = 1;
  }
  if ( v7 )
    *(_DWORD *)(a1 + 208) &= ~8u;
  else
    *(_DWORD *)(a1 + 208) |= 8u;
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
}
