/*
 * XREFs of MiInitializeSystemVa @ 0x140A50300
 * Callers:
 *     MmInitSystem @ 0x140A54D6C (MmInitSystem.c)
 * Callees:
 *     MiAssignSoftwareWsleRegion @ 0x1403B72D0 (MiAssignSoftwareWsleRegion.c)
 *     MiRebaseDynamicRelocationRegions @ 0x140A50400 (MiRebaseDynamicRelocationRegions.c)
 *     MiConvertAssignedRegionToVaType @ 0x140A51824 (MiConvertAssignedRegionToVaType.c)
 *     MiAssignTopLevelRanges @ 0x140A518A8 (MiAssignTopLevelRanges.c)
 *     MiInitializeTopLevelBitmap @ 0x140A51CF0 (MiInitializeTopLevelBitmap.c)
 */

__int64 __fastcall MiInitializeSystemVa(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // ebx
  int v4; // eax
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  __int64 *v7; // r9
  char v8; // al
  __int64 v9; // rdx
  int v10; // r8d
  _QWORD *v11; // r9
  unsigned __int64 v12; // r11
  __int64 i; // r10
  unsigned __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 8) != 0 )
    MiFlags |= 0x200000u;
  v15 = 0LL;
  v2 = 16;
  v3 = 8;
  do
  {
    while ( 1 )
    {
      MiInitializeTopLevelBitmap();
      v4 = MiAssignTopLevelRanges(v2, &v15);
      if ( v4 )
        goto LABEL_5;
      if ( !v3 )
        break;
      --v3;
    }
    v3 = 8;
LABEL_5:
    v2 >>= 1;
  }
  while ( !v4 );
  v5 = v15;
  if ( !v15 )
    v5 = 0xFFFFF78000000000uLL;
  MiAssignSoftwareWsleRegion(a1, v5);
  LODWORD(v6) = 0;
  v7 = qword_140C4FB10;
  do
  {
    v8 = MiConvertAssignedRegionToVaType((unsigned int)v6, (((unsigned __int64)*(v7 - 1) >> 39) & 0x1FF) - 256);
    for ( i = *v11 >> 39; i; --i )
    {
      *(_BYTE *)(v9 + v12 + 12552) = v8;
      v9 = (unsigned int)(v9 + 1);
    }
    v6 = (unsigned int)(v10 + 1);
    v7 = v11 + 2;
  }
  while ( (unsigned int)v6 < 0xD );
  *(_BYTE *)(((v12 >> 39) & 0x1FF) - 256 + v12 + 12552) = 12;
  return MiRebaseDynamicRelocationRegions(a1, v9, v6, v7);
}
