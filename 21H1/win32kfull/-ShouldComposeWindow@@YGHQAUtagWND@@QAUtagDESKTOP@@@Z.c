/*
 * XREFs of ?ShouldComposeWindow@@YGHQAUtagWND@@QAUtagDESKTOP@@@Z @ 0xE0D4A
 * Callers:
 *     _zzzComposeDesktop@4 @ 0xE0A14 (_zzzComposeDesktop@4.c)
 * Callees:
 *     _IsWindowBeingDestroyed@4 @ 0x1F28E (_IsWindowBeingDestroyed@4.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _IsDesktopWindow@4 @ 0x72F74 (_IsDesktopWindow@4.c)
 */

int __fastcall ShouldComposeWindow(_DWORD *a1, int a2)
{
  int v3; // edi
  int v4; // eax

  v3 = 0;
  v4 = a1[3];
  if ( v4
    && v4 == a2
    && !IsWindowBeingDestroyed(a1)
    && (*(_BYTE *)(a1[5] + 23) & 0x10) != 0
    && (_IsTopLevelWindow(a1) || IsDesktopWindow(a1)) )
  {
    return 1;
  }
  return v3;
}
