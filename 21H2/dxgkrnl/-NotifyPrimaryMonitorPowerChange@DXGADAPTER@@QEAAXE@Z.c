/*
 * XREFs of ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x1C0025DC4
 * Callers:
 *     ?PowerSettingCallback@DXGADAPTER@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1C01F47B0 (-PowerSettingCallback@DXGADAPTER@@SAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0008F10 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C000A3B0 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0044CF4 (McTemplateK0pt_EtwWriteTransfer.c)
 */

void __fastcall DXGADAPTER::NotifyPrimaryMonitorPowerChange(KSPIN_LOCK *this, char a2)
{
  char *v2; // rbx
  __int64 v5; // r8
  bool v6; // zf
  DXGADAPTER *v7; // rbx
  DXGADAPTER *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  char *v11; // [rsp+38h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF
  char v13; // [rsp+58h] [rbp-10h]

  v2 = (char *)(this + 420);
  v13 = 0;
  v11 = (char *)(this + 420);
  KeAcquireInStackQueuedSpinLock(this + 420, &LockHandle);
  v6 = bTracingEnabled == 0;
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v13 = 1;
  *((_BYTE *)this + 3338) = a2;
  if ( !v6 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0pt_EtwWriteTransfer(&DxgkControlGuid_Context, &Dxgk_PrimaryMonitorPowerChange, v5, this, a2 != 0);
  this[398] = (KSPIN_LOCK)this + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFD0uLL) + 3136;
  DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)this);
  if ( this[363] )
  {
    v7 = (DXGADAPTER *)this[427];
    while ( v7 != (DXGADAPTER *)(this + 427) )
    {
      v8 = v7;
      v9 = *((int *)v7 - 10);
      v7 = *(DXGADAPTER **)v7;
      v10 = *(_QWORD *)(this[398] + 16 * v9);
      if ( v10 != *((_QWORD *)v8 - 7) )
        DXGADAPTER::SetPowerComponentLatencyCB((DXGADAPTER *)this, *((_DWORD *)v8 - 105), v10);
    }
  }
  if ( v13 )
  {
    v13 = 0;
    *((_QWORD *)v11 + 1) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
