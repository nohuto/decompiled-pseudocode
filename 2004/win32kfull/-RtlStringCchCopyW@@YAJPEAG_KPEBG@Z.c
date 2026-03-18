/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00AE624
 * Callers:
 *     _GetClassInfoEx @ 0x1C001E340 (_GetClassInfoEx.c)
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C006530C (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     NtUserFindExistingCursorIcon @ 0x1C00AE3E0 (NtUserFindExistingCursorIcon.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C011B2C0 (NtUserShutdownBlockReasonCreate.c)
 *     NtUserGetDManipHookInitFunction @ 0x1C011BEF0 (NtUserGetDManipHookInitFunction.c)
 *     _RegisterDManipHook @ 0x1C011C264 (_RegisterDManipHook.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C0121DD8 (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     xxxSetDeskWallpaper @ 0x1C0123BAC (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C0123F08 (LoadWallpaperFilenameFromRegistry.c)
 *     NtUserShutdownBlockReasonQuery @ 0x1C0124010 (NtUserShutdownBlockReasonQuery.c)
 *     _RegisterUserApiHook @ 0x1C0126348 (_RegisterUserApiHook.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D7318 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     _GetWOWClass @ 0x1C01E9704 (_GetWOWClass.c)
 *     UserGetHipDeviceInfo @ 0x1C01EF4A0 (UserGetHipDeviceInfo.c)
 *     _SetDisplayMapping @ 0x1C01EFC14 (_SetDisplayMapping.c)
 *     xxxSendShutdownData @ 0x1C0234298 (xxxSendShutdownData.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C029F21C (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1C02B650C (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyW(char *a1, __int64 a2, char *a3)
{
  signed int v3; // r9d
  __int64 v4; // r10
  signed __int64 v5; // r8
  unsigned __int16 v6; // ax
  unsigned __int16 *v7; // rax

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( a2 )
      *(_WORD *)a1 = 0;
  }
  else
  {
    if ( a2 )
    {
      v4 = 2147483646 - a2;
      v5 = a3 - a1;
      do
      {
        if ( !(v4 + a2) )
          break;
        v6 = *(_WORD *)&a1[v5];
        if ( !v6 )
          break;
        *(_WORD *)a1 = v6;
        a1 += 2;
        --a2;
      }
      while ( a2 );
    }
    v7 = (unsigned __int16 *)(a1 - 2);
    if ( a2 )
      v7 = (unsigned __int16 *)a1;
    v3 = a2 == 0 ? 0x80000005 : 0;
    *v7 = 0;
  }
  return (unsigned int)v3;
}
