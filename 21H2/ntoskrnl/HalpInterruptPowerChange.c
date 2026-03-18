/*
 * XREFs of HalpInterruptPowerChange @ 0x14051DF24
 * Callers:
 *     HalpInterruptPowerComponentActiveCallback @ 0x14051DFC0 (HalpInterruptPowerComponentActiveCallback.c)
 *     HalpInterruptPowerComponentIdleCallback @ 0x14051DFE0 (HalpInterruptPowerComponentIdleCallback.c)
 *     HalpInterruptPowerCriticalTransitionCallback @ 0x14051E020 (HalpInterruptPowerCriticalTransitionCallback.c)
 * Callees:
 *     HalpInterruptRestoreController @ 0x140396364 (HalpInterruptRestoreController.c)
 *     HalpInterruptInitializeController @ 0x1403AE924 (HalpInterruptInitializeController.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpInterruptPowerChange(ULONG_PTR BugCheckParameter3, char a2)
{
  int v2; // eax
  __int64 result; // rax
  int v5; // eax

  v2 = *(_DWORD *)(BugCheckParameter3 + 232);
  if ( a2 )
  {
    result = v2 & 0xFFFFFFFB;
    *(_DWORD *)(BugCheckParameter3 + 232) = result;
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
    *(_DWORD *)(BugCheckParameter3 + 232) = result;
  }
  return result;
}
