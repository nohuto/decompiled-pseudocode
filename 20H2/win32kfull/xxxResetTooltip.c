/*
 * XREFs of xxxResetTooltip @ 0x1C001B604
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00BAAC4 (xxxTrackMouseMove.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00BD088 (xxxCancelMouseMoveTracking.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0242A70 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0012D20 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C001B654 (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     xxxSetWindowPosAndBand @ 0x1C004B0D8 (xxxSetWindowPosAndBand.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

struct tagWND *__fastcall xxxResetTooltip(struct tagTOOLTIPWND *a1)
{
  struct tagWND *v2; // rcx
  struct tagWND *result; // rax
  struct tagWND *v4; // rdi
  __int64 v5; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v10[5]; // [rsp+40h] [rbp-28h] BYREF

  KillTooltipTimer(a1);
  v2 = *(struct tagWND **)a1;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 31LL) & 0x10) != 0 )
  {
    v4 = 0LL;
    v10[2] = 0LL;
    xxxSetWindowPosAndBand(v2, 0, 0, 151, 1);
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    if ( v5 )
      v4 = *(struct tagWND **)(v5 + 104);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v10[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v10;
    v10[1] = v4;
    HMLockObject(v4);
    xxxSetParentWorker(*(struct tagWND **)a1, v4, 0LL, 0);
    ThreadUnlock1(v8, v7, v9);
  }
  *((_OWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 6) = 0LL;
  result = *(struct tagWND **)a1;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 48LL) &= 0xFFFFFCFF;
  return result;
}
