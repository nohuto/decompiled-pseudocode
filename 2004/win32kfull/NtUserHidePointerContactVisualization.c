/*
 * XREFs of NtUserHidePointerContactVisualization @ 0x1C01FDA80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserHidePointerContactVisualization(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // r8

  EnterCrit(0LL, 1LL);
  if ( (unsigned int)(a1 - 2) > 0xFFFD )
  {
    v6 = 0;
    UserSetLastError(87LL, v2, v3);
  }
  else
  {
    v6 = CTouchProcessor::SetPointerVisualization(gpTouchProcessor, a1, 0, 0LL, 1);
  }
  UserSessionSwitchLeaveCrit(v5, v4, v7);
  return v6;
}
