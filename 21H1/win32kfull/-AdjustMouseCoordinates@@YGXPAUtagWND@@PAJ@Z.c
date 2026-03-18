/*
 * XREFs of ?AdjustMouseCoordinates@@YGXPAUtagWND@@PAJ@Z @ 0x19515D
 * Callers:
 *     _xxxHandleMenuMessages@12 @ 0x195390 (_xxxHandleMenuMessages@12.c)
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _PhysicalToLogicalInPlacePointWithParent@12 @ 0x15156E (_PhysicalToLogicalInPlacePointWithParent@12.c)
 */

void __fastcall AdjustMouseCoordinates(_DWORD *a1, __int16 *a2)
{
  int v4; // [esp+10h] [ebp-8h] BYREF
  int v5; // [esp+14h] [ebp-4h]

  if ( a1[30]
    && (*(_DWORD *)(a1[5] + 184) & 0xF) == 1
    && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2
    && *(_DWORD *)(_gptiCurrent + 416) == *(_DWORD *)(_gptiCurrent + 428)
    && *(_DWORD *)(_gptiCurrent + 420) == *(_DWORD *)(_gptiCurrent + 432) )
  {
    v4 = *a2;
    v5 = a2[1];
    PhysicalToLogicalInPlacePointWithParent(a1, &v4, 0);
    *(_DWORD *)a2 = (unsigned __int16)v4 | ((unsigned __int16)v5 << 16);
  }
}
