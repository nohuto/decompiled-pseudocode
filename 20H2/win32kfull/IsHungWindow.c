/*
 * XREFs of IsHungWindow @ 0x1C00CAEE0
 * Callers:
 *     ProcessHungWindow @ 0x1C000379C (ProcessHungWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C0003A30 (xxxRegisterGhostWindow.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00493A0 (xxxSimpleDoSyncPaint.c)
 *     NtUserQueryWindow @ 0x1C00C8330 (NtUserQueryWindow.c)
 *     xxxHungAppDemon @ 0x1C00CADB0 (xxxHungAppDemon.c)
 *     ShouldProcessHungWindow @ 0x1C011EBC0 (ShouldProcessHungWindow.c)
 *     EditionHandleHungWindow @ 0x1C0122B90 (EditionHandleHungWindow.c)
 *     NtUserSetWindowArrangement @ 0x1C02028C0 (NtUserSetWindowArrangement.c)
 *     xxxRedrawHungWindow @ 0x1C0240E74 (xxxRedrawHungWindow.c)
 *     ?xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z @ 0x1C02418A0 (-xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z.c)
 * Callees:
 *     IsPumpingInputMsgs @ 0x1C00CAF98 (IsPumpingInputMsgs.c)
 */

__int64 __fastcall IsHungWindow(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rax

  v1 = *(_QWORD **)(a1 + 16);
  v3 = 0;
  v4 = v1[56];
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *(_DWORD *)(v4 + 12) <= gdwHungAppTimeout
    || (*(_WORD *)(v4 + 10) & 0x1C07) != 0
    || (unsigned int)PsGetThreadFreezeCount(*v1)
    || (*(_DWORD *)(v1[53] + 12LL) & 0x40) != 0 )
  {
    if ( !(unsigned int)IsPumpingInputMsgs(a1) )
      return 1;
    return v3;
  }
  else
  {
    return 1;
  }
}
