/*
 * XREFs of ?DrawIconCallBack@@YGXPAUHWND__@@IKJ@Z @ 0x15BF55
 * Callers:
 *     <none>
 * Callees:
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?Getpswi@@YGPAUtagSwitchWndInfo@@PAUtagWND@@@Z @ 0x15C2D1 (-Getpswi@@YGPAUtagSwitchWndInfo@@PAUtagWND@@@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YGXPAUtagWND@@PAUtagSwitchWndInfo@@PAUHDC__@@HHHHHPAUtagCURSOR@@@Z @ 0x15C9B3 (-xxxPaintIconsInSwitchWindow@@YGXPAUtagWND@@PAUtagSwitchWndInfo@@PAUHDC__@@HHHHHPAUtagCURSOR@@@Z.c)
 */

void __userpurge DrawIconCallBack(
        struct tagWND *a1@<edi>,
        int a2@<esi>,
        HWND a3,
        unsigned int a4,
        struct tagSwitchWndInfo *a5,
        int a6)
{
  int v6; // eax
  int v7; // ebx
  struct tagSwitchWndInfo *v8; // eax
  unsigned int *i; // esi
  int v10; // eax
  int v11; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  struct tagCURSOR *v15; // [esp-4h] [ebp-14h]
  int v16; // [esp+4h] [ebp-Ch] BYREF
  int v17; // [esp+8h] [ebp-8h]
  int v18; // [esp+Ch] [ebp-4h]
  HWND v19; // [esp+18h] [ebp+8h]
  struct tagSwitchWndInfo *v20; // [esp+20h] [ebp+10h]

  v6 = HMValidateHandleNoSecure((unsigned int)a5, 1);
  v7 = v6;
  if ( v6 )
  {
    if ( (*(_BYTE *)(*(_DWORD *)(v6 + 20) + 23) & 0x10) != 0 )
    {
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = (HWND)HMValidateHandleNoSecure((unsigned int)a3, 1);
      if ( v19 )
      {
        v8 = Getpswi(a1);
        if ( v8 )
        {
          v20 = 0;
          for ( i = (unsigned int *)(*((_DWORD *)v8 + 2) + 16); *i != 1; ++i )
          {
            v10 = HMValidateHandleNoSecure(*i, 1);
            if ( v10 )
            {
              while ( v19 != (HWND)v10 )
              {
                v10 = *(_DWORD *)(v10 + 64);
                if ( !v10 )
                  goto LABEL_9;
              }
              if ( !a6 || (v11 = HMValidateHandleNoRip(a6, 3)) == 0 )
                v11 = dword_26B8CC;
              CurrentThread = KeGetCurrentThread();
              ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
              v16 = *(_DWORD *)(ThreadWin32Thread + 228);
              *(_DWORD *)(ThreadWin32Thread + 228) = &v16;
              v17 = v7;
              HMLockObject(v7);
              xxxPaintIconsInSwitchWindow(0, v20, 0, 1, 0, 0, v11, a2, v15);
              ThreadUnlock1();
              return;
            }
LABEL_9:
            v20 = (struct tagSwitchWndInfo *)((char *)v20 + 1);
          }
        }
      }
    }
  }
}
