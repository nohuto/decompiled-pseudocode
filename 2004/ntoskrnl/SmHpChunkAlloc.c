/*
 * XREFs of SmHpChunkAlloc @ 0x140309644
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140307E58 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?StDmpDummyPageRecordAllocate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1403605C0 (-StDmpDummyPageRecordAllocate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     SmHpBufferUpdateFullness @ 0x1403096D0 (SmHpBufferUpdateFullness.c)
 *     SmHpBufferAlloc @ 0x140350534 (SmHpBufferAlloc.c)
 */

_WORD *__fastcall SmHpChunkAlloc(__int64 a1)
{
  unsigned int v1; // eax
  _WORD *v3; // rbx
  unsigned int v5; // ecx
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx

  v1 = *(_DWORD *)(a1 + 284);
  v3 = 0LL;
  while ( !_BitScanForward(&v5, v1) )
  {
    if ( !SmHpBufferAlloc(a1) )
      return v3;
    v1 = *(_DWORD *)(a1 + 284);
  }
  v6 = *(_QWORD *)(a1 + 16 * (v5 + 18LL));
  v7 = *(unsigned int *)(v6 + 16);
  _BitScanReverse((unsigned int *)&v8, v7);
  v9 = *(_QWORD *)(a1 + 8 * v8) + 16 * (v7 ^ (unsigned int)(1 << v8));
  v3 = (_WORD *)(v6 + *(unsigned __int16 *)(v9 + 8));
  *(_WORD *)(v9 + 8) = *v3;
  SmHpBufferUpdateFullness(a1, v9);
  ++*(_DWORD *)(a1 + 564);
  return v3;
}
