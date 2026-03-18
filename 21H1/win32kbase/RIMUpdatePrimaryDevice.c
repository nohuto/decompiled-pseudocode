/*
 * XREFs of RIMUpdatePrimaryDevice @ 0x1C0168794
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0162A54 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMRemoveFromActiveDevices @ 0x1C0167FE0 (RIMRemoveFromActiveDevices.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C017FAE8 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C017FDEC (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     RIMGetPointerInputType @ 0x1C0167130 (RIMGetPointerInputType.c)
 *     ApiSetIsPointerInputTypeRedirected @ 0x1C01D1F4C (ApiSetIsPointerInputTypeRedirected.c)
 */

__int64 __fastcall RIMUpdatePrimaryDevice(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  unsigned int v5; // eax

  result = 0LL;
  v4 = *(_QWORD *)(a1 + 480);
  if ( v4 )
    *(_DWORD *)(v4 + 312) &= ~1u;
  if ( a2 )
  {
    *(_DWORD *)(a2 + 312) |= 1u;
    *(_QWORD *)(a1 + 480) = a2;
    v5 = RIMGetPointerInputType(a2);
    result = ApiSetIsPointerInputTypeRedirected(v5);
  }
  else
  {
    *(_QWORD *)(a1 + 480) = 0LL;
  }
  *(_DWORD *)(a1 + 488) = result;
  return result;
}
