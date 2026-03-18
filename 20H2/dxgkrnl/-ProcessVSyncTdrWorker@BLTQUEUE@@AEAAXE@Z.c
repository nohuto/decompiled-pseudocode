/*
 * XREFs of ?ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z @ 0x1C02FDD40
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C0117194 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C02FC21C (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C02FEE14 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 */

void __fastcall BLTQUEUE::ProcessVSyncTdrWorker(struct _KTHREAD **this, char a2)
{
  struct _KTHREAD *v4; // r9
  unsigned int v5; // r8d
  int i; // edx
  __int64 v7; // rcx

  BLTQUEUE::DisableHwVSyncWorker(this);
  v4 = *this;
  v5 = 0;
  for ( i = *((_DWORD *)this + 62); v5 < *(_DWORD *)v4; ++v5 )
  {
    if ( v5 != i )
    {
      v7 = *((_QWORD *)v4 + 1) + 2904LL * v5;
      if ( *(_QWORD *)(v7 + 600) )
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 572));
    }
  }
  DXGDODPRESENT::TriggerDisplayOnlyTdr(
    *this,
    8 - (unsigned int)(a2 != 0),
    *((unsigned int *)this + 62),
    10000000LL * (unsigned int)dword_1C00B116C);
}
