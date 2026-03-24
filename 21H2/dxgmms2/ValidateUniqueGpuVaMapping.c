/*
 * XREFs of ValidateUniqueGpuVaMapping @ 0x1C0060610
 * Callers:
 *     ?AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C005F15C (-AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENT.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0015054 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 */

char __fastcall ValidateUniqueGpuVaMapping(__int64 a1)
{
  __int64 VidMmGlobalAllocFromOwner; // rax
  _QWORD *v2; // r8
  unsigned __int64 v3; // rcx
  _QWORD *v4; // r13
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r15
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rsi
  __int64 v9; // rdi
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r9
  __int64 v12; // rbp
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r10
  bool v15; // r11
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rax
  unsigned __int64 v20; // r10

  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(
                                (int)(*(_DWORD *)(a1 + 64) << 28) >> 28,
                                *(_QWORD *)(a1 + 56));
  if ( VidMmGlobalAllocFromOwner )
  {
    v3 = v2[9];
    v4 = (_QWORD *)(VidMmGlobalAllocFromOwner + 184);
    v5 = v2[13];
    v6 = v2[12];
    v7 = *(_QWORD **)(VidMmGlobalAllocFromOwner + 184);
    v8 = v3 + v5 - v6;
    v9 = v2[10] & 0x7FFFFFFFFFFFFFFFLL;
    if ( v7 != (_QWORD *)(VidMmGlobalAllocFromOwner + 184) )
    {
      while ( 1 )
      {
        v10 = v7[4];
        v11 = v7[8];
        v12 = v7[5] & 0x7FFFFFFFFFFFFFFFLL;
        v13 = v7[7];
        v14 = v10 + v11 - v13;
        if ( v8 <= v10 )
          return 1;
        if ( v3 < v14 && v9 != v12 )
        {
          v15 = 1;
          if ( *v2 == *(v7 - 5) && (v6 > v13 || v5 < v11) )
            break;
        }
LABEL_24:
        v7 = (_QWORD *)*v7;
        if ( v7 == v4 )
          return 1;
      }
      v16 = 0LL;
      v17 = 0LL;
      if ( v6 > v13 && v6 < v11 )
        v16 = v6 - v13;
      if ( v5 < v11 && v5 > v13 )
        v17 = v11 - v5;
      if ( v16 )
      {
        v15 = v2[9] >= v10 + v16;
        if ( !v17 )
        {
LABEL_22:
          if ( !v15 )
          {
LABEL_17:
            v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v13);
            v18[3] = v7[7];
            v18[4] = v7[8];
            v18[5] = v12;
            v18[6] = v9;
            WdLogEvent5_WdWarning(v18);
            return 0;
          }
          v3 = v2[9];
          goto LABEL_24;
        }
      }
      else if ( !v17 )
      {
        goto LABEL_17;
      }
      v20 = v14 - v17;
      v17 = 0LL;
      if ( v8 <= v20 )
        v17 = v15;
      v15 = v17;
      goto LABEL_22;
    }
  }
  return 1;
}
