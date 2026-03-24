/*
 * XREFs of ?CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0087744
 * Callers:
 *     ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C0087674 (-AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_L.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckUniqueGpuVaMapping(struct _VIDMM_GLOBAL_ALLOC *a1, struct VIDMM_MAPPED_VA_RANGE *a2)
{
  char *v3; // rbp
  char *v5; // rdx
  unsigned __int64 v6; // r9
  __int64 v7; // rsi
  unsigned __int64 v8; // r10
  char *v9; // rbx
  unsigned __int64 v10; // r9
  unsigned int v11; // r14d
  char v12; // al
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rax
  char **v17; // rcx
  char **v18; // rax
  char **v19; // rcx
  char *v20; // rax

  v3 = (char *)a1 + 344;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  v5 = (char *)a1 + 184;
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v6 = *((_QWORD *)a2 + 10);
  v7 = v6 & 0x7FFFFFFFFFFFFFFFLL;
  v8 = *((_QWORD *)a2 + 9);
  v9 = (char *)*((_QWORD *)a1 + 23);
  v10 = v6 >> 63;
  v11 = 0;
  v12 = v10;
  while ( v9 != v5 )
  {
    v14 = *((_QWORD *)v9 + 4);
    if ( v8 + *((_QWORD *)a2 + 13) - *((_QWORD *)a2 + 12) <= v14 )
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
    v15 = v14 + *((_QWORD *)v9 + 8) - *((_QWORD *)v9 + 7);
    if ( v8 < v15 && v7 != (*((_QWORD *)v9 + 5) & 0x7FFFFFFFFFFFFFFFLL) )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdAssertion(v15, v5, v14);
      v16[3] = *((_QWORD *)v9 + 7);
      v16[4] = *((_QWORD *)v9 + 8);
      v16[5] = *((_QWORD *)v9 + 5);
      v16[6] = v7;
      WdLogEvent5_WdAssertion(v16);
      v11 = -1073741811;
      goto LABEL_4;
    }
    v12 = v10;
    if ( (_BYTE)v10 && v8 < v14 )
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
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v11;
}
