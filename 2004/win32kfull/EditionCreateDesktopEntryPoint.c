/*
 * XREFs of EditionCreateDesktopEntryPoint @ 0x1C00C3A80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxCreateDesktopEx @ 0x1C00C52A4 (xxxCreateDesktopEx.c)
 */

__int64 __fastcall EditionCreateDesktopEntryPoint(int a1, __int64 a2, __int64 a3, unsigned int a4, int a5, int a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  NTSTATUS Desktop; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v19; // rcx
  _QWORD v20[3]; // [rsp+40h] [rbp-18h] BYREF

  v20[0] = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x20000000) != 0 )
    v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 768LL) + 24LL) & 0x40;
  else
    v12 = 0;
  if ( v12 )
  {
    v19 = 5LL;
LABEL_15:
    UserSetLastError(v19, v10, v11);
    goto LABEL_10;
  }
  if ( a4 > 1 || a2 || a3 )
  {
    v19 = 87LL;
    goto LABEL_15;
  }
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  Desktop = xxxCreateDesktopEx(a1, a4, a5, a6, (__int64)v20, 0);
  if ( Desktop < 0 )
  {
    v20[0] = 0LL;
    v19 = RtlNtStatusToDosError(Desktop);
    goto LABEL_15;
  }
LABEL_10:
  v17 = v20[0];
  UserSessionSwitchLeaveCrit(v15, v14, v16);
  return v17;
}
