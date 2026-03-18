/*
 * XREFs of ?SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C0026BA8
 * Callers:
 *     DxgkSetPowerComponentResidencyCB @ 0x1C004C1B0 (DxgkSetPowerComponentResidencyCB.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C0200238 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x1C00453AC (McTemplateK0pqx_EtwWriteTransfer.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentResidencyCB(DXGADAPTER *this, unsigned int a2, __int64 a3)
{
  unsigned int v5; // edi

  if ( *((_BYTE *)this + 3337) )
  {
    v5 = (unsigned __int16)a2 + *((unsigned __int16 *)this + ((unsigned __int64)a2 >> 16) + 1456);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0pqx_EtwWriteTransfer(
          (_DWORD)this,
          (unsigned int)&Dxgk_SetPowerComponentResidencyCB,
          a3,
          (_DWORD)this,
          v5,
          a3);
    }
    *(_QWORD *)(520LL * v5 + *((_QWORD *)this + 362) + 376) = a3;
    PoFxSetComponentResidency(*((_QWORD *)this + 363), v5, a3);
  }
}
