/*
 * XREFs of NtUserUpdateDefaultDesktopThumbnail @ 0x1C0204AD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C004AC8C (UserSetLastStatus.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     DwmAsyncUpdateDefaultDesktopThumbnail @ 0x1C02765E4 (DwmAsyncUpdateDefaultDesktopThumbnail.c)
 */

__int64 __fastcall NtUserUpdateDefaultDesktopThumbnail(__int64 a1, __int64 a2, __int64 a3, char a4, int a5)
{
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  NTSTATUS updated; // eax
  void *v12; // rax

  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v10 = ValidateHwnd(a1);
    if ( !v10 )
      goto LABEL_16;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 || (unsigned int)IsTopLevelWindow(v10) && (unsigned int)IsWindowDesktopComposed(v10) )
  {
    v8 = grpdeskIODefault;
    v9 = gptiCurrent;
    if ( *(_QWORD *)(gptiCurrent + 448LL) == grpdeskIODefault && (!v10 || *(_QWORD *)(v10 + 24) == grpdeskIODefault) )
    {
      v12 = (void *)ReferenceDwmApiPort(gptiCurrent);
      updated = DwmAsyncUpdateDefaultDesktopThumbnail(v12, a4, a5);
    }
    else
    {
      updated = -1073741790;
    }
  }
  else
  {
    updated = -1073741816;
  }
  LODWORD(v10) = updated >= 0;
  if ( updated < 0 )
  {
    LODWORD(v10) = 0;
    UserSetLastStatus(updated, 1);
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v9, v8, v7);
  return (int)v10;
}
