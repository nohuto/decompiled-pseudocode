/*
 * XREFs of sub_180011760 @ 0x180011760
 * Callers:
 *     sub_1800115F4 @ 0x1800115F4 (sub_1800115F4.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18000A610 @ 0x18000A610 (sub_18000A610.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180011760(char *pv)
{
  signed int v2; // ebx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  signed int LastError; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(pv + 384);
  v7 = 0;
  sub_18001A330(&lpCriticalSection);
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    sub_18000A610(*((_QWORD *)off_18004F000 + 2), 0x13u, &stru_180043390, *((const wchar_t **)pv + 3));
  }
  if ( !*((_QWORD *)pv + 53) )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(sub_180011940, pv, (PTP_CALLBACK_ENVIRON)(qword_18004FEE0 + 8));
    *((_QWORD *)pv + 53) = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime.dwLowDateTime = -200000000;
      pftDueTime.dwHighDateTime = -1;
      *((_DWORD *)pv + 109) = 1;
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, 0, 0x64u);
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
        sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x14u, &stru_180043390, v2);
      }
      sub_180005724("CApplication::StartGoodFaithPLMExemptionTimer", 1313, v2);
    }
  }
  if ( v7 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v7 = 0;
  }
  return (unsigned int)v2;
}
