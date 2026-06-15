/*
 * XREFs of sub_180012FA8 @ 0x180012FA8
 * Callers:
 *     sub_1800094B0 @ 0x1800094B0 (sub_1800094B0.c)
 *     sub_18001E848 @ 0x18001E848 (sub_18001E848.c)
 * Callees:
 *     sub_18000FD24 @ 0x18000FD24 (sub_18000FD24.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

void __fastcall sub_180012FA8(__int64 a1, int a2)
{
  int v4; // r8d
  int v5; // eax
  bool v6; // cc
  int v7; // [rsp+20h] [rbp-28h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  v9 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  sub_18001A330(&lpCriticalSection);
  v4 = a2 + *(_DWORD *)(a1 + 624);
  *(_DWORD *)(a1 + 624) = v4;
  v5 = v4;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    v7 = v4;
    sub_18000FD24(*((_QWORD *)off_18004F000 + 2), 0x27u, &stru_180043390, a2, v7);
    v5 = *(_DWORD *)(a1 + 624);
  }
  v6 = v5 <= 0;
  if ( v5 < 0 )
  {
    *(_DWORD *)(a1 + 624) = 0;
    v6 = 1;
  }
  if ( v6 )
    *(_DWORD *)(a1 + 208) &= ~0x20u;
  else
    *(_DWORD *)(a1 + 208) |= 0x20u;
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
