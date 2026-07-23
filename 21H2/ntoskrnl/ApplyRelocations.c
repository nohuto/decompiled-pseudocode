/*
 * XREFs of ApplyRelocations @ 0x14020050C
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405D772C (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_140963F28 @ 0x140963F28 (sub_140963F28.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplyRelocations(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  signed int v7; // ebx
  unsigned int v8; // r11d
  int v9; // r10d
  __int64 v13; // r8
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // eax
  _DWORD *v19; // rcx
  _DWORD *v20; // rdx

  v7 = a2 - 1;
  v8 = a5 - a3;
  v9 = 0;
  while ( v7 >= v9 )
  {
    v13 = (v7 + v9) / 2;
    v15 = *(_DWORD *)(a1 + 4 * v13) & 0xFFFFFFF;
    if ( v8 >= v15 )
    {
      if ( v8 <= v15 )
        goto LABEL_3;
      v9 = v13 + 1;
    }
    else
    {
      v7 = v13 - 1;
    }
  }
  LODWORD(v13) = v9;
LABEL_3:
  while ( (unsigned int)v13 < a2 )
  {
    v16 = *(_DWORD *)(a1 + 4LL * (unsigned int)v13);
    if ( (v16 & 0xFFFFFFF) >= v8 + a7 )
      break;
    LODWORD(v13) = v13 + 1;
    v17 = v16 & 0xFFFFFFF;
    v18 = v16 >> 28;
    v19 = (_DWORD *)(a3 + v17);
    v20 = (_DWORD *)((char *)v19 + a6 - a5);
    if ( v18 )
    {
      if ( v18 == 3 )
      {
        *v20 = a4 + *v19;
      }
      else if ( v18 == 10 )
      {
        *(_QWORD *)v20 = a4 + *(_QWORD *)v19;
      }
    }
  }
  return 0LL;
}
