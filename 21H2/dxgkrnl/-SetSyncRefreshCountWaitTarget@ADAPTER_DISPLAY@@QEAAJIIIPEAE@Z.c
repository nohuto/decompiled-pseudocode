/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C02C2B20
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0178000 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     ?SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z @ 0x1C000A990 (-SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0046430 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1C006CF0C (-SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetSyncRefreshCountWaitTarget(
        ADAPTER_DISPLAY *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 *a5)
{
  unsigned int v5; // r14d
  char v6; // r12
  unsigned int v7; // ebx
  __int64 v8; // rbp
  __int64 v9; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v12; // r8

  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = (unsigned int)a2;
  v9 = *((_QWORD *)this + 16) + 4000LL * (unsigned int)a2;
  Current = DXGPROCESS::GetCurrent((__int64)this, a2, a3, a4);
  *a5 = 1;
  if ( !*(_QWORD *)(v9 + 928) || (*((_DWORD *)Current + 106) & 4) == 0 )
    return 3221225485LL;
  if ( *((_QWORD *)this + 56) )
  {
    *(_DWORD *)(v9 + 936) = v7;
    BLTQUEUE::SetDWMTargetVsync((BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)this + 56) + 8LL) + 2920 * v8), v7);
  }
  else
  {
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqqqq_EtwWriteTransfer(
          0LL,
          &EventDWMVsyncCountWait,
          v12,
          v7,
          *(_DWORD *)(v9 + 940),
          *(_BYTE *)(v9 + 944),
          v6,
          4);
    }
    ADAPTER_DISPLAY::SetSyncRefreshCountWaitTargetNonPaged(this, v5, v7, a5);
  }
  return 0LL;
}
