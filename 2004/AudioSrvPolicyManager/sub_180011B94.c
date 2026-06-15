/*
 * XREFs of sub_180011B94 @ 0x180011B94
 * Callers:
 *     sub_180020668 @ 0x180020668 (sub_180020668.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18000A610 @ 0x18000A610 (sub_18000A610.c)
 *     sub_180011D1C @ 0x180011D1C (sub_180011D1C.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180011B94(char *pv, __int64 a2)
{
  signed int v4; // ebx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  signed int LastError; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(pv + 496);
  v9 = 0;
  sub_18001A330(&lpCriticalSection);
  sub_180011D1C(pv);
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    sub_18000A610(*((_QWORD *)off_18004F000 + 2), 0x19u, &stru_180043390, *((const wchar_t **)pv + 3));
  }
  ThreadpoolTimer = (struct _TP_TIMER *)*((_QWORD *)pv + 67);
  if ( ThreadpoolTimer
    || (ThreadpoolTimer = CreateThreadpoolTimer(sub_180011E20, pv, (PTP_CALLBACK_ENVIRON)(qword_18004FEE0 + 8)),
        (*((_QWORD *)pv + 67) = ThreadpoolTimer) != 0LL) )
  {
    *((_QWORD *)pv + 68) = a2;
    pftDueTime.dwLowDateTime = -300000000;
    pftDueTime.dwHighDateTime = -1;
    SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, 0, 0x64u);
  }
  else
  {
    LastError = GetLastError();
    v4 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v4 = LastError;
  }
  if ( v4 < 0 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x1Au, &stru_180043390, v4);
    }
    sub_180005724("CApplication::PostDelayedInteractivityNotification", 1531, v4);
  }
  if ( v9 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v9 = 0;
  }
  return (unsigned int)v4;
}
