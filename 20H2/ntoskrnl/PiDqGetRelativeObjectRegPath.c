/*
 * XREFs of PiDqGetRelativeObjectRegPath @ 0x1406D3C74
 * Callers:
 *     PiDqOpenUserObjectRegKey @ 0x1406D39C0 (PiDqOpenUserObjectRegKey.c)
 *     PiDqDeleteUserObject @ 0x140729E58 (PiDqDeleteUserObject.c)
 * Callees:
 *     _CmGetCommonClassRegKeyPath @ 0x140640800 (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDeviceRegKeyPath @ 0x14066DBCC (_CmGetDeviceRegKeyPath.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1406E721C (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1406EAFD8 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x14097AEC0 (_CmGetDevicePanelRegKeyPath.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqGetRelativeObjectRegPath(__int64 a1, int a2, PVOID *a3)
{
  wchar_t *pszDest; // rax
  __int64 v7; // rcx
  int v8; // r9d
  int v9; // ebx
  NTSTATUS DeviceRegKeyPath; // eax
  unsigned int v11; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  __int16 v17; // r8
  int v18; // [rsp+20h] [rbp-28h]
  size_t cchDest; // [rsp+30h] [rbp-18h]

  pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x800uLL, 0x58706E50u);
  *a3 = pszDest;
  if ( !pszDest )
  {
    v11 = -1073741670;
    goto LABEL_13;
  }
  v9 = a2 - 1;
  if ( !v9 )
  {
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetDeviceRegKeyPath(PiPnpRtlCtx, a1, 16, 0, 0, pszDest, cchDest, 0LL);
    goto LABEL_4;
  }
  v13 = v9 - 1;
  if ( !v13 )
  {
    v17 = 32;
    goto LABEL_20;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(v7, a1, 48, 0, v18, (__int64)pszDest, cchDest, 0LL);
    goto LABEL_4;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v17 = 64;
LABEL_20:
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetCommonClassRegKeyPath(v7, a1, v17, 0, v18, pszDest, cchDest, 0LL);
LABEL_4:
    v11 = DeviceRegKeyPath;
    if ( DeviceRegKeyPath >= 0 )
      return v11;
    goto LABEL_13;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetDeviceContainerRegKeyPath(v7, a1, 80, v8, v18, pszDest, cchDest, 0LL);
    goto LABEL_4;
  }
  if ( v16 == 1 )
  {
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetDevicePanelRegKeyPath(v7, a1, 96, v8, v18, pszDest, cchDest, 0LL);
    goto LABEL_4;
  }
  v11 = -1073741811;
LABEL_13:
  if ( *a3 )
  {
    ExFreePoolWithTag(*a3, 0x58706E50u);
    *a3 = 0LL;
  }
  return v11;
}
