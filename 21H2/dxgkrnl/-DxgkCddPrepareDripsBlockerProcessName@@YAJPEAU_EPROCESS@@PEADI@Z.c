/*
 * XREFs of ?DxgkCddPrepareDripsBlockerProcessName@@YAJPEAU_EPROCESS@@PEADI@Z @ 0x1C02DC440
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z @ 0x1C02FEAA4 (-PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z.c)
 */

__int64 __fastcall DxgkCddPrepareDripsBlockerProcessName(struct _EPROCESS *a1, char *a2, unsigned int a3)
{
  struct DXGGLOBAL *Global; // rax
  DripsBlockerTrackingHelper *v7; // rcx
  unsigned int v8; // ebx
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF

  Global = DXGGLOBAL_GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (struct DXGGLOBAL *)((char *)Global + 2160), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v8 = DripsBlockerTrackingHelper::PrepareDripsBlockerProcessName(v7, 0LL, a1, a2, a3, 0LL);
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  return v8;
}
