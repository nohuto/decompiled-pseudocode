/*
 * XREFs of ?MsgSQMCleanupProcessPair@@YGXPAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x180C0D
 * Callers:
 *     ?MsgSQMFreeProcessPair@@YGXPAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x180E1E (-MsgSQMFreeProcessPair@@YGXPAUtagMSGSQM_PROCESSPAIR@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall MsgSQMCleanupProcessPair(_DWORD *this)
{
  int v1; // eax
  _DWORD *v2; // edx
  int v3; // esi
  _DWORD *v4; // eax

  if ( this && !this[6] )
  {
    v1 = *this;
    if ( *(_DWORD **)(*this + 4) != this
      || (v2 = (_DWORD *)this[1], (_DWORD *)*v2 != this)
      || (*v2 = v1, *(_DWORD *)(v1 + 4) = v2, v3 = this[2], *(_DWORD **)(v3 + 4) != this + 2)
      || (v4 = (_DWORD *)this[3], (_DWORD *)*v4 != this + 2) )
    {
      __fastfail(3u);
    }
    *v4 = v3;
    *(_DWORD *)(v3 + 4) = v4;
    Win32FreePool(this);
  }
}
