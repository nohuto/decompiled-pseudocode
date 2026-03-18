/*
 * XREFs of _xxxSetDeskWallpaper@8 @ 0xE631C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendNotifyMessage@20 @ 0x4823C (_xxxSendNotifyMessage@20.c)
 *     ?RtlStringCchCopyW@@YGJPAGIPBG@Z @ 0x48774 (-RtlStringCchCopyW@@YGJPAGIPBG@Z.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YGHXZ @ 0xE6432 (-xxxNotifyShellOfWallpaperChange@@YGHXZ.c)
 *     ?NotifyDWMOfWallpaperChange@@YGHXZ @ 0xE64A0 (-NotifyDWMOfWallpaperChange@@YGHXZ.c)
 *     ?SetGlobalWallpaperSettings@@YGHPBUtagWALLPAPERSETTINGS@@@Z @ 0xE6526 (-SetGlobalWallpaperSettings@@YGHPBUtagWALLPAPERSETTINGS@@@Z.c)
 *     _LoadWallpaperFilenameFromRegistry@12 @ 0xE6574 (_LoadWallpaperFilenameFromRegistry@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

size_t __fastcall xxxSetDeskWallpaper(int a1, unsigned __int16 *a2)
{
  int v2; // edi
  int v4; // eax
  int v5; // esi
  int CurrentProcess; // eax
  size_t v7; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  const struct tagWALLPAPERSETTINGS *v11; // [esp+0h] [ebp-224h]
  const unsigned __int16 *v12; // [esp+4h] [ebp-220h]
  _DWORD v13[3]; // [esp+Ch] [ebp-218h] BYREF
  int v14; // [esp+18h] [ebp-20Ch]
  int v15; // [esp+1Ch] [ebp-208h]
  char v16[512]; // [esp+20h] [ebp-204h] BYREF

  v2 = 0;
  v14 = a1;
  memset(v16, 0, sizeof(v16));
  v15 = 1;
  if ( _g_pWallpaperSettings )
    RtlStringCchCopyW(256, v16, (unsigned __int16 *)(_g_pWallpaperSettings + 4), (unsigned int)v11, v12);
  else
    LoadWallpaperFilenameFromRegistry(v14, v16, 256);
  if ( !a2 || a2 == (unsigned __int16 *)-1 )
  {
    LoadWallpaperFilenameFromRegistry(v14, v16, 256);
  }
  else if ( a2 != (unsigned __int16 *)-2 )
  {
    RtlStringCchCopyW(256, v16, a2, (unsigned int)v11, v12);
  }
  v4 = *(_DWORD *)(_gptiCurrent + 248);
  if ( v4 )
    v5 = *(_DWORD *)(*(_DWORD *)(v4 + 4) + 84);
  else
    v5 = 0;
  if ( (PsGetCurrentProcess() == _gpepCSRSS
     || (CurrentProcess = PsGetCurrentProcess(), PsIsProtectedProcess(CurrentProcess)))
    && v5 )
  {
    v13[2] = 0;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v13[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v13;
    v13[1] = v5;
    HMLockObject(v5);
    v7 = xxxSendNotifyMessage(v5, 0x34u, (struct tagWND *)5, 0, 1u);
    ThreadUnlock1();
  }
  else
  {
    v2 = 1;
    v7 = SetGlobalWallpaperSettings(v11);
  }
  if ( v7 && v2 )
  {
    NotifyDWMOfWallpaperChange();
    xxxNotifyShellOfWallpaperChange();
  }
  return v7;
}
