/*
 * XREFs of ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C010BEA0
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010C740 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A760 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000A884 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A958 (-ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CE00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkTryReferenceDxgResource@@YAEPEAVDXGRESOURCE@@@Z @ 0x1C00D31D4 (-DxgkTryReferenceDxgResource@@YAEPEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FEE50 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C010183C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C0104248 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C010C6A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C010C6F8 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C010E310 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C010EE60 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0124724 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall ValidateDestroyAllocation(
        struct _KTHREAD **a1,
        struct DXGDEVICE *a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned int a5,
        struct _EX_RUNDOWN_REF **a6,
        struct DXGRESOURCE **a7)
{
  __int64 v8; // r14
  __int64 v11; // rdx
  int v12; // r12d
  unsigned int v13; // r13d
  __int64 v14; // rax
  char *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  unsigned int v19; // ebx
  struct _KTHREAD *v20; // r9
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rax
  struct DXGRESOURCE *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  struct _EX_RUNDOWN_REF *v28; // rdi
  _QWORD *v29; // rax
  unsigned int v30; // ebx
  _QWORD *v31; // rax
  struct _EX_RUNDOWN_REF **v32; // r15
  struct _KTHREAD *v33; // r8
  int v34; // edx
  ULONG_PTR i; // r8
  unsigned int v36; // edx
  __int64 v37; // rax
  struct _KTHREAD *v38; // r10
  int v39; // r9d
  __int64 v40; // rdx
  unsigned int v41; // ebx
  const unsigned int *v42; // rax
  struct DXGALLOCATION **v43; // r14
  ULONG_PTR v44; // rdi
  unsigned int v45; // ebx
  struct _KTHREAD *v46; // r9
  int v47; // edx
  __int64 v48; // rdx
  __int64 v49; // rax
  struct _EX_RUNDOWN_REF *v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  struct _EX_RUNDOWN_REF *v54; // rax
  ULONG_PTR v55; // rcx
  struct _KTHREAD *v56; // r9
  int v57; // r8d
  __int64 v58; // rsi
  struct _EX_RUNDOWN_REF *v59; // rdx
  __int64 v60; // rdx
  struct _EX_RUNDOWN_REF *v61; // rdi
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rdx
  struct _EX_RUNDOWN_REF *v66; // rax
  __int64 v67; // rdx
  const unsigned int *v68; // rbx
  __int64 v69; // r14
  unsigned int v70; // r8d
  struct _EX_RUNDOWN_REF *v71; // rdi
  __int64 v72; // rax
  struct _KTHREAD *v73; // rdx
  __int64 v74; // rbx
  __int64 v75; // rax
  struct DXGRESOURCE *v76; // [rsp+20h] [rbp-61h] BYREF
  struct DXGALLOCATION *v77; // [rsp+28h] [rbp-59h] BYREF
  const unsigned int *v78; // [rsp+30h] [rbp-51h] BYREF
  ULONG_PTR Count; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v80[8]; // [rsp+40h] [rbp-41h] BYREF
  _BYTE v81[8]; // [rsp+48h] [rbp-39h] BYREF
  struct _EX_RUNDOWN_REF *v82; // [rsp+50h] [rbp-31h] BYREF
  struct _EX_RUNDOWN_REF *v83; // [rsp+58h] [rbp-29h] BYREF
  struct _EX_RUNDOWN_REF *v84; // [rsp+60h] [rbp-21h] BYREF
  DXGPUSHLOCK *v85; // [rsp+68h] [rbp-19h] BYREF
  char *v86; // [rsp+70h] [rbp-11h]
  int v87; // [rsp+78h] [rbp-9h]
  struct _EX_RUNDOWN_REF *v88; // [rsp+D0h] [rbp+4Fh] BYREF
  struct DXGDEVICE *v89; // [rsp+D8h] [rbp+57h]
  char v90; // [rsp+E0h] [rbp+5Fh]
  const unsigned int *v91; // [rsp+E8h] [rbp+67h]

  v91 = a4;
  v89 = a2;
  v8 = a3;
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v76, 0LL);
  v12 = 0;
  v86 = (char *)(a1 + 26);
  v13 = 0;
  if ( a1 != (struct _KTHREAD **)-208LL && a1[27] == KeGetCurrentThread() )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1 + 26, v11);
    *(_QWORD *)(v14 + 24) = 1569LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = v86;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v15, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v18 = *((_DWORD *)v15 + 6);
      if ( v18 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, &EventBlockThread, v17, v18);
    }
    ExAcquirePushLockExclusiveEx(v15, 0LL);
  }
  *((_QWORD *)v15 + 1) = KeGetCurrentThread();
  v87 = 2;
  if ( (_DWORD)v8 )
  {
    v19 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
    if ( v19 < *((_DWORD *)a1 + 64) )
    {
      v20 = a1[30];
      v21 = *((_DWORD *)v20 + 4 * v19 + 2);
      if ( (((unsigned int)v8 >> 25) & 0x60) == (*((_BYTE *)v20 + 16 * v19 + 8) & 0x60)
        && (v21 & 0x2000) == 0
        && (v21 & 0x1F) != 0 )
      {
        v22 = v21 & 0x1F;
        if ( (_BYTE)v22 == 4 )
        {
          v24 = (struct DXGRESOURCE *)*((_QWORD *)v20 + 2 * v19);
          goto LABEL_18;
        }
        v23 = WdLogNewEntry5_WdError(((unsigned int)v8 >> 25) & 0x60, v22);
        *(_QWORD *)(v23 + 24) = 267LL;
        WdLogEvent5_WdError(v23);
      }
    }
    v24 = 0LL;
LABEL_18:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v80, v24);
    DXGRESOURCEREFERENCE::MoveAssign(&v76, v80);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v80);
    v28 = (struct _EX_RUNDOWN_REF *)v76;
    if ( !v76 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
      v30 = -1073741811;
      v29[3] = a2;
      v29[4] = v8;
      v29[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v29);
      goto LABEL_65;
    }
    if ( *((struct DXGDEVICE **)v76 + 1) != a2 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
      v30 = -1073741811;
      v31[3] = a2;
      v31[4] = v28;
      v31[5] = v28[1].Count;
      v31[6] = -1073741811LL;
      WdLogEvent5_WdWarning(v31);
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v81, 0LL);
      DXGRESOURCEREFERENCE::MoveAssign(&v76, v81);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v81);
      v32 = a6;
      goto LABEL_73;
    }
    if ( v19 < *((_DWORD *)a1 + 64) )
    {
      v33 = a1[30];
      v34 = *((_DWORD *)v33 + 4 * v19 + 2);
      if ( (((unsigned int)v8 >> 25) & 0x60) == (*((_BYTE *)v33 + 16 * v19 + 8) & 0x60)
        && (v34 & 0x2000) == 0
        && (v34 & 0x1F) != 0 )
      {
        *((_DWORD *)v33 + 4 * (((unsigned int)v8 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v85);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v78, 0LL);
    DXGRESOURCEREFERENCE::MoveAssign(&v76, &v78);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v78);
    DxgkUnreferenceDxgResource((struct DXGRESOURCE *)v28);
    ExWaitForRundownProtectionRelease(v28 + 9);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)&v28[10]);
    DXGAUTOPUSHLOCK::AcquireExclusive(&v85);
    for ( i = v28[3].Count; i; i = *(_QWORD *)(i + 64) )
    {
      v36 = *(_DWORD *)(i + 16);
      if ( v36 )
      {
        v37 = (v36 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v37 < *((_DWORD *)a1 + 64) )
        {
          v38 = a1[30];
          v39 = *((_DWORD *)v38 + 4 * v37 + 2);
          if ( ((v36 >> 25) & 0x60) == (*((_BYTE *)v38 + 16 * v37 + 8) & 0x60)
            && (v39 & 0x2000) == 0
            && (v39 & 0x1F) != 0 )
          {
            *((_DWORD *)v38 + 4 * ((v36 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
          }
        }
      }
    }
    ExInitializeRundownProtection(v28 + 9);
    DxgkTryReferenceDxgResource(v28);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&Count, (struct DXGRESOURCE *)v28);
    DXGRESOURCEREFERENCE::MoveAssign(&v76, &Count);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&Count);
    DXGAUTOPUSHLOCK::ReleaseExclusive((DXGAUTOPUSHLOCK *)&v85);
    DXGFASTMUTEX::Release((struct _KTHREAD **)&v28[10], v40);
    *a7 = v76;
LABEL_64:
    v30 = v12;
    goto LABEL_65;
  }
  v41 = a5;
  v32 = a6;
  v90 = 0;
  Count = 0LL;
  if ( !a5 )
  {
LABEL_61:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v85);
    if ( v41 )
    {
      v58 = v41;
      do
      {
        v59 = *v32;
        v77 = 0LL;
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v82, v59);
        DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v77, &v82);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v82, v60);
        v61 = (struct _EX_RUNDOWN_REF *)v77;
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v83, 0LL);
        DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v77, &v83);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v83, v62);
        DxgkUnreferenceDxgAllocation((struct DXGALLOCATION *)v61);
        ExWaitForRundownProtectionRelease(v61 + 11);
        ExInitializeRundownProtection(v61 + 11);
        DxgkReferenceDxgAllocation(v61);
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v84, v61);
        DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v77, &v84);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v84, v63);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v77, v64);
        ++v32;
        --v58;
      }
      while ( v58 );
    }
    goto LABEL_64;
  }
  v42 = a4;
  v43 = (struct DXGALLOCATION **)a6;
  v78 = a4;
  while ( 1 )
  {
    v44 = *v42;
    v45 = (*v42 >> 6) & 0xFFFFFF;
    if ( v45 >= *((_DWORD *)a1 + 64) )
      goto LABEL_45;
    v46 = a1[30];
    v47 = *((_DWORD *)v46 + 4 * v45 + 2);
    if ( (((unsigned int)v44 >> 25) & 0x60) != (*((_BYTE *)v46 + 16 * v45 + 8) & 0x60)
      || (v47 & 0x2000) != 0
      || (v47 & 0x1F) == 0 )
    {
      goto LABEL_45;
    }
    v48 = v47 & 0x1F;
    if ( (_BYTE)v48 != 5 )
    {
      v49 = WdLogNewEntry5_WdError(((unsigned int)v44 >> 25) & 0x60, v48);
      *(_QWORD *)(v49 + 24) = 267LL;
      WdLogEvent5_WdError(v49);
LABEL_45:
      v50 = 0LL;
      goto LABEL_46;
    }
    v50 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v46 + 2 * v45);
LABEL_46:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v88, v50);
    v54 = v88;
    if ( !v88 )
      break;
    if ( (struct DXGDEVICE *)v88[1].Count != v89 )
    {
      v66 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdWarning(v89, v51, v53);
      v30 = -1073741811;
      v66[3].Count = (ULONG_PTR)v89;
      v66[4].Count = (ULONG_PTR)v88;
      v66[5].Count = v88[1].Count;
      v66[6].Count = -1073741811LL;
      goto LABEL_72;
    }
    if ( !v90 )
    {
      Count = v88[5].Count;
      v90 = 1;
    }
    v55 = v88[5].Count;
    if ( v55 != Count )
    {
LABEL_67:
      v66 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdWarning(v55, v51, v53);
      v30 = -1073741811;
      v66[4].Count = -1073741811LL;
      goto LABEL_71;
    }
    if ( v55 )
    {
      v51 = *(unsigned int *)(v55 + 4);
      if ( (v51 & 1) != 0 )
        goto LABEL_67;
      if ( !DxgkTryReferenceDxgResource((struct _EX_RUNDOWN_REF *)v55) )
      {
        LOBYTE(v12) = 1;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v88, v51);
        v30 = -1073741811;
        goto LABEL_73;
      }
      LODWORD(v88[9].Count) |= 0x100000u;
      v54 = v88;
    }
    if ( v45 < *((_DWORD *)a1 + 64) )
    {
      v56 = a1[30];
      v51 = ((unsigned int)v44 >> 25) & 0x60;
      v57 = *((_DWORD *)v56 + 4 * v45 + 2);
      if ( (((unsigned int)v44 >> 25) & 0x60) == (*((_BYTE *)v56 + 16 * v45 + 8) & 0x60)
        && (v57 & 0x2000) == 0
        && (v57 & 0x1F) != 0 )
      {
        *((_DWORD *)v56 + 4 * (((unsigned int)v44 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
        v54 = v88;
      }
    }
    *v43 = (struct DXGALLOCATION *)v54;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v88, v51);
    ++v13;
    v41 = a5;
    v42 = v78 + 1;
    ++v43;
    ++v78;
    if ( v13 >= a5 )
      goto LABEL_61;
  }
  v66 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdWarning(v52, v51, v53);
  v30 = -1073741811;
  v66[4].Count = v44;
  v66[5].Count = -1073741811LL;
LABEL_71:
  v66[3].Count = (ULONG_PTR)v89;
LABEL_72:
  WdLogEvent5_WdWarning(v66);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v88, v67);
LABEL_73:
  if ( !v76 )
  {
    if ( v13 )
    {
      v68 = v91;
      v69 = v13;
      do
      {
        v70 = *v68;
        v71 = *v32;
        v72 = (*v68 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v72 < *((_DWORD *)a1 + 64) )
        {
          v73 = a1[30];
          if ( ((v70 >> 25) & 0x60) == (*((_BYTE *)v73 + 16 * v72 + 8) & 0x60)
            && (*((_DWORD *)v73 + 4 * v72 + 2) & 0x1F) != 0 )
          {
            v74 = 2LL * ((v70 >> 6) & 0xFFFFFF);
            if ( (*((_DWORD *)v73 + 4 * ((v70 >> 6) & 0xFFFFFF) + 2) & 0x2000) == 0 )
            {
              v75 = WdLogNewEntry5_WdAssertion((v70 >> 25) & 0x60, v73);
              *(_QWORD *)(v75 + 24) = 217LL;
              WdLogEvent5_WdAssertion(v75);
              v73 = a1[30];
            }
            *((_DWORD *)v73 + 2 * v74 + 2) &= ~0x2000u;
            v68 = v91;
          }
        }
        if ( (v71[9].Count & 0x100000) != 0 )
        {
          DxgkUnreferenceDxgResource((struct DXGRESOURCE *)v71[5].Count);
          LODWORD(v71[9].Count) &= ~0x100000u;
        }
        ++v68;
        ++v32;
        v91 = v68;
        --v69;
      }
      while ( v69 );
    }
    if ( (_BYTE)v12 )
    {
      v12 = 255;
      goto LABEL_64;
    }
    v30 = -1073741811;
  }
LABEL_65:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v85);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v76);
  return v30;
}
