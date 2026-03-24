/*
 * XREFs of FopValidateFontNameTable @ 0x140A96228
 * Callers:
 *     FopInitializeFonts @ 0x140A95F14 (FopInitializeFonts.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14039C584 (BgpFwAllocateMemory.c)
 *     FioFwReadBytesAtOffset @ 0x1403B35FC (FioFwReadBytesAtOffset.c)
 *     FopReadNamingTable @ 0x140A96730 (FopReadNamingTable.c)
 *     FopGetTableOffsetAndSize @ 0x140A968C8 (FopGetTableOffsetAndSize.c)
 */

__int64 __fastcall FopValidateFontNameTable(__int64 a1, int a2, __int64 *a3)
{
  __int64 v4; // rsi
  int TableOffsetAndSize; // edi
  unsigned int v7; // r15d
  int v8; // eax
  __int64 i; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9
  __int64 v12; // rbp
  __int64 v13; // rbx
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned __int64 v16; // rcx
  void *Memory; // rax
  __int64 v18; // rcx
  int v20; // [rsp+30h] [rbp-38h] BYREF
  __int64 v21; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v22; // [rsp+88h] [rbp+20h] BYREF

  v22 = 0;
  v21 = 0LL;
  v20 = 0;
  v4 = 0LL;
  TableOffsetAndSize = FopGetTableOffsetAndSize(a1, a2, 1851878757, (unsigned int)&v22, (__int64)&v20);
  if ( TableOffsetAndSize < 0 )
    return (unsigned int)TableOffsetAndSize;
  v7 = v22;
  v8 = FopReadNamingTable(a1, v22, &v21);
  v12 = v21;
  TableOffsetAndSize = v8;
  if ( v8 >= 0 )
  {
    v13 = v21 + 6;
    v14 = 0;
    if ( !*(_WORD *)(v21 + 2) )
    {
LABEL_18:
      TableOffsetAndSize = -1073741701;
      goto LABEL_13;
    }
    v10 = 1LL;
    while ( 1 )
    {
      if ( *(_DWORD *)v13 == 65539 )
      {
        i = 1033LL;
        if ( *(_DWORD *)(v13 + 4) == 66569 )
          break;
      }
      ++v14;
      v13 += 12LL;
      if ( v14 >= *(unsigned __int16 *)(v21 + 2) )
        goto LABEL_18;
    }
    v15 = *(unsigned __int16 *)(v13 + 8);
    v16 = v15 + 2;
    if ( (unsigned int)v16 < v15 )
    {
      TableOffsetAndSize = -1073741675;
    }
    else
    {
      Memory = (void *)BgpFwAllocateMemory(v16);
      v4 = (__int64)Memory;
      if ( Memory )
      {
        TableOffsetAndSize = FioFwReadBytesAtOffset(
                               a1,
                               v7 + *(unsigned __int16 *)(v12 + 4) + *(unsigned __int16 *)(v13 + 10),
                               *(unsigned __int16 *)(v13 + 8),
                               Memory);
        if ( TableOffsetAndSize < 0 )
          goto LABEL_21;
        *(_WORD *)(v13 + 8) >>= 1;
        for ( i = 0LL;
              (unsigned int)i < *(unsigned __int16 *)(v13 + 8);
              *(_WORD *)(v4 + 2 * v18) = __ROR2__(*(_WORD *)(v4 + 2 * v18), 8) )
        {
          v18 = (unsigned int)i;
          i = (unsigned int)(i + 1);
        }
        *(_WORD *)(v4 + 2LL * (unsigned int)i) = 0;
        *a3 = v4;
LABEL_13:
        if ( TableOffsetAndSize >= 0 )
          goto LABEL_14;
LABEL_21:
        if ( v4 )
          BgpFwFreeMemory(v4, i, v10, v11);
        goto LABEL_14;
      }
      TableOffsetAndSize = -1073741801;
    }
  }
LABEL_14:
  if ( v12 )
    BgpFwFreeMemory(v12, i, v10, v11);
  return (unsigned int)TableOffsetAndSize;
}
