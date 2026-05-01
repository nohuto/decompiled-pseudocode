/*
 * XREFs of ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x1802BA4B4
 * Callers:
 *     ?get_ClientWindowReadyForPresentation@ViewWrapperBase@@UEAAJPEAE@Z @ 0x1802B1BE0 (-get_ClientWindowReadyForPresentation@ViewWrapperBase@@UEAAJPEAE@Z.c)
 *     ?HandleShellHook@WindowReadyState@@QEAAX_K@Z @ 0x1802BA3FC (-HandleShellHook@WindowReadyState@@QEAAX_K@Z.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1802BA504 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1802BA608 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall WindowReadyState::IsReadyForPresentation(WindowReadyState *this)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)this )
    return *((_DWORD *)this + 2) == 0;
  return result;
}
