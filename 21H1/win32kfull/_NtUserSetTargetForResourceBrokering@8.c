/*
 * XREFs of _NtUserSetTargetForResourceBrokering@8 @ 0x169D60
 * Callers:
 *     <none>
 * Callees:
 *     _HasImmersiveAppRight@4 @ 0x7C7B4 (_HasImmersiveAppRight@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?_SetTargetForCursorApiBrokering@@YGXPAUtagTHREADINFO@@0@Z @ 0x1431EB (-_SetTargetForCursorApiBrokering@@YGXPAUtagTHREADINFO@@0@Z.c)
 */

int __stdcall NtUserSetTargetForResourceBrokering(int a1, int a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // eax
  _DWORD *v5; // edx

  v2 = 0;
  EnterCrit(0, 1);
  v3 = 0;
  if ( a1 )
    goto LABEL_2;
  if ( !HasImmersiveAppRight(*(_DWORD **)(_gptiCurrent + 232)) )
    goto LABEL_5;
  if ( !a2 )
  {
LABEL_13:
    _SetTargetForCursorApiBrokering(_gptiCurrent, v3);
    v2 = 1;
    goto LABEL_14;
  }
  v4 = PtiFromThreadId(a2);
  v3 = v4;
  if ( !v4 )
  {
LABEL_2:
    UserSetLastError((struct _NT_TIB *)0x57);
    goto LABEL_14;
  }
  if ( v4 == _gptiCurrent )
  {
    v3 = 0;
    goto LABEL_13;
  }
  if ( HasImmersiveAppRight(*(_DWORD **)(v4 + 232))
    && ((unsigned __int8)PsIsWin32KFilterEnabledForProcess(*v5)
     || (unsigned __int8)PsIsWin32KFilterAuditEnabledForProcess(**(_DWORD **)(v3 + 232))) )
  {
    goto LABEL_13;
  }
LABEL_5:
  UserSetLastError((struct _NT_TIB *)5);
LABEL_14:
  UserSessionSwitchLeaveCrit();
  return v2;
}
