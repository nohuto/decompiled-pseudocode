/*
 * XREFs of xxxCancelMouseMoveTracking @ 0x1C00BD088
 * Callers:
 *     xxxCapture @ 0x1C0039468 (xxxCapture.c)
 *     xxxTrackMouseMove @ 0x1C00BAAC4 (xxxTrackMouseMove.c)
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 * Callees:
 *     FindTimer @ 0x1C000BFEC (FindTimer.c)
 *     _PostMessage @ 0x1C0013FF0 (_PostMessage.c)
 *     xxxResetTooltip @ 0x1C001B604 (xxxResetTooltip.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C011CA90 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxHotTrack @ 0x1C0129B48 (xxxHotTrack.c)
 */

__int64 __fastcall xxxCancelMouseMoveTracking(__int16 a1, __int64 a2, unsigned int a3, __int16 a4)
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
    result = xxxHotTrack(a2, a3, 0LL);
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
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v18[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v18;
        v18[1] = v13;
        HMLockObject(v13);
        xxxResetTooltip(v12);
        result = ThreadUnlock1(v16, v15, v17);
      }
    }
  }
  v9 = a4 & a1;
  if ( v9 < 0 )
    result = PostMessage(a2, 675 - (unsigned int)(a3 != 1), 0, 0);
  if ( (v9 & 0x40) != 0 )
    return FindTimer(a2, 65530LL, 2u, 1, 0LL);
  return result;
}
