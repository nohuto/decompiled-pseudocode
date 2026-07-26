/*
 * XREFs of ?NdisGetVersion640Shim@@YAIXZ @ 0x1C0089D60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 */

__int64 NdisGetVersion640Shim(void)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xBu,
      (struct _GUID *)&WPP_3032f3299fb733a34b218ae5f4ebd155_Traceguids);
  return 393256LL;
}
