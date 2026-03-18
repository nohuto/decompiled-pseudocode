/*
 * XREFs of ?IsWindowComposedOnDesktop@@YGHQAUtagWND@@QAUtagDESKTOP@@@Z @ 0xCF190
 * Callers:
 *     _zzzDecomposeDesktop@8 @ 0xCF042 (_zzzDecomposeDesktop@8.c)
 *     _zzzComposeDesktop@4 @ 0xE0A14 (_zzzComposeDesktop@4.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall IsWindowComposedOnDesktop(int a1, int a2)
{
  int v2; // eax
  int v3; // esi

  v2 = *(_DWORD *)(a1 + 12);
  v3 = 0;
  if ( v2 && v2 == a2 )
    return (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 144) & 0x20) != 0;
  return v3;
}
