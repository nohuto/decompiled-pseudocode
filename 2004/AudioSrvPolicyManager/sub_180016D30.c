/*
 * XREFs of sub_180016D30 @ 0x180016D30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

void __fastcall sub_180016D30(PTP_CALLBACK_INSTANCE Instance, char *Context, PTP_TIMER Timer)
{
  char *v4; // rsi
  DWORD LastError; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(Context + 568);
  v7 = 0;
  sub_18001A330(&lpCriticalSection);
  v4 = (char *)*((_QWORD *)Context + 76);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v4);
    SetLastError(LastError);
  }
  *((_QWORD *)Context + 76) = 0LL;
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
}
