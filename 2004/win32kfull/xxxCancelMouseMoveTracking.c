/*
 * XREFs of xxxCancelMouseMoveTracking @ 0x1C00581CC
 * Callers:
 *     xxxCapture @ 0x1C0035FA8 (xxxCapture.c)
 *     xxxTrackMouseMove @ 0x1C0057D90 (xxxTrackMouseMove.c)
 *     xxxProcessEventMessage @ 0x1C00B3CF8 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxResetTooltip @ 0x1C00570C0 (xxxResetTooltip.c)
 *     xxxHotTrack @ 0x1C0057148 (xxxHotTrack.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C0057164 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     _PostMessage @ 0x1C0058410 (_PostMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     FindTimer @ 0x1C00C0ABC (FindTimer.c)
 */

__int64 __fastcall xxxCancelMouseMoveTracking(__int16 a1, __int64 a2, int a3, __int16 a4)
{
  __int64 result; // rax
  char v9; // bl
  __int64 v10; // rax
  __int64 v11; // rcx
  struct tagTOOLTIPWND *v12; // r14
  __int64 v13; // r15
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD v18[4]; // [rsp+30h] [rbp-38h] BYREF

  result = 1024LL;
  if ( (a1 & 0x400) != 0 && (a4 & 0x400) != 0 )
    result = xxxHotTrack((struct tagWND *)a2, a3, 0);
  if ( (a1 & 0x200) != 0 && (a4 & 0x300) != 0 )
  {
    v10 = *(_QWORD *)(a2 + 24);
    v11 = 0LL;
    if ( v10 )
      v11 = *(_QWORD *)(v10 + 112);
    result = safe_cast_fnid_to_PTOOLTIPWND(v11);
    v12 = (struct tagTOOLTIPWND *)result;
    if ( result )
    {
      v13 = *(_QWORD *)result;
      if ( *(_QWORD *)result )
      {
        v18[2] = 0LL;
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v18[0] = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = v18;
        v18[1] = v13;
        HMLockObject(v13);
        xxxResetTooltip(v12);
        result = ThreadUnlock1(v16, v15, v17);
      }
    }
  }
  v9 = a4 & a1;
  if ( v9 < 0 )
    result = PostMessage(a2, 675 - (unsigned int)(a3 != 1), 0LL, 0LL);
  if ( (v9 & 0x40) != 0 )
    return FindTimer(a2, 65530, 2, 1, 0LL);
  return result;
}
