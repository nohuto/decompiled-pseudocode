/*
 * XREFs of xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C0018668
 * Callers:
 *     NtUserRestoreWindowDpiChanges @ 0x1C0007690 (NtUserRestoreWindowDpiChanges.c)
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 * Callees:
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00133EC (_SetDeferredDpiStateForWindowAndChildren.c)
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C004A38C (xxxNotifyMonitorChanged.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 */

__int64 __fastcall xxxRestoreWindowFromDeferredStateIfNeeded(struct tagWND *a1)
{
  __int16 v2; // si
  __int64 result; // rax
  int v4; // r9d
  __int64 v5; // rcx
  unsigned int v6; // ebp
  __int64 Prop; // rax
  int v8; // ecx

  v2 = *(_WORD *)(*((_QWORD *)a1 + 5) + 286LL);
  if ( !v2 )
    return 0LL;
  if ( (unsigned int)IsTopLevelWindow(a1) || !*(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 286LL) )
  {
    result = SetDeferredDpiStateForWindowAndChildren(a1, 0, v4);
    v5 = *((_QWORD *)a1 + 5);
    v6 = result;
    if ( v2 == *(_WORD *)(v5 + 284) )
    {
      *(_DWORD *)(v5 + 232) &= ~0x4000000u;
    }
    else
    {
      Prop = GetProp(a1, LOWORD(WPP_MAIN_CB.DeviceQueue.Lock), 1LL);
      if ( Prop )
      {
        v8 = *(_DWORD *)(Prop + 48);
        if ( (v8 & 0x80u) != 0 )
          *(_DWORD *)(Prop + 48) = v8 & 0xFFFFFF7F;
      }
      xxxNotifyMonitorChanged(a1);
      return v6;
    }
  }
  else
  {
    *((_DWORD *)a1 + 76) &= ~1u;
    return 1LL;
  }
  return result;
}
