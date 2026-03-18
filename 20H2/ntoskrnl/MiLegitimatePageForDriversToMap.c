/*
 * XREFs of MiLegitimatePageForDriversToMap @ 0x14034EB38
 * Callers:
 *     MiSetProbePagesAhead @ 0x14034E904 (MiSetProbePagesAhead.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403C7ED0 (MmMapLockedPagesWithReservedMapping.c)
 *     MmRotatePhysicalView @ 0x14065CA40 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140767510 (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403F536C (MiGetPfnPageSizeIndexUnsynchronized.c)
 */

__int64 __fastcall MiLegitimatePageForDriversToMap(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  bool v3; // zf
  unsigned __int64 v5; // rdx
  char v6; // dl
  int v7; // [rsp+38h] [rbp+10h] BYREF
  int v8; // [rsp+40h] [rbp+18h] BYREF

  if ( !(unsigned int)MI_PFN_IS_PROTO(a1) )
  {
    v2 = *(_QWORD *)(v1 + 40);
    if ( (v2 & 0x1000000000LL) != 0 )
    {
      v7 = 0;
      v8 = 0;
      if ( (unsigned int)MiGetPfnPageSizeIndexUnsynchronized(v1, &v7, &v8) == 3 )
        return 3221225496LL;
      v3 = v7 == 6;
    }
    else
    {
      v5 = (__int64)(*(_QWORD *)(v1 + 8) << 25) >> 16;
      if ( v5 < 0xFFFFF68000000000uLL )
        return 0LL;
      if ( v5 > 0xFFFFF6FFFFFFFFFFuLL )
        return 0LL;
      if ( (v2 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
        return 0LL;
      v6 = *(_BYTE *)(v1 + 34);
      if ( (v6 & 0x20) != 0 && (*(_QWORD *)(v1 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 && *(_WORD *)(v1 + 32) )
        return 0LL;
      if ( (v6 & 8) != 0 )
        return 0LL;
      v3 = ((*(_QWORD *)v1 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL) == 0xFFFF800000000030uLL;
    }
    if ( !v3 )
      return 3221225496LL;
  }
  return 0LL;
}
