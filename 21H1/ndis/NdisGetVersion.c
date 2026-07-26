/*
 * XREFs of NdisGetVersion @ 0x1C0032370
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C012BDB8 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001918C (WPP_RECORDER_SF_d.c)
 */

UINT NdisGetVersion(void)
{
  int v1; // [rsp+28h] [rbp-10h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v1 = 393300;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_c4716b819868398b6e02b217b574dae0_Traceguids,
      v1);
  }
  return 393300;
}
