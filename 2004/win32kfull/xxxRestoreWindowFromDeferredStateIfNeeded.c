/*
 * XREFs of xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C005B2A4
 * Callers:
 *     NtUserRestoreWindowDpiChanges @ 0x1C00077F0 (NtUserRestoreWindowDpiChanges.c)
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C003BDB8 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     xxxNotifyMonitorChanged @ 0x1C006B018 (xxxNotifyMonitorChanged.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 */

__int64 __fastcall xxxRestoreWindowFromDeferredStateIfNeeded(struct tagWND *a1)
{
  struct tagRECT *v1; // rdi
  __int16 v3; // si
  __int64 result; // rax
  int v5; // r9d
  __int64 v6; // rcx
  unsigned int v7; // ebp
  __int64 Prop; // rax
  int v9; // ecx

  v1 = 0LL;
  v3 = *(_WORD *)(*((_QWORD *)a1 + 5) + 286LL);
  if ( !v3 )
    return 0LL;
  if ( (unsigned int)IsTopLevelWindow(a1) || !*(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 286LL) )
  {
    result = SetDeferredDpiStateForWindowAndChildren(a1, 0, v5);
    v6 = *((_QWORD *)a1 + 5);
    v7 = result;
    if ( v3 == *(_WORD *)(v6 + 284) )
    {
      *(_DWORD *)(v6 + 232) &= ~0x4000000u;
    }
    else
    {
      Prop = GetProp((__int64)a1, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink), 1LL);
      if ( Prop )
      {
        v9 = *(_DWORD *)(Prop + 48);
        if ( (v9 & 0x80u) != 0 )
        {
          v1 = (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
          *(_DWORD *)(Prop + 48) = v9 & 0xFFFFFF7F;
        }
      }
      xxxNotifyMonitorChanged(a1, v1, 0LL);
      return v7;
    }
  }
  else
  {
    *((_DWORD *)a1 + 76) &= ~1u;
    return 1LL;
  }
  return result;
}
