/*
 * XREFs of ValidateDDEConvPair @ 0x1C021C6A0
 * Callers:
 *     _PostTransformableMessageIL @ 0x1C001A1A0 (_PostTransformableMessageIL.c)
 *     NtUserPostMessage @ 0x1C004F200 (NtUserPostMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     _PostMessageCheckIL @ 0x1C01E2048 (_PostMessageCheckIL.c)
 * Callees:
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C021A808 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 */

_BOOL8 __fastcall ValidateDDEConvPair(__int64 a1, struct tagWND *a2)
{
  struct tagWND *v3; // rax

  v3 = (struct tagWND *)ValidateHwnd(a1);
  return v3 && FindDdeConv(v3, a2);
}
