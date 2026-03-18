/*
 * XREFs of ?DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z @ 0x1C0023DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C0023F5C (-PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0044D64 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall DxgkPowerRuntimeDevicePowerRequiredCallback(DXGADAPTER *this, __int64 a2, int a3)
{
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(
      (_DWORD)this,
      (unsigned int)&Dxgk_PowerRuntimeDevicePowerRequiredCallback,
      a3,
      (_DWORD)this,
      0,
      1);
  DXGADAPTER::PowerRuntimeDevicePowerRequiredCallback(this, 1u);
}
