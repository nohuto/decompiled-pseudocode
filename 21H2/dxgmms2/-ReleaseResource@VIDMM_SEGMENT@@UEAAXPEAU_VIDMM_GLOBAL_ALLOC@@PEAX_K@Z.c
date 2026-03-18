/*
 * XREFs of ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C00A3E50
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C002DE74 (-NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x1C002EDC8 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1C00A0F44 (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00A3F98 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_SEGMENT::ReleaseResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_POOL_BLOCK *a3,
        unsigned __int64 a4)
{
  struct _VIDMM_GLOBAL_ALLOC *v6; // rdi
  VIDMM_GLOBAL *v8; // rcx
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  unsigned __int64 v17; // rbp
  VIDMM_GLOBAL *v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // [rsp+20h] [rbp-48h]

  v6 = a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v12[3] = v6;
    v12[4] = a3;
    v12[5] = a4;
  }
  if ( v6 )
  {
    if ( *((_DWORD *)v6 + 28) != 1 )
    {
      VIDMM_SEGMENT::DecrementBytesCommitted(
        (VIDMM_SEGMENT *)this,
        **((struct VIDMM_PARTITION ***)v6 + 63),
        *((_QWORD *)v6 + 2));
      --*((_DWORD *)this + 80);
      if ( ((_DWORD)this[10] & 0x1001) != 0 )
      {
        v13 = *((_QWORD *)v6 + 64);
        if ( !v13 || _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 44), 0xFFFFFFFF) == 1 )
        {
          a2 = (struct _VIDMM_GLOBAL_ALLOC *)_InterlockedExchangeAdd64(
                                               (volatile signed __int64 *)(**((_QWORD **)v6 + 63) + 56LL),
                                               -*((_QWORD *)v6 + 2));
          if ( (unsigned __int64)a2 < *((_QWORD *)v6 + 2) )
          {
            WdLogSingleEntry1(1LL, 1923LL);
            HIDWORD(v22) = 0;
            DxgkLogInternalTriageEvent(v14, 0x40000LL);
          }
        }
      }
    }
  }
  if ( a3 )
  {
    if ( ((_DWORD)this[10] & 0x1000) == 0 )
      VIDMM_LINEAR_POOL::Free(this[19], a3);
    v8 = this[28];
    if ( v8 < (VIDMM_GLOBAL *)((char *)v8 - a4) )
    {
      WdLogSingleEntry1(1LL, 1948LL);
      HIDWORD(v22) = 0;
      DxgkLogInternalTriageEvent(v15, 0x40000LL);
      v8 = this[28];
    }
    --*((_DWORD *)this + 81);
    v9 = (__int64)v8 - a4;
    v10 = bTracingEnabled == 0;
    this[28] = (VIDMM_GLOBAL *)v9;
    if ( !v10 && (byte_1C006E941 & 1) != 0 )
    {
      LODWORD(v22) = *((_DWORD *)this + 4) + 1;
      McTemplateK0pqx_EtwWriteTransfer(v9, &TotalBytesResidentInSegment, (__int64)a3, *((_QWORD *)this[1] + 3), v22, v9);
    }
    if ( !v6 || _bittest((const signed __int32 *)v6 + 18, 9u) )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, a2, a3, a4);
        v16[3] = a4;
        v16[4] = this[55];
        v16[5] = v6;
      }
      this[55] = (VIDMM_GLOBAL *)((char *)this[55] - a4);
      if ( v6 )
        *((_DWORD *)v6 + 18) &= ~0x200u;
      *((_BYTE *)this + 448) = 0;
    }
    if ( *((_DWORD *)this + 92) != -1 && v6 && !_bittest((const signed __int32 *)v6 + 17, 9u) )
    {
      v17 = (unsigned __int64)this[29];
      v18 = (VIDMM_GLOBAL *)v17;
      if ( v17 < a4 )
      {
        WdLogSingleEntry1(1LL, 1982LL);
        DxgkLogInternalTriageEvent(v19, 0x40000LL);
        v18 = this[29];
      }
      v20 = (unsigned __int64)v18 - a4;
      this[29] = (VIDMM_GLOBAL *)v20;
      if ( v17 > qword_1C006E508 && v20 <= qword_1C006E508 )
      {
        (*((void (__fastcall **)(_QWORD, _QWORD))this[1] + 5013))(
          *((_QWORD *)this[1] + 5019),
          *((unsigned int *)this + 92));
        v20 = (unsigned __int64)this[29];
      }
      if ( !v20 )
        VIDMM_GLOBAL::NotifyMemorySegmentIdle(this[1], (struct VIDMM_SEGMENT *)this);
    }
    if ( ((_DWORD)this[10] & 0x1001) != 0 )
    {
      v11 = *((_QWORD *)v6 + 64);
      if ( (!v11 || _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 40), 0xFFFFFFFF) == 1)
        && _InterlockedExchangeAdd64((volatile signed __int64 *)(**((_QWORD **)v6 + 63) + 64LL), -(__int64)a4) < a4 )
      {
        WdLogSingleEntry1(1LL, 2008LL);
        DxgkLogInternalTriageEvent(v21, 0x40000LL);
      }
      *((_QWORD *)this[1] + 5026) -= a4;
    }
  }
  else
  {
    *((_DWORD *)v6 + 18) &= ~0x200u;
  }
}
