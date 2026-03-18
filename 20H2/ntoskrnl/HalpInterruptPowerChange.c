/*
 * XREFs of HalpInterruptPowerChange @ 0x1404CFFA4
 * Callers:
 *     HalpInterruptPowerComponentActiveCallback @ 0x1404D0040 (HalpInterruptPowerComponentActiveCallback.c)
 *     HalpInterruptPowerComponentIdleCallback @ 0x1404D0060 (HalpInterruptPowerComponentIdleCallback.c)
 *     HalpInterruptPowerCriticalTransitionCallback @ 0x1404D00A0 (HalpInterruptPowerCriticalTransitionCallback.c)
 * Callees:
 *     HalpInterruptRestoreController @ 0x14038AE60 (HalpInterruptRestoreController.c)
 *     HalpInterruptInitializeController @ 0x1403A2D98 (HalpInterruptInitializeController.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpInterruptPowerChange(ULONG_PTR BugCheckParameter3, char a2)
{
  int v2; // eax
  __int64 result; // rax
  int v5; // eax

  v2 = *(_DWORD *)(BugCheckParameter3 + 224);
  if ( a2 )
  {
    result = v2 & 0xFFFFFFFB;
    *(_DWORD *)(BugCheckParameter3 + 224) = result;
    if ( (result & 2) == 0 )
    {
      v5 = HalpInterruptInitializeController(BugCheckParameter3);
      if ( v5 < 0 )
        KeBugCheckEx(0x5Cu, 0x204uLL, HalpInterruptLastProblem, BugCheckParameter3, v5);
      result = HalpInterruptRestoreController(BugCheckParameter3, 0);
      if ( (int)result < 0 )
        KeBugCheckEx(0x5Cu, 0x204uLL, HalpInterruptLastProblem, BugCheckParameter3, (int)result);
    }
  }
  else
  {
    result = v2 & 0xFFFFFFFA | 4;
    *(_DWORD *)(BugCheckParameter3 + 224) = result;
  }
  return result;
}
