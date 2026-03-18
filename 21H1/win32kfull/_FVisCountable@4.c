/*
 * XREFs of _FVisCountable@4 @ 0x1CD18
 * Callers:
 *     _zzzSetWindowCompositionCloak@12 @ 0x1C5F8 (_zzzSetWindowCompositionCloak@12.c)
 *     _IncVisWindows@4 @ 0x1CB86 (_IncVisWindows@4.c)
 *     _DecVisWindows@4 @ 0x1CC58 (_DecVisWindows@4.c)
 * Callees:
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 */

BOOL __stdcall FVisCountable(int a1)
{
  int v1; // esi

  v1 = *(_DWORD *)(a1 + 20);
  return *(char *)(v1 + 11) >= 0
      && ((*(_WORD *)(v1 + 30) & 0x3FFF) == 0x29D || _IsTopLevelWindow(a1) && (*(_BYTE *)(v1 + 23) & 0x20) == 0);
}
