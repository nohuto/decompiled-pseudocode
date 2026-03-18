/*
 * XREFs of NtUserMNDragLeave @ 0x1C01FF230
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0222234 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     UnlockMFMWFPWindow @ 0x1C023797C (UnlockMFMWFPWindow.c)
 *     xxxMNSetGapState @ 0x1C024AEB4 (xxxMNSetGapState.c)
 */

__int64 NtUserMNDragLeave()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx

  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  v3 = gptiCurrent;
  v4 = *(_QWORD *)(gptiCurrent + 600LL);
  if ( v4 )
  {
    v5 = *(unsigned int *)(v4 + 92);
    v6 = *(unsigned int *)(v4 + 88);
    v7 = *(_QWORD *)(v4 + 80);
    ++*(_DWORD *)(v4 + 40);
    xxxMNSetGapState(v7, v6, v5, 0LL);
    UnlockMFMWFPWindow(v4 + 80);
    *(_DWORD *)(v4 + 88) = -1;
    *(_DWORD *)(v4 + 8) &= ~0x8000u;
    *(_DWORD *)(v4 + 92) = 0;
    xxxUnlockMenuStateInternal((struct tagMENUSTATE *)v4, 1);
    v2 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v3, v0, v1);
  return v2;
}
