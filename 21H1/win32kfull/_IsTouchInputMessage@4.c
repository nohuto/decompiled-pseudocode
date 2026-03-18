/*
 * XREFs of _IsTouchInputMessage@4 @ 0x46022
 * Callers:
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxSendMessageCallback@36 @ 0x46062 (_xxxSendMessageCallback@36.c)
 *     _fnHkINLPMSG@28 @ 0x6B870 (_fnHkINLPMSG@28.c)
 *     __PostThreadMessageEx@20 @ 0x82662 (__PostThreadMessageEx@20.c)
 *     ?CleanInputMessage@@YGXIPAUtagQMSG@@@Z @ 0xF0F02 (-CleanInputMessage@@YGXIPAUtagQMSG@@@Z.c)
 *     ?NtUserfnHkINLPMSG@@YGJHKIPAUtagMSG@@@Z @ 0x15F41A (-NtUserfnHkINLPMSG@@YGJHKIPAUtagMSG@@@Z.c)
 *     _NtUserfnTOUCH@28 @ 0x16D56B (_NtUserfnTOUCH@28.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsTouchInputMessage(void *this)
{
  return this == (void *)576;
}
