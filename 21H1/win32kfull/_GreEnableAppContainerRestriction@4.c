/*
 * XREFs of _GreEnableAppContainerRestriction@4 @ 0x1D12C8
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YGXPAX@Z @ 0x5EBA0 (-NtGdiFlushUserBatchInternal@@YGXPAX@Z.c)
 *     _xxxSoundSentry@0 @ 0x1782B3 (_xxxSoundSentry@0.c)
 *     _xxxSnapWindow@8 @ 0x1A20A2 (_xxxSnapWindow@8.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

unsigned int __thiscall GreEnableAppContainerRestriction(void *this)
{
  PKTHREAD CurrentThread; // eax
  unsigned int result; // eax
  unsigned int v4; // ecx

  CurrentThread = KeGetCurrentThread();
  result = W32GetThreadWin32Thread(CurrentThread);
  v4 = result;
  if ( result )
  {
    result = *(_DWORD *)(result + 180) & 0xFFFFFFF7;
    *(_DWORD *)(v4 + 180) = result | (this != 0 ? 0 : 8);
  }
  return result;
}
