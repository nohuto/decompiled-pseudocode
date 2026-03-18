/*
 * XREFs of HUBPSM30_DisablingSuperSpeedOnPortOnDeviceRequest @ 0x1C0011970
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_SetLinkStateToSSDisabledUsingControlTransfer @ 0x1C00067CC (HUBHTX_SetLinkStateToSSDisabledUsingControlTransfer.c)
 *     HUBMISC_DetachDevice @ 0x1C002DE98 (HUBMISC_DetachDevice.c)
 */

__int64 __fastcall HUBPSM30_DisablingSuperSpeedOnPortOnDeviceRequest(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBMISC_DetachDevice(v1);
  HUBHTX_SetLinkStateToSSDisabledUsingControlTransfer(v1);
  return 1000LL;
}
