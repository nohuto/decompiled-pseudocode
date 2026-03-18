/*
 * XREFs of _IS_USERCRIT_OWNED_SHAREDONLY@0 @ 0x4159E
 * Callers:
 *     _SfnINOUTLPWINDOWPOS@32 @ 0x411EA (_SfnINOUTLPWINDOWPOS@32.c)
 *     _SfnINLPWINDOWPOS@32 @ 0x43456 (_SfnINLPWINDOWPOS@32.c)
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 *     _SfnINLPCREATESTRUCT@32 @ 0x448FE (_SfnINLPCREATESTRUCT@32.c)
 *     _SfnINLPUAHDRAWMENUITEM@32 @ 0xB8FCA (_SfnINLPUAHDRAWMENUITEM@32.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall IS_USERCRIT_OWNED_SHAREDONLY()
{
  return !ExIsResourceAcquiredExclusiveLite(_gpresUser) && ExIsResourceAcquiredSharedLite(_gpresUser);
}
