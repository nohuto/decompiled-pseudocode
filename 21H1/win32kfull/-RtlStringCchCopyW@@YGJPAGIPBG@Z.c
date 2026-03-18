/*
 * XREFs of ?RtlStringCchCopyW@@YGJPAGIPBG@Z @ 0x48774
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     __FindWindowEx@20 @ 0x2D034 (__FindWindowEx@20.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     __UnregisterClass@12 @ 0x47C72 (__UnregisterClass@12.c)
 *     _NtUserFindExistingCursorIcon@12 @ 0x48504 (_NtUserFindExistingCursorIcon@12.c)
 *     ?_SetCursorIconData@@YG_NPAUtagCURSOR@@PAU_UNICODE_STRING@@1PAUtagCURSORDATA@@K@Z @ 0x775F8 (-_SetCursorIconData@@YG_NPAUtagCURSOR@@PAU_UNICODE_STRING@@1PAUtagCURSORDATA@@K@Z.c)
 *     __GetClassInfoEx@20 @ 0x8052E (__GetClassInfoEx@20.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YGJPAXPBGPAGK@Z @ 0x9CF2E (-ReadPointerDeviceCfgStringSetting@@YGJPAXPBGPAGK@Z.c)
 *     _NtUserGetDManipHookInitFunction@8 @ 0xAD6D6 (_NtUserGetDManipHookInitFunction@8.c)
 *     _NtUserShutdownBlockReasonQuery@12 @ 0xD31E4 (_NtUserShutdownBlockReasonQuery@12.c)
 *     _NtUserShutdownBlockReasonCreate@12 @ 0xD33A8 (_NtUserShutdownBlockReasonCreate@12.c)
 *     __RegisterDManipHook@0 @ 0xE43A6 (__RegisterDManipHook@0.c)
 *     _xxxSetDeskWallpaper@8 @ 0xE631C (_xxxSetDeskWallpaper@8.c)
 *     _LoadWallpaperFilenameFromRegistry@12 @ 0xE6574 (_LoadWallpaperFilenameFromRegistry@12.c)
 *     __RegisterUserApiHook@16 @ 0xEABF4 (__RegisterUserApiHook@16.c)
 *     ?SetHighContrastWorker@@YGHPAUtagINTERNALSETHIGHCONTRAST@@HPAH@Z @ 0x14544F (-SetHighContrastWorker@@YGHPAUtagINTERNALSETHIGHCONTRAST@@HPAH@Z.c)
 *     __GetWOWClass@8 @ 0x15463B (__GetWOWClass@8.c)
 *     _UserGetHipDeviceInfo@4 @ 0x159610 (_UserGetHipDeviceInfo@4.c)
 *     __SetDisplayMapping@8 @ 0x159C18 (__SetDisplayMapping@8.c)
 *     ?GetDefaultWallpaperName@@YGXPAGI@Z @ 0x1850CC (-GetDefaultWallpaperName@@YGXPAGI@Z.c)
 *     _xxxSendShutdownData@8 @ 0x194F33 (_xxxSendShutdownData@8.c)
 *     ?UmfdEscEngGetFilePath@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1FCD05 (-UmfdEscEngGetFilePath@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?cjGetLogicalColorSpace@@YGHPAXH0@Z @ 0x21BD9C (-cjGetLogicalColorSpace@@YGHPAXH0@Z.c)
 * Callees:
 *     <none>
 */

int __userpurge RtlStringCchCopyW@<eax>(
        int a1@<edx>,
        char *a2@<ecx>,
        unsigned __int16 *a3,
        unsigned int a4,
        const unsigned __int16 *a5)
{
  int v5; // esi
  int v6; // esi
  int v7; // edi
  int v8; // edx
  __int16 v9; // ax

  v5 = 0;
  if ( a1 <= 0 )
    v5 = -1073741811;
  if ( v5 < 0 )
  {
    if ( !a1 )
      return v5;
  }
  else
  {
    v6 = a1;
    if ( !a1 )
      goto LABEL_13;
    v7 = 2147483646 - a1;
    v8 = (char *)a3 - a2;
    do
    {
      if ( !(v7 + v6) )
        break;
      v9 = *(_WORD *)&a2[v8];
      if ( !v9 )
        break;
      *(_WORD *)a2 = v9;
      a2 += 2;
      --v6;
    }
    while ( v6 );
    if ( !v6 )
LABEL_13:
      a2 -= 2;
    v5 = v6 != 0 ? 0 : -2147483643;
  }
  *(_WORD *)a2 = 0;
  return v5;
}
