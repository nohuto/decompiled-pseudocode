/*
 * XREFs of NtUserDeferWindowPosAndBand @ 0x1C0064B10
 * Callers:
 *     <none>
 * Callees:
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C006491C (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0064D28 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C006A178 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     DestroySMWP @ 0x1C006E5F0 (DestroySMWP.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01F7474 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 */

__int64 __fastcall NtUserDeferWindowPosAndBand(
        __int64 a1,
        HWND a2,
        HWND a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        int a10)
{
  __int64 v10; // rdi
  int v14; // r15d
  __int64 v15; // rdx
  unsigned int v16; // r13d
  __int64 v17; // rax
  __int64 v18; // r14
  struct tagWND *v19; // rsi
  __int64 v20; // rcx
  unsigned int v21; // ebx
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rcx
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v30; // rcx
  struct tagWND *v31; // [rsp+50h] [rbp-20h] BYREF
  struct tagWND *v32; // [rsp+58h] [rbp-18h] BYREF
  _BYTE v33[16]; // [rsp+60h] [rbp-10h] BYREF
  int v34; // [rsp+B8h] [rbp+48h] BYREF

  v34 = a4;
  v10 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v14 = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v33);
  v16 = a8;
  if ( (a8 & 0xFFFC9800) != 0 )
  {
    v30 = 1004LL;
LABEL_26:
    UserSetLastError(v30);
    goto LABEL_17;
  }
  LOBYTE(v15) = 4;
  v17 = HMValidateHandle(a1, v15);
  v18 = v17;
  if ( !v17 )
    goto LABEL_17;
  if ( (*(_DWORD *)(v17 + 24) & 4) != 0 )
  {
    if ( a10 )
      DestroySMWP(v17);
    v30 = 1405LL;
    goto LABEL_26;
  }
  if ( (unsigned int)ValidateHWNDND(a2, &v31) && (unsigned int)ValidateHWNDIA(a3, &v32) )
  {
    v19 = v31;
    if ( v31 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 472) + 224LL) & 1) != 0
        || (v20 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 472), (*(_BYTE *)(v20 + 224) & 0x20) != 0) )
      {
        v19 = v31;
      }
      else
      {
        v19 = v31;
        v21 = *(_DWORD *)(*((_QWORD *)v31 + 5) + 288LL);
        if ( (((unsigned __int16)(v21 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v20) >> 8)) & 0x1FF) != 0 )
          goto LABEL_29;
        v22 = *(unsigned int *)(*((_QWORD *)v19 + 5) + 288LL);
        if ( (*(_DWORD *)(*((_QWORD *)v19 + 5) + 288LL) & 0xF) != 2 || (v23 = 1, (v22 & 0x20000000) == 0) )
          v23 = 0;
        if ( (W32GetCurrentThreadDpiAwarenessContext(v22) & 0xF) != 2
          || (W32GetCurrentThreadDpiAwarenessContext(v24) & 0x20000000) == 0 )
        {
          v14 = 0;
        }
        if ( v23 != v14 )
LABEL_29:
          TransformSWPCoords(v19, &v34, &a5, &a6, &a7, v16);
      }
    }
    v25 = (__int64 *)_DeferWindowPosAndBand(v18, (__int64)v19, v32, v34, a5, a6, a7, v16, a9, a10 != 0);
    if ( v25 )
      v10 = *v25;
  }
  else if ( a10 )
  {
    DestroySMWP(v18);
  }
LABEL_17:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v33);
  UserSessionSwitchLeaveCrit(v27, v26, v28);
  return v10;
}
