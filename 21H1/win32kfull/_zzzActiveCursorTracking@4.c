/*
 * XREFs of _zzzActiveCursorTracking@4 @ 0x14ED7B
 * Callers:
 *     ?xxxProcessActivationEvent@@YGXPBUtagQMSG@@@Z @ 0x1364E (-xxxProcessActivationEvent@@YGXPBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     ?zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z @ 0x7B8F8 (-zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z.c)
 *     _GetActiveTrackPwnd@4 @ 0x14E1E4 (_GetActiveTrackPwnd@4.c)
 */

_DWORD *__thiscall zzzActiveCursorTracking(_DWORD *this)
{
  _DWORD *result; // eax
  __int64 v3; // rax
  _DWORD *v4; // ecx
  _DWORD *v5; // esi
  int v6; // edx
  int v7; // esi
  __int64 v8; // [esp+10h] [ebp-10h] BYREF
  __int64 v9; // [esp+18h] [ebp-8h] BYREF

  v9 = 0LL;
  if ( CInputGlobals::GetLastInputType(_gpInputGlobals) == 1
    || (result = (_DWORD *)CInputGlobals::GetLastInputType(_gpInputGlobals), result == (_DWORD *)4) )
  {
    v3 = LogicalCursorPosFromDpiAwarenessContext(*(_DWORD *)(this[5] + 184));
    v4 = (_DWORD *)(this[5] + 52);
    v9 = v3;
    result = (_DWORD *)PtInRect(v4, v3, SHIDWORD(v3));
    if ( !result && (!gspwndCursor || (result = GetActiveTrackPwnd((_DWORD *)gspwndCursor)) != 0) )
    {
      v5 = (_DWORD *)this[5];
      LODWORD(v9) = v5[13] + (v5[15] - v5[13]) / 2;
      HIDWORD(v9) = v5[14] + (v5[16] - v5[14]) / 2;
      v8 = v9;
      if ( IsWindowDesktopComposed(this) )
        LogicalToPhysicalDPIPoint(&v8, &v9, *(_DWORD *)(this[5] + 184), 0);
      CCursorClip::BoundPoint(_gpCursorClip, v8, HIDWORD(v8), 0, 2, &v8);
      v9 = v8;
      if ( IsWindowDesktopComposed(this) )
        PhysicalToLogicalDPIPoint(&v9, &v8, *(_DWORD *)(this[5] + 184), 0);
      result = (_DWORD *)PtInRect((_DWORD *)(this[5] + 52), v9, SHIDWORD(v9));
      if ( result )
      {
        v7 = *(_BYTE *)(v6 + 23) & 0x10;
        if ( (*(_BYTE *)(v6 + 23) & 0x10) == 0 )
          SetVisible(this, 5u);
        result = (_DWORD *)zzzInternalSetCursorPos((struct tagPOINT *)v8, SHIDWORD(v8), 2, 0);
        if ( !v7 )
          return (_DWORD *)SetVisible(this, 0);
      }
    }
  }
  return result;
}
