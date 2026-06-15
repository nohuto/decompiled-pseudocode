/*
 * XREFs of sub_1800FF380 @ 0x1800FF380
 * Callers:
 *     sub_1800FD4C0 @ 0x1800FD4C0 (sub_1800FD4C0.c)
 * Callees:
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BD8A8 @ 0x1800BD8A8 (sub_1800BD8A8.c)
 */

void __fastcall sub_1800FF380(__int64 a1)
{
  _UNKNOWN **v2; // rcx
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  int v7; // [rsp+20h] [rbp-28h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 256);
  sub_180057764((__int64)&lpCriticalSection);
  v2 = (_UNKNOWN **)off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x32u, (__int64)&unk_180172650);
    v2 = (_UNKNOWN **)off_18019C348;
  }
  if ( *(_QWORD *)(a1 + 312) && *(_DWORD *)(a1 + 56) == 1 )
  {
    if ( v2 != &off_18019C348 && (*((_DWORD *)v2 + 7) & 0x800000) != 0 && *((_BYTE *)v2 + 25) >= 4u )
    {
      sub_1800BB4B4((__int64)v2[2], 0x33u, (__int64)&unk_180172650);
      v2 = (_UNKNOWN **)off_18019C348;
    }
    v3 = *(_QWORD *)(a1 + 304);
    v4 = *(_QWORD *)(a1 + 320);
    v5 = -10000LL * *(unsigned int *)(v4 + 4 * v3);
    pftDueTime.dwLowDateTime = -10000 * *(_DWORD *)(v4 + 4 * v3);
    pftDueTime.dwHighDateTime = HIDWORD(v5);
    if ( v2 != &off_18019C348 && (*((_DWORD *)v2 + 7) & 0x800000) != 0 && *((_BYTE *)v2 + 25) >= 4u )
    {
      v7 = *(_DWORD *)(v4 + 4 * v3);
      sub_1800BD8A8((__int64)v2[2], 0x34u, (__int64)&unk_180172650, a1, v7);
    }
    SetThreadpoolTimer(*(PTP_TIMER *)(a1 + 296), &pftDueTime, 0, 0);
    v6 = *(_QWORD *)(a1 + 304);
    if ( v6 < *(_QWORD *)(a1 + 312) - 1LL )
      *(_QWORD *)(a1 + 304) = v6 + 1;
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
