/*
 * XREFs of PiDqGetRelativeObjectRegPath @ 0x140699B5C
 * Callers:
 *     PiDqOpenUserObjectRegKey @ 0x1406998CC (PiDqOpenUserObjectRegKey.c)
 *     PiDqDeleteUserObject @ 0x14094A3E4 (PiDqDeleteUserObject.c)
 * Callees:
 *     _CmGetDeviceContainerRegKeyPath @ 0x14076D6D4 (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmGetDeviceRegKeyPath @ 0x14077F934 (_CmGetDeviceRegKeyPath.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x140781814 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1407871C4 (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x140A28CA4 (_CmGetDevicePanelRegKeyPath.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDqGetRelativeObjectRegPath(int a1, int a2, PVOID *a3)
{
  wchar_t *pszDest; // rax
  int v7; // ecx
  int v8; // r9d
  int v9; // ebx
  int DeviceRegKeyPath; // eax
  unsigned int v11; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // r8d
  int v18; // [rsp+20h] [rbp-28h]
  size_t cchDest; // [rsp+30h] [rbp-18h]

  pszDest = (wchar_t *)ExAllocatePool2(256LL, 2048LL, 1483763280LL);
  *a3 = pszDest;
  if ( !pszDest )
  {
    v11 = -1073741670;
    goto LABEL_12;
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
    goto LABEL_19;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(v7, a1, 48, 0, v18, (__int64)pszDest, cchDest, 0LL);
LABEL_4:
    v11 = DeviceRegKeyPath;
    if ( DeviceRegKeyPath >= 0 )
      return v11;
    goto LABEL_12;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v17 = 64;
LABEL_19:
    LODWORD(cchDest) = 1024;
    DeviceRegKeyPath = CmGetCommonClassRegKeyPath(v7, a1, v17, 0, v18, pszDest, cchDest, 0LL);
    goto LABEL_4;
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
LABEL_12:
  if ( *a3 )
  {
    ExFreePoolWithTag(*a3, 0x58706E50u);
    *a3 = 0LL;
  }
  return v11;
}
