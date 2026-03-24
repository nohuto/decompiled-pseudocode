/*
 * XREFs of ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0061EF0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C008EC90 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006030 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00060DC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0061D84 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C0062B20 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C0062B40 (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0063FD0 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C00640E4 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0064900 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00750FC (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C00899AC (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ProcessSystemMemoryOfferList(VIDMM_GLOBAL *this)
{
  char *v2; // rbp
  DXGFASTMUTEX ***v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // r8
  DXGFASTMUTEX **v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // r9d
  int v10; // r13d
  DXGFASTMUTEX **v11; // r14
  _QWORD *v12; // r8
  int v13; // r12d
  DXGFASTMUTEX **v14; // r15
  DXGFASTMUTEX *v15; // rcx
  DXGFASTMUTEX ***v16; // rax
  DXGFASTMUTEX *v17; // rax
  __int16 v18; // cx
  DXGFASTMUTEX *v19; // rax
  DXGFASTMUTEX ***v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  DXGFASTMUTEX **v23; // rcx
  _QWORD *v24; // rax
  __int64 **v25; // rax
  DXGFASTMUTEX **v26; // r14
  int v27; // [rsp+20h] [rbp-58h]
  __int64 **v28; // [rsp+40h] [rbp-38h] BYREF
  DXGFASTMUTEX **v29; // [rsp+48h] [rbp-30h]

  if ( !qword_1C0050358 )
    return;
  v2 = (char *)this + 39968;
  v3 = (DXGFASTMUTEX ***)((char *)this + 40016);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v2, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v9 = *((_DWORD *)v2 + 6);
      if ( v9 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v4, (const EVENT_DESCRIPTOR *)"g", v5, v9);
    }
    ExAcquirePushLockSharedEx(v2, 0LL);
  }
  v6 = *v3;
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v6 == (DXGFASTMUTEX **)v3 )
    return;
  v7 = 0x8000000000000000uLL;
  if ( (*((_DWORD *)this + 1762) & 0x8000) == 0 )
  {
    v8 = *((_QWORD *)this + 577) - *((_QWORD *)this + 890);
    if ( v8 < qword_1C0050358 )
    {
      v7 = v8 - qword_1C0050358;
      goto LABEL_8;
    }
  }
  v29 = (DXGFASTMUTEX **)&v28;
  v10 = 0;
  v28 = (__int64 **)&v28;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v2);
  while ( 1 )
  {
    v11 = *v3;
    if ( *v3 == (DXGFASTMUTEX **)v3 || !VIDMM_GLOBAL::UnderCleanupLimit(this) )
      break;
    v13 = 0;
    v14 = v11 - 51;
    *((_QWORD *)this + 5588) = v11 - 51;
    v15 = *v11;
    if ( *((DXGFASTMUTEX ***)*v11 + 1) != v11 )
      goto LABEL_36;
    v16 = (DXGFASTMUTEX ***)v11[1];
    if ( *v16 != v11 )
      goto LABEL_36;
    *v16 = (DXGFASTMUTEX **)v15;
    *((_QWORD *)v15 + 1) = v16;
    v17 = v14[64];
    *v11 = 0LL;
    v18 = *((_WORD *)v17 + 2);
    if ( v18 != 2 )
    {
      if ( !v18 || v18 == 3 )
        goto LABEL_28;
      goto LABEL_26;
    }
    v19 = v14[16];
    if ( v19 )
    {
      if ( (*((_DWORD *)v19 + 20) & 0x1001) == 0 )
        goto LABEL_26;
      if ( !v10 )
      {
        v10 = 1;
        VIDMM_GLOBAL::StartPreparation(this, 0xFFFFFFFFLL, 0LL, 0LL, 1000);
        v12 = &unk_1C0050368;
      }
      if ( (*((_DWORD *)this + 1762) & 0x8000) != 0
        || *((_QWORD *)this + 577) - (_QWORD)v14[56] > v12[*((int *)v14 + 110)] )
      {
        *((_DWORD *)v14 + 20) |= 0x40u;
        *((_QWORD *)v2 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v2, 0LL);
        KeLeaveCriticalRegion();
        VIDMM_GLOBAL::MarkGlobalAllocation(this, v11 - 51, 0LL, 0LL);
        LOBYTE(v22) = 1;
        LOBYTE(v27) = 0;
        (*(void (__fastcall **)(DXGFASTMUTEX *, DXGFASTMUTEX **, __int64, _QWORD, int, _QWORD))(*(_QWORD *)v14[16] + 48LL))(
          v14[16],
          v11 - 51,
          v22,
          0LL,
          v27,
          0LL);
        DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v2);
        *((_QWORD *)this + 894) += v14[1];
        ++*((_DWORD *)this + 1790);
        *((_QWORD *)this + 5588) = 0LL;
      }
      else
      {
LABEL_26:
        v20 = (DXGFASTMUTEX ***)v29;
        if ( *v29 != (DXGFASTMUTEX *)&v28 )
          goto LABEL_36;
        v11[1] = (DXGFASTMUTEX *)v29;
        *v11 = (DXGFASTMUTEX *)&v28;
        *v20 = v11;
        v29 = v11;
LABEL_28:
        *((_QWORD *)this + 5588) = 0LL;
      }
    }
    else
    {
      DXGFASTMUTEX::Acquire(v14[39]);
      if ( (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)(v11 - 51))
        && (*((_DWORD *)v14 + 21) & 8) == 0 )
      {
        *((_QWORD *)v2 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v2, 0LL);
        KeLeaveCriticalRegion();
        v13 = 1;
        if ( v14[32] )
          VIDMM_GLOBAL::EvictTemporaryAllocations(this, 1u, *((_DWORD *)v14 + 19) & 0x3F);
        VIDMM_GLOBAL::ResetBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)(v11 - 51));
        *((_QWORD *)this + 894) += v14[1];
        ++*((_DWORD *)this + 1790);
      }
      DXGFASTMUTEX::Release((struct _KTHREAD **)v14[39], v21);
      if ( !v13 )
        goto LABEL_28;
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v2);
      *((_QWORD *)this + 5588) = 0LL;
    }
  }
  if ( v28 != (__int64 **)&v28 )
  {
    v23 = v3[1];
    if ( v11[1] != (DXGFASTMUTEX *)v3
      || *v23 != (DXGFASTMUTEX *)v3
      || v28[1] != (__int64 *)&v28
      || *v29 != (DXGFASTMUTEX *)&v28
      || (*v23 = (DXGFASTMUTEX *)&v28, v24 = v29,
                                       v3[1] = v29,
                                       *v24 = v3,
                                       v25 = v28,
                                       v29 = v23,
                                       v28[1] != (__int64 *)&v28)
      || *v23 != (DXGFASTMUTEX *)&v28 )
    {
LABEL_36:
      __fastfail(3u);
    }
    *v23 = (DXGFASTMUTEX *)v28;
    v25[1] = (__int64 *)v23;
  }
  v26 = *v3;
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v10 )
    VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
  if ( VIDMM_GLOBAL::UnderCleanupLimit(this) )
  {
    *((_QWORD *)this + 890) = *((_QWORD *)this + 577);
    if ( v26 != (DXGFASTMUTEX **)v3 )
      v7 = -qword_1C0050358;
  }
LABEL_8:
  VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v7, 4LL);
}
