/*
 * XREFs of NtUserGetIconSize @ 0x1C0106A00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C0067AAC (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0067B4C (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C0087AE0 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 */

__int64 __fastcall NtUserGetIconSize(unsigned __int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  int v8; // edi
  struct tagCURSOR *v9; // rax
  __int64 v10; // rdx
  ULONG64 v11; // rcx
  __int64 v12; // r8
  struct tagCURSOR *VirtualizedDpiCursor; // rax
  int v15; // [rsp+20h] [rbp-28h] BYREF
  int v16[9]; // [rsp+24h] [rbp-24h] BYREF

  v8 = 0;
  v15 = 0;
  v16[0] = 0;
  EnterSharedCrit(0LL, 1LL);
  v9 = (struct tagCURSOR *)HMValidateHandle(a1, 3u);
  if ( v9 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v9);
    if ( (*((_DWORD *)VirtualizedDpiCursor + 20) & 8) == 0
      || (VirtualizedDpiCursor = GetAnimatedCursorFrame(VirtualizedDpiCursor, a2)) != 0LL )
    {
      GetVirtualizedCursorSize(VirtualizedDpiCursor, &v15, v16);
      v11 = MmUserProbeAddress;
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_DWORD *)MmUserProbeAddress;
      *a3 = v15;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_DWORD *)MmUserProbeAddress;
      *a4 = v16[0];
      v8 = 1;
      v16[1] = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12);
  return v8;
}
