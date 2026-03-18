/*
 * XREFs of ?StopVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z @ 0x1C03BF230
 * Callers:
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C01CE464 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C01CE5C0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C03BC05C (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?DisableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C03BC100 (-DisableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C03BE150 (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0tt_EtwWriteTransfer @ 0x1C002EBB8 (McTemplateK0tt_EtwWriteTransfer.c)
 */

void __fastcall BLTQUEUE::StopVSync(__int64 a1, int a2, __int64 a3)
{
  struct _KTHREAD **v5; // rdx
  __int64 v6; // [rsp+20h] [rbp-38h]
  _BYTE v7[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+40h] [rbp-18h]

  if ( (*(_DWORD *)(a1 + 952) & 2) != 0 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v6) = a3;
      McTemplateK0tt_EtwWriteTransfer(a1, &EventBltQueueVsyncStop, a3, *(_DWORD *)(a1 + 136), v6);
    }
    v5 = 0LL;
    if ( !a2 )
      v5 = (struct _KTHREAD **)(a1 + 408);
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, v5, 0);
    if ( !a2 )
    {
      DXGPUSHLOCK::AcquireExclusive(v8);
      v9 = 2;
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 128) + 40LL))(*(_QWORD *)(a1 + 128));
    *(_DWORD *)(a1 + 952) &= ~2u;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
  }
}
