/*
 * XREFs of ?xxxReportMoveSizeCompletionToShell@@YGXPAU_MOVESIZEDATA@@@Z @ 0x17522A
 * Callers:
 *     _xxxMoveSize@12 @ 0x177959 (_xxxMoveSize@12.c)
 * Callees:
 *     ?IsShellParticipatesInSizing@@YG_NPAUtagWND@@@Z @ 0x26AC0 (-IsShellParticipatesInSizing@@YG_NPAUtagWND@@@Z.c)
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?ArrangementCompleted@NotifyShell@@YG_NPAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x19C248 (-ArrangementCompleted@NotifyShell@@YG_NPAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?WindowSizingCompleted@NotifyShell@@YGXPAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x19C35B (-WindowSizingCompleted@NotifyShell@@YGXPAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z.c)
 */

void __thiscall xxxReportMoveSizeCompletionToShell(_DWORD *this)
{
  int v2; // edi
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // edx
  BOOL v6; // eax
  int v7; // edx
  int v8; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v11; // ebx
  int v12; // [esp-4h] [ebp-24h]
  struct tagWND *v13; // [esp+0h] [ebp-20h]
  _DWORD v14[3]; // [esp+Ch] [ebp-14h] BYREF
  int v15; // [esp+18h] [ebp-8h]
  int v16; // [esp+1Ch] [ebp-4h]

  v2 = this[2];
  v3 = this[62];
  if ( IsShellParticipatesInSizing(v13) )
  {
    v4 = this[46];
    this[62] = v3 & 0xFFFFFFFB;
    if ( v4 >= 0 )
      v5 = 2;
    else
      v5 = (v4 & 0x100000) == 0;
    NotifyShell::WindowSizingCompleted(v2, v5);
  }
  else if ( (v3 & 8) == 0 )
  {
    v15 = *(_DWORD *)(*(_DWORD *)(v2 + 12) + 200);
    if ( v15 )
    {
      v14[2] = 0;
      v16 = (v3 >> 1) & 1;
      v6 = ERECTL::bWrapped((ERECTL *)(this + 58));
      if ( v16 != v7 || !v6 )
      {
        v8 = 2;
        if ( (this[46] & 0x100000) != 0 )
        {
          if ( v16 == v7 )
            v8 = ~v3 & 2;
          else
            v8 = v7;
        }
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        v11 = v15;
        v12 = v15;
        v14[0] = *(_DWORD *)(ThreadWin32Thread + 228);
        *(_DWORD *)(ThreadWin32Thread + 228) = v14;
        v14[1] = v11;
        HMLockObject(v12);
        if ( (unsigned __int8)NotifyShell::ArrangementCompleted(*(_DWORD *)this[2], v8) && !v8 )
          CInputGlobals::SetPtiLastWoken(_gpInputGlobals, *(struct tagTHREADINFO **)(v11 + 8), 0);
        ThreadUnlock1();
      }
    }
  }
}
