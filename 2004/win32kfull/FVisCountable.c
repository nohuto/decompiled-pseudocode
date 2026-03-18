/*
 * XREFs of FVisCountable @ 0x1C0020A90
 * Callers:
 *     DecVisWindows @ 0x1C00205C0 (DecVisWindows.c)
 *     IncVisWindows @ 0x1C0020974 (IncVisWindows.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0022188 (zzzSetWindowCompositionCloak.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 */

_BOOL8 __fastcall FVisCountable(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r9

  v1 = *(_QWORD *)(a1 + 40);
  return *(char *)(v1 + 19) >= 0
      && ((*(_WORD *)(v1 + 42) & 0x3FFF) == 0x29D
       || (unsigned int)IsTopLevelWindow(a1) && (*(_BYTE *)(v2 + 31) & 0x20) == 0);
}
