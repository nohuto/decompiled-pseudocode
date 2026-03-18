/*
 * XREFs of _CalcWindowFullScreen@4 @ 0x34B60
 * Callers:
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z @ 0x38532 (-xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z.c)
 *     _CalcWindowsFullScreen@4 @ 0xAAA8C (_CalcWindowsFullScreen@4.c)
 *     ?UpdateWindowRects@@YGXPAUtagWND@@PBUtagPOINT@@PBUtagSIZE@@PAH3@Z @ 0xBAE9A (-UpdateWindowRects@@YGXPAUtagWND@@PBUtagPOINT@@PBUtagSIZE@@PAH3@Z.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 * Callees:
 *     _PostShellHookMessages@8 @ 0x17142 (_PostShellHookMessages@8.c)
 *     _GetMonitorRectForWindow@8 @ 0x33538 (_GetMonitorRectForWindow@8.c)
 *     ?_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z @ 0x33616 (-_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _UnionRect@12 @ 0x982E2 (_UnionRect@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcmp @ 0xF9295 (_memcmp.c)
 */

unsigned int __thiscall CalcWindowFullScreen(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // esi
  _DWORD *v4; // esi
  _DWORD *MonitorRectForWindow; // eax
  const void *v6; // edx
  int v7; // edx
  int v8; // edi
  unsigned int result; // eax
  int v10; // ecx
  unsigned int v11; // [esp+0h] [ebp-58h]
  int v12; // [esp+4h] [ebp-54h]
  _DWORD v13[4]; // [esp+10h] [ebp-48h] BYREF
  _DWORD v14[9]; // [esp+20h] [ebp-38h] BYREF
  _BYTE Buf1[16]; // [esp+44h] [ebp-14h] BYREF

  memset(Buf1, 0, sizeof(Buf1));
  if ( _IsTopLevelWindow(this) && (*(_BYTE *)(this[5] + 23) & 0x10) != 0 )
  {
    if ( _MonitorFromWindowInternal(2, (int)this, 0, v11, v12) )
    {
      v2 = this[5];
      if ( (*(_BYTE *)(v2 + 22) & 0xC4) == 0xC4 )
        v3 = (_DWORD *)(v2 + 68);
      else
        v3 = (_DWORD *)(v2 + 52);
      v14[5] = *v3;
      v4 = v3 + 1;
      v14[6] = *v4++;
      v14[7] = *v4;
      v14[8] = v4[1];
      MonitorRectForWindow = GetMonitorRectForWindow(v14);
      v13[0] = *MonitorRectForWindow;
      v13[1] = MonitorRectForWindow[1];
      v13[2] = MonitorRectForWindow[2];
      v13[3] = MonitorRectForWindow[3];
      UnionRect(v13);
      v7 = memcmp(Buf1, v6, 0x10u) == 0;
    }
    else
    {
      v7 = 0;
    }
    v8 = this[5];
    result = (*(_DWORD *)(v8 + 144) & 0x8000u) >> 15;
    if ( v7 != result )
    {
      *(_DWORD *)(v8 + 144) = (v7 << 15) | *(_DWORD *)(v8 + 144) & 0xFFFF7FFF;
      if ( _gpqForeground && *(_DWORD **)(_gpqForeground + 64) == this )
      {
        if ( v7 )
          EtwTraceForegroundWindowFullScreenStart(0);
        else
          EtwTraceForegroundWindowFullScreenStop(0);
      }
      return PostShellHookMessages();
    }
  }
  else
  {
    v10 = this[5];
    result = *(_DWORD *)(v10 + 144);
    if ( (result & 0x8000) != 0 )
    {
      *(_DWORD *)(v10 + 144) = result & 0xFFFF7FFF;
      return PostShellHookMessages();
    }
  }
  return result;
}
