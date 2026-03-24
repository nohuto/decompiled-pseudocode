/*
 * XREFs of ?QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C02FF018
 * Callers:
 *     ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C0256008 (-QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z.c)
 * Callees:
 *     ?UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z @ 0x1C005F314 (-UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall BLTQUEUE::QueryPresentStatsDWM(LARGE_INTEGER *this, struct _D3DKMT_PRESENT_STATS_DWM *a2)
{
  struct _KMUTANT *v2; // rbx
  UINT LowPart; // eax
  union _LARGE_INTEGER v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _KMUTANT *)&this[32];
  KeWaitForSingleObject(&this[32], Executive, 0, 0, 0LL);
  LowPart = this[39].LowPart;
  v7.QuadPart = 0LL;
  a2->PresentCount = LowPart;
  a2->PresentRefreshCount = this[39].HighPart;
  a2->SyncRefreshCount = this[40].LowPart;
  BLTQUEUE::UpdateVsyncCount((BLTQUEUE *)this, &v7);
  a2->PresentQPCTime.QuadPart = (__int64)(v7.QuadPart
                                        * a2->PresentRefreshCount
                                        * (unsigned __int64)(unsigned int)this[45].HighPart)
                              / this[45].LowPart;
  a2->SyncRefreshCount = this[55].LowPart;
  a2->SyncQPCTime = this[56];
  KeReleaseMutex(v2, 0);
  return 0LL;
}
