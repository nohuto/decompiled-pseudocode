/*
 * XREFs of _zzzWakeInputIdle@4 @ 0x4584E
 * Callers:
 *     ?xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z @ 0x45220 (-xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z.c)
 *     _xxxSleepTask@8 @ 0x457AA (_xxxSleepTask@8.c)
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     _xxxDesktopThreadWaiter@8 @ 0xA6EF2 (_xxxDesktopThreadWaiter@8.c)
 * Callees:
 *     _zzzCalcStartCursorHide@8 @ 0x744FA (_zzzCalcStartCursorHide@8.c)
 */

int __thiscall zzzWakeInputIdle(_DWORD *this)
{
  int CurrentProcessWin32Process; // eax
  int v3; // ebx
  int v4; // eax
  int result; // eax
  struct _KEVENT *v6; // eax
  int v7; // ecx
  struct _KEVENT *v8; // eax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  this[66] &= ~0x2000u;
  v3 = CurrentProcessWin32Process;
  if ( (this[66] & 0x1000) != 0 )
  {
    if ( *(_DWORD *)(this[83] + 16) )
    {
      EtwTraceWakeInputIdle(0, this);
      v7 = *(_DWORD *)(this[83] + 16);
      v8 = *(struct _KEVENT **)(v7 + 16);
      if ( v8 )
      {
        if ( v8 != (struct _KEVENT *)-1 )
        {
          KeSetEvent(v8, 1, 0);
          ObfDereferenceObject(*(PVOID *)(*(_DWORD *)(this[83] + 16) + 16));
          *(_DWORD *)(*(_DWORD *)(this[83] + 16) + 16) = -1;
        }
      }
      else
      {
        *(_DWORD *)(v7 + 16) = -1;
      }
    }
  }
  else
  {
    v4 = this[58];
    if ( !*(_DWORD *)(v4 + 184) )
    {
      *(_DWORD *)(v4 + 184) = this;
      v4 = this[58];
    }
    if ( *(_DWORD **)(v4 + 184) == this )
    {
      EtwTraceWakeInputIdle(0, this);
      v6 = *(struct _KEVENT **)(v3 + 12);
      if ( v6 )
      {
        if ( v6 == (struct _KEVENT *)-1 )
          goto LABEL_5;
        KeSetEvent(v6, 1, 0);
        ObfDereferenceObject(*(PVOID *)(v3 + 12));
      }
      *(_DWORD *)(v3 + 12) = -1;
    }
  }
LABEL_5:
  result = *(_DWORD *)(v3 + 8);
  if ( (result & 4) != 0 )
  {
    *(_DWORD *)(v3 + 8) = result & 0xFFFFFFFB;
    return zzzCalcStartCursorHide(0, 0);
  }
  return result;
}
