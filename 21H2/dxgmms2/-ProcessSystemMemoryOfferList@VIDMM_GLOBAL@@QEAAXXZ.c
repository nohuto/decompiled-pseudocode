/*
 * XREFs of ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009EB00
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00ABE70 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00860A8 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0086108 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C0086A8C (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C009F7DC (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C009F89C (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C009F9F0 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C009FBA4 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C009FC3C (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ProcessSystemMemoryOfferList(VIDMM_GLOBAL *this)
{
  char *v2; // rsi
  __int64 **v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbp
  __int64 v7; // rcx
  int v8; // r12d
  __int64 *v9; // r14
  _QWORD *v10; // r8
  __int64 *v11; // r15
  __int64 *v12; // rcx
  __int64 **v13; // rax
  __int64 v14; // rax
  __int16 v15; // cx
  __int64 v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // r8
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 *v22; // r14
  int v23; // r9d
  __int64 v24; // rdx
  __int64 v25; // r9
  int v26; // [rsp+20h] [rbp-58h]
  __int64 v27; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v28; // [rsp+48h] [rbp-30h]

  if ( !qword_1C006E3C8 )
    return;
  v2 = (char *)this + 39976;
  v3 = (__int64 **)((char *)this + 40024);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v2, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v23 = *((_DWORD *)v2 + 6);
      if ( v23 != -1 && (byte_1C006E941 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventBlockThread, v5, v23);
    }
    ExAcquirePushLockSharedEx(v2, 0LL);
  }
  if ( *v3 == (__int64 *)v3 )
  {
    ExReleasePushLockSharedEx(v2, 0LL);
    KeLeaveCriticalRegion();
    return;
  }
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  v6 = 0x8000000000000000uLL;
  if ( (*((_DWORD *)this + 1764) & 0x8000) == 0 )
  {
    v7 = *((_QWORD *)this + 579) - *((_QWORD *)this + 891);
    if ( v7 < qword_1C006E3C8 )
    {
      v6 = v7 - qword_1C006E3C8;
      goto LABEL_7;
    }
  }
  v28 = &v27;
  v8 = 0;
  v27 = (__int64)&v27;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v2);
  while ( 1 )
  {
    v9 = *v3;
    if ( *v3 == (__int64 *)v3 || !VIDMM_GLOBAL::UnderCleanupLimit(this) )
      break;
    v11 = v9 - 52;
    *((_QWORD *)this + 5589) = v9 - 52;
    v12 = (__int64 *)*v9;
    if ( *(__int64 **)(*v9 + 8) != v9 )
      goto LABEL_27;
    v13 = (__int64 **)v9[1];
    if ( *v13 != v9 )
      goto LABEL_27;
    *v13 = v12;
    v12[1] = (__int64)v13;
    v14 = v11[66];
    *v9 = 0LL;
    v15 = *(_WORD *)(v14 + 4);
    switch ( v15 )
    {
      case 2:
        v16 = v11[15];
        if ( v16 )
        {
          if ( (*(_DWORD *)(v16 + 80) & 0x1001) == 0 )
            goto LABEL_22;
          if ( !v8 )
          {
            v8 = 1;
            VIDMM_GLOBAL::StartPreparation(this, 0xFFFFFFFFLL, 0LL, 0LL, 1000);
            v10 = &unk_1C006E3D8;
          }
          if ( (*((_DWORD *)this + 1764) & 0x8000) == 0 && *((_QWORD *)this + 579) - v11[57] <= v10[*((int *)v11 + 112)] )
            goto LABEL_22;
          *((_DWORD *)v11 + 18) |= 0x40u;
          *((_QWORD *)v2 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v2, 0LL);
          KeLeaveCriticalRegion();
          VIDMM_GLOBAL::MarkGlobalAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)(v9 - 52), 0LL, 0LL);
          LOBYTE(v19) = 1;
          LOBYTE(v26) = 0;
          (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD, int, _QWORD))(*(_QWORD *)v11[15] + 48LL))(
            v11[15],
            v9 - 52,
            v19,
            0LL,
            v26,
            0LL);
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v2);
          *((_QWORD *)this + 895) += v11[1];
          ++*((_DWORD *)this + 1792);
          *((_QWORD *)this + 5589) = 0LL;
        }
        else
        {
          DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v11 + 37));
          if ( (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)(v9 - 52))
            && (*((_DWORD *)v11 + 19) & 8) == 0 )
          {
            *((_QWORD *)v2 + 1) = 0LL;
            ExReleasePushLockExclusiveEx(v2, 0LL);
            KeLeaveCriticalRegion();
            if ( v11[30] )
            {
              LOBYTE(v24) = 1;
              VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL **)this, v24, *((_DWORD *)v11 + 17) & 0x3F, v25);
            }
            VIDMM_GLOBAL::ResetBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)(v9 - 52));
            *((_QWORD *)this + 895) += v11[1];
            ++*((_DWORD *)this + 1792);
            DXGFASTMUTEX::Release((struct _KTHREAD **)v11 + 37);
            DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v2);
            *((_QWORD *)this + 5589) = 0LL;
          }
          else
          {
            DXGFASTMUTEX::Release((struct _KTHREAD **)v11 + 37);
            *((_QWORD *)this + 5589) = 0LL;
          }
        }
        break;
      case 0:
        goto LABEL_24;
      case 3:
        *((_QWORD *)this + 5589) = 0LL;
        break;
      default:
LABEL_22:
        v17 = v28;
        if ( (__int64 *)*v28 != &v27 )
          goto LABEL_27;
        v9[1] = (__int64)v28;
        *v9 = (__int64)&v27;
        *v17 = (__int64)v9;
        v28 = v9;
LABEL_24:
        *((_QWORD *)this + 5589) = 0LL;
        break;
    }
  }
  if ( (__int64 *)v27 != &v27 )
  {
    v18 = v3[1];
    if ( (__int64 **)v9[1] != v3
      || (__int64 **)*v18 != v3
      || *(__int64 **)(v27 + 8) != &v27
      || (__int64 *)*v28 != &v27
      || (*v18 = (__int64)&v27,
          v20 = v28,
          v3[1] = v28,
          *v20 = (__int64)v3,
          v21 = v27,
          v28 = v18,
          *(__int64 **)(v27 + 8) != &v27)
      || (__int64 *)*v18 != &v27 )
    {
LABEL_27:
      __fastfail(3u);
    }
    *v18 = v27;
    *(_QWORD *)(v21 + 8) = v18;
  }
  v22 = *v3;
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 )
    VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
  if ( VIDMM_GLOBAL::UnderCleanupLimit(this) )
  {
    *((_QWORD *)this + 891) = *((_QWORD *)this + 579);
    if ( v22 != (__int64 *)v3 )
      v6 = -qword_1C006E3C8;
  }
LABEL_7:
  VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v6, 4LL);
}
