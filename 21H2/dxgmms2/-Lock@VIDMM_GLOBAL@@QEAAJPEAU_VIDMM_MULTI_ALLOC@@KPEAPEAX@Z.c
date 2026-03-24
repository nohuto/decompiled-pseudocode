/*
 * XREFs of ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C006AE20
 * Callers:
 *     ?VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C00016C0 (-VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0067994 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1C006B580 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C006B950 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
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
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // eax
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  int v50; // r9d
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rbx
  _QWORD *v57; // rax
  int v58; // eax
  __int64 v59; // rax
  int v60; // eax
  __int64 *v61; // r9
  __int64 v62; // rdx
  int v63; // r11d
  __int64 v64; // r10
  int v65; // r8d
  char v66; // al
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 *v70; // rax
  struct VIDMM_PAGING_QUEUE *v71; // rdx
  int v72; // [rsp+40h] [rbp-78h] BYREF
  __int64 v73; // [rsp+44h] [rbp-74h]
  int v74; // [rsp+4Ch] [rbp-6Ch]
  struct _VIDMM_MULTI_ALLOC *v75; // [rsp+50h] [rbp-68h]
  __int64 v76; // [rsp+58h] [rbp-60h]
  void **v77; // [rsp+60h] [rbp-58h]
  int v78; // [rsp+68h] [rbp-50h]
  __int64 v79; // [rsp+6Ch] [rbp-4Ch]
  __int64 v80; // [rsp+74h] [rbp-44h]
  __int64 v81; // [rsp+7Ch] [rbp-3Ch]
  __int64 v82; // [rsp+84h] [rbp-34h]
  int v83; // [rsp+8Ch] [rbp-2Ch]
  __int64 v84; // [rsp+D8h] [rbp+20h] BYREF

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
  v13 = *(_DWORD **)(v12 + 512);
  if ( (*v13 & 1) == 0 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13, a2, a3);
    *(_QWORD *)(v14 + 24) = 22827LL;
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
      v22 = WdLogNewEntry5_WdAssertion(v19, v18, v20);
      *(_QWORD *)(v22 + 24) = a2;
      *(_QWORD *)(v22 + 32) = v17;
      WdLogEvent5_WdAssertion(v22);
      return 3221225485LL;
    }
    v23 = WdLogNewEntry5_WdError(v19, v18, v20, v21);
    *(_QWORD *)(v23 + 24) = a2;
    *(_QWORD *)(v23 + 32) = v17;
    WdLogEvent5_WdError(v23);
    v13 = *(_DWORD **)(v12 + 512);
  }
  if ( (*v13 & 8) == 0 )
  {
    v24 = *(_QWORD *)v11[1];
    if ( v24 != PsGetCurrentProcess(v13, v16, a3) && (*(_DWORD *)(v12 + 80) & 0x1000) == 0 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v25, v16, a3);
      *(_QWORD *)(v26 + 24) = 22862LL;
      WdLogEvent5_WdAssertion(v26);
      return 3221225485LL;
    }
  }
  v27 = **(_DWORD **)(v12 + 512);
  if ( (v27 & 0x20000000) != 0 && (v27 & 0x40000000) == 0 )
  {
    v28 = *((_QWORD *)this + 3);
    v29 = *(_DWORD *)(v28 + 348);
    if ( (v29 & 0x10) == 0 && (v29 & 8) == 0 && (*(_DWORD *)(v28 + 2060) & 0x80u) == 0 && v11 != *(__int64 **)(v12 + 96) )
    {
      v30 = WdLogNewEntry5_WdAssertion(v28, v16, a3);
      *(_QWORD *)(v30 + 24) = 22878LL;
      WdLogEvent5_WdAssertion(v30);
      return 3221225485LL;
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v12 + 488, 0LL);
  if ( *(_DWORD *)(v12 + 336) && (*(_DWORD *)(v12 + 84) & 0x20) == 0 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v32, v31, v33);
    *(_QWORD *)(v34 + 24) = 22889LL;
LABEL_37:
    WdLogEvent5_WdAssertion(v34);
    ExReleasePushLockExclusiveEx(v12 + 488, 0LL);
    KeLeaveCriticalRegion();
    return 3221225485LL;
  }
  if ( !*((_DWORD *)v11 + 19) )
  {
    v35 = *(unsigned int *)(v12 + 76);
    if ( (*(_DWORD *)(v12 + 80) & 0x80u) == 0 )
    {
      if ( (v35 & 0x80u) == 0LL )
      {
        v34 = WdLogNewEntry5_WdAssertion(v32, v35, v33);
        *(_QWORD *)(v34 + 24) = 22940LL;
        goto LABEL_37;
      }
    }
    else
    {
      v36 = v35 & 0x40;
      if ( (**(_DWORD **)(v12 + 512) & 4) != 0 )
      {
        if ( !(_DWORD)v36 )
        {
          v37 = *(unsigned int *)(*((_QWORD *)this + 3) + 348LL);
          if ( (v37 & 8) == 0 )
          {
            v34 = WdLogNewEntry5_WdAssertion(v37, v36, v33);
            *(_QWORD *)(v34 + 24) = 22915LL;
            goto LABEL_37;
          }
        }
      }
      else if ( *((_BYTE *)a2 + 25) & 1 | *((_DWORD *)a2 + 42) )
      {
        v38 = *(unsigned int *)(v12 + 76);
        if ( (v38 & 0xD0000) == 0 )
        {
          v39 = *(unsigned __int8 *)(1584 * (v38 & 0x3F) + *((_QWORD *)this + 5027) + 437);
          if ( (v39 & 0x40) != 0 && !(_DWORD)v36 && (v38 & 0x100) == 0 )
          {
            v34 = WdLogNewEntry5_WdAssertion(v39, v36, v38);
            *(_QWORD *)(v34 + 24) = 22925LL;
            goto LABEL_37;
          }
        }
      }
    }
  }
  if ( v11[3] )
  {
    v40 = *(_QWORD *)(v12 + 312);
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v40 + 16) == KeGetCurrentThread() )
    {
      v44 = *(_DWORD *)(v40 + 24);
      if ( v44 <= 0 )
      {
        v45 = WdLogNewEntry5_WdAssertion(v42, v41, v43);
        *(_QWORD *)(v45 + 24) = 661LL;
        WdLogEvent5_WdAssertion(v45);
        v44 = *(_DWORD *)(v40 + 24);
      }
      v46 = v44 + 1;
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v40, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v50 = *(_DWORD *)(v40 + 28);
          if ( v50 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v48, (const EVENT_DESCRIPTOR *)"g", v49, v50);
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v40 + 8));
        ExAcquirePushLockExclusiveEx(v40, 0LL);
      }
      if ( *(_QWORD *)(v40 + 16) )
      {
        v51 = WdLogNewEntry5_WdAssertion(v48, v47, v49);
        *(_QWORD *)(v51 + 24) = 685LL;
        WdLogEvent5_WdAssertion(v51);
      }
      if ( *(_DWORD *)(v40 + 24) )
      {
        v52 = WdLogNewEntry5_WdAssertion(v48, v47, v49);
        *(_QWORD *)(v52 + 24) = 686LL;
        WdLogEvent5_WdAssertion(v52);
      }
      *(_QWORD *)(v40 + 16) = KeGetCurrentThread();
      v46 = 1;
    }
    *(_DWORD *)(v40 + 24) = v46;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v11[1] + 24) + 152LL))(*(_QWORD *)(v11[1] + 24), v11[3]);
    v56 = *(_QWORD *)(v12 + 312);
    if ( *(struct _KTHREAD **)(v56 + 16) != KeGetCurrentThread() )
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v54, v53);
      v57[3] = 275LL;
      v57[4] = 4LL;
      v57[5] = v56;
      v57[6] = 0LL;
      v57[7] = 0LL;
      WdLogEvent5_WdCriticalError(v57);
    }
    v58 = *(_DWORD *)(v56 + 24);
    if ( v58 <= 0 )
    {
      v59 = WdLogNewEntry5_WdAssertion(v54, v53, v55);
      *(_QWORD *)(v59 + 24) = 705LL;
      WdLogEvent5_WdAssertion(v59);
      v58 = *(_DWORD *)(v56 + 24);
    }
    v60 = v58 - 1;
    *(_DWORD *)(v56 + 24) = v60;
    if ( !v60 )
    {
      *(_QWORD *)(v56 + 16) = 0LL;
      ExReleasePushLockExclusiveEx(v56, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  v61 = *a2;
  v84 = 0LL;
  v62 = *v61;
  if ( !*((_DWORD *)v61 + 19) )
  {
    v63 = *(_DWORD *)(v62 + 80);
    v64 = *(_QWORD *)(v62 + 128);
    LODWORD(v84) = 1;
    if ( (v63 & 0x80u) == 0 )
    {
      LODWORD(v84) = 5;
    }
    else if ( v64 )
    {
      if ( (*((_DWORD *)this + 1762) & 0x20) != 0 )
        goto LABEL_80;
      v65 = *(_DWORD *)(v64 + 80);
      if ( (v65 & 0x1001) == 0 )
      {
        if ( (**(_DWORD **)(v62 + 512) & 4) != 0 && !*(_BYTE *)(v64 + 474) || (v63 & 0x10000) != 0 )
          goto LABEL_80;
        if ( (v65 & 4) != 0 )
        {
          if ( (v61[4] & 1) == 0 )
          {
            LODWORD(v84) = 3;
            if ( *(_QWORD *)(v62 + 256) )
            {
LABEL_72:
              v66 = 1;
              goto LABEL_79;
            }
          }
        }
        else
        {
          if ( (v65 & 0x2000) == 0 )
            goto LABEL_72;
          v67 = *(_QWORD *)(v62 + 96);
          if ( !v67 || (*(_BYTE *)(v67 + 32) & 1) == 0 )
            goto LABEL_72;
          LODWORD(v84) = 0;
        }
      }
    }
  }
  v8 = VIDMM_GLOBAL::LockInternal(this, (struct VIDMM_LOCK2_DATA *)&v84, (struct VIDMM_ALLOC *)a2, a4, 0, 0LL, 0LL);
  v66 = BYTE4(v84);
LABEL_79:
  if ( !v66 )
  {
    ExReleasePushLockExclusiveEx(v12 + 488, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_82;
  }
LABEL_80:
  ExReleasePushLockExclusiveEx(v12 + 488, 0LL);
  KeLeaveCriticalRegion();
  v68 = *(_DWORD *)(v12 + 76) & 0x3F;
  v73 = 0LL;
  v69 = 176 * v68;
  v70 = a2[1];
  v74 = 0;
  v76 = 0LL;
  v79 = 0LL;
  v71 = (struct VIDMM_PAGING_QUEUE *)(v70[9] + v69);
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0;
  v72 = 208;
  v75 = (struct _VIDMM_MULTI_ALLOC *)a2;
  v77 = a4;
  v78 = 0;
  v8 = VIDMM_GLOBAL::QueueDeferredCommand(this, v71, (struct _VIDMM_DEFERRED_COMMAND *)&v72, 1, 0LL);
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
