/*
 * XREFs of ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00D5E64
 * Callers:
 *     ?DefragmentSegment@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00DDEDC (-DefragmentSegment@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ @ 0x1C002DCD4 (-GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E3C0 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C009F9F0 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C009FBA4 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A08E8 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00A2358 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00D6564 (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00DDA2C (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?OldDefragment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00EB87C (-OldDefragment@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00ED324 (-TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::Defragment(VIDMM_GLOBAL *this, struct VIDMM_SEGMENT *a2)
{
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // r8
  unsigned __int64 ActiveVprEnd; // rbx
  struct VIDMM_SEGMENT *v8; // r14
  char *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // r15
  _QWORD *v14; // rbx
  VIDMM_DEVICE *v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // r8

  v4 = *(_QWORD *)(*(_QWORD *)this + 256LL);
  *((_QWORD *)a2 + 62) = v4;
  if ( (*((_DWORD *)this + 1764) & 0x4000) != 0 )
  {
    WdLogSingleEntry1(4LL, a2);
  }
  else
  {
    v5 = *((unsigned int *)a2 + 95);
    if ( (byte_1C006E942 & 0x40) != 0 )
      McTemplateK0p_EtwWriteTransfer((__int64)this, &EventVidMmStartDefragment, v4, this);
    VIDMM_GLOBAL::StartPreparation((__int64)this, 0xFFFFFFFF, 0LL, 0LL, 1002);
    v6 = *((_QWORD *)this + 3);
    if ( (*(_DWORD *)(344 * v5 + *(_QWORD *)(v6 + 2680) + 16) & 4) != 0
      && (*(_BYTE *)(v6 + 2148) & 8) != 0
      && (*((_DWORD *)this + 1764) & 0x20000) == 0 )
    {
      WdLogSingleEntry1(4LL, a2);
      VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(this);
      VIDMM_SEGMENT::TrimAllMarkedForEvictionAllocations(a2);
      if ( (*((_BYTE *)a2 + 82) & 1) != 0 )
      {
        ActiveVprEnd = VIDMM_SEGMENT::GetActiveVprEnd(a2);
        (*(void (__fastcall **)(struct VIDMM_SEGMENT *, _QWORD))(*(_QWORD *)a2 + 128LL))(a2, 0LL);
        (*(void (__fastcall **)(struct VIDMM_SEGMENT *, unsigned __int64, _QWORD))(*(_QWORD *)a2 + 128LL))(
          a2,
          ActiveVprEnd,
          *((_QWORD *)a2 + 6));
      }
      else
      {
        (*(void (__fastcall **)(struct VIDMM_SEGMENT *, _QWORD, _QWORD))(*(_QWORD *)a2 + 128LL))(
          a2,
          0LL,
          *((_QWORD *)a2 + 6));
      }
    }
    else
    {
      WdLogSingleEntry1(4LL, a2);
      v8 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 17);
      while ( v8 != (struct VIDMM_SEGMENT *)((char *)a2 + 136) )
      {
        v9 = (char *)v8 - 24;
        v8 = *(struct VIDMM_SEGMENT **)v8;
        if ( !(unsigned __int8)PsIsSystemProcess(**(_QWORD **)v9)
          && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v9 + 32LL) + 424LL) & 1) == 0 )
        {
          v13 = v9 + 40;
          v14 = (_QWORD *)*((_QWORD *)v9 + 5);
          while ( v14 != v13 )
          {
            v15 = (VIDMM_DEVICE *)v14[4];
            v14 = (_QWORD *)*v14;
            if ( *((_QWORD *)v15 + 3) )
            {
              if ( !*((_QWORD *)v15 + 24) )
                VIDMM_DEVICE::PartiallySuspend(v15);
              VIDMM_DEVICE::FaultAllAllocations(v15, v10, v11, v12);
            }
          }
        }
      }
      VIDMM_SEGMENT::OldDefragment(a2);
    }
    VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
    if ( (byte_1C006E942 & 0x40) != 0 )
      McTemplateK0p_EtwWriteTransfer(v16, &EventVidMmEndDefragment, v17, this);
  }
}
