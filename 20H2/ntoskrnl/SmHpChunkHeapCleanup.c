/*
 * XREFs of SmHpChunkHeapCleanup @ 0x14025D84C
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x14025CFD4 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14025D574 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     SmHpBufferCleanup @ 0x14036CC50 (SmHpBufferCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall SmHpChunkHeapCleanup(__int64 a1)
{
  unsigned int v1; // edi
  __int64 i; // rbx
  __int64 v3; // rdi
  __int64 v4; // rcx
  _QWORD *v5; // rdx

  v1 = 1;
  for ( i = a1; v1 < *(_DWORD *)(i + 256); ++v1 )
  {
    _BitScanReverse((unsigned int *)&v4, v1);
    v5 = (_QWORD *)(*(_QWORD *)(i + 8 * v4) + 16 * (v1 ^ (unsigned __int64)(unsigned int)(1 << v4)));
    if ( *v5 )
      SmHpBufferCleanup(i, v5);
  }
  v3 = 32LL;
  do
  {
    if ( *(_QWORD *)i )
      ExFreePoolWithTag(*(PVOID *)i, 0);
    i += 8LL;
    --v3;
  }
  while ( v3 );
}
