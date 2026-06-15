/*
 * XREFs of sub_1800FA320 @ 0x1800FA320
 * Callers:
 *     sub_1800615D4 @ 0x1800615D4 (sub_1800615D4.c)
 *     sub_1800FF6F8 @ 0x1800FF6F8 (sub_1800FF6F8.c)
 * Callees:
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

void __fastcall sub_1800FA320(__int64 a1)
{
  struct _TP_TIMER *v2; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x39u, (__int64)&unk_180172650, a1);
  }
  v4 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 256);
  sub_180057764((__int64)&lpCriticalSection);
  v2 = *(struct _TP_TIMER **)(a1 + 296);
  *(_QWORD *)(a1 + 296) = 0LL;
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v2 )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x3Au, (__int64)&unk_180172650, a1);
    }
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v2, 1);
    CloseThreadpoolTimer(v2);
  }
}
