/*
 * XREFs of _EtwpAddEventToBuffer@28 @ 0x4B2EE106
 * Callers:
 *     _EtwpAddDebugInfoEvents@12 @ 0x4B2EDFF4 (_EtwpAddDebugInfoEvents@12.c)
 *     _EtwpAddBinaryInfoEvents@12 @ 0x4B38281F (_EtwpAddBinaryInfoEvents@12.c)
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall EtwpAddEventToBuffer(int a1, __int16 a2, _DWORD *a3, void *Src, size_t Size, _DWORD *a6)
{
  int v7; // edx
  size_t v9; // [esp-4h] [ebp-14h]

  *a6 = Size + 16;
  if ( HIDWORD(Size) < (unsigned int)(Size + 16) )
    return -1073741789;
  v7 = a1 + *(_DWORD *)(a1 + 48);
  LODWORD(v9) = Size;
  *(_WORD *)(v7 + 4) = Size + 16;
  *(_WORD *)(v7 + 6) = a2;
  *(_DWORD *)v7 = -1072693246;
  *(_DWORD *)(v7 + 8) = *a3;
  *(_DWORD *)(v7 + 12) = a3[1];
  memcpy((void *)(v7 + 16), Src, v9);
  *(_DWORD *)(a1 + 48) += (Size + 23) & 0xFFFFFFF8;
  return 0;
}
