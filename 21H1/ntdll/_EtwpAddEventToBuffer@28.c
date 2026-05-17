/*
 * XREFs of _EtwpAddEventToBuffer@28 @ 0x4B2EE106
 * Callers:
 *     _EtwpAddDebugInfoEvents@12 @ 0x4B2EDFF4 (_EtwpAddDebugInfoEvents@12.c)
 *     _EtwpAddBinaryInfoEvents@12 @ 0x4B38281F (_EtwpAddBinaryInfoEvents@12.c)
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall EtwpAddEventToBuffer(
        int a1,
        __int16 a2,
        _DWORD *a3,
        void *Src,
        size_t Size,
        unsigned int a6,
        _DWORD *a7)
{
  int v8; // edx

  *a7 = Size + 16;
  if ( a6 < Size + 16 )
    return -1073741789;
  v8 = a1 + *(_DWORD *)(a1 + 48);
  *(_WORD *)(v8 + 4) = Size + 16;
  *(_WORD *)(v8 + 6) = a2;
  *(_DWORD *)v8 = -1072693246;
  *(_DWORD *)(v8 + 8) = *a3;
  *(_DWORD *)(v8 + 12) = a3[1];
  memcpy((void *)(v8 + 16), Src, Size);
  *(_DWORD *)(a1 + 48) += (Size + 23) & 0xFFFFFFF8;
  return 0;
}
