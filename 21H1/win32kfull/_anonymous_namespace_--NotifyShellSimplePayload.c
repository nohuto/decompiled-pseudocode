/*
 * XREFs of _anonymous_namespace_::NotifyShellSimplePayload @ 0x174C8
 * Callers:
 *     ?WindowBorderExitIfEntered@NotifyShell@@YGXPAUtagWND@@@Z @ 0x12CEE (-WindowBorderExitIfEntered@NotifyShell@@YGXPAUtagWND@@@Z.c)
 *     ?CuratedWindowHidden@NotifyShell@@YGXPAUtagWND@@@Z @ 0xAC8F6 (-CuratedWindowHidden@NotifyShell@@YGXPAUtagWND@@@Z.c)
 *     ?TestSequence@WindowArrangementSequence@@YGXQBUtagHOTKEY@@IIIH@Z @ 0xB1C6E (-TestSequence@WindowArrangementSequence@@YGXQBUtagHOTKEY@@IIIH@Z.c)
 *     ?TestHotKey@WindowArrangementSequence@@YGXQBUtagHOTKEY@@@Z @ 0xB1D6C (-TestHotKey@WindowArrangementSequence@@YGXQBUtagHOTKEY@@@Z.c)
 *     ?WindowBorderEnter@NotifyShell@@YGXPAUtagWND@@H@Z @ 0xB5830 (-WindowBorderEnter@NotifyShell@@YGXPAUtagWND@@H@Z.c)
 *     ?TrackedWindowMoveSizeIntercept@NotifyShell@@YGXPAUtagWND@@IK@Z @ 0xF4EDE (-TrackedWindowMoveSizeIntercept@NotifyShell@@YGXPAUtagWND@@IK@Z.c)
 *     ?TestWindowBreak@WindowArrangementSequence@@YGXXZ @ 0x155F40 (-TestWindowBreak@WindowArrangementSequence@@YGXXZ.c)
 *     ?WindowArrangementHotKeyCallback@@YGXIJ@Z @ 0x172BB1 (-WindowArrangementHotKeyCallback@@YGXIJ@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YG_NPAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x19C248 (-ArrangementCompleted@NotifyShell@@YG_NPAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?WindowSizingCompleted@NotifyShell@@YGXPAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x19C35B (-WindowSizingCompleted@NotifyShell@@YGXPAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x17536 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

bool __fastcall anonymous_namespace_::NotifyShellSimplePayload(int a1, int a2, int a3, int a4)
{
  _DWORD v5[12]; // [esp+4h] [ebp-34h] BYREF

  v5[0] = a1;
  memset(&v5[4], 0, 32);
  v5[2] = a3;
  v5[1] = a2;
  v5[3] = a4;
  return anonymous_namespace_::NotifyIAMWindowManagementEvent(v5) != 0;
}
