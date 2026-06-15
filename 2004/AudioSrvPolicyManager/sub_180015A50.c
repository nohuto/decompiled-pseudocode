/*
 * XREFs of sub_180015A50 @ 0x180015A50
 * Callers:
 *     sub_18002C120 @ 0x18002C120 (sub_18002C120.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180015A50(char *pv)
{
  signed int v2; // ebx
  PTP_TIMER ThreadpoolTimer; // rax
  signed int LastError; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(pv + 352);
  v6 = 0;
  sub_18001A330(&lpCriticalSection);
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x2Du, &stru_180043390, *((_DWORD *)pv + 48));
  }
  if ( !*((_QWORD *)pv + 49) )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(sub_180015CF0, pv, (PTP_CALLBACK_ENVIRON)(qword_18004FEE0 + 8));
    *((_QWORD *)pv + 49) = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      _InterlockedIncrement((volatile signed __int32 *)pv + 2);
      pftDueTime.dwLowDateTime = -200000000;
      pftDueTime.dwHighDateTime = -1;
      SetThreadpoolTimer(*((PTP_TIMER *)pv + 49), &pftDueTime, 0, 0x64u);
    }
    else
    {
      LastError = GetLastError();
      v2 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v2 = LastError;
    }
    if ( v2 < 0 )
    {
      if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
        && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
        && *((_BYTE *)off_18004F000 + 25) >= 2u )
      {
        sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x2Eu, &stru_180043390, v2);
      }
      sub_180005724("CProcess::StartInactivityTimer", 3531, v2);
    }
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
}
