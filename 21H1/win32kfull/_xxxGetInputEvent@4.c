/*
 * XREFs of _xxxGetInputEvent@4 @ 0x82D1E
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 *     _NtUserMsgWaitForMultipleObjectsEx@20 @ 0x82980 (_NtUserMsgWaitForMultipleObjectsEx@20.c)
 * Callees:
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     _xxxUpdateInputHangInfo@8 @ 0x6C0FA (_xxxUpdateInputHangInfo@8.c)
 *     _zzzCalcStartCursorHide@8 @ 0x744FA (_zzzCalcStartCursorHide@8.c)
 *     ?CheckProcessForeground@@YGJPAUtagTHREADINFO@@@Z @ 0xC93F4 (-CheckProcessForeground@@YGJPAUtagTHREADINFO@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall xxxGetInputEvent(int a1)
{
  char v1; // bl
  int v2; // eax
  __int16 v3; // cx
  int v4; // ebx
  _DWORD *v5; // eax
  int CurrentProcessWin32Process; // ebx
  int v7; // eax
  struct _KEVENT *v8; // eax
  int v9; // eax
  int v10; // eax
  __int16 v11; // cx
  int v12; // esi
  int v13; // ecx
  int v15; // ecx
  struct _KEVENT *v16; // eax
  struct tagTHREADINFO *v17; // [esp+0h] [ebp-38h]
  int v18; // [esp+4h] [ebp-34h]

  v1 = a1;
  v2 = *(_DWORD *)(_gptiCurrent + 244);
  if ( (a1 & 0x40000) != 0 )
    v3 = *(_WORD *)(v2 + 6);
  else
    v3 = 0;
  if ( ((unsigned __int16)(v3 | *(_WORD *)(v2 + 4)) & (unsigned __int16)a1) != 0 )
    goto LABEL_52;
  v4 = *(_DWORD *)(_gptiCurrent + 688);
  if ( ((v4 & 0x400) != 0 || (a1 & 0x80000) != 0) && (v4 & 0x200) != 0 )
  {
    v1 = a1;
LABEL_52:
    KeSetEvent(*(PRKEVENT *)(_gptiCurrent + 400), 2, 0);
    goto LABEL_23;
  }
  v5 = *(_DWORD **)(_gptiCurrent + 236);
  v1 = a1;
  if ( v5[9] == _gptiCurrent
    && (v5[71] & 0x400) == 0
    && v5[10] == 1
    && *(_DWORD *)(_gptiCurrent + 308) == 1
    && (a1 & 0x1C07) != 0 )
  {
    goto LABEL_52;
  }
  if ( _gptiCurrent == _gptiForeground
    && ((*(_DWORD *)(**(_DWORD **)(_gptiCurrent + 252) + 8) | *(_DWORD *)(_gptiCurrent + 372)) & 0x1000) != 0 )
  {
    xxxCallHook(0, 0, 0, 0xBu, (int)v17, v18);
  }
  if ( (a1 & 0x1C0F) != 0 )
    *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 184) = _gptiCurrent;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  *(_DWORD *)(_gptiCurrent + 264) &= ~0x2000u;
  if ( (*(_DWORD *)(_gptiCurrent + 264) & 0x1000) != 0 )
  {
    if ( *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 332) + 16) )
    {
      EtwTraceWakeInputIdle(0, _gptiCurrent);
      v15 = *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 332) + 16);
      v16 = *(struct _KEVENT **)(v15 + 16);
      if ( v16 )
      {
        if ( v16 != (struct _KEVENT *)-1 )
        {
          KeSetEvent(v16, 1, 0);
          ObfDereferenceObject(*(PVOID *)(*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 332) + 16) + 16));
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 332) + 16) + 16) = -1;
        }
      }
      else
      {
        *(_DWORD *)(v15 + 16) = -1;
      }
    }
    goto LABEL_16;
  }
  v7 = *(_DWORD *)(_gptiCurrent + 232);
  if ( !*(_DWORD *)(v7 + 184) )
  {
    *(_DWORD *)(v7 + 184) = _gptiCurrent;
    v7 = *(_DWORD *)(_gptiCurrent + 232);
  }
  if ( *(_DWORD *)(v7 + 184) == _gptiCurrent )
  {
    EtwTraceWakeInputIdle(0, _gptiCurrent);
    v8 = *(struct _KEVENT **)(CurrentProcessWin32Process + 12);
    if ( v8 )
    {
      if ( v8 == (struct _KEVENT *)-1 )
        goto LABEL_16;
      KeSetEvent(v8, 1, 0);
      ObfDereferenceObject(*(PVOID *)(CurrentProcessWin32Process + 12));
    }
    *(_DWORD *)(CurrentProcessWin32Process + 12) = -1;
  }
LABEL_16:
  v9 = *(_DWORD *)(CurrentProcessWin32Process + 8);
  if ( (v9 & 4) != 0 )
  {
    *(_DWORD *)(CurrentProcessWin32Process + 8) = v9 & 0xFFFFFFFB;
    zzzCalcStartCursorHide(0, 0);
  }
  v10 = *(_DWORD *)(_gptiCurrent + 244);
  if ( (a1 & 0x40000) != 0 )
    v11 = *(_WORD *)(v10 + 6);
  else
    v11 = 0;
  if ( ((unsigned __int16)(v11 | *(_WORD *)(v10 + 4)) & (unsigned __int16)a1) != 0 )
  {
    KeSetEvent(*(PRKEVENT *)(_gptiCurrent + 400), 2, 0);
  }
  else
  {
    *(_WORD *)(*(_DWORD *)(_gptiCurrent + 244) + 10) = a1 | 0x2000;
    KeClearEvent(*(PRKEVENT *)(_gptiCurrent + 400));
    *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 260) + 4) = 0;
    if ( (*(_DWORD *)(_gptiCurrent + 264) & 0x400) != 0 && CheckProcessForeground(v17) < 0 )
      return 0;
  }
  v1 = a1;
LABEL_23:
  v12 = *(_DWORD *)(_gptiCurrent + 396);
  if ( v12 )
  {
    v13 = 0;
    if ( (v1 & 7) == 7 || (v1 & 6) != 0 && *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 56) )
      v13 = 1;
    if ( v13 )
      xxxUpdateInputHangInfo(0, 0);
  }
  return v12;
}
