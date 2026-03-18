/*
 * XREFs of _NtUserSetImeOwnerWindow@8 @ 0x1C12C
 * Callers:
 *     <none>
 * Callees:
 *     _zzzImeSetFutureOwner@8 @ 0x18ECA (_zzzImeSetFutureOwner@8.c)
 *     _ImeCheckTopmost@4 @ 0x1C1D4 (_ImeCheckTopmost@4.c)
 *     _zzzImeSetOwnerWindow@8 @ 0x1C3FA (_zzzImeSetOwnerWindow@8.c)
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserSetImeOwnerWindow(int a1, int a2)
{
  int v2; // esi
  _DWORD *v3; // edi
  int v4; // edx
  int v6; // esi
  int v7; // edx
  int v8; // ebx

  v2 = 0;
  EnterCrit(0, 1);
  v3 = (_DWORD *)ValidateHwnd(a1);
  if ( v3 )
  {
    if ( (*_gpsi & 4) == 0 )
    {
      UserSetLastError(120);
      goto LABEL_10;
    }
    if ( (*(_WORD *)(v3[5] + 30) & 0x3FFF) == 0x2A9 )
    {
      if ( !a2 )
      {
        v4 = 0;
        goto LABEL_6;
      }
      v4 = ValidateHwnd(a2);
      if ( v4 )
      {
LABEL_6:
        ++_gdwDeferWinEvent;
        if ( v4 )
          goto LABEL_7;
        v6 = v3[2];
        v7 = *(_DWORD *)(*(_DWORD *)(v6 + 236) + 64);
        if ( !v7 )
          goto LABEL_19;
        if ( v7 == v3[16] )
          goto LABEL_9;
        v8 = *(_DWORD *)(*(_DWORD *)(v7 + 76) + 4);
        if ( *(_WORD *)v8 != *(_WORD *)(_gpsi + 498) && (*(_BYTE *)(v8 + 10) & 1) == 0 && v6 == *(_DWORD *)(v7 + 8) )
LABEL_7:
          zzzImeSetOwnerWindow(v3);
        else
LABEL_19:
          zzzImeSetFutureOwner(v3, (_DWORD *)v3[16]);
        ImeCheckTopmost(v3);
LABEL_9:
        zzzEndDeferWinEventNotify();
        v2 = 1;
      }
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit();
  return v2;
}
