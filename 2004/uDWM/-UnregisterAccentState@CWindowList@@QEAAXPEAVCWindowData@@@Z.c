/*
 * XREFs of ?UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180026E30
 * Callers:
 *     ?RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x18000D6EC (-RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18000F078 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180026264 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CWindowList::UnregisterAccentState(CWindowList *this, struct CWindowData *a2)
{
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // rcx

  v3 = 0;
  v4 = *((_DWORD *)this + 140);
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 67);
    while ( *(struct CWindowData **)(v5 + 16LL * v3) != a2 )
    {
      if ( ++v3 >= v4 )
        return;
    }
    if ( v3 >= v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x194u);
    }
    else
    {
      for ( ; v3 < v4 - 1; v4 = *((_DWORD *)this + 140) )
      {
        v6 = 2LL * v3;
        v7 = 2LL * ++v3;
        *(_OWORD *)(v5 + 8 * v6) = *(_OWORD *)(v5 + 8 * v7);
      }
      *((_DWORD *)this + 140) = v4 - 1;
    }
  }
}
