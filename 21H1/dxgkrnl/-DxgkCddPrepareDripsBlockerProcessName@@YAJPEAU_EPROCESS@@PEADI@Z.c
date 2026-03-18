/*
 * XREFs of ?DxgkCddPrepareDripsBlockerProcessName@@YAJPEAU_EPROCESS@@PEADI@Z @ 0x1C0229070
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z @ 0x1C02BEFC0 (-PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z.c)
 */

__int64 __fastcall DxgkCddPrepareDripsBlockerProcessName(struct _EPROCESS *a1, char *a2, unsigned int a3)
{
  struct DXGGLOBAL *Global; // rax
  DripsBlockerTrackingHelper *v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // ebx
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGGLOBAL *)((char *)Global + 1864), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v9 = DripsBlockerTrackingHelper::PrepareDripsBlockerProcessName(v7, 0LL, a1, a2, a3, 0LL);
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11, v8);
  return v9;
}
