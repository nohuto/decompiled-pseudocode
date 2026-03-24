/*
 * XREFs of ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C0108B80
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0109440 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002A00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002AF4 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044FC (-ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkTryReferenceDxgResource@@YAEPEAVDXGRESOURCE@@@Z @ 0x1C00D6D3C (-DxgkTryReferenceDxgResource@@YAEPEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00EF950 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FF580 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01093F4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C010B170 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C010C968 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C011DC54 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C015352C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C015CCC0 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 */

__int64 __fastcall ValidateDestroyAllocation(
        struct _KTHREAD **a1,
        struct DXGDEVICE *a2,
        unsigned int a3,
        struct _EX_RUNDOWN_REF *a4,
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
  unsigned int v19; // esi
  struct _KTHREAD *v20; // r9
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rax
  struct DXGRESOURCE *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rax
  unsigned int v30; // ebx
  __int64 v31; // r8
  struct _KTHREAD *v32; // rax
  _QWORD *v33; // rax
  struct _EX_RUNDOWN_REF **v34; // r15
  struct DXGRESOURCE *v35; // rbx
  _QWORD *v36; // rax
  __int64 v37; // rdx
  struct _KTHREAD *v38; // r8
  int v39; // edx
  struct _EX_RUNDOWN_REF *v40; // rbx
  __int64 v41; // rdx
  ULONG_PTR i; // r8
  unsigned int v43; // edx
  __int64 v44; // rax
  struct _KTHREAD *v45; // r10
  int v46; // r9d
  __int64 v47; // rdx
  __int64 v48; // rdx
  unsigned int v49; // ebx
  struct DXGDEVICE *v50; // r14
  struct _EX_RUNDOWN_REF *v51; // rax
  __int64 Count_low; // rsi
  unsigned int v53; // ebx
  struct _KTHREAD *v54; // r9
  int v55; // edx
  __int64 v56; // rdx
  __int64 v57; // rax
  struct _EX_RUNDOWN_REF *v58; // rdx
  __int64 v59; // rdx
  struct _KTHREAD *v60; // rcx
  __int64 v61; // r8
  struct _EX_RUNDOWN_REF *v62; // rax
  unsigned int v63; // r9d
  ULONG_PTR v64; // rcx
  struct _KTHREAD *v65; // r9
  int v66; // r8d
  struct _EX_RUNDOWN_REF *v67; // rbx
  __int64 v68; // rsi
  struct _EX_RUNDOWN_REF *v69; // rdx
  __int64 v70; // rdx
  struct _EX_RUNDOWN_REF *v71; // rdi
  __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rdx
  _QWORD *v77; // rax
  struct _EX_RUNDOWN_REF *v78; // rbx
  __int64 v79; // r14
  unsigned int v80; // r8d
  struct _EX_RUNDOWN_REF *v81; // rsi
  __int64 v82; // rax
  struct _KTHREAD *v83; // rdx
  __int64 v84; // rbx
  __int64 v85; // rax
  struct _EX_RUNDOWN_REF *v86; // [rsp+20h] [rbp-61h] BYREF
  struct DXGRESOURCE *v87; // [rsp+28h] [rbp-59h] BYREF
  struct _EX_RUNDOWN_REF **v88; // [rsp+30h] [rbp-51h] BYREF
  struct _EX_RUNDOWN_REF *v89; // [rsp+38h] [rbp-49h] BYREF
  struct _EX_RUNDOWN_REF *Count; // [rsp+40h] [rbp-41h] BYREF
  struct _EX_RUNDOWN_REF *v91; // [rsp+48h] [rbp-39h] BYREF
  struct _EX_RUNDOWN_REF *v92; // [rsp+50h] [rbp-31h] BYREF
  struct _EX_RUNDOWN_REF *v93; // [rsp+58h] [rbp-29h] BYREF
  struct _EX_RUNDOWN_REF *v94; // [rsp+60h] [rbp-21h] BYREF
  DXGPUSHLOCK *v95; // [rsp+68h] [rbp-19h] BYREF
  char *v96; // [rsp+70h] [rbp-11h]
  int v97; // [rsp+78h] [rbp-9h]
  struct DXGALLOCATION *v98; // [rsp+D0h] [rbp+4Fh] BYREF
  struct DXGDEVICE *v99; // [rsp+D8h] [rbp+57h]
  char v100; // [rsp+E0h] [rbp+5Fh]
  struct _EX_RUNDOWN_REF *v101; // [rsp+E8h] [rbp+67h]

  v101 = a4;
  v99 = a2;
  v8 = a3;
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v87, 0LL);
  v12 = 0;
  v96 = (char *)(a1 + 26);
  v13 = 0;
  if ( a1 != (struct _KTHREAD **)-208LL && a1[27] == KeGetCurrentThread() )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1 + 26, v11);
    *(_QWORD *)(v14 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = v96;
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
  v97 = 2;
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
        *(_QWORD *)(v23 + 24) = 316LL;
        WdLogEvent5_WdError(v23);
      }
    }
    v24 = 0LL;
LABEL_18:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v91, v24);
    DXGRESOURCEREFERENCE::MoveAssign(&v87, &v91);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v91, v25);
    if ( !v87 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
      v30 = -1073741811;
      v29[3] = a2;
      v29[4] = v8;
      v29[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v29);
      goto LABEL_70;
    }
    v31 = *((unsigned int *)a1 + 64);
    if ( v19 < (unsigned int)v31 )
    {
      v32 = a1[30];
      v27 = 2LL * v19;
      v26 = *((_DWORD *)v32 + 4 * v19 + 2) >> 14;
      LOBYTE(v26) = (*((_DWORD *)v32 + 4 * v19 + 2) & 0x4000) != 0;
      if ( (*((_DWORD *)v32 + 4 * v19 + 2) & 0x4000) != 0 )
      {
        v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v31);
        v33[3] = a2;
        v33[4] = v8;
        v33[5] = -1073741267LL;
        WdLogEvent5_WdWarning(v33);
        v34 = a6;
        goto LABEL_80;
      }
    }
    v35 = v87;
    if ( *((struct DXGDEVICE **)v87 + 1) != a2 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v31);
      v36[3] = a2;
      v36[4] = v35;
      v36[5] = *((_QWORD *)v35 + 1);
      v36[6] = -1073741811LL;
      WdLogEvent5_WdWarning(v36);
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v88, 0LL);
      DXGRESOURCEREFERENCE::MoveAssign(&v87, &v88);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v88, v37);
      v34 = a6;
      goto LABEL_80;
    }
    if ( v19 < (unsigned int)v31 )
    {
      v38 = a1[30];
      v39 = *((_DWORD *)v38 + 4 * v19 + 2);
      if ( (((unsigned int)v8 >> 25) & 0x60) == (*((_BYTE *)v38 + 16 * v19 + 8) & 0x60)
        && (v39 & 0x2000) == 0
        && (v39 & 0x1F) != 0 )
      {
        *((_DWORD *)v38 + 4 * (((unsigned int)v8 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
      }
    }
    v40 = (struct _EX_RUNDOWN_REF *)v87;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v95);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v89, 0LL);
    DXGRESOURCEREFERENCE::MoveAssign(&v87, &v89);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v89, v41);
    DxgkUnreferenceDxgResource((struct DXGRESOURCE *)v40);
    ExWaitForRundownProtectionRelease(v40 + 9);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)&v40[10]);
    DXGAUTOPUSHLOCK::AcquireExclusive(&v95);
    for ( i = v40[3].Count; i; i = *(_QWORD *)(i + 64) )
    {
      v43 = *(_DWORD *)(i + 16);
      if ( v43 )
      {
        v44 = (v43 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v44 < *((_DWORD *)a1 + 64) )
        {
          v45 = a1[30];
          v46 = *((_DWORD *)v45 + 4 * v44 + 2);
          if ( ((v43 >> 25) & 0x60) == (*((_BYTE *)v45 + 16 * v44 + 8) & 0x60)
            && (v46 & 0x2000) == 0
            && (v46 & 0x1F) != 0 )
          {
            *((_DWORD *)v45 + 4 * ((v43 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
          }
        }
      }
    }
    ExInitializeRundownProtection(v40 + 9);
    DxgkTryReferenceDxgResource(v40);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&Count, (struct DXGRESOURCE *)v40);
    DXGRESOURCEREFERENCE::MoveAssign(&v87, &Count);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&Count, v47);
    DXGAUTOPUSHLOCK::ReleaseExclusive((DXGAUTOPUSHLOCK *)&v95);
    DXGFASTMUTEX::Release((struct _KTHREAD **)&v40[10], v48);
    *a7 = v87;
LABEL_69:
    v30 = v12;
    goto LABEL_70;
  }
  v49 = a5;
  v34 = a6;
  v100 = 0;
  Count = 0LL;
  if ( !a5 )
  {
LABEL_66:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v95);
    if ( v49 )
    {
      v68 = v49;
      do
      {
        v69 = *v34;
        v98 = 0LL;
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v92, v69);
        DXGALLOCATIONREFERENCE::MoveAssign(&v98, &v92);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v92, v70);
        v71 = (struct _EX_RUNDOWN_REF *)v98;
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v93, 0LL);
        DXGALLOCATIONREFERENCE::MoveAssign(&v98, &v93);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v93, v72);
        DxgkUnreferenceDxgAllocation((struct DXGALLOCATION *)v71);
        ExWaitForRundownProtectionRelease(v71 + 11);
        ExInitializeRundownProtection(v71 + 11);
        DxgkReferenceDxgAllocation((struct DXGALLOCATION *)v71);
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v94, v71);
        DXGALLOCATIONREFERENCE::MoveAssign(&v98, &v94);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v94, v73);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v98, v74);
        ++v34;
        --v68;
      }
      while ( v68 );
    }
    goto LABEL_69;
  }
  v50 = v99;
  v51 = a4;
  v89 = a4;
  v88 = a6;
  while ( 1 )
  {
    Count_low = LODWORD(v51->Count);
    v53 = (LODWORD(v51->Count) >> 6) & 0xFFFFFF;
    if ( v53 >= *((_DWORD *)a1 + 64) )
      goto LABEL_48;
    v54 = a1[30];
    v55 = *((_DWORD *)v54 + 4 * v53 + 2);
    if ( (((unsigned int)Count_low >> 25) & 0x60) != (*((_BYTE *)v54 + 16 * v53 + 8) & 0x60)
      || (v55 & 0x2000) != 0
      || (v55 & 0x1F) == 0 )
    {
      goto LABEL_48;
    }
    v56 = v55 & 0x1F;
    if ( (_BYTE)v56 != 5 )
    {
      v57 = WdLogNewEntry5_WdError(((unsigned int)Count_low >> 25) & 0x60, v56);
      *(_QWORD *)(v57 + 24) = 316LL;
      WdLogEvent5_WdError(v57);
LABEL_48:
      v58 = 0LL;
      goto LABEL_49;
    }
    v58 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v54 + 2 * v53);
LABEL_49:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v86, v58);
    v62 = v86;
    if ( !v86 )
      break;
    v63 = *((_DWORD *)a1 + 64);
    if ( v53 < v63 )
    {
      v60 = a1[30];
      v59 = 2LL * v53;
      v61 = *((_DWORD *)v60 + 4 * v53 + 2) >> 14;
      LOBYTE(v61) = (*((_DWORD *)v60 + 4 * v53 + 2) & 0x4000) != 0;
      if ( (*((_DWORD *)v60 + 4 * v53 + 2) & 0x4000) != 0 )
      {
        v77 = (_QWORD *)WdLogNewEntry5_WdWarning(v60, v59, v61);
        v77[5] = -1073741267LL;
        goto LABEL_77;
      }
    }
    if ( (struct DXGDEVICE *)v86[1].Count != v50 )
    {
      v77 = (_QWORD *)WdLogNewEntry5_WdWarning(v60, v59, v61);
      v77[3] = v50;
      v77[4] = v86;
      v77[5] = v86[1].Count;
      v77[6] = -1073741811LL;
      goto LABEL_78;
    }
    if ( !v100 )
    {
      Count = (struct _EX_RUNDOWN_REF *)v86[5].Count;
      v100 = 1;
    }
    v64 = v86[5].Count;
    if ( (struct _EX_RUNDOWN_REF *)v64 != Count )
    {
LABEL_73:
      v77 = (_QWORD *)WdLogNewEntry5_WdWarning(v64, v59, v61);
      v77[3] = v50;
      v77[4] = -1073741811LL;
      goto LABEL_78;
    }
    if ( v64 )
    {
      v59 = *(unsigned int *)(v64 + 4);
      if ( (v59 & 1) != 0 )
        goto LABEL_73;
      if ( !DxgkTryReferenceDxgResource((struct _EX_RUNDOWN_REF *)v64) )
      {
        LOBYTE(v12) = 1;
        goto LABEL_79;
      }
      LODWORD(v86[9].Count) |= 0x100000u;
      v63 = *((_DWORD *)a1 + 64);
      v62 = v86;
    }
    if ( v53 < v63 )
    {
      v65 = a1[30];
      v59 = ((unsigned int)Count_low >> 25) & 0x60;
      v66 = *((_DWORD *)v65 + 4 * v53 + 2);
      if ( (((unsigned int)Count_low >> 25) & 0x60) == (*((_BYTE *)v65 + 16 * v53 + 8) & 0x60)
        && (v66 & 0x2000) == 0
        && (v66 & 0x1F) != 0 )
      {
        *((_DWORD *)v65 + 4 * (((unsigned int)Count_low >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
        v62 = v86;
      }
    }
    v67 = (struct _EX_RUNDOWN_REF *)v88;
    *v88 = v62;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v86, v59);
    v51 = (struct _EX_RUNDOWN_REF *)((char *)&v89->Ptr + 4);
    v88 = (struct _EX_RUNDOWN_REF **)&v67[1];
    v49 = a5;
    ++v13;
    v89 = (struct _EX_RUNDOWN_REF *)((char *)v89 + 4);
    if ( v13 >= a5 )
      goto LABEL_66;
  }
  v77 = (_QWORD *)WdLogNewEntry5_WdWarning(v60, v59, v61);
  v77[5] = -1073741811LL;
LABEL_77:
  v77[3] = v50;
  v77[4] = Count_low;
LABEL_78:
  WdLogEvent5_WdWarning(v77);
LABEL_79:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v86, v59);
LABEL_80:
  if ( !v87 )
  {
    if ( v13 )
    {
      v78 = v101;
      v79 = v13;
      do
      {
        v80 = v78->Count;
        v81 = *v34;
        v82 = (LODWORD(v78->Count) >> 6) & 0xFFFFFF;
        if ( (unsigned int)v82 < *((_DWORD *)a1 + 64) )
        {
          v83 = a1[30];
          if ( ((v80 >> 25) & 0x60) == (*((_BYTE *)v83 + 16 * v82 + 8) & 0x60)
            && (*((_DWORD *)v83 + 4 * v82 + 2) & 0x1F) != 0 )
          {
            v84 = 2LL * ((v80 >> 6) & 0xFFFFFF);
            if ( (*((_DWORD *)v83 + 4 * ((v80 >> 6) & 0xFFFFFF) + 2) & 0x2000) == 0 )
            {
              v85 = WdLogNewEntry5_WdAssertion((v80 >> 25) & 0x60, v83);
              *(_QWORD *)(v85 + 24) = 222LL;
              WdLogEvent5_WdAssertion(v85);
              v83 = a1[30];
            }
            *((_DWORD *)v83 + 2 * v84 + 2) &= ~0x2000u;
            v78 = v101;
          }
        }
        if ( (v81[9].Count & 0x100000) != 0 )
        {
          DxgkUnreferenceDxgResource((struct DXGRESOURCE *)v81[5].Count);
          LODWORD(v81[9].Count) &= ~0x100000u;
        }
        v78 = (struct _EX_RUNDOWN_REF *)((char *)v78 + 4);
        ++v34;
        v101 = v78;
        --v79;
      }
      while ( v79 );
    }
    if ( (_BYTE)v12 )
    {
      v12 = 255;
      goto LABEL_69;
    }
  }
  v30 = -1073741811;
LABEL_70:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v95);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v87, v75);
  return v30;
}
