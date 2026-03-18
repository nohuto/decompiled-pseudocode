/*
 * XREFs of ?NotifyAllocationReclaimed@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C00EB5F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C002DE74 (-NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x1C002EDC8 (McTemplateK0pqx_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_SEGMENT::NotifyAllocationReclaimed(
        VIDMM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  bool v9; // zf
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  char *v17; // rax
  __int64 v18; // rdx
  char **v19; // rcx
  char *v20; // rbx
  char **v21; // rcx
  __int64 v22; // [rsp+20h] [rbp-38h]

  if ( (_DWORD)a3 )
  {
    v5 = *((_QWORD *)this + 28);
    v6 = *((_QWORD *)a2 + 2);
    if ( v5 < v6 )
    {
      WdLogSingleEntry1(1LL, 2025LL);
      HIDWORD(v22) = 0;
      DxgkLogInternalTriageEvent(v7, 0x40000LL);
      v5 = *((_QWORD *)this + 28);
      v6 = *((_QWORD *)a2 + 2);
    }
    v8 = v5 - v6;
    --*((_DWORD *)this + 81);
    v9 = bTracingEnabled == 0;
    *((_QWORD *)this + 28) = v8;
    if ( !v9 && (byte_1C006E941 & 1) != 0 )
    {
      LODWORD(v22) = *((_DWORD *)this + 4) + 1;
      McTemplateK0pqx_EtwWriteTransfer(
        v8,
        &TotalBytesResidentInSegment,
        a3,
        *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
        v22,
        v8);
    }
    if ( *((_DWORD *)this + 92) != -1 && (*((_DWORD *)a2 + 17) & 0x200) == 0 )
    {
      v10 = *((_QWORD *)this + 29);
      v11 = *((_QWORD *)a2 + 2);
      v12 = v10;
      if ( v10 < v10 - v11 )
      {
        WdLogSingleEntry1(1LL, 2039LL);
        DxgkLogInternalTriageEvent(v13, 0x40000LL);
        v12 = *((_QWORD *)this + 29);
        v11 = *((_QWORD *)a2 + 2);
      }
      v14 = v12 - v11;
      *((_QWORD *)this + 29) = v14;
      if ( v10 > qword_1C006E508 && v14 <= qword_1C006E508 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)this + 1) + 40104LL))(
          *(_QWORD *)(*((_QWORD *)this + 1) + 40152LL),
          *((unsigned int *)this + 92));
        v14 = *((_QWORD *)this + 29);
      }
      if ( !v14 )
        VIDMM_GLOBAL::NotifyMemorySegmentIdle(*((VIDMM_GLOBAL **)this + 1), this);
    }
    if ( (*((_DWORD *)this + 20) & 0x1001) != 0 )
    {
      v15 = *((_QWORD *)a2 + 64);
      if ( (!v15 || _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 40), 0xFFFFFFFF) == 1)
        && (unsigned __int64)_InterlockedExchangeAdd64(
                               (volatile signed __int64 *)(**((_QWORD **)a2 + 63) + 64LL),
                               -*((_QWORD *)a2 + 2)) < *((_QWORD *)a2 + 2) )
      {
        WdLogSingleEntry1(1LL, 2061LL);
        DxgkLogInternalTriageEvent(v16, 0x40000LL);
      }
      *(_QWORD *)(*((_QWORD *)this + 1) + 40208LL) -= *((_QWORD *)a2 + 2);
    }
  }
  v17 = (char *)a2 + 400;
  v18 = *((_QWORD *)a2 + 50);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v18 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 400)
    || (v19 = (char **)*((_QWORD *)a2 + 51), *v19 != v17)
    || (*v19 = (char *)v18,
        v20 = (char *)this + 192,
        *(_QWORD *)(v18 + 8) = v19,
        v21 = (char **)*((_QWORD *)v20 + 1),
        *v21 != v20) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v17 = v20;
  *((_QWORD *)a2 + 51) = v21;
  *v21 = v17;
  *((_QWORD *)v20 + 1) = v17;
}
