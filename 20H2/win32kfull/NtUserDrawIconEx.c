/*
 * XREFs of NtUserDrawIconEx @ 0x1C0092430
 * Callers:
 *     <none>
 * Callees:
 *     _DrawIconEx @ 0x1C0091C78 (_DrawIconEx.c)
 *     HMValidateHandle @ 0x1C0095000 (HMValidateHandle.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C00956C4 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0095764 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C00CD540 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserDrawIconEx(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        ULONG64 a11)
{
  __int64 v15; // rdi
  __int64 v16; // rdx
  struct tagCURSOR *v17; // rax
  struct tagCURSOR *VirtualizedDpiCursor; // rax
  struct tagCURSOR *AnimatedCursorFrame; // rbx
  __int64 v20; // rcx
  __int64 v22; // rcx
  _BYTE *v23; // rdx
  _BYTE v24[24]; // [rsp+68h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v15 = 0LL;
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v24);
  LOBYTE(v16) = 3;
  v17 = (struct tagCURSOR *)HMValidateHandle(a4, v16);
  if ( v17 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v17);
    AnimatedCursorFrame = VirtualizedDpiCursor;
    if ( a10 )
    {
      v22 = *((unsigned int *)VirtualizedDpiCursor + 20);
      if ( (v22 & 8) == 0 || (AnimatedCursorFrame = GetAnimatedCursorFrame(VirtualizedDpiCursor, 0)) != 0LL )
      {
        if ( !PsGetCurrentProcessWow64Process(v22) )
          v15 = 3LL;
        if ( (v15 & a11) != 0 )
          ExRaiseDatatypeMisalignment();
        v23 = (_BYTE *)a11;
        if ( a11 >= MmUserProbeAddress )
          v23 = (_BYTE *)MmUserProbeAddress;
        *v23 = *v23;
        v23[39] = v23[39];
        *(_QWORD *)a11 = *((_QWORD *)AnimatedCursorFrame + 11);
        *(_QWORD *)(a11 + 8) = *((_QWORD *)AnimatedCursorFrame + 12);
        *(_QWORD *)(a11 + 32) = *((_QWORD *)AnimatedCursorFrame + 16);
        GetVirtualizedCursorSize(AnimatedCursorFrame, (int *)(a11 + 24), (int *)(a11 + 28));
        *(_DWORD *)(a11 + 16) = *((_DWORD *)AnimatedCursorFrame + 35);
        *(_DWORD *)(a11 + 20) = *((_DWORD *)AnimatedCursorFrame + 36);
        LODWORD(v15) = 1;
      }
    }
    else
    {
      LODWORD(v15) = DrawIconEx(a1, a2, a3, (__int64)VirtualizedDpiCursor, a5, a6, a7, a8, a9);
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v24);
  UserSessionSwitchLeaveCrit(v20);
  return (int)v15;
}
