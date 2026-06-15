/*
 * XREFs of sub_1800129C0 @ 0x1800129C0
 * Callers:
 *     sub_18001FA04 @ 0x18001FA04 (sub_18001FA04.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18000A610 @ 0x18000A610 (sub_18000A610.c)
 *     sub_1800114B8 @ 0x1800114B8 (sub_1800114B8.c)
 *     sub_18001217C @ 0x18001217C (sub_18001217C.c)
 *     sub_180012748 @ 0x180012748 (sub_180012748.c)
 *     sub_180012B64 @ 0x180012B64 (sub_180012B64.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800129C0(char *pv)
{
  signed int v2; // edi
  PTP_TIMER ThreadpoolTimer; // rax
  signed int LastError; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(pv + 440);
  v6 = 0;
  sub_18001A330(&lpCriticalSection);
  sub_180012B64(pv);
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    sub_18000A610(*((_QWORD *)off_18004F000 + 2), 0x1Fu, &stru_180043390, *((const wchar_t **)pv + 3));
  }
  if ( *((_QWORD *)pv + 60)
    || (ThreadpoolTimer = CreateThreadpoolTimer(sub_180012CC0, pv, (PTP_CALLBACK_ENVIRON)(qword_18004FEE0 + 8)),
        (*((_QWORD *)pv + 60) = ThreadpoolTimer) != 0LL) )
  {
    pftDueTime.dwLowDateTime = -100000000;
    pftDueTime.dwHighDateTime = -1;
    *((_DWORD *)pv + 122) = 1;
    if ( (unsigned int)sub_180012748((__int64)pv) )
    {
      sub_1800114B8((__int64)pv, 7, 1, 0);
      sub_18001217C((__int64)pv);
    }
    SetThreadpoolTimer(*((PTP_TIMER *)pv + 60), &pftDueTime, 0, 0x64u);
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
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x20u, &stru_180043390, v2);
    }
    sub_180005724("CApplication::BeginBCMStartupLatencyGracePeriod", 2291, v2);
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
}
