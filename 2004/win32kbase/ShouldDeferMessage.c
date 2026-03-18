/*
 * XREFs of ShouldDeferMessage @ 0x1C0029080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ShouldDeferMessage(int a1, __int64 a2)
{
  int v2; // r9d
  unsigned int v3; // r8d

  v2 = *(_DWORD *)(a2 + 24);
  v3 = 0;
  if ( ((a1 - 1) & 0xFFFFFFFD) == 0 && (unsigned int)(v2 - 256) <= 9
    || (unsigned int)(a1 - 1) <= 2
    && ((unsigned int)(v2 - 512) <= 0xE || (unsigned int)(v2 - 160) <= 0xD || *(_DWORD *)(a2 + 96) == 4) )
  {
    return 1;
  }
  return v3;
}
