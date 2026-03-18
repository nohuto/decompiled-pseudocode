/*
 * XREFs of ValidateDDEConvPair @ 0x1C021D530
 * Callers:
 *     _PostTransformableMessageIL @ 0x1C0037730 (_PostTransformableMessageIL.c)
 *     NtUserPostMessage @ 0x1C0093530 (NtUserPostMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     _PostMessageCheckIL @ 0x1C01E2D08 (_PostMessageCheckIL.c)
 * Callees:
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C021B698 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 */

_BOOL8 __fastcall ValidateDDEConvPair(__int64 a1, struct tagWND *a2)
{
  struct tagWND *v3; // rax

  v3 = (struct tagWND *)ValidateHwnd(a1);
  return v3 && FindDdeConv(v3, a2);
}
