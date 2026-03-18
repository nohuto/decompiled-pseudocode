/*
 * XREFs of _NtUserGetCursorFrameInfo@16 @ 0x75144
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetCursorFrameInfo@@YGPAUtagCURSOR@@PAU1@HPAKPAH@Z @ 0x751FE (-_GetCursorFrameInfo@@YGPAUtagCURSOR@@PAU1@HPAKPAH@Z.c)
 *     ?GetVirtualizedDpiCursor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x7528E (-GetVirtualizedDpiCursor@@YGPAUtagCURSOR@@PAU1@@Z.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetCursorFrameInfo(int a1, int a2, _DWORD *a3, int *a4)
{
  int v4; // esi
  int v5; // edx
  _DWORD *v6; // ecx
  int *v7; // ecx
  struct tagCURSOR *CursorFrameInfo; // eax
  struct tagCURSOR *v10; // [esp+0h] [ebp-38h]
  unsigned int *v11; // [esp+0h] [ebp-38h]
  int *v12; // [esp+4h] [ebp-34h]
  int v13; // [esp+18h] [ebp-20h] BYREF
  int v14; // [esp+1Ch] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v4 = 0;
  v14 = 0;
  v13 = 0;
  EnterSharedCrit(0, 1);
  LOBYTE(v5) = 3;
  if ( HMValidateHandle(a1, v5) )
  {
    GetVirtualizedDpiCursor(v10);
    ms_exc.registration.TryLevel = 0;
    v6 = a3;
    if ( (unsigned int)a3 >= _MmUserProbeAddress )
      v6 = (_DWORD *)_MmUserProbeAddress;
    *v6 = *v6;
    v7 = a4;
    if ( (unsigned int)a4 >= _MmUserProbeAddress )
      v7 = (int *)_MmUserProbeAddress;
    *v7 = *v7;
    ms_exc.registration.TryLevel = -2;
    CursorFrameInfo = _GetCursorFrameInfo((struct tagCURSOR *)&v14, (int)&v13, v11, v12);
    if ( CursorFrameInfo )
    {
      v4 = *(_DWORD *)CursorFrameInfo;
      *a3 = v14;
      *a4 = v13;
      ms_exc.registration.TryLevel = -2;
    }
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
