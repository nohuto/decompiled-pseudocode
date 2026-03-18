/*
 * XREFs of UserGetLastError @ 0x1C01CE2F0
 * Callers:
 *     NtUserReportInertia @ 0x1C0003BD0 (NtUserReportInertia.c)
 *     NtMapVisualRelativePoints @ 0x1C011E1C0 (NtMapVisualRelativePoints.c)
 *     NtUserInjectDeviceInput @ 0x1C01352C0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C01356F0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C0135F00 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C0136320 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C0136740 (NtUserInjectPointerInput.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1C0137250 (NtUserMapPointsByVisualIdentifier.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetLastError(__int64 a1)
{
  __int64 v1; // rcx
  __int64 CurrentProcessWow64Process; // rax
  struct _NT_TIB *Self; // rcx

  if ( (unsigned __int8)KeIsAttachedProcess(a1) )
    return 0LL;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v1);
  Self = KeGetPcr()->NtTib.Self;
  if ( CurrentProcessWow64Process )
    return HIDWORD(Self[147].StackBase);
  else
    return LODWORD(Self[1].Self);
}
