/*
 * XREFs of ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C02105B4
 * Callers:
 *     xxxMoveSize @ 0x1C02132C4 (xxxMoveSize.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0068010 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C00AE6A8 (-IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YA_NPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C023E3AC (-ArrangementCompleted@NotifyShell@@YA_NPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x1C023E5EC (-WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z.c)
 */

void __fastcall xxxReportMoveSizeCompletionToShell(struct _MOVESIZEDATA *a1)
{
  __int64 v1; // rbp
  int v3; // edi
  int v4; // ebx
  unsigned int v5; // ebx
  __int64 v6; // rbp
  BOOL v7; // eax
  unsigned int v8; // edx
  int v9; // r8d
  unsigned int v10; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  v3 = *((_DWORD *)a1 + 70);
  if ( IsShellParticipatesInSizing((struct tagWND *)v1) )
  {
    v4 = *((_DWORD *)a1 + 49);
    *((_DWORD *)a1 + 70) = v3 & 0xFFFFFFFB;
    if ( v4 >= 0 )
      v5 = 2;
    else
      v5 = (v4 & 0x100000) == 0;
    NotifyShell::WindowSizingCompleted(v1, v5);
  }
  else if ( (v3 & 8) == 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v1 + 24) + 328LL);
    if ( v6 )
    {
      v15[2] = 0LL;
      v7 = IsRectEmptyInl((const struct tagRECT *)((char *)a1 + 264));
      if ( v9 != v8 || !v7 )
      {
        v10 = 2;
        if ( (*((_DWORD *)a1 + 49) & 0x100000) != 0 )
        {
          if ( v9 == v8 )
            v10 = ~v3 & 2;
          else
            v10 = v8;
        }
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v15[0] = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = v15;
        v15[1] = v6;
        HMLockObject(v6);
        if ( (unsigned __int8)NotifyShell::ArrangementCompleted(**((_QWORD **)a1 + 2), v10) && !v10 )
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v6 + 16), 0);
        ThreadUnlock1(v13, v12, v14);
      }
    }
  }
}
