/*
 * XREFs of ?xxxGetCursorPos@@YGHPAUtagPOINT@@K@Z @ 0x7FA68
 * Callers:
 *     _NtUserCallTwoParam@12 @ 0x7FA30 (_NtUserCallTwoParam@12.c)
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _CheckWinstaAttributeAccess@4 @ 0x7FB22 (_CheckWinstaAttributeAccess@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall xxxGetCursorPos(struct tagPOINT *a1, unsigned int a2)
{
  int v2; // ecx
  int CurrentThreadDpiAwarenessContext; // eax
  __int64 v4; // rax
  LONG v5; // esi

  if ( !CheckWinstaAttributeAccess(2u) )
    goto LABEL_11;
  v2 = *(_DWORD *)(_gptiCurrent + 248);
  if ( v2 && v2 != _grpdeskRitInput )
  {
    UserSetLastError(5);
    goto LABEL_11;
  }
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
      goto LABEL_6;
LABEL_11:
    LODWORD(v4) = 0;
    return v4;
  }
  if ( (unsigned __int8)IsSpatialDelegationEnabledForThread(_gptiCurrent) )
  {
    LODWORD(v4) = GetSavedCursorPosition();
    goto LABEL_7;
  }
LABEL_6:
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v4 = LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
LABEL_7:
  v5 = v4;
  if ( (unsigned int)a1 >= _MmUserProbeAddress )
    *(_BYTE *)_MmUserProbeAddress = 0;
  LOBYTE(a1->x) = a1->x;
  HIBYTE(a1->y) = HIBYTE(a1->y);
  LODWORD(v4) = 1;
  a1->x = v5;
  a1->y = HIDWORD(v4);
  return v4;
}
