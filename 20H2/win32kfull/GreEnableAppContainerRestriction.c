/*
 * XREFs of GreEnableAppContainerRestriction @ 0x1C0273058
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C00A6200 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     xxxSoundSentry @ 0x1C0152300 (xxxSoundSentry.c)
 *     xxxSnapWindow @ 0x1C015527C (xxxSnapWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GreEnableAppContainerRestriction(int a1)
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( result )
    *(_DWORD *)(result + 328) = *(_DWORD *)(result + 328) & 0xFFFFFFF7 | (a1 == 0 ? 8 : 0);
  return result;
}
