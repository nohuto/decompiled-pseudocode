/*
 * XREFs of _NtUserfnGETWINDOWDATA@28 @ 0xA1A74
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?GetWindowData@@YGJPAUtagWND@@JH_N@Z @ 0x15F023 (-GetWindowData@@YGJPAUtagWND@@JH_N@Z.c)
 */

int __thiscall NtUserfnGETWINDOWDATA(void *this, int a2, int a3, struct tagWND *a4, int a5, ULONG a6, int a7, int a8)
{
  int v8; // ebx
  _BYTE *v9; // ecx
  int v12; // ecx
  int v13; // [esp+0h] [ebp-38h]
  bool v14; // [esp+4h] [ebp-34h]
  int WindowData; // [esp+1Ch] [ebp-1Ch]

  WindowData = 0;
  if ( a7 != 689 || a5 >= 3 )
    return WindowData;
  if ( (*(_DWORD *)(*(_DWORD *)(a2 + 20) + 144) & 0x800) != 0 )
    return GetWindowData(a4, (int)this, v13, v14);
  v8 = *(_DWORD *)(*(_DWORD *)(a2 + 8) + 232);
  if ( v8 == PsGetCurrentProcessWin32Process() )
  {
    v9 = (_BYTE *)a6;
    if ( a6 >= _MmUserProbeAddress )
      v9 = (_BYTE *)_MmUserProbeAddress;
    *v9 = 1;
    return WindowData;
  }
  if ( (*(_WORD *)(*(_DWORD *)(a2 + 20) + 30) & 0x3FFF) != 0 )
    return dword_273CBC(a2, a3, a4, a5, a6);
  if ( (unsigned __int8)CheckAccess(*(_DWORD *)(_gptiCurrent + 232) + 496, v8 + 496) )
  {
    KeAttachProcess(**(PRKPROCESS **)(*(_DWORD *)(a2 + 8) + 232));
    WindowData = GetWindowData(a4, v12, v13, v14);
    KeDetachProcess();
  }
  return WindowData;
}
