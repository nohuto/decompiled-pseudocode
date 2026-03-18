/*
 * XREFs of ?CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C008DC24
 * Callers:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C008EDD4 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C00A6C0C (-AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_L.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall CheckUniqueGpuVaMapping(struct _VIDMM_GLOBAL_ALLOC *a1, struct VIDMM_MAPPED_VA_RANGE *a2)
{
  char *v4; // r12
  char *v5; // rcx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r14
  __int64 v8; // rbp
  char *v9; // rbx
  unsigned __int64 v10; // r8
  unsigned int v11; // edi
  char v12; // al
  unsigned __int64 v14; // rdx
  __int64 v15; // r11
  __int64 v16; // rcx
  char **v17; // rcx
  char **v18; // rax
  char **v19; // rdx
  char *v20; // rax

  KeEnterCriticalRegion();
  v4 = (char *)a1 + 368;
  ExAcquirePushLockExclusiveEx((char *)a1 + 368, 0LL);
  v5 = (char *)a1 + 168;
  v6 = *((_QWORD *)a2 + 10);
  v7 = *((_QWORD *)a2 + 9);
  v8 = v6 & 0x7FFFFFFFFFFFFFFFLL;
  v9 = (char *)*((_QWORD *)a1 + 21);
  v10 = v6 >> 63;
  v11 = 0;
  v12 = v10;
  while ( v9 != v5 )
  {
    v14 = *((_QWORD *)v9 + 4);
    if ( v7 + *((_QWORD *)a2 + 13) - *((_QWORD *)a2 + 12) <= v14 )
    {
      if ( !v12 )
        goto LABEL_4;
LABEL_13:
      v17 = (char **)*((_QWORD *)v9 + 1);
      v18 = (char **)((char *)a2 + 40);
      if ( *v17 == v9 )
      {
        *v18 = v9;
        *((_QWORD *)a2 + 6) = v17;
        *v17 = (char *)v18;
        *((_QWORD *)v9 + 1) = v18;
        goto LABEL_4;
      }
LABEL_17:
      __fastfail(3u);
    }
    v15 = *((_QWORD *)v9 + 7);
    if ( v7 < v14 + *((_QWORD *)v9 + 8) - v15 && v8 != (*((_QWORD *)v9 + 5) & 0x7FFFFFFFFFFFFFFFLL) )
    {
      WdLogSingleEntry4(1LL, v15, *((_QWORD *)v9 + 8), *((_QWORD *)v9 + 5), v8);
      DxgkLogInternalTriageEvent(v16, 0x40000LL);
      v11 = -1073741811;
      goto LABEL_4;
    }
    v12 = v10;
    if ( (_BYTE)v10 && v7 < v14 )
      goto LABEL_13;
    v9 = *(char **)v9;
  }
  if ( v12 )
  {
    v19 = (char **)*((_QWORD *)v5 + 1);
    v20 = (char *)a2 + 40;
    if ( *v19 == v5 )
    {
      *(_QWORD *)v20 = v5;
      *((_QWORD *)a2 + 6) = v19;
      *v19 = v20;
      *((_QWORD *)v5 + 1) = v20;
      goto LABEL_4;
    }
    goto LABEL_17;
  }
LABEL_4:
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return v11;
}
