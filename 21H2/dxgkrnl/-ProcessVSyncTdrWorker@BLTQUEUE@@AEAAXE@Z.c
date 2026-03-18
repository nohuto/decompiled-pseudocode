/*
 * XREFs of ?ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z @ 0x1C03BDE68
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C01CE5C0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C03BC05C (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C03BF2E0 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 */

void __fastcall BLTQUEUE::ProcessVSyncTdrWorker(struct _KTHREAD **this, char a2)
{
  struct _KTHREAD *v4; // rcx
  unsigned int v5; // r8d
  int v6; // r9d
  __int64 v7; // rdx

  BLTQUEUE::DisableHwVSyncWorker(this);
  v4 = *this;
  v5 = 0;
  v6 = *((_DWORD *)this + 64);
  if ( *(_DWORD *)*this )
  {
    do
    {
      if ( v5 != v6 )
      {
        v7 = *((_QWORD *)v4 + 1) + 2920LL * v5;
        if ( *(_QWORD *)(v7 + 608) )
          _InterlockedIncrement((volatile signed __int32 *)(v7 + 580));
      }
      ++v5;
    }
    while ( v5 < *(_DWORD *)v4 );
    v4 = *this;
  }
  DXGDODPRESENT::TriggerDisplayOnlyTdr(
    v4,
    8 - (unsigned int)(a2 != 0),
    *((unsigned int *)this + 64),
    10000000LL * (unsigned int)dword_1C0130C04);
}
