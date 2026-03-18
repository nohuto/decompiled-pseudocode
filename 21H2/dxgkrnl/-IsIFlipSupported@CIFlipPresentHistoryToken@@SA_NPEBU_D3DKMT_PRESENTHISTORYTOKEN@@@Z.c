/*
 * XREFs of ?IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0315B70
 * Callers:
 *     ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0382810 (-VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0006A48 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?IsFlipManagerIFlipFeatureEnabled@CIFlipPresentHistoryToken@@SA_NXZ @ 0x1C01D918C (-IsFlipManagerIFlipFeatureEnabled@CIFlipPresentHistoryToken@@SA_NXZ.c)
 */

char __fastcall CIFlipPresentHistoryToken::IsIFlipSupported(
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl
  UINT64 FenceValue; // rdi
  CPushLock *v7; // rsi
  __int64 v8; // rdi

  v4 = 0;
  if ( a1->Model == D3DKMT_PM_REDIRECTED_FLIP )
    return 1;
  if ( a1->Model == D3DKMT_PM_FLIPMANAGER )
  {
    if ( a1->Token.Flip.FenceValue )
    {
      if ( CIFlipPresentHistoryToken::IsFlipManagerIFlipFeatureEnabled((__int64)a1, a2, a3, a4) )
      {
        FenceValue = a1->Token.Flip.FenceValue;
        v7 = (CPushLock *)(FenceValue + 72);
        if ( (int)CPushLock::AcquireLockShared((CPushLock *)(FenceValue + 72)) >= 0 )
        {
          v8 = *(_QWORD *)(FenceValue + 96);
          CPushLock::ReleaseLock(v7);
          if ( v8 )
          {
            if ( *(_DWORD *)(v8 + 28) || *(_DWORD *)(v8 + 32) )
            {
              if ( *(_QWORD *)(v8 + 40) )
                return 1;
            }
          }
        }
      }
    }
  }
  return v4;
}
