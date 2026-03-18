/*
 * XREFs of IsHungWindow @ 0x1C00E7D90
 * Callers:
 *     ProcessHungWindow @ 0x1C00038FC (ProcessHungWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C0003B90 (xxxRegisterGhostWindow.c)
 *     xxxSimpleDoSyncPaint @ 0x1C006CB10 (xxxSimpleDoSyncPaint.c)
 *     EditionHandleHungWindow @ 0x1C00E7740 (EditionHandleHungWindow.c)
 *     NtUserQueryWindow @ 0x1C00E7A90 (NtUserQueryWindow.c)
 *     xxxHungAppDemon @ 0x1C00E7C60 (xxxHungAppDemon.c)
 *     ShouldProcessHungWindow @ 0x1C00E82D8 (ShouldProcessHungWindow.c)
 *     NtUserSetWindowArrangement @ 0x1C0203730 (NtUserSetWindowArrangement.c)
 *     xxxRedrawHungWindow @ 0x1C0242114 (xxxRedrawHungWindow.c)
 *     ?xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z @ 0x1C0242B40 (-xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z.c)
 * Callees:
 *     IsPumpingInputMsgs @ 0x1C00E7E48 (IsPumpingInputMsgs.c)
 */

__int64 __fastcall IsHungWindow(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rax

  v1 = *(_QWORD **)(a1 + 16);
  v3 = 0;
  v4 = v1[55];
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *(_DWORD *)(v4 + 12) <= gdwHungAppTimeout
    || (*(_WORD *)(v4 + 10) & 0x1C07) != 0
    || (unsigned int)PsGetThreadFreezeCount(*v1)
    || (*(_DWORD *)(v1[52] + 12LL) & 0x40) != 0 )
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
