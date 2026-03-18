/*
 * XREFs of ?DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z @ 0x1C003DC00
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C0037204 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003957C (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall DxgkPowerRuntimeComponentIdleCallback(DXGADAPTER *this, unsigned int a2, __int64 a3, __int64 a4)
{
  int v7; // [rsp+28h] [rbp-10h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
  {
    v7 = 0;
    McTemplateK0pqq_EtwWriteTransfer((__int64)this, &Dxgk_PowerRuntimeComponentActiveCallback, a3, this, a2, v7);
  }
  DXGADAPTER::PowerRuntimeComponentActiveCallback(this, a2, 0, a4);
  PoFxCompleteIdleCondition(*((_QWORD *)this + 351), a2);
}
