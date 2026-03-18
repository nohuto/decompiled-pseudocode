/*
 * XREFs of MiInitializeSystemVa @ 0x140B071D0
 * Callers:
 *     MmInitSystem @ 0x140B07AB0 (MmInitSystem.c)
 * Callees:
 *     MiAssignSoftwareWsleRegion @ 0x1403C3A30 (MiAssignSoftwareWsleRegion.c)
 *     MiRebaseDynamicRelocationRegions @ 0x140B06C7C (MiRebaseDynamicRelocationRegions.c)
 *     MiAssignTopLevelRanges @ 0x140B0728C (MiAssignTopLevelRanges.c)
 *     MiInitializeTopLevelBitmap @ 0x140B07614 (MiInitializeTopLevelBitmap.c)
 *     MiSetSystemRegionTypes @ 0x140B077D4 (MiSetSystemRegionTypes.c)
 */

__int64 __fastcall MiInitializeSystemVa(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // ebx
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 8) != 0 )
    MiFlags |= 0x100000u;
  v6 = 0LL;
  v2 = 16;
  v3 = 8;
  while ( 1 )
  {
    result = MiInitializeTopLevelBitmap();
    if ( !(_DWORD)result )
      return result;
    result = MiAssignTopLevelRanges(v2, &v6, 0xC8000000000LL);
    if ( (_DWORD)result )
      goto LABEL_8;
    if ( v3 )
    {
      --v3;
    }
    else
    {
      v3 = 8;
LABEL_8:
      if ( v2 == 1 )
      {
        if ( (_DWORD)result )
        {
LABEL_10:
          v5 = v6;
          if ( !v6 )
            v5 = 0xFFFFF78000000000uLL;
          MiAssignSoftwareWsleRegion(a1, v5);
          MiSetSystemRegionTypes();
          return MiRebaseDynamicRelocationRegions(a1);
        }
        if ( !(_DWORD)dword_140C52AB8 )
          LODWORD(dword_140C52AB8) = 5;
        return result;
      }
      v2 >>= 1;
      if ( (_DWORD)result )
        goto LABEL_10;
    }
  }
}
