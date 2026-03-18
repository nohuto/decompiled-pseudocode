/*
 * XREFs of ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0162E58
 * Callers:
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x1C013136C (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z.c)
 *     ?AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z @ 0x1C0133998 (-AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C0009CB8 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00187D4 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x1C020D6EC (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 */

bool __fastcall CCD_TOPOLOGY::IsVirtualSlate(CCD_TOPOLOGY *this, struct _LUID *a2)
{
  bool v3; // bl
  struct DXGADAPTER *v4; // rdi
  __int64 v5; // rdx
  struct DXGADAPTER *v7[2]; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v8; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+40h] [rbp-B8h]
  _BYTE v10[144]; // [rsp+50h] [rbp-A8h] BYREF

  v3 = 0;
  v7[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v7, a2 + 2);
  v4 = v7[0];
  if ( v7[0] )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v10, v7[0], 0LL);
    v9 = 0LL;
    v8 = 0LL;
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v10, 0LL) >= 0
      && (*((_DWORD *)v4 + 87) & 0x40000) != 0
      && (int)DXGADAPTER::GetVirtualMonitorInfo(v4, a2[3].HighPart, (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)&v8) >= 0 )
    {
      v3 = DWORD1(v8) == 2;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v10, v5);
  }
  DXGADAPTER_REFERENCE::Assign(v7, 0LL);
  return v3;
}
