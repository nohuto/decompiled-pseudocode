/*
 * XREFs of FopInitializeFonts @ 0x140A96F14
 * Callers:
 *     BgpFoInitialize @ 0x140A96E18 (BgpFoInitialize.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x14039C6D4 (BgpFwAllocateMemory.c)
 *     FioFwReadUlongAtOffset @ 0x1403B196C (FioFwReadUlongAtOffset.c)
 *     memset @ 0x140414300 (memset.c)
 *     FopFreeFontData @ 0x1409F5294 (FopFreeFontData.c)
 *     FopReadMappingTable @ 0x140A97050 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140A97228 (FopValidateFontNameTable.c)
 *     BgpRasInitializeRasterizer @ 0x140A97518 (BgpRasInitializeRasterizer.c)
 *     FopGetTableOffsetAndSize @ 0x140A978C8 (FopGetTableOffsetAndSize.c)
 */

__int64 __fastcall FopInitializeFonts(__int64 a1)
{
  int v1; // esi
  int v2; // ebp
  unsigned int i; // r14d
  _QWORD *Memory; // rax
  _QWORD *v6; // rbx
  unsigned int v7; // edx
  int v8; // eax
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0;
  if ( *(_DWORD *)(a1 + 24) )
  {
    for ( i = 12; ; i += 4 )
    {
      Memory = (_QWORD *)BgpFwAllocateMemory(0x80uLL);
      v6 = Memory;
      if ( Memory )
        break;
LABEL_11:
      if ( (unsigned int)++v2 >= *(_DWORD *)(a1 + 24) )
        return v1 == 0 ? 0xC000007B : 0;
    }
    memset(Memory, 0, 0x80uLL);
    v6[2] = a1;
    v7 = 0;
    v6[14] = v6 + 13;
    v6[13] = v6 + 13;
    *((_DWORD *)v6 + 10) = v2;
    v8 = *(_DWORD *)(a1 + 32);
    v12 = 0;
    if ( (v8 & 1) != 0 )
    {
      if ( (int)FioFwReadUlongAtOffset(*(_QWORD *)(a1 + 16), i, &v12) < 0 )
      {
LABEL_13:
        FopFreeFontData(v6);
        goto LABEL_11;
      }
      v7 = v12;
    }
    *((_DWORD *)v6 + 11) = v7;
    v9 = *(_QWORD *)(a1 + 16);
    v12 = 0;
    if ( (int)FopGetTableOffsetAndSize(v9, v7, 1668112752, (int)v6 + 48, (__int64)&v12) >= 0
      && (int)FopValidateFontNameTable(*(_QWORD *)(a1 + 16), *((unsigned int *)v6 + 11), v6 + 4) >= 0
      && (int)FopReadMappingTable(*(_QWORD *)(a1 + 16), *((unsigned int *)v6 + 12), v6 + 3) >= 0
      && (int)BgpRasInitializeRasterizer(v6) >= 0 )
    {
      v10 = *(_QWORD **)(a1 + 48);
      if ( *v10 != a1 + 40 )
        __fastfail(3u);
      *v6 = a1 + 40;
      ++v1;
      v6[1] = v10;
      *v10 = v6;
      *(_QWORD *)(a1 + 48) = v6;
      goto LABEL_11;
    }
    goto LABEL_13;
  }
  return v1 == 0 ? 0xC000007B : 0;
}
