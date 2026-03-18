/*
 * XREFs of ?RemoveNotify@@YGXPAUtagNOTIFY@@@Z @ 0xA3C88
 * Callers:
 *     ?CreateAndPostTSFNotify@@YGXKPAUtagWND@@JJPAUtagTHREADINFO@@1K@Z @ 0x12096 (-CreateAndPostTSFNotify@@YGXKPAUtagWND@@JJPAUtagTHREADINFO@@1K@Z.c)
 *     _xxxProcessNotifyWinEvent@4 @ 0x143A2 (_xxxProcessNotifyWinEvent@4.c)
 *     _FreeThreadsWinEvents@4 @ 0x1471E (_FreeThreadsWinEvents@4.c)
 *     ?CleanEventMessage@@YGXPAUtagQMSG@@@Z @ 0x9C3D2 (-CleanEventMessage@@YGXPAUtagQMSG@@@Z.c)
 *     _xxxProcessTSFEvent@4 @ 0x155866 (_xxxProcessTSFEvent@4.c)
 * Callees:
 *     <none>
 */

void __thiscall RemoveNotify(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // ecx

  v2 = *this;
  if ( *(_DWORD **)(*this + 4) != this || (v3 = (_DWORD *)this[1], (_DWORD *)*v3 != this) )
    __fastfail(3u);
  *v3 = v2;
  *(_DWORD *)(v2 + 4) = v3;
  this[1] = this;
  *this = this;
  if ( !this[3] )
    HMAssignmentUnlock(this + 2);
  if ( this == (_DWORD *)&unk_274AF8 )
    dword_273860 = 0;
  else
    Win32FreePool(this);
}
