/*
 * XREFs of _NtUserDeferWindowPosAndBand@40 @ 0x749C8
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     ?ValidateHWNDIA@@YGHPAUHWND__@@PAPAUtagWND@@@Z @ 0x30032 (-ValidateHWNDIA@@YGHPAUHWND__@@PAPAUtagWND@@@Z.c)
 *     _DestroySMWP@4 @ 0x349E4 (_DestroySMWP@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     ?ValidateHWNDND@@YGHPAUHWND__@@PAPAUtagWND@@@Z @ 0x74B40 (-ValidateHWNDND@@YGHPAUHWND__@@PAPAUtagWND@@@Z.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     ?_DeferWindowPosAndBand@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x7705E (-_DeferWindowPosAndBand@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?TransformSWPCoords@@YGXPAUtagWND@@PAH111I@Z @ 0x15F6FC (-TransformSWPCoords@@YGXPAUtagWND@@PAH111I@Z.c)
 */

int __userpurge NtUserDeferWindowPosAndBand@<eax>(
        HWND a1@<ebx>,
        int *a2@<esi>,
        int a3,
        int a4,
        void *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int *a10,
        int a11,
        int a12)
{
  int v12; // edi
  int v13; // edx
  int v14; // eax
  int v15; // ebx
  int v16; // esi
  PKTHREAD CurrentThread; // eax
  PKTHREAD v18; // eax
  unsigned int v19; // esi
  int v20; // esi
  int *v21; // eax
  unsigned int v25; // [esp-4h] [ebp-18h]
  struct tagWND **v26; // [esp+0h] [ebp-14h]
  _BYTE v27[8]; // [esp+4h] [ebp-10h] BYREF
  int v28; // [esp+Ch] [ebp-8h] BYREF
  int v29; // [esp+10h] [ebp-4h]
  int v30; // [esp+1Ch] [ebp+8h]

  v12 = 0;
  v29 = 0;
  v28 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v27);
  if ( ((unsigned int)a10 & 0xFFFC9800) != 0 )
  {
    UserSetLastError(1004);
  }
  else
  {
    LOBYTE(v13) = 4;
    v14 = HMValidateHandle(a3, v13);
    v15 = v14;
    if ( v14 )
    {
      if ( (*(_BYTE *)(v14 + 12) & 4) != 0 )
      {
        if ( a12 )
          DestroySMWP(v14);
        UserSetLastError(1405);
      }
      else if ( ValidateHWNDND(a1, v26) && ValidateHWNDIA(a5, &v28) )
      {
        v16 = v29;
        if ( v29 )
        {
          CurrentThread = KeGetCurrentThread();
          if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 260) + 148) & 1) == 0 )
          {
            v18 = KeGetCurrentThread();
            if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v18) + 260) + 148) & 0x20) == 0 )
            {
              v19 = *(_DWORD *)(*(_DWORD *)(v16 + 20) + 184);
              if ( (((v19 >> 8) ^ ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) != 0 )
                goto LABEL_27;
              if ( (*(_DWORD *)(*(_DWORD *)(v29 + 20) + 184) & 0xF) == 2
                && (*(_DWORD *)(*(_DWORD *)(v29 + 20) + 184) & 0x20000000) != 0 )
              {
                v20 = 1;
                v30 = 1;
              }
              else
              {
                v30 = 0;
                v20 = 1;
              }
              if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2
                || (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) == 0 )
              {
                v20 = 0;
              }
              if ( v30 != v20 )
LABEL_27:
                TransformSWPCoords((struct tagWND *)&a7, &a8, &a9, a10, a2, v25);
            }
          }
        }
        v21 = (int *)_DeferWindowPosAndBand(v15, v29, v28, a6, a7, a8, a9, a10, a11, a12 != 0);
        if ( v21 )
          v12 = *v21;
      }
      else if ( a12 )
      {
        DestroySMWP(v15);
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v27);
  UserSessionSwitchLeaveCrit();
  return v12;
}
