/*
 * XREFs of _LdrRelocateImageWithBias@28 @ 0x4B342836
 * Callers:
 *     _LdrpProtectAndRelocateImage@20 @ 0x4B3310B1 (_LdrpProtectAndRelocateImage@20.c)
 * Callees:
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _LdrProcessRelocationBlockLongLong@24 @ 0x4B3427A0 (_LdrProcessRelocationBlockLongLong@24.c)
 */

unsigned int __fastcall LdrRelocateImageWithBias(unsigned int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // esi
  _DWORD *v9; // edi
  int v10; // ecx
  __int16 v11; // ax
  _DWORD *v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // ecx
  int v16; // edx
  _DWORD *v18; // [esp+8h] [ebp-10h] BYREF
  int v19; // [esp+Ch] [ebp-Ch]
  unsigned int v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h] BYREF

  v7 = 0;
  v21 = 0;
  if ( RtlImageNtHeaderEx(1, a1, 0, 0, &v18) >= 0 )
  {
    v9 = v18;
    v10 = 267;
    v11 = *((_WORD *)v18 + 12);
    if ( v11 == 267 )
    {
      v20 = v18[13];
      v19 = 0;
    }
    else
    {
      v10 = 523;
      if ( v11 != 523 )
        return -1073741701;
      v20 = v18[12];
      v19 = v18[13];
    }
    v12 = RtlImageDirectoryEntryToData((void *)v10, a1, 1, 5, (int)&v21);
    v18 = v12;
    if ( !v12 )
      return (*((_BYTE *)v9 + 22) & 1) != 0 ? 0xC0000018 : 0;
    v13 = v21;
    if ( !v21 )
      return (*((_BYTE *)v9 + 22) & 1) != 0 ? 0xC0000018 : 0;
    v14 = (a1 - __PAIR64__(v19, v20)) >> 32;
    v20 = a1 - v20;
    v21 = v14;
    while ( 1 )
    {
      v15 = v12[1];
      v16 = *v12;
      v19 = v13 - v15;
      v12 = LdrProcessRelocationBlockLongLong(
              *((_WORD *)v9 + 2),
              a1 + v16,
              (unsigned int)(v15 - 8) >> 1,
              (unsigned __int16 *)v18 + 4,
              v20,
              v21);
      v18 = v12;
      if ( !v12 )
        break;
      v13 = v19;
      if ( !v19 )
        return v7;
    }
    return -1073741701;
  }
  return -1073741701;
}
