/*
 * XREFs of NtUserGetCursorFrameInfo @ 0x1C0156940
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0095000 (HMValidateHandle.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0095764 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?_GetCursorFrameInfo@@YAPEAUtagCURSOR@@PEAU1@HPEAKPEAH@Z @ 0x1C0156A30 (-_GetCursorFrameInfo@@YAPEAUtagCURSOR@@PEAU1@HPEAKPEAH@Z.c)
 */

__int64 __fastcall NtUserGetCursorFrameInfo(unsigned __int64 a1, int a2, unsigned int *a3, int *a4)
{
  __int64 v8; // rdi
  struct tagCURSOR *v9; // rax
  __int64 v10; // rcx
  struct tagCURSOR *VirtualizedDpiCursor; // r10
  _DWORD *v12; // rcx
  _DWORD *v13; // rdx
  struct tagCURSOR *CursorFrameInfo; // rax
  unsigned int v16; // [rsp+20h] [rbp-28h] BYREF
  int v17[9]; // [rsp+24h] [rbp-24h] BYREF

  v8 = 0LL;
  v16 = 0;
  v17[0] = 0;
  EnterSharedCrit(0LL, 1LL);
  v9 = (struct tagCURSOR *)HMValidateHandle(a1, 3u);
  if ( v9 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v9);
    v12 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v12 = (_DWORD *)MmUserProbeAddress;
    *v12 = *v12;
    v13 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v13 = (_DWORD *)MmUserProbeAddress;
    *v13 = *v13;
    CursorFrameInfo = _GetCursorFrameInfo(VirtualizedDpiCursor, a2, &v16, v17);
    if ( CursorFrameInfo )
    {
      v8 = *(_QWORD *)CursorFrameInfo;
      *a3 = v16;
      *a4 = v17[0];
    }
  }
  UserSessionSwitchLeaveCrit(v10);
  return v8;
}
