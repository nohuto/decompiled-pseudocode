/*
 * XREFs of BgpFoInitialize @ 0x140A96E18
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1409F39E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BEB0 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14039C6D4 (BgpFwAllocateMemory.c)
 *     FioFwReadUlongAtOffset @ 0x1403B196C (FioFwReadUlongAtOffset.c)
 *     FopInitializeFonts @ 0x140A96F14 (FopInitializeFonts.c)
 */

__int64 __fastcall BgpFoInitialize(__int64 a1, int a2)
{
  __int64 Memory; // rax
  __int64 v5; // rbx
  int UlongAtOffset; // edi
  __int64 v7; // rax
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0;
  v10 = 0;
  if ( !FontLibraryInitialized )
  {
    qword_140C13468 = (__int64)&FopFontFileListHead;
    FopFontFileListHead = (__int64)&FopFontFileListHead;
    FontLibraryInitialized = 1;
  }
  Memory = BgpFwAllocateMemory(0x38uLL);
  v5 = Memory;
  if ( !Memory )
    return (unsigned int)-1073741801;
  *(_OWORD *)Memory = 0LL;
  *(_OWORD *)(Memory + 16) = 0LL;
  *(_OWORD *)(Memory + 32) = 0LL;
  *(_QWORD *)(Memory + 48) = 0LL;
  *(_QWORD *)(Memory + 48) = Memory + 40;
  *(_QWORD *)(Memory + 40) = Memory + 40;
  *(_QWORD *)(Memory + 16) = a1;
  *(_DWORD *)(Memory + 28) = a2;
  UlongAtOffset = FioFwReadUlongAtOffset(a1, 0LL, &v9);
  if ( UlongAtOffset < 0 )
    goto LABEL_11;
  if ( v9 == 1953784678 )
  {
    *(_DWORD *)(v5 + 32) |= 1u;
    UlongAtOffset = FioFwReadUlongAtOffset(a1, 4LL, &v10);
    if ( UlongAtOffset < 0 )
      goto LABEL_11;
    if ( ((v10 - 0x10000) & 0xFFFEFFFF) != 0 )
    {
      UlongAtOffset = -1073741701;
      goto LABEL_11;
    }
    UlongAtOffset = FioFwReadUlongAtOffset(a1, 8LL, (unsigned int *)(v5 + 24));
    if ( UlongAtOffset < 0 )
      goto LABEL_11;
  }
  else
  {
    *(_DWORD *)(v5 + 24) = 1;
  }
  UlongAtOffset = FopInitializeFonts(v5);
  if ( UlongAtOffset < 0 )
  {
LABEL_11:
    BgpFwFreeMemory(v5);
    return (unsigned int)UlongAtOffset;
  }
  v7 = FopFontFileListHead;
  if ( *(__int64 **)(FopFontFileListHead + 8) != &FopFontFileListHead )
    __fastfail(3u);
  *(_QWORD *)v5 = FopFontFileListHead;
  *(_QWORD *)(v5 + 8) = &FopFontFileListHead;
  *(_QWORD *)(v7 + 8) = v5;
  FopFontFileListHead = v5;
  return (unsigned int)UlongAtOffset;
}
