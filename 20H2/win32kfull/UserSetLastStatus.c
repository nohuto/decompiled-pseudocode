/*
 * XREFs of UserSetLastStatus @ 0x1C008004C
 * Callers:
 *     NtUserOpenWindowStation @ 0x1C000FF40 (NtUserOpenWindowStation.c)
 *     NtUserConsoleControl @ 0x1C003B030 (NtUserConsoleControl.c)
 *     NtUserSetLayeredWindowAttributes @ 0x1C003CA60 (NtUserSetLayeredWindowAttributes.c)
 *     NtUserDestroyDCompositionHwndTarget @ 0x1C007FED0 (NtUserDestroyDCompositionHwndTarget.c)
 *     NtUserCreateDCompositionHwndTarget @ 0x1C0080530 (NtUserCreateDCompositionHwndTarget.c)
 *     NtUserDwmKernelStartup @ 0x1C0081F50 (NtUserDwmKernelStartup.c)
 *     NtUserFindExistingCursorIcon @ 0x1C0094440 (NtUserFindExistingCursorIcon.c)
 *     NtUserUpdateLayeredWindow @ 0x1C00C7E50 (NtUserUpdateLayeredWindow.c)
 *     NtUserRegisterWindowMessage @ 0x1C00ED710 (NtUserRegisterWindowMessage.c)
 *     NtUserGetResizeDCompositionSynchronizationObject @ 0x1C010F300 (NtUserGetResizeDCompositionSynchronizationObject.c)
 *     NtUserSetWindowCompositionTransition @ 0x1C0119FD0 (NtUserSetWindowCompositionTransition.c)
 *     NtUserDwmGetRemoteSessionOcclusionEvent @ 0x1C0158870 (NtUserDwmGetRemoteSessionOcclusionEvent.c)
 *     NtUserDwmKernelShutdown @ 0x1C01F8270 (NtUserDwmKernelShutdown.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01FCE40 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserSetAutoRotation @ 0x1C02011C0 (NtUserSetAutoRotation.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1C0203C60 (NtUserUpdateDefaultDesktopThumbnail.c)
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall UserSetLastStatus(NTSTATUS Status, int a2)
{
  NTSTATUS v4; // ebx
  struct _NT_TIB *result; // rax
  __int64 v6; // rcx
  ULONG v7; // eax

  if ( (Status & 0x1FFF0000) == 0x3F0000 || (Status & 0x1FFF0000) == 0x3E0000 )
  {
    v4 = 0;
    if ( Status < 0 )
      v4 = -1073741823;
  }
  else
  {
    v4 = Status;
  }
  result = (struct _NT_TIB *)KeIsAttachedProcess(536805376LL);
  if ( !(_BYTE)result )
  {
    LODWORD(KeGetPcr()->NtTib.Self[83].ArbitraryUserPointer) = Status;
    result = (struct _NT_TIB *)PsGetCurrentProcessWow64Process(v6);
    if ( result )
    {
      result = KeGetPcr()->NtTib.Self;
      HIDWORD(result[200].Self) = Status;
    }
    if ( a2 )
    {
      v7 = RtlNtStatusToDosError(v4);
      return (struct _NT_TIB *)UserSetLastError(v7);
    }
  }
  return result;
}
