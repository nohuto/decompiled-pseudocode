/*
 * XREFs of xxxSetDeskWallpaper @ 0x1C0123BAC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C0036510 (xxxSendNotifyMessage.c)
 *     IsThreadDesktopComposed @ 0x1C0069C78 (IsThreadDesktopComposed.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00AE624 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C0123D20 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     DwmAsyncNotifyWallpaperChange @ 0x1C0123DD0 (DwmAsyncNotifyWallpaperChange.c)
 *     ?SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z @ 0x1C0123E4C (-SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C0123F08 (LoadWallpaperFilenameFromRegistry.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall xxxSetDeskWallpaper(__int64 a1, char *a2)
{
  int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 CurrentProcess; // rax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  void *v14; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD v20[4]; // [rsp+30h] [rbp-248h] BYREF
  int v21; // [rsp+50h] [rbp-228h] BYREF
  char v22[524]; // [rsp+54h] [rbp-224h] BYREF

  memset(v22, 0, 0x200uLL);
  v4 = 0;
  v21 = 1;
  if ( g_pWallpaperSettings )
    RtlStringCchCopyW(v22, 256LL, (char *)(g_pWallpaperSettings + 4LL));
  else
    LoadWallpaperFilenameFromRegistry(a1, v22, 256LL);
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    LoadWallpaperFilenameFromRegistry(a1, v22, 256LL);
  }
  else if ( a2 != (char *)-2LL )
  {
    RtlStringCchCopyW(v22, 256LL, a2);
  }
  v7 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v7 )
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 168LL);
  else
    v8 = 0LL;
  if ( (PsGetCurrentProcess(gptiCurrent, v5, v6) == gpepCSRSS
     || (CurrentProcess = PsGetCurrentProcess(gpepCSRSS, v9, v10), (unsigned int)PsIsProtectedProcess(CurrentProcess)))
    && v8 )
  {
    v20[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v20[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v20;
    v20[1] = v8;
    HMLockObject(v8);
    v12 = xxxSendNotifyMessage(v8, 0x34u, 5uLL, 0LL, 1);
    ThreadUnlock1(v18, v17, v19);
  }
  else
  {
    v4 = 1;
    v12 = SetGlobalWallpaperSettings((const struct tagWALLPAPERSETTINGS *)&v21);
  }
  if ( v12 && v4 )
  {
    if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
    {
      v14 = (void *)ReferenceDwmApiPort(v13);
      DwmAsyncNotifyWallpaperChange(v14);
    }
    xxxNotifyShellOfWallpaperChange();
  }
  return v12;
}
