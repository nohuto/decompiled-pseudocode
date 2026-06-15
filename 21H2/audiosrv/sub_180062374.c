/*
 * XREFs of sub_180062374 @ 0x180062374
 * Callers:
 *     sub_1800615D4 @ 0x1800615D4 (sub_1800615D4.c)
 * Callees:
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

__int64 __fastcall sub_180062374(char *pv)
{
  unsigned int v2; // ebx
  PTP_TIMER ThreadpoolTimer; // rax
  signed int LastError; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  v2 = 0;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 55LL, &unk_180172650, pv);
  }
  v7 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(pv + 256);
  sub_180057764((__int64)&lpCriticalSection);
  ThreadpoolTimer = CreateThreadpoolTimer(sub_1800FD660, pv, 0LL);
  *((_QWORD *)pv + 37) = ThreadpoolTimer;
  if ( ThreadpoolTimer )
  {
    *((_QWORD *)pv + 38) = 0LL;
    *((_QWORD *)pv + 40) = &unk_18015C940;
    *((_QWORD *)pv + 39) = 9LL;
    *((_DWORD *)pv + 82) = 18;
  }
  else
  {
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( (v2 & 0x80000000) != 0
    && off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 2u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 56LL, &unk_180172650, v2);
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
