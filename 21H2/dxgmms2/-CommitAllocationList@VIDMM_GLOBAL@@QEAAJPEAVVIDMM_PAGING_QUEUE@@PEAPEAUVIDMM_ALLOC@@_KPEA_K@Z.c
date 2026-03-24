/*
 * XREFs of ?CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C0067154
 * Callers:
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C00670B8 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 * Callees:
 *     VidSchIsMonitoredFenceSignaled @ 0x1C00016E0 (VidSchIsMonitoredFenceSignaled.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C00249D0 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0067994 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?RecordVaPagingHistoryMakeResident@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@E_K@Z @ 0x1C00BE15C (-RecordVaPagingHistoryMakeResident@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@E.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitAllocationList(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_ALLOC **a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  unsigned int v5; // ebp
  struct VIDMM_ALLOC **v6; // r12
  struct VIDMM_ALLOC **i; // rdi
  struct VIDMM_ALLOC *v10; // rbx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  int v16; // eax
  unsigned __int64 v17; // rax
  unsigned __int64 *v18; // [rsp+20h] [rbp-78h]
  _QWORD v19[10]; // [rsp+30h] [rbp-68h] BYREF

  v5 = 0;
  v6 = &a3[a4];
  for ( i = a3; i != v6; ++i )
  {
    v10 = *i;
    if ( *((int *)*i + 45) > 0
      || (*((_DWORD *)v10 + 7) & 3) != 2
      || *((_DWORD *)this + 2) == 206 && *((struct VIDMM_ALLOC **)this + 879) == v10
      || ((v11 = **(_QWORD **)v10,
           v12 = *(_QWORD *)(v11 + 160),
           v13 = *(_DWORD *)(v11 + 76) & 0x3F,
           v14 = *((_QWORD *)this + v13 + 683),
           v14 <= v12)
       || v14 - v12 < 0x7FFFFFFF)
      && !VidSchIsMonitoredFenceSignaled(*((_QWORD *)this + v13 + 747), v12) )
    {
      memset(v19, 0, sizeof(v19));
      v19[4] = 0LL;
      LODWORD(v19[0]) = 206;
      v19[2] = v10;
      v16 = VIDMM_GLOBAL::QueueDeferredCommand(
              this,
              a2,
              (struct _VIDMM_DEFERRED_COMMAND *)v19,
              dword_1C00503B8 == 0,
              a5);
      v13 = *((unsigned int *)v10 + 7);
      v5 = v16;
      if ( (v13 & 0x20) != 0 && v16 == 259 )
      {
        *((_QWORD *)v10 + 32) = a2;
        v13 = *a5;
        *((_QWORD *)v10 + 35) = *a5;
      }
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    {
      LODWORD(v18) = *((_DWORD *)v10 + 42);
      McTemplateK0pq_EtwWriteTransfer(v13, &EventVidMmMakeResident, (__int64)a3, v10, v18);
    }
    if ( *((_QWORD *)this + 5123) )
    {
      if ( a5 )
        v17 = *a5;
      else
        v17 = 0LL;
      VIDMM_GLOBAL::RecordVaPagingHistoryMakeResident(this, a2, v10, v5 == 259, v17);
    }
  }
  return v5;
}
