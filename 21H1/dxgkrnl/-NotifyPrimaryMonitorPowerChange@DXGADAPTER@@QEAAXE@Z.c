/*
 * XREFs of ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x1C0035EE0
 * Callers:
 *     ?PowerSettingCallback@DXGADAPTER@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1C020A2B0 (-PowerSettingCallback@DXGADAPTER@@SAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C0037D54 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0037EA4 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0038624 (McTemplateK0pq_EtwWriteTransfer.c)
 */

void __fastcall DXGADAPTER::NotifyPrimaryMonitorPowerChange(KSPIN_LOCK *this, char a2)
{
  char *v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  bool v7; // zf
  DXGADAPTER *v8; // rbx
  DXGADAPTER *v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  char *v12; // [rsp+38h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF
  char v14; // [rsp+58h] [rbp-10h]

  v2 = (char *)(this + 405);
  v14 = 0;
  v12 = (char *)(this + 405);
  KeAcquireInStackQueuedSpinLock(this + 405, &LockHandle);
  v7 = bTracingEnabled == 0;
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v14 = 1;
  *((_BYTE *)this + 3218) = a2;
  if ( !v7 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    McTemplateK0pq_EtwWriteTransfer(v5, &Dxgk_PrimaryMonitorPowerChange, v6, this, a2 != 0);
  this[383] = (KSPIN_LOCK)this + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFD0uLL) + 3016;
  DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)this);
  if ( this[348] )
  {
    v8 = (DXGADAPTER *)this[412];
    while ( v8 != (DXGADAPTER *)(this + 412) )
    {
      v9 = v8;
      v10 = *((int *)v8 - 10);
      v8 = *(DXGADAPTER **)v8;
      v11 = *(_QWORD *)(this[383] + 16 * v10);
      if ( v11 != *((_QWORD *)v9 - 7) )
        DXGADAPTER::SetPowerComponentLatencyCB((DXGADAPTER *)this, *((_DWORD *)v9 - 105), v11);
    }
  }
  if ( v14 )
  {
    v14 = 0;
    *((_QWORD *)v12 + 1) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
