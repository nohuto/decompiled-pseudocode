/*
 * XREFs of EditionCreateDesktopEntryPoint @ 0x1C000F400
 * Callers:
 *     <none>
 * Callees:
 *     xxxCreateDesktopEx @ 0x1C00110D4 (xxxCreateDesktopEx.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall EditionCreateDesktopEntryPoint(int a1, __int64 a2, __int64 a3, unsigned int a4, int a5, int a6)
{
  int v10; // eax
  NTSTATUS Desktop; // eax
  __int64 v12; // rbx
  __int64 v14; // rcx
  _QWORD v15[3]; // [rsp+40h] [rbp-18h] BYREF

  v15[0] = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0 )
    v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 768LL) + 24LL) & 0x40;
  else
    v10 = 0;
  if ( v10 )
  {
    v14 = 5LL;
LABEL_15:
    UserSetLastError(v14);
    goto LABEL_10;
  }
  if ( a4 > 1 || a2 || a3 )
  {
    v14 = 87LL;
    goto LABEL_15;
  }
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  Desktop = xxxCreateDesktopEx(a1, a4, a5, a6, (__int64)v15, 0);
  if ( Desktop < 0 )
  {
    v15[0] = 0LL;
    v14 = RtlNtStatusToDosError(Desktop);
    goto LABEL_15;
  }
LABEL_10:
  v12 = v15[0];
  UserSessionSwitchLeaveCrit();
  return v12;
}
