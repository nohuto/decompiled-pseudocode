/*
 * XREFs of ?IsEligibleToolWindow@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAHPEAUHWND__@@@Z @ 0x180194960
 * Callers:
 *     ?CheckBorderWindowAttributes@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAJUtagRECT@@PEAUHWND__@@W4BorderWindowAlignment@12@PEAW4Alignment@2@@Z @ 0x180192FD8 (-CheckBorderWindowAttributes@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applicati.c)
 *     ?Finalize@SingleShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x1801937A4 (-Finalize@SingleShadowWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@A.c)
 *     ?ProcessWindowBool@QuadShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@AEAA_NPEAUHWND__@@@Z @ 0x180194B90 (-ProcessWindowBool@QuadShadowWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::IsEligibleToolWindow(
        HWND hWnd)
{
  int WindowLongPtrW; // eax
  unsigned int v3; // ebx
  HWND Window; // rax

  WindowLongPtrW = GetWindowLongPtrW(hWnd, -16);
  if ( (WindowLongPtrW & 0x10000000) != 0
    && (*(_QWORD *)&WindowLongPtrW & 0xC70000LL) == 0
    && (GetWindowLongPtrW(hWnd, -20) & 0x80080) == 0x80080 )
  {
    Window = GetWindow(hWnd, 4u);
    v3 = 0;
    if ( !Window || !IsWindowVisible(Window) )
      return 1;
  }
  else
  {
    return 0;
  }
  return v3;
}
