/*
 * XREFs of ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0069420
 * Callers:
 *     ?VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0001830 (-VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E80 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0065AE4 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1C0069B80 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0069F50 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Lock(VIDMM_GLOBAL *this, __int64 **a2, __int64 a3, void **a4)
{
  __int64 v4; // rbx
  int v8; // r12d
  __int64 v9; // rax
  __int64 *v11; // r15
  __int64 v12; // rdi
  _DWORD *v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // eax
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  int v49; // r9d
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rbx
  _QWORD *v56; // rax
  int v57; // eax
  __int64 v58; // rax
  int v59; // eax
  __int64 *v60; // r9
  __int64 v61; // rdx
  int v62; // r11d
  __int64 v63; // r10
  int v64; // r8d
  char v65; // al
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 *v69; // rax
  struct VIDMM_PAGING_QUEUE *v70; // rdx
  int v71; // [rsp+40h] [rbp-78h] BYREF
  __int64 v72; // [rsp+44h] [rbp-74h]
  int v73; // [rsp+4Ch] [rbp-6Ch]
  struct _VIDMM_MULTI_ALLOC *v74; // [rsp+50h] [rbp-68h]
  __int64 v75; // [rsp+58h] [rbp-60h]
  void **v76; // [rsp+60h] [rbp-58h]
  int v77; // [rsp+68h] [rbp-50h]
  __int64 v78; // [rsp+6Ch] [rbp-4Ch]
  __int64 v79; // [rsp+74h] [rbp-44h]
  __int64 v80; // [rsp+7Ch] [rbp-3Ch]
  __int64 v81; // [rsp+84h] [rbp-34h]
  int v82; // [rsp+8Ch] [rbp-2Ch]
  __int64 v83; // [rsp+D8h] [rbp+20h] BYREF

  v4 = (unsigned int)a3;
  *a4 = 0LL;
  v8 = 0;
  if ( (_DWORD)a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v9 + 24) = v4;
    *(_QWORD *)(v9 + 32) = 0LL;
    WdLogEvent5_WdAssertion(v9);
    return 3221225485LL;
  }
  v11 = *a2;
  v12 = **a2;
  v13 = *(_DWORD **)(v12 + 496);
  if ( (*v13 & 1) == 0 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13, a2, a3);
    *(_QWORD *)(v14 + 24) = 22407LL;
    WdLogEvent5_WdAssertion(v14);
    return 3221225485LL;
  }
  v15 = a2[12];
  v16 = *((unsigned __int16 *)v15 + 2);
  if ( (_WORD)v16 )
  {
    v17 = *((unsigned __int16 *)v15 + 2);
    if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
    {
      v21 = WdLogNewEntry5_WdAssertion(v19, v18, v20);
      *(_QWORD *)(v21 + 24) = a2;
      *(_QWORD *)(v21 + 32) = v17;
      WdLogEvent5_WdAssertion(v21);
      return 3221225485LL;
    }
    v22 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v22 + 24) = a2;
    *(_QWORD *)(v22 + 32) = v17;
    WdLogEvent5_WdError(v22);
    v13 = *(_DWORD **)(v12 + 496);
  }
  if ( (*v13 & 8) == 0 )
  {
    v23 = *(_QWORD *)v11[1];
    if ( v23 != PsGetCurrentProcess(v13) && (*(_DWORD *)(v12 + 80) & 0x1000) == 0 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v24, v16, a3);
      *(_QWORD *)(v25 + 24) = 22442LL;
      WdLogEvent5_WdAssertion(v25);
      return 3221225485LL;
    }
  }
  v26 = **(_DWORD **)(v12 + 496);
  if ( (v26 & 0x20000000) != 0 && (v26 & 0x40000000) == 0 )
  {
    v27 = *((_QWORD *)this + 3);
    v28 = *(_DWORD *)(v27 + 348);
    if ( (v28 & 0x10) == 0 && (v28 & 8) == 0 && (*(_DWORD *)(v27 + 2036) & 0x80u) == 0 && v11 != *(__int64 **)(v12 + 96) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v27, v16, a3);
      *(_QWORD *)(v29 + 24) = 22458LL;
      WdLogEvent5_WdAssertion(v29);
      return 3221225485LL;
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v12 + 472, 0LL);
  if ( *(_DWORD *)(v12 + 336) && (*(_DWORD *)(v12 + 84) & 0x20) == 0 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v31, v30, v32);
    *(_QWORD *)(v33 + 24) = 22469LL;
LABEL_37:
    WdLogEvent5_WdAssertion(v33);
    ExReleasePushLockExclusiveEx(v12 + 472, 0LL);
    KeLeaveCriticalRegion();
    return 3221225485LL;
  }
  if ( !*((_DWORD *)v11 + 19) )
  {
    v34 = *(unsigned int *)(v12 + 76);
    if ( (*(_DWORD *)(v12 + 80) & 0x80u) == 0 )
    {
      if ( (v34 & 0x80u) == 0LL )
      {
        v33 = WdLogNewEntry5_WdAssertion(v31, v34, v32);
        *(_QWORD *)(v33 + 24) = 22520LL;
        goto LABEL_37;
      }
    }
    else
    {
      v35 = v34 & 0x40;
      if ( (**(_DWORD **)(v12 + 496) & 4) != 0 )
      {
        if ( !(_DWORD)v35 )
        {
          v36 = *(unsigned int *)(*((_QWORD *)this + 3) + 348LL);
          if ( (v36 & 8) == 0 )
          {
            v33 = WdLogNewEntry5_WdAssertion(v36, v35, v32);
            *(_QWORD *)(v33 + 24) = 22495LL;
            goto LABEL_37;
          }
        }
      }
      else if ( *((_BYTE *)a2 + 25) & 1 | *((_DWORD *)a2 + 38) )
      {
        v37 = *(unsigned int *)(v12 + 76);
        if ( (v37 & 0xD0000) == 0 )
        {
          v38 = *(unsigned __int8 *)(1584 * (v37 & 0x3F) + *((_QWORD *)this + 5027) + 437);
          if ( (v38 & 0x40) != 0 && !(_DWORD)v35 && (v37 & 0x100) == 0 )
          {
            v33 = WdLogNewEntry5_WdAssertion(v38, v35, v37);
            *(_QWORD *)(v33 + 24) = 22505LL;
            goto LABEL_37;
          }
        }
      }
    }
  }
  if ( v11[3] )
  {
    v39 = *(_QWORD *)(v12 + 312);
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v39 + 16) == KeGetCurrentThread() )
    {
      v43 = *(_DWORD *)(v39 + 24);
      if ( v43 <= 0 )
      {
        v44 = WdLogNewEntry5_WdAssertion(v41, v40, v42);
        *(_QWORD *)(v44 + 24) = 659LL;
        WdLogEvent5_WdAssertion(v44);
        v43 = *(_DWORD *)(v39 + 24);
      }
      v45 = v43 + 1;
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v39, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v49 = *(_DWORD *)(v39 + 28);
          if ( v49 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v47, &EventBlockThread, v48, v49);
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v39 + 8));
        ExAcquirePushLockExclusiveEx(v39, 0LL);
      }
      if ( *(_QWORD *)(v39 + 16) )
      {
        v50 = WdLogNewEntry5_WdAssertion(v47, v46, v48);
        *(_QWORD *)(v50 + 24) = 683LL;
        WdLogEvent5_WdAssertion(v50);
      }
      if ( *(_DWORD *)(v39 + 24) )
      {
        v51 = WdLogNewEntry5_WdAssertion(v47, v46, v48);
        *(_QWORD *)(v51 + 24) = 684LL;
        WdLogEvent5_WdAssertion(v51);
      }
      *(_QWORD *)(v39 + 16) = KeGetCurrentThread();
      v45 = 1;
    }
    *(_DWORD *)(v39 + 24) = v45;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v11[1] + 24) + 152LL))(*(_QWORD *)(v11[1] + 24), v11[3]);
    v55 = *(_QWORD *)(v12 + 312);
    if ( *(struct _KTHREAD **)(v55 + 16) != KeGetCurrentThread() )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v53, v52);
      v56[3] = 275LL;
      v56[4] = 4LL;
      v56[5] = v55;
      v56[6] = 0LL;
      v56[7] = 0LL;
      WdLogEvent5_WdCriticalError(v56);
    }
    v57 = *(_DWORD *)(v55 + 24);
    if ( v57 <= 0 )
    {
      v58 = WdLogNewEntry5_WdAssertion(v53, v52, v54);
      *(_QWORD *)(v58 + 24) = 703LL;
      WdLogEvent5_WdAssertion(v58);
      v57 = *(_DWORD *)(v55 + 24);
    }
    v59 = v57 - 1;
    *(_DWORD *)(v55 + 24) = v59;
    if ( !v59 )
    {
      *(_QWORD *)(v55 + 16) = 0LL;
      ExReleasePushLockExclusiveEx(v55, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  v60 = *a2;
  v83 = 0LL;
  v61 = *v60;
  if ( !*((_DWORD *)v60 + 19) )
  {
    v62 = *(_DWORD *)(v61 + 80);
    v63 = *(_QWORD *)(v61 + 128);
    LODWORD(v83) = 1;
    if ( (v62 & 0x80u) == 0 )
    {
      LODWORD(v83) = 5;
    }
    else if ( v63 )
    {
      if ( (*((_DWORD *)this + 1762) & 0x20) != 0 )
        goto LABEL_80;
      v64 = *(_DWORD *)(v63 + 80);
      if ( (v64 & 0x1001) == 0 )
      {
        if ( (**(_DWORD **)(v61 + 496) & 4) != 0 && !*(_BYTE *)(v63 + 474) || (v62 & 0x10000) != 0 )
          goto LABEL_80;
        if ( (v64 & 4) != 0 )
        {
          if ( (v60[4] & 1) == 0 )
          {
            LODWORD(v83) = 3;
            if ( *(_QWORD *)(v61 + 256) )
            {
LABEL_72:
              v65 = 1;
              goto LABEL_79;
            }
          }
        }
        else
        {
          if ( (v64 & 0x2000) == 0 )
            goto LABEL_72;
          v66 = *(_QWORD *)(v61 + 96);
          if ( !v66 || (*(_BYTE *)(v66 + 32) & 1) == 0 )
            goto LABEL_72;
          LODWORD(v83) = 0;
        }
      }
    }
  }
  v8 = VIDMM_GLOBAL::LockInternal(this, (struct VIDMM_LOCK2_DATA *)&v83, (struct VIDMM_ALLOC *)a2, a4, 0, 0LL, 0LL);
  v65 = BYTE4(v83);
LABEL_79:
  if ( !v65 )
  {
    ExReleasePushLockExclusiveEx(v12 + 472, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_82;
  }
LABEL_80:
  ExReleasePushLockExclusiveEx(v12 + 472, 0LL);
  KeLeaveCriticalRegion();
  v67 = *(_DWORD *)(v12 + 76) & 0x3F;
  v72 = 0LL;
  v68 = 176 * v67;
  v69 = a2[1];
  v73 = 0;
  v75 = 0LL;
  v78 = 0LL;
  v70 = (struct VIDMM_PAGING_QUEUE *)(v69[9] + v68);
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0;
  v71 = 208;
  v74 = (struct _VIDMM_MULTI_ALLOC *)a2;
  v76 = a4;
  v77 = 0;
  v8 = VIDMM_GLOBAL::QueueDeferredCommand(this, v70, (struct _VIDMM_DEFERRED_COMMAND *)&v71, 1, 0LL);
LABEL_82:
  if ( v8 >= 0 && (*((_BYTE *)this + 40936) & 0x10) == 0 )
    VIDMM_GLOBAL::xWaitForAllPagingEngines(
      this,
      (struct _VIDSCH_SYNC_OBJECT **)this + (*(_DWORD *)(v12 + 76) & 0x3F) + 747,
      (const unsigned __int64 *)(v12 + 168),
      1u,
      (const unsigned __int64 *)this + (*(_DWORD *)(v12 + 76) & 0x3F) + 683,
      *(_DWORD *)(v12 + 76) & 0x3F);
  return (unsigned int)v8;
}
