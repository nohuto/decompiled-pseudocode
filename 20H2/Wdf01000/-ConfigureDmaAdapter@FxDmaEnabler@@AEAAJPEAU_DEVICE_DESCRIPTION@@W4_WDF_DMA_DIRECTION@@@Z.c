/*
 * XREFs of ?ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0031154
 * Callers:
 *     ?ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CONFIG@@@Z @ 0x1C0030FC0 (-ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CON.c)
 *     ?ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C003119C (-ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECT.c)
 * Callees:
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002EB20 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?InitializeResources@FxDmaEnabler@@AEAAJPEAU_FxDmaDescription@@@Z @ 0x1C0031998 (-InitializeResources@FxDmaEnabler@@AEAAJPEAU_FxDmaDescription@@@Z.c)
 */

int __fastcall FxDmaEnabler::ConfigureDmaAdapter(
        FxDmaEnabler *this,
        _DEVICE_DESCRIPTION *DeviceDescription,
        _WDF_DMA_DIRECTION ConfigDirection)
{
  $AA61F120FE94696E7B3472FF8202EE19 *DmaDescription; // rax
  _OWORD *v4; // r9
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  FxDmaEnabler *v8; // rcx

  DmaDescription = FxDmaEnabler::GetDmaDescription(this, ConfigDirection);
  v5 = v4[1];
  *(_OWORD *)&DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version = *v4;
  v6 = v4[2];
  *(_OWORD *)&DmaDescription->m_DuplexAdapterInfo[0].DeviceDescription.DmaChannel = v5;
  v7 = v4[3];
  *(_OWORD *)&DmaDescription->m_DuplexAdapterInfo[0].DeviceDescription.MaximumLength = v6;
  *(_OWORD *)&DmaDescription->m_DuplexAdapterInfo[0].DeviceDescription.DmaRequestLine = v7;
  return FxDmaEnabler::InitializeResources(v8, &DmaDescription->m_SimplexAdapterInfo);
}
