/*
 * XREFs of ?GetCurrentDesktopName@@YAHPEAGI@Z @ 0x180086FA4
 * Callers:
 *     ?ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z @ 0x180087028 (-ReportHangInternal@@YAJPEAUHWND__@@PEAKKKKPEBG@Z.c)
 * Callees:
 *     GetCurrentThreadId_0 @ 0x1800453E6 (GetCurrentThreadId_0.c)
 *     IsGetThreadDesktopPresent @ 0x1800462EC (IsGetThreadDesktopPresent.c)
 */

__int64 __fastcall GetCurrentDesktopName(_WORD *pvInfo, DWORD a2)
{
  unsigned int v2; // ebx
  DWORD CurrentThreadId_0; // eax
  HDESK ThreadDesktop; // rax
  DWORD nLengthNeeded; // [rsp+48h] [rbp+10h] BYREF

  nLengthNeeded = a2;
  v2 = 0;
  if ( pvInfo )
  {
    *pvInfo = 0;
    if ( IsGetThreadDesktopPresent() )
    {
      if ( IsGetThreadDesktopPresent() )
      {
        CurrentThreadId_0 = GetCurrentThreadId_0();
        ThreadDesktop = GetThreadDesktop(CurrentThreadId_0);
        if ( ThreadDesktop )
          LOBYTE(v2) = GetUserObjectInformationW(ThreadDesktop, 2, pvInfo, 0x208u, &nLengthNeeded);
      }
    }
  }
  return v2;
}
