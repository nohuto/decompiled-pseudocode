/*
 * XREFs of _SleepInputIdle@4 @ 0xA709C
 * Callers:
 *     _xxxDesktopThreadWaiter@8 @ 0xA6EF2 (_xxxDesktopThreadWaiter@8.c)
 * Callees:
 *     <none>
 */

void __thiscall SleepInputIdle(_DWORD *this)
{
  int v2; // eax
  int CurrentProcessWin32Process; // ebx
  int v4; // ecx
  int v5; // ecx
  int v6; // eax

  if ( (this[66] & 0x1000) != 0 )
  {
    if ( *(_DWORD *)(this[83] + 16) )
    {
      EtwTraceSleepInputIdle(0, this);
      v5 = *(_DWORD *)(this[83] + 16);
      v6 = *(_DWORD *)(v5 + 16);
      if ( v6 == -1 )
      {
        *(_DWORD *)(v5 + 16) = 0;
      }
      else if ( v6 )
      {
        KeClearEvent(*(PRKEVENT *)(v5 + 16));
      }
    }
  }
  else
  {
    v2 = this[58];
    if ( !*(_DWORD *)(v2 + 184) )
    {
      *(_DWORD *)(v2 + 184) = this;
      v2 = this[58];
    }
    if ( *(_DWORD **)(v2 + 184) == this )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
      EtwTraceSleepInputIdle(0, this);
      v4 = *(_DWORD *)(CurrentProcessWin32Process + 12);
      if ( v4 == -1 )
      {
        *(_DWORD *)(CurrentProcessWin32Process + 12) = 0;
      }
      else if ( v4 )
      {
        KeClearEvent(*(PRKEVENT *)(CurrentProcessWin32Process + 12));
      }
    }
  }
}
