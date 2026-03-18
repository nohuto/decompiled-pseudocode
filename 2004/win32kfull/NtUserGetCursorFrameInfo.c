/*
 * XREFs of NtUserGetCursorFrameInfo @ 0x1C0154010
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0067B4C (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     ?_GetCursorFrameInfo@@YAPEAUtagCURSOR@@PEAU1@HPEAKPEAH@Z @ 0x1C0154100 (-_GetCursorFrameInfo@@YAPEAUtagCURSOR@@PEAU1@HPEAKPEAH@Z.c)
 */

__int64 __fastcall NtUserGetCursorFrameInfo(unsigned __int64 a1, int a2, unsigned int *a3, int *a4)
{
  __int64 v8; // rdi
  struct tagCURSOR *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct tagCURSOR *VirtualizedDpiCursor; // r10
  _DWORD *v14; // rcx
  _DWORD *v15; // rdx
  struct tagCURSOR *CursorFrameInfo; // rax
  unsigned int v18; // [rsp+20h] [rbp-28h] BYREF
  int v19[9]; // [rsp+24h] [rbp-24h] BYREF

  v8 = 0LL;
  v18 = 0;
  v19[0] = 0;
  EnterSharedCrit(0LL, 1LL);
  v9 = (struct tagCURSOR *)HMValidateHandle(a1, 3u);
  if ( v9 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v9);
    v14 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v14 = (_DWORD *)MmUserProbeAddress;
    *v14 = *v14;
    v15 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v15 = (_DWORD *)MmUserProbeAddress;
    *v15 = *v15;
    CursorFrameInfo = _GetCursorFrameInfo(VirtualizedDpiCursor, a2, &v18, v19);
    if ( CursorFrameInfo )
    {
      v8 = *(_QWORD *)CursorFrameInfo;
      *a3 = v18;
      *a4 = v19[0];
    }
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12);
  return v8;
}
