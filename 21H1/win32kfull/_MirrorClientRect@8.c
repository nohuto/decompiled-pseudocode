/*
 * XREFs of _MirrorClientRect@8 @ 0x1B6E50
 * Callers:
 *     _xxxScrollWindowEx@32 @ 0x2B61E (_xxxScrollWindowEx@32.c)
 *     _xxxRedrawWindow@16 @ 0x3332A (_xxxRedrawWindow@16.c)
 *     _xxxGetUpdateRect@12 @ 0xA5AFE (_xxxGetUpdateRect@12.c)
 * Callees:
 *     <none>
 */

int __fastcall MirrorClientRect(int a1, int *a2)
{
  int v2; // eax
  int v3; // esi
  int result; // eax

  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 76) - *(_DWORD *)(*(_DWORD *)(a1 + 20) + 68);
  v3 = v2 - *a2;
  result = v2 - a2[2];
  a2[2] = v3;
  *a2 = result;
  return result;
}
