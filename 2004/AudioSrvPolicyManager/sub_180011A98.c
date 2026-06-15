/*
 * XREFs of sub_180011A98 @ 0x180011A98
 * Callers:
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18002CAC0 @ 0x18002CAC0 (sub_18002CAC0.c)
 * Callees:
 *     sub_18000A610 @ 0x18000A610 (sub_18000A610.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180011A98(__int64 a1)
{
  struct _TP_TIMER *v2; // r10
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 384);
  v5 = 0;
  sub_18001A330(&lpCriticalSection);
  if ( *(_QWORD *)(a1 + 424) )
  {
    v2 = *(struct _TP_TIMER **)(a1 + 424);
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 4u )
    {
      sub_18000A610(*((_QWORD *)off_18004F000 + 2), 0x18u, &stru_180043390, *(const wchar_t **)(a1 + 24));
      v2 = *(struct _TP_TIMER **)(a1 + 424);
    }
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)(a1 + 424), 1);
    CloseThreadpoolTimer(*(PTP_TIMER *)(a1 + 424));
    *(_DWORD *)(a1 + 436) = 1;
    *(_QWORD *)(a1 + 424) = 0LL;
  }
  if ( v5 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v5 = 0;
  }
  return 0LL;
}
