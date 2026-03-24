/*
 * XREFs of ?SwitchGdi@CTDR_GDI_RESET_THREAD@@IEAAJ_N@Z @ 0x1C0264720
 * Callers:
 *     ?Worker@CTDR_GDI_RESET_THREAD@@MEAAXXZ @ 0x1C02663D0 (-Worker@CTDR_GDI_RESET_THREAD@@MEAAXXZ.c)
 * Callees:
 *     ?GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C026446C (-GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 */

__int64 __fastcall CTDR_GDI_RESET_THREAD::SwitchGdi(CTDR_GDI_RESET_THREAD *this, unsigned __int8 a2, __int64 a3)
{
  struct _VIDEO_WIN32K_CALLBACKS_PARAMS v4; // [rsp+20h] [rbp-28h] BYREF

  v4.PhysDisp = 0LL;
  v4.Param = a2;
  *(_QWORD *)&v4.CalloutType = 10LL;
  *(_DWORD *)&v4.LockUserSession = 0;
  v4.Status = -1073741816;
  return CTDR_GDI_RESET_THREAD::GdiCalloutLoop(this, &v4, a3);
}
