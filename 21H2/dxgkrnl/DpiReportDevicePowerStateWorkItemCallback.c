/*
 * XREFs of DpiReportDevicePowerStateWorkItemCallback @ 0x1C03879A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x1C02FAAA0 (-AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ.c)
 */

void __fastcall DpiReportDevicePowerStateWorkItemCallback(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  int v4; // esi
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v6; // rbx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (int)Context;
  Global = DXGGLOBAL_GetGlobal();
  v6 = Global;
  if ( *((_DWORD *)Global + 538) && *((_BYTE *)Global + 304408) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (struct DXGGLOBAL *)((char *)Global + 2160), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
    if ( v4 == 4 )
    {
      DripsBlockerTrackingHelper::AddD0LagTimeToLastActiveEntry((struct DXGGLOBAL *)((char *)v6 + 2328));
      *((_BYTE *)v6 + 304457) = 1;
    }
    if ( v7[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
  }
  IoFreeWorkItem(IoWorkItem);
}
