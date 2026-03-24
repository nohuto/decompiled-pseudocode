/*
 * XREFs of ?LPMStop@LPMDisplayCtrl@@QEAAJXZ @ 0x1C027611C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C011665C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DxgkLPMDisplayControl@@YAJPEAU_D3DKMT_LPM_DISPLAY_CONTROL@@@Z @ 0x1C0275830 (-DxgkLPMDisplayControl@@YAJPEAU_D3DKMT_LPM_DISPLAY_CONTROL@@@Z.c)
 *     ?LPMDisplayCleanupGlobal@@YAXXZ @ 0x1C0275DF8 (-LPMDisplayCleanupGlobal@@YAXXZ.c)
 *     ?LPMSetTTMDisplayPowerState@@YAJW4_TERMINAL_DISPLAY_STATE@@@Z @ 0x1C0275FC0 (-LPMSetTTMDisplayPowerState@@YAJW4_TERMINAL_DISPLAY_STATE@@@Z.c)
 * Callees:
 *     ?CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z @ 0x1C0275658 (-CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z.c)
 */

__int64 __fastcall LPMDisplayCtrl::LPMStop(PFILE_OBJECT *FileObject)
{
  _OWORD InputBuffer[2]; // [rsp+40h] [rbp-28h] BYREF
  int v4; // [rsp+70h] [rbp+8h] BYREF
  int v5; // [rsp+78h] [rbp+10h] BYREF

  if ( !*((_DWORD *)FileObject + 8) )
    return 3221225659LL;
  v4 = 0;
  memset(InputBuffer, 0, sizeof(InputBuffer));
  LPMDisplayCtrl::CallDriver(FileObject, 0x83212010, InputBuffer, 0x20u, &v4, 4u, 0LL);
  v5 = 0;
  LPMDisplayCtrl::CallDriver(FileObject, 0x83212018, &v5, 4u, 0LL, 0, 0LL);
  *((_DWORD *)FileObject + 9) = 0;
  qword_1C00B31A8 = 0LL;
  return 0LL;
}
