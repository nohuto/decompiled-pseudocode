/*
 * XREFs of xxxHungAppDemon @ 0x1C00E7C60
 * Callers:
 *     <none>
 * Callees:
 *     ProcessHungWindow @ 0x1C00038FC (ProcessHungWindow.c)
 *     ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x1C00265D4 (-VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z.c)
 *     zzzCalcStartCursorHide @ 0x1C0089AF0 (zzzCalcStartCursorHide.c)
 *     ClearHungFlag @ 0x1C008CC64 (ClearHungFlag.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     IsHungWindow @ 0x1C00E7D90 (IsHungWindow.c)
 *     IdleTimerProc @ 0x1C00E7EE8 (IdleTimerProc.c)
 *     xxxRedrawHungWindow @ 0x1C0242114 (xxxRedrawHungWindow.c)
 */

struct tagWND *xxxHungAppDemon()
{
  __int64 v0; // rdx
  struct tagWND *result; // rax
  struct tagWND *v2; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned int v7; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+38h] [rbp-20h] BYREF
  __int64 v9; // [rsp+48h] [rbp-10h]

  v8 = 0LL;
  v9 = 0LL;
  IdleTimerProc();
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) >= HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) )
    zzzCalcStartCursorHide(0LL, 0);
  result = (struct tagWND *)grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    result = *(struct tagWND **)(grpdeskRitInput + 8LL);
    if ( *((_QWORD *)result + 3) )
    {
      v7 = 0;
      v2 = 0LL;
      while ( 1 )
      {
        result = VWPLNextBase((struct tagVWPL *)gpvwplHungRedraw, v0, v2, &v7);
        v2 = result;
        if ( !result )
          break;
        if ( (unsigned int)IsHungWindow(result) )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v8 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v8;
          *((_QWORD *)&v8 + 1) = v2;
          HMLockObject(v2);
          v6 = *((_QWORD *)v2 + 5);
          if ( (*(_BYTE *)(v6 + 19) & 0x10) != 0 )
          {
            ClearHungFlag(v2, 0x310u);
            ProcessHungWindow();
            v6 = *((_QWORD *)v2 + 5);
          }
          if ( (*(_BYTE *)(v6 + 19) & 8) != 0 )
          {
            ClearHungFlag(v2, 0x308u);
            xxxRedrawHungWindow(v2);
          }
          ThreadUnlock1(v6, v4, v5);
        }
      }
    }
  }
  return result;
}
