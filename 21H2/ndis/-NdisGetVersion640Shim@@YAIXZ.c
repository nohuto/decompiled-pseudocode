/*
 * XREFs of ?NdisGetVersion640Shim@@YAIXZ @ 0x1C008A5C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 */

__int64 NdisGetVersion640Shim(void)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xCu,
      (struct _GUID *)&WPP_443dfd5379723ab37e1c5fd2d81a735e_Traceguids);
  return 393256LL;
}
