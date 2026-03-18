/*
 * XREFs of WdfBindClientHelper @ 0x1C00284D4
 * Callers:
 *     LibraryRegisterClient @ 0x1C0028570 (LibraryRegisterClient.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WdfBindClientHelper(_WDF_BIND_INFO *BindInfo, unsigned int FxMajorVersion, __int64 FxMinorVersion)
{
  unsigned int Major; // eax
  unsigned int Size; // edx
  __int64 Minor; // rdx
  __int64 v8; // rdx
  unsigned int v9; // ecx

  Major = BindInfo->Version.Major;
  if ( Major != FxMajorVersion )
  {
    if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
      DbgPrint("Unsupported Major version %lu. Expect %lu\n", Major, FxMajorVersion);
    return 3221225485LL;
  }
  Size = BindInfo->Size;
  if ( BindInfo->Size == 48 )
  {
    Minor = BindInfo->Version.Minor;
    if ( (unsigned int)Minor <= (unsigned int)FxMinorVersion )
      return 0LL;
    if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
      goto LABEL_30;
  }
  else
  {
    if ( Size != 88 )
    {
      if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
        DbgPrint("Unrecognized bind info. Size is %lu\n", Size);
      return 3221225485LL;
    }
    v8 = BindInfo->Version.Minor;
    v9 = **(_DWORD **)&BindInfo[1].Size;
    if ( v9 > (unsigned int)v8 )
    {
      if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
        DbgPrint("Invalid bind info. Target version %lu, minimum required version %lu\n", v8, v9);
      return 3221225485LL;
    }
    if ( v9 > (unsigned int)FxMinorVersion )
    {
      if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
      {
        Minor = v9;
LABEL_30:
        DbgPrint("Unsupported Minor version %lu. Expect %lu or smaller\n", Minor, FxMinorVersion);
      }
    }
    else
    {
      *(_BYTE *)BindInfo[1].Component = (unsigned int)v8 > (unsigned int)FxMinorVersion;
      if ( (unsigned int)v8 > (unsigned int)FxMinorVersion )
      {
        if ( **(_DWORD **)&BindInfo[1].Version.Build >= WdfVersion.StructCount
          && BindInfo->FuncCount >= WdfVersion.FuncCount )
        {
          BindInfo->FuncCount = WdfVersion.FuncCount;
          **(_DWORD **)&BindInfo[1].Version.Major = WdfVersion.FuncCount;
          *BindInfo[1].FuncTable = (void (__fastcall *)())&WdfVersion.Structures;
          **(_DWORD **)&BindInfo[1].Version.Build = WdfVersion.StructCount;
          return 0LL;
        }
        if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
          DbgPrint(
            "Version mismatch detected when running on old framework\n"
            "function  count: client %lu, library %lu\n"
            "structure count: client %lu, library %lu\n",
            BindInfo->FuncCount,
            WdfVersion.FuncCount);
      }
      else
      {
        if ( (unsigned int)v8 >= (unsigned int)FxMinorVersion
          || **(_DWORD **)&BindInfo[1].Version.Build <= WdfVersion.StructCount
          && BindInfo->FuncCount <= WdfVersion.FuncCount )
        {
          return 0LL;
        }
        if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
          DbgPrint(
            "Version mismatch detected\n"
            "function  count: client %lu, library %lu\n"
            "structure count: client %lu, library %lu\n",
            BindInfo->FuncCount,
            WdfVersion.FuncCount);
      }
    }
  }
  return 3221225485LL;
}
