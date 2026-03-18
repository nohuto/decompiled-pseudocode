/*
 * XREFs of ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0165168
 * Callers:
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x1C01AB444 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z.c)
 *     ?AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z @ 0x1C01AEEC0 (-AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C000F25C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x1C02BBB60 (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 */

bool __fastcall CCD_TOPOLOGY::IsVirtualSlate(CCD_TOPOLOGY *this, struct _LUID *a2)
{
  bool v3; // bl
  struct DXGADAPTER *v4; // rdi
  struct DXGADAPTER *v6[2]; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v7; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v8; // [rsp+40h] [rbp-B8h]
  _BYTE v9[144]; // [rsp+50h] [rbp-A8h] BYREF

  v3 = 0;
  v6[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v6, a2 + 2);
  v4 = v6[0];
  if ( v6[0] )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v9, v6[0], 0LL);
    v8 = 0LL;
    v7 = 0LL;
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v9, 0LL) >= 0
      && (*((_DWORD *)v4 + 109) & 0x40000) != 0
      && (int)DXGADAPTER::GetVirtualMonitorInfo(v4, a2[3].HighPart, (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)&v7) >= 0 )
    {
      v3 = DWORD1(v7) == 2;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v9);
  }
  DXGADAPTER_REFERENCE::Assign(v6, 0LL);
  return v3;
}
