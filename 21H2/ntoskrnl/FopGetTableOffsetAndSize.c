/*
 * XREFs of FopGetTableOffsetAndSize @ 0x140A978C8
 * Callers:
 *     FopInitializeFonts @ 0x140A96F14 (FopInitializeFonts.c)
 *     FopValidateFontNameTable @ 0x140A97228 (FopValidateFontNameTable.c)
 *     BgpRasInitializeRasterizer @ 0x140A97518 (BgpRasInitializeRasterizer.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x1403B376C (FioFwReadBytesAtOffset.c)
 */

__int64 __fastcall FopGetTableOffsetAndSize(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned __int32 *a4,
        unsigned __int32 *a5)
{
  int v9; // r8d
  unsigned __int16 v10; // ax
  unsigned int v11; // ebx
  unsigned int v12; // esi
  unsigned int v13; // edi
  int v14; // eax
  unsigned __int32 v15; // ecx
  unsigned __int32 v16; // edx
  unsigned __int32 v17; // r9d
  __int64 v19; // [rsp+20h] [rbp-20h] BYREF
  int v20; // [rsp+28h] [rbp-18h]
  __int128 v21; // [rsp+30h] [rbp-10h] BYREF

  v19 = 0LL;
  v20 = 0;
  v21 = 0LL;
  v9 = FioFwReadBytesAtOffset(a1, a2, 0xCu, &v19);
  if ( v9 < 0 )
  {
    v10 = WORD2(v19);
  }
  else
  {
    if ( _byteswap_ulong(v19) != 0x10000 )
      return (unsigned int)-1073741637;
    v10 = __ROR2__(WORD2(v19), 8);
    v9 = 0;
  }
  if ( v9 >= 0 )
  {
    v11 = 0;
    v12 = v10;
    v13 = a2 + 12;
    if ( v10 )
    {
      while ( 1 )
      {
        v14 = FioFwReadBytesAtOffset(a1, v13, 0x10u, &v21);
        v15 = HIDWORD(v21);
        v9 = v14;
        v16 = DWORD2(v21);
        v17 = v21;
        if ( v14 >= 0 )
        {
          v9 = 0;
          v17 = _byteswap_ulong(v21);
          v16 = _byteswap_ulong(DWORD2(v21));
          v15 = _byteswap_ulong(HIDWORD(v21));
          *(_QWORD *)&v21 = __PAIR64__(_byteswap_ulong(DWORD1(v21)), v17);
          *((_QWORD *)&v21 + 1) = __PAIR64__(v15, v16);
        }
        if ( v9 < 0 )
          break;
        if ( v17 == a3 )
        {
          *a4 = v16;
          *a5 = v15;
          return (unsigned int)v9;
        }
        ++v11;
        v13 += 16;
        if ( v11 >= v12 )
          return (unsigned int)-1073741275;
      }
    }
    else
    {
      return (unsigned int)-1073741275;
    }
  }
  return (unsigned int)v9;
}
