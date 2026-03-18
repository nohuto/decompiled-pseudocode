/*
 * XREFs of MmHardFaultBytesRequired @ 0x1405FCCD0
 * Callers:
 *     CcFetchDataForRead @ 0x14022EED0 (CcFetchDataForRead.c)
 * Callees:
 *     MiOffsetToProtos @ 0x14022EFF0 (MiOffsetToProtos.c)
 *     MiReadPteShadow @ 0x140254430 (MiReadPteShadow.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402BC1EC (IS_PTE_NOT_DEMAND_ZERO.c)
 */

__int64 __fastcall MmHardFaultBytesRequired(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 *v3; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // r11
  __int64 v6; // rdx
  __int64 *v7; // r9
  __int64 *v8; // r10
  __int64 v9; // rax
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(__int64 **)(a1 + 40);
  v11 = 0LL;
  v4 = ((a2 & 0xFFF) + a3 + 4095) >> 12;
  v5 = MiOffsetToProtos(*v3, a2, &v11);
  v6 = *(_QWORD *)(v5 + 8);
  v7 = (__int64 *)(v6 + 8 * v11);
  v8 = (__int64 *)(v6 + 8LL * *(unsigned int *)(v5 + 44));
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    if ( v7 >= v8 )
    {
      v5 = *(_QWORD *)(v5 + 16);
      v7 = *(__int64 **)(v5 + 8);
      v8 = &v7[*(unsigned int *)(v5 + 44)];
    }
    v9 = *v7;
    if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
      LOWORD(v9) = MiReadPteShadow((unsigned __int64)v7, *v7);
    if ( (v9 & 1) == 0 && ((v9 & 0x400) != 0 || (v9 & 0x800) == 0 && IS_PTE_NOT_DEMAND_ZERO(v9)) )
      break;
    ++v7;
    if ( !--v4 )
      return 0LL;
  }
  return 1LL;
}
