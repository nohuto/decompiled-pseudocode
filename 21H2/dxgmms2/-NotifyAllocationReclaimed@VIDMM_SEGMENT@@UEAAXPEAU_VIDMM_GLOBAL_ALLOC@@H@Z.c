/*
 * XREFs of ?NotifyAllocationReclaimed@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C00C7A10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C0023BFC (-NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x1C0024C84 (McTemplateK0pqx_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_SEGMENT::NotifyAllocationReclaimed(
        VIDMM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  bool v9; // zf
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  char *v19; // rax
  __int64 v20; // rdx
  char **v21; // rcx
  char *v22; // rbx
  char **v23; // rcx

  if ( (_DWORD)a3 )
  {
    v5 = *((_QWORD *)this + 28);
    v6 = *((_QWORD *)a2 + 2);
    if ( v5 < v6 )
    {
      v7 = WdLogNewEntry5_WdAssertion(v5, v6, a3);
      *(_QWORD *)(v7 + 24) = 2014LL;
      WdLogEvent5_WdAssertion(v7);
      v5 = *((_QWORD *)this + 28);
      v6 = *((_QWORD *)a2 + 2);
    }
    v8 = v5 - v6;
    --*((_DWORD *)this + 81);
    v9 = bTracingEnabled == 0;
    *((_QWORD *)this + 28) = v8;
    if ( !v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqx_EtwWriteTransfer(
        v8,
        &TotalBytesResidentInSegment,
        a3,
        *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
        *((_DWORD *)this + 4) + 1,
        v8);
    if ( *((_DWORD *)this + 92) != -1 && (*((_DWORD *)a2 + 19) & 0x200) == 0 )
    {
      v10 = *((_QWORD *)this + 29);
      v11 = *((_QWORD *)a2 + 2);
      v12 = v10;
      if ( v10 < v10 - v11 )
      {
        v13 = WdLogNewEntry5_WdAssertion(v10, v11, a3);
        *(_QWORD *)(v13 + 24) = 2028LL;
        WdLogEvent5_WdAssertion(v13);
        v12 = *((_QWORD *)this + 29);
        v11 = *((_QWORD *)a2 + 2);
      }
      v14 = v12 - v11;
      *((_QWORD *)this + 29) = v14;
      if ( v10 > qword_1C0050498 && v14 <= qword_1C0050498 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)this + 1) + 40096LL))(
          *(_QWORD *)(*((_QWORD *)this + 1) + 40144LL),
          *((unsigned int *)this + 92));
        v14 = *((_QWORD *)this + 29);
      }
      if ( !v14 )
        VIDMM_GLOBAL::NotifyMemorySegmentIdle(*((VIDMM_GLOBAL **)this + 1), this);
    }
    if ( (*((_DWORD *)this + 20) & 0x1001) != 0 )
    {
      v15 = *((_QWORD *)a2 + 63);
      if ( !v15 || _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 40), 0xFFFFFFFF) == 1 )
      {
        v16 = **((_QWORD **)a2 + 62);
        v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 64), -*((_QWORD *)a2 + 2));
        if ( v17 < *((_QWORD *)a2 + 2) )
        {
          v18 = WdLogNewEntry5_WdAssertion(v16, v17, a3);
          *(_QWORD *)(v18 + 24) = 2050LL;
          WdLogEvent5_WdAssertion(v18);
        }
      }
      *(_QWORD *)(*((_QWORD *)this + 1) + 40200LL) -= *((_QWORD *)a2 + 2);
    }
  }
  v19 = (char *)a2 + 392;
  v20 = *((_QWORD *)a2 + 49);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v20 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 392)
    || (v21 = (char **)*((_QWORD *)a2 + 50), *v21 != v19)
    || (*v21 = (char *)v20,
        v22 = (char *)this + 192,
        *(_QWORD *)(v20 + 8) = v21,
        v23 = (char **)*((_QWORD *)v22 + 1),
        *v23 != v22) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v19 = v22;
  *((_QWORD *)a2 + 50) = v23;
  *v23 = v19;
  *((_QWORD *)v22 + 1) = v19;
}
