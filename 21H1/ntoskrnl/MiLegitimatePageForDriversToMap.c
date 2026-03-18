/*
 * XREFs of MiLegitimatePageForDriversToMap @ 0x1403476D4
 * Callers:
 *     MiSetProbePagesAhead @ 0x1403474A0 (MiSetProbePagesAhead.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403C4570 (MmMapLockedPagesWithReservedMapping.c)
 *     MmRotatePhysicalView @ 0x1406BD3F0 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140756C50 (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403EFAF8 (MiGetPfnPageSizeIndexUnsynchronized.c)
 */

__int64 __fastcall MiLegitimatePageForDriversToMap(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  bool v5; // zf
  unsigned __int64 v7; // rdx
  char v8; // dl
  int v9; // [rsp+38h] [rbp+10h] BYREF
  int v10; // [rsp+40h] [rbp+18h] BYREF

  if ( !(unsigned int)MI_PFN_IS_PROTO(a1, a2, a3) )
  {
    v4 = *(_QWORD *)(v3 + 40);
    if ( (v4 & 0x1000000000LL) != 0 )
    {
      v9 = 0;
      v10 = 0;
      if ( (unsigned int)MiGetPfnPageSizeIndexUnsynchronized(v3, &v9, &v10) == 3 )
        return 3221225496LL;
      v5 = v9 == 6;
    }
    else
    {
      v7 = (__int64)(*(_QWORD *)(v3 + 8) << 25) >> 16;
      if ( v7 < 0xFFFFF68000000000uLL )
        return 0LL;
      if ( v7 > 0xFFFFF6FFFFFFFFFFuLL )
        return 0LL;
      if ( (v4 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
        return 0LL;
      v8 = *(_BYTE *)(v3 + 34);
      if ( (v8 & 0x20) != 0 && (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 && *(_WORD *)(v3 + 32) )
        return 0LL;
      if ( (v8 & 8) != 0 )
        return 0LL;
      v5 = ((*(_QWORD *)v3 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) == 0xFFFF800000000030uLL;
    }
    if ( !v5 )
      return 3221225496LL;
  }
  return 0LL;
}
