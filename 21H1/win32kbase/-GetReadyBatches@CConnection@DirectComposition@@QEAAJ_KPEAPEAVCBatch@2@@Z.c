/*
 * XREFs of ?GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z @ 0x1C01D5E54
 * Callers:
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C01D5C94 (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?GetNewBatches@CConnection@DirectComposition@@QEAAXPEAPEAVCBatch@2@@Z @ 0x1C0007648 (-GetNewBatches@CConnection@DirectComposition@@QEAAXPEAPEAVCBatch@2@@Z.c)
 *     ?GetDeferredBatches@CConnection@DirectComposition@@AEAA_N_KPEAPEAVCBatch@2@1@Z @ 0x1C01D5D9C (-GetDeferredBatches@CConnection@DirectComposition@@AEAA_N_KPEAPEAVCBatch@2@1@Z.c)
 *     ?KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z @ 0x1C01D5EEC (-KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::GetReadyBatches(
        DirectComposition::CConnection *this,
        unsigned __int64 a2,
        struct DirectComposition::CBatch **a3)
{
  unsigned int v3; // ebx
  struct DirectComposition::CBatch *v8; // [rsp+40h] [rbp+8h] BYREF
  struct DirectComposition::CBatch *v9; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  *a3 = 0LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 2, 0) )
  {
    return (unsigned int)-1073740024;
  }
  else
  {
    DirectComposition::CConnection::GetNewBatches((union _SLIST_HEADER *)this, a3);
    v9 = 0LL;
    v8 = 0LL;
    if ( DirectComposition::CConnection::GetDeferredBatches(this, (LARGE_INTEGER)a2, &v9, &v8) )
    {
      *(_QWORD *)v8 = *a3;
      *a3 = v9;
    }
    DirectComposition::CConnection::KeepOrDeferBatches(this, a2, a3);
  }
  return v3;
}
