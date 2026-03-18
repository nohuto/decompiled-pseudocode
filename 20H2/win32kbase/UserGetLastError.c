/*
 * XREFs of UserGetLastError @ 0x1C01CBF70
 * Callers:
 *     NtUserReportInertia @ 0x1C0003BD0 (NtUserReportInertia.c)
 *     NtMapVisualRelativePoints @ 0x1C011BE80 (NtMapVisualRelativePoints.c)
 *     NtUserInjectDeviceInput @ 0x1C0132F70 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C01333A0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C0133BB0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C0133FD0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C01343F0 (NtUserInjectPointerInput.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1C0134F00 (NtUserMapPointsByVisualIdentifier.c)
 * Callees:
 *     <none>
 */

__int64 UserGetLastError()
{
  __int64 v0; // rcx
  __int64 CurrentProcessWow64Process; // rax
  struct _NT_TIB *Self; // rcx

  if ( (unsigned __int8)KeIsAttachedProcess() )
    return 0LL;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v0);
  Self = KeGetPcr()->NtTib.Self;
  if ( CurrentProcessWow64Process )
    return HIDWORD(Self[147].StackBase);
  else
    return LODWORD(Self[1].Self);
}
