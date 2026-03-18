/*
 * XREFs of ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C02B579C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0113134 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     NtDxgkVailDisconnect @ 0x1C02B7900 (NtDxgkVailDisconnect.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C02B46E0 (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailGuestDisconnect(DXGSESSIONDATA *this)
{
  __int64 v2; // rdx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (DXGSESSIONDATA *)((char *)this + 18880), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  if ( *((_QWORD *)this + 2366) )
    DXGSESSIONDATA::ReleaseVailGuestReference(this);
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4, v2);
  return 0LL;
}
