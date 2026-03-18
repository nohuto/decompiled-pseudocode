/*
 * XREFs of SmHpChunkUnprotect @ 0x14023FCE8
 * Callers:
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14023F32C (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140595D14 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 * Callees:
 *     SmHpBufferProtectEx @ 0x14023FD24 (SmHpBufferProtectEx.c)
 */

__int64 __fastcall SmHpChunkUnprotect(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx

  v3 = *(unsigned int *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  _BitScanReverse((unsigned int *)&v4, v3);
  return SmHpBufferProtectEx(v4, *(_QWORD *)(a1 + 8 * v4) + 16 * (v3 ^ (unsigned int)(1 << v4)));
}
