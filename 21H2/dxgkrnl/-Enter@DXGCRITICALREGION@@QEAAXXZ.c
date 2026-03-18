/*
 * XREFs of ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0026DF0
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0203930 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02BCC18 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C02BCEF0 (-PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02BDA44 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02C3330 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall DXGCRITICALREGION::Enter(DXGCRITICALREGION *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d

  if ( *((_BYTE *)this + 1) )
  {
    WdLogSingleEntry1(1LL, 679LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(v3, v2, v4, 0, 2, -1, (__int64)L"!m_Entered", 679LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  KeEnterCriticalRegion();
  *((_BYTE *)this + 1) = 1;
}
