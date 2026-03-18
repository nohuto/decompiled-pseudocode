/*
 * XREFs of UserSetLastStatus @ 0x1C004AC8C
 * Callers:
 *     NtUserSetLayeredWindowAttributes @ 0x1C001DCC0 (NtUserSetLayeredWindowAttributes.c)
 *     NtUserUpdateLayeredWindow @ 0x1C00252C0 (NtUserUpdateLayeredWindow.c)
 *     NtUserConsoleControl @ 0x1C0027DF0 (NtUserConsoleControl.c)
 *     NtUserDestroyDCompositionHwndTarget @ 0x1C004AB10 (NtUserDestroyDCompositionHwndTarget.c)
 *     NtUserCreateDCompositionHwndTarget @ 0x1C004B0D0 (NtUserCreateDCompositionHwndTarget.c)
 *     NtUserFindExistingCursorIcon @ 0x1C00AE3E0 (NtUserFindExistingCursorIcon.c)
 *     NtUserOpenWindowStation @ 0x1C00C4110 (NtUserOpenWindowStation.c)
 *     NtUserRegisterWindowMessage @ 0x1C00F3380 (NtUserRegisterWindowMessage.c)
 *     NtUserGetResizeDCompositionSynchronizationObject @ 0x1C010D860 (NtUserGetResizeDCompositionSynchronizationObject.c)
 *     NtUserSetWindowCompositionTransition @ 0x1C0119500 (NtUserSetWindowCompositionTransition.c)
 *     NtUserDwmKernelStartup @ 0x1C012AA40 (NtUserDwmKernelStartup.c)
 *     NtUserDwmGetRemoteSessionOcclusionEvent @ 0x1C0155F10 (NtUserDwmGetRemoteSessionOcclusionEvent.c)
 *     NtUserDwmKernelShutdown @ 0x1C01F90E0 (NtUserDwmKernelShutdown.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01FDCB0 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserSetAutoRotation @ 0x1C0202030 (NtUserSetAutoRotation.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1C0204AD0 (NtUserUpdateDefaultDesktopThumbnail.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
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
  result = (struct _NT_TIB *)KeIsAttachedProcess();
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
