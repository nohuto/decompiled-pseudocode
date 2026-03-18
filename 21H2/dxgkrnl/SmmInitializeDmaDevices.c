/*
 * XREFs of SmmInitializeDmaDevices @ 0x1C01F5D4C
 * Callers:
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x1C01F5A3C (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUS.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1C0025FEC (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1C03C0184 (-SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z.c)
 */

__int64 __fastcall SmmInitializeDmaDevices(__int64 a1)
{
  unsigned int v2; // esi
  unsigned int i; // ebp
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rbp
  struct _IOMMU_DMA_DEVICE *v11; // rcx

  v2 = 0;
  if ( dword_1C0130A48 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 24); ++i )
    {
      v4 = (_QWORD *)(*(_QWORD *)(a1 + 360) + 16LL * i);
      if ( *v4 )
      {
        WdLogSingleEntry1(1LL, 228LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pPhysicalAdapter->DmaDevice == nullptr",
          228LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( SmmUseIommuV2Interface() )
      {
        v6 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD *))qword_1C0130AF0)(v5, 0LL, v4);
        v2 = v6;
        if ( v6 == -1073741275 )
        {
          WdLogSingleEntry1(4LL, a1);
          return 0LL;
        }
        if ( v6 < 0 )
        {
          WdLogSingleEntry1(3LL, v4[1]);
          if ( i )
          {
            v8 = 0LL;
            v9 = i;
            do
            {
              v10 = *(_QWORD *)(a1 + 360);
              v11 = *(struct _IOMMU_DMA_DEVICE **)(v8 + v10);
              if ( !v11 )
              {
                WdLogSingleEntry1(1LL, 262LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"pPhysicalAdapter->DmaDevice != nullptr",
                  262LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v11 = *(struct _IOMMU_DMA_DEVICE **)(v8 + v10);
              }
              SmmIommuDeleteDevice(v11);
              *(_QWORD *)(v8 + v10) = 0LL;
              v8 += 16LL;
              --v9;
            }
            while ( v9 );
          }
          return v2;
        }
      }
      else
      {
        *v4 = 0LL;
        v2 = 0;
      }
    }
    *(_DWORD *)(a1 + 20) |= 4u;
  }
  else
  {
    WdLogSingleEntry1(3LL, a1);
  }
  return v2;
}
