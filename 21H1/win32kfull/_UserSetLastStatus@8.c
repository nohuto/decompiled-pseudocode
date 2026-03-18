/*
 * XREFs of _UserSetLastStatus@8 @ 0x81F3C
 * Callers:
 *     _NtUserConsoleControl@12 @ 0x1A906 (_NtUserConsoleControl@12.c)
 *     _NtUserSetLayeredWindowAttributes@16 @ 0x1FA2E (_NtUserSetLayeredWindowAttributes@16.c)
 *     _NtUserFindExistingCursorIcon@12 @ 0x48504 (_NtUserFindExistingCursorIcon@12.c)
 *     _NtUserOpenWindowStation@8 @ 0x7DBDA (_NtUserOpenWindowStation@8.c)
 *     _NtUserDestroyDCompositionHwndTarget@8 @ 0x81FC0 (_NtUserDestroyDCompositionHwndTarget@8.c)
 *     _NtUserRegisterWindowMessage@4 @ 0x91DE4 (_NtUserRegisterWindowMessage@4.c)
 *     _NtUserGetResizeDCompositionSynchronizationObject@8 @ 0xA69B6 (_NtUserGetResizeDCompositionSynchronizationObject@8.c)
 *     _NtUserSetWindowCompositionTransition@28 @ 0xAB3DC (_NtUserSetWindowCompositionTransition@28.c)
 *     _NtUserCreateDCompositionHwndTarget@12 @ 0xB28BA (_NtUserCreateDCompositionHwndTarget@12.c)
 *     _NtUserHwndQueryRedirectionInfo@16 @ 0xB96F4 (_NtUserHwndQueryRedirectionInfo@16.c)
 *     _NtUserUpdateLayeredWindow@40 @ 0xBA93E (_NtUserUpdateLayeredWindow@40.c)
 *     _NtUserDwmGetRemoteSessionOcclusionEvent@0 @ 0xD34D4 (_NtUserDwmGetRemoteSessionOcclusionEvent@0.c)
 *     _NtUserDwmKernelStartup@0 @ 0xE086E (_NtUserDwmKernelStartup@0.c)
 *     _NtUserDwmKernelShutdown@0 @ 0x1612DF (_NtUserDwmKernelShutdown@0.c)
 *     _NtUserSetAutoRotation@4 @ 0x1687A1 (_NtUserSetAutoRotation@4.c)
 *     _NtUserUpdateDefaultDesktopThumbnail@20 @ 0x16AD14 (_NtUserUpdateDefaultDesktopThumbnail@20.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

struct _NT_TIB *__fastcall UserSetLastStatus(int a1, int a2)
{
  struct _NT_TIB *result; // eax
  struct _NT_TIB *v4; // eax
  NTSTATUS Status; // [esp+14h] [ebp-1Ch]

  if ( (a1 & 0x1FFF0000) == 0x3F0000 || (a1 & 0x1FFF0000) == 0x3E0000 )
  {
    if ( a1 >= 0 )
      Status = 0;
    else
      Status = -1073741823;
  }
  else
  {
    Status = a1;
  }
  result = (struct _NT_TIB *)KeIsAttachedProcess();
  if ( !(_BYTE)result )
  {
    result = KeGetPcr()->NtTib.Self;
    result[109].StackLimit = (PVOID)a1;
    if ( a2 )
    {
      v4 = (struct _NT_TIB *)RtlNtStatusToDosError(Status);
      return UserSetLastError(v4);
    }
  }
  return result;
}
