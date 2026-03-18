/*
 * XREFs of _NtUserGetIconSize@16 @ 0xA38AA
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVirtualizedCursorSize@@YGXPAUtagCURSOR@@PAH1@Z @ 0x750D8 (-GetVirtualizedCursorSize@@YGXPAUtagCURSOR@@PAH1@Z.c)
 *     ?GetAnimatedCursorFrame@@YGPAUtagCURSOR@@QAUtagACON@@H@Z @ 0x7523E (-GetAnimatedCursorFrame@@YGPAUtagCURSOR@@QAUtagACON@@H@Z.c)
 *     ?GetVirtualizedDpiCursor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x7528E (-GetVirtualizedDpiCursor@@YGPAUtagCURSOR@@PAU1@@Z.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetIconSize(int a1, int a2, ULONG a3, ULONG a4)
{
  int v4; // esi
  _DWORD *v5; // eax
  struct tagCURSOR *VirtualizedDpiCursor; // eax
  _DWORD *v7; // ecx
  _DWORD *v8; // ecx
  int *v10; // [esp+0h] [ebp-38h]
  int *v11; // [esp+4h] [ebp-34h]
  INT v12; // [esp+18h] [ebp-20h] BYREF
  INT v13; // [esp+1Ch] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v4 = 0;
  v13 = 0;
  v12 = 0;
  EnterSharedCrit(0, 1);
  v5 = (_DWORD *)HMValidateHandle(a1, 3);
  if ( v5 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v5);
    if ( (*((_BYTE *)VirtualizedDpiCursor + 44) & 8) == 0
      || (VirtualizedDpiCursor = GetAnimatedCursorFrame((int)VirtualizedDpiCursor, a2)) != 0 )
    {
      GetVirtualizedCursorSize(&v13, (INT *)VirtualizedDpiCursor, &v12, v10, v11);
      ms_exc.registration.TryLevel = 0;
      v7 = (_DWORD *)a3;
      if ( a3 >= _MmUserProbeAddress )
        v7 = (_DWORD *)_MmUserProbeAddress;
      *v7 = v13;
      v8 = (_DWORD *)a4;
      if ( a4 >= _MmUserProbeAddress )
        v8 = (_DWORD *)_MmUserProbeAddress;
      *v8 = v12;
      v4 = 1;
      ms_exc.registration.TryLevel = -2;
    }
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
