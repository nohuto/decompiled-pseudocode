/*
 * XREFs of ?ScrutinizeFontLoad@@YGJW4_W32KFontSourceType@@PBG@Z @ 0xE89BA
 * Callers:
 *     ?bCreateSectionFromHandle@@YGHPAXPBGPAU_FILEVIEW@@HPAHE@Z @ 0x8C790 (-bCreateSectionFromHandle@@YGHPAXPBGPAU_FILEVIEW@@HPAHE@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QAEHPAVPDEVOBJ@@@Z @ 0x1D08B0 (-bLoadFonts@DEVICE_PFTOBJ@@QAEHPAVPDEVOBJ@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QAEHAAVXDCOBJ@@PAPAU_FONTFILEVIEW@@IPAUtagDESIGNVECTOR@@PAU_UNIVERSAL_FONT_ID@@PAH@Z @ 0x1D0A09 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QAEHAAVXDCOBJ@@PAPAU_FONTFILEVIEW@@IPAUtagDESIGNVECTOR@@PAU_UNI.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QAEPAXPAPAU_FONTFILEVIEW@@PAUtagDESIGNVECTOR@@KPAKPAH@Z @ 0x1D0D40 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QAEPAXPAPAU_FONTFILEVIEW@@PAUtagDESIGNVECTOR@@KPAKPAH@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SG_NXZ @ 0x8B79C (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SG_NXZ.c)
 *     ?EnsureTls@UmfdTls@@SGPAV1@XZ @ 0x8BCF4 (-EnsureTls@UmfdTls@@SGPAV1@XZ.c)
 *     ?LogFontLoadAttempt@@YGXPAXW4_W32KFontSourceType@@PBGH@Z @ 0x1D0476 (-LogFontLoadAttempt@@YGXPAXW4_W32KFontSourceType@@PBGH@Z.c)
 */

NTSTATUS __fastcall ScrutinizeFontLoad(int a1, char *a2)
{
  struct UmfdTls *v4; // eax
  int v5; // eax
  struct _KTHREAD *CurrentThread; // eax
  PEPROCESS ThreadProcess; // eax
  NTSTATUS result; // eax
  NTSTATUS v9; // edi
  int ProcessInformation; // [esp+Ch] [ebp-Ch] BYREF
  int v11; // [esp+10h] [ebp-8h]
  void *Handle; // [esp+14h] [ebp-4h] BYREF

  ProcessInformation = 9;
  Handle = 0;
  v11 = 0;
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock()
    && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
  {
    v4 = UmfdTls::EnsureTls();
    if ( !v4 )
      return -1073741801;
    v5 = *((_DWORD *)v4 + 3);
    if ( !v5 )
      return -1073741801;
    CurrentThread = *(struct _KTHREAD **)(v5 + 8);
    if ( !CurrentThread )
      return -1073741801;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
  }
  ThreadProcess = PsGetThreadProcess(CurrentThread);
  result = ObOpenObjectByPointer(ThreadProcess, 0x200u, 0, 0x400u, (POBJECT_TYPE)PsProcessType, 0, &Handle);
  if ( result >= 0 )
  {
    v9 = ZwQueryInformationProcess(Handle, ProcessCookie|ProcessUserModeIOPL, &ProcessInformation, 8u, 0);
    if ( v9 >= 0 )
    {
      if ( (v11 & 1) != 0 )
      {
        if ( !a2 )
          a2 = byte_FC318;
        LogFontLoadAttempt(Handle, a1, a2, 1);
        v9 = -1073741790;
      }
      else if ( (v11 & 2) != 0 )
      {
        if ( !a2 )
          a2 = byte_FC318;
        LogFontLoadAttempt(Handle, a1, a2, 0);
      }
    }
    ZwClose(Handle);
    return v9;
  }
  return result;
}
