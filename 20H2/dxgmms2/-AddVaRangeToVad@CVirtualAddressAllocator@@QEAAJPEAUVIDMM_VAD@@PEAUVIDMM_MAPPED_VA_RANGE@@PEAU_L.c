/*
 * XREFs of ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C0078C74
 * Callers:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0078BB4 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C001505C (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C00857D4 (-CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AddVaRangeToVad(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        struct VIDMM_MAPPED_VA_RANGE *a3,
        struct _LIST_ENTRY *a4,
        struct _LIST_ENTRY *a5)
{
  struct _VIDMM_GLOBAL_ALLOC ***VidMmAllocFromOwner; // rax
  struct _VIDMM_GLOBAL_ALLOC ***v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // r8
  struct _VIDMM_GLOBAL_ALLOC ****v14; // rcx
  struct _VIDMM_GLOBAL_ALLOC **v15; // rdx
  struct _VIDMM_GLOBAL_ALLOC ***v16; // rax
  struct _LIST_ENTRY *v17; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // rdx

  VidMmAllocFromOwner = (struct _VIDMM_GLOBAL_ALLOC ***)GetVidMmAllocFromOwner(
                                                          (int)(*((_DWORD *)a3 + 16) << 28) >> 28,
                                                          *((_QWORD *)a3 + 7));
  v9 = VidMmAllocFromOwner;
  if ( !VidMmAllocFromOwner )
    goto LABEL_5;
  v12 = CheckUniqueGpuVaMapping(**VidMmAllocFromOwner, a3);
  if ( v12 >= 0 )
  {
    v14 = (struct _VIDMM_GLOBAL_ALLOC ****)(v9 + 16);
    v15 = v9[16];
    v16 = (struct _VIDMM_GLOBAL_ALLOC ***)((char *)a3 + 24);
    if ( v15[1] != (struct _VIDMM_GLOBAL_ALLOC *)(v9 + 16) )
      goto LABEL_8;
    *v16 = v15;
    *((_QWORD *)a3 + 4) = v14;
    v15[1] = (struct _VIDMM_GLOBAL_ALLOC *)v16;
    *v14 = v16;
LABEL_5:
    v17 = (struct _LIST_ENTRY *)((char *)a3 + 8);
    Blink = a5->Blink;
    if ( Blink->Flink == a5 )
    {
      v17->Flink = a5;
      *((_QWORD *)a3 + 2) = Blink;
      Blink->Flink = v17;
      a5->Blink = v17;
      ++*((_DWORD *)a2 + 19);
      if ( (*((_BYTE *)a3 + 88) & 4) == 0 )
        return 0LL;
      v21 = (_QWORD *)((char *)a2 + 56);
      if ( *((_QWORD *)a2 + 7) )
        return 0LL;
      v22 = (_QWORD *)((char *)this + 128);
      v23 = *((_QWORD *)this + 16);
      if ( *(CVirtualAddressAllocator **)(v23 + 8) == (CVirtualAddressAllocator *)((char *)this + 128) )
      {
        *v21 = v23;
        *((_QWORD *)a2 + 8) = v22;
        *(_QWORD *)(v23 + 8) = v21;
        *v22 = v21;
        return 0LL;
      }
    }
LABEL_8:
    __fastfail(3u);
  }
  v20 = WdLogNewEntry5_WdAssertion(v11, v10, v13);
  *(_QWORD *)(v20 + 24) = 9006LL;
  WdLogEvent5_WdAssertion(v20);
  return (unsigned int)v12;
}
