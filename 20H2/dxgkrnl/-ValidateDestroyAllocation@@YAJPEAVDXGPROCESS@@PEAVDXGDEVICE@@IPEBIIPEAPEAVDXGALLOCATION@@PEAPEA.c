/*
 * XREFs of ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C0106AB0
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01072F0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002AB4 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000434C (-ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkTryReferenceDxgResource@@YAEPEAVDXGRESOURCE@@@Z @ 0x1C00D4B0C (-DxgkTryReferenceDxgResource@@YAEPEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00F60C0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FBFC0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FD740 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01072A4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C0108EC0 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C010A5E8 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C011A4D4 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C0126A70 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C014EADC (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
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
  unsigned int v19; // ebx
  struct _KTHREAD *v20; // r9
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rax
  struct DXGRESOURCE *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct _EX_RUNDOWN_REF *v29; // rdi
  _QWORD *v30; // rax
  unsigned int v31; // ebx
  _QWORD *v32; // rax
  __int64 v33; // rdx
  struct _EX_RUNDOWN_REF **v34; // r15
  struct _KTHREAD *v35; // r8
  int v36; // edx
  __int64 v37; // rdx
  ULONG_PTR i; // r8
  unsigned int v39; // edx
  __int64 v40; // rax
  struct _KTHREAD *v41; // r10
  int v42; // r9d
  __int64 v43; // rdx
  __int64 v44; // rdx
  unsigned int v45; // ebx
  struct _EX_RUNDOWN_REF *v46; // rax
  struct DXGALLOCATION **v47; // r14
  ULONG_PTR Count_low; // rdi
  unsigned int v49; // ebx
  struct _KTHREAD *v50; // r9
  int v51; // edx
  __int64 v52; // rdx
  __int64 v53; // rax
  struct _EX_RUNDOWN_REF *v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  struct _EX_RUNDOWN_REF *v58; // rax
  ULONG_PTR v59; // rcx
  struct _KTHREAD *v60; // r9
  int v61; // r8d
  __int64 v62; // rsi
  struct _EX_RUNDOWN_REF *v63; // rdx
  __int64 v64; // rdx
  struct _EX_RUNDOWN_REF *v65; // rdi
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rdx
  struct _EX_RUNDOWN_REF *v71; // rax
  __int64 v72; // rdx
  struct _EX_RUNDOWN_REF *v73; // rbx
  __int64 v74; // r14
  unsigned int v75; // r8d
  struct _EX_RUNDOWN_REF *v76; // rdi
  __int64 v77; // rax
  struct _KTHREAD *v78; // rdx
  __int64 v79; // rbx
  __int64 v80; // rax
  struct DXGRESOURCE *v81; // [rsp+20h] [rbp-61h] BYREF
  struct DXGALLOCATION *v82; // [rsp+28h] [rbp-59h] BYREF
  struct _EX_RUNDOWN_REF *v83; // [rsp+30h] [rbp-51h] BYREF
  struct _EX_RUNDOWN_REF *Count; // [rsp+38h] [rbp-49h] BYREF
  struct _EX_RUNDOWN_REF *v85; // [rsp+40h] [rbp-41h] BYREF
  struct _EX_RUNDOWN_REF *v86; // [rsp+48h] [rbp-39h] BYREF
  struct _EX_RUNDOWN_REF *v87; // [rsp+50h] [rbp-31h] BYREF
  struct _EX_RUNDOWN_REF *v88; // [rsp+58h] [rbp-29h] BYREF
  struct _EX_RUNDOWN_REF *v89; // [rsp+60h] [rbp-21h] BYREF
  DXGPUSHLOCK *v90; // [rsp+68h] [rbp-19h] BYREF
  char *v91; // [rsp+70h] [rbp-11h]
  int v92; // [rsp+78h] [rbp-9h]
  struct _EX_RUNDOWN_REF *v93; // [rsp+D0h] [rbp+4Fh] BYREF
  struct DXGDEVICE *v94; // [rsp+D8h] [rbp+57h]
  char v95; // [rsp+E0h] [rbp+5Fh]
  struct _EX_RUNDOWN_REF *v96; // [rsp+E8h] [rbp+67h]

  v96 = a4;
  v94 = a2;
  v8 = a3;
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v81, 0LL);
  v12 = 0;
  v91 = (char *)(a1 + 26);
  v13 = 0;
  if ( a1 != (struct _KTHREAD **)-208LL && a1[27] == KeGetCurrentThread() )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1 + 26, v11);
    *(_QWORD *)(v14 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = v91;
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
  v92 = 2;
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
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v85, v24);
    DXGRESOURCEREFERENCE::MoveAssign(&v81, &v85);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v85, v25);
    v29 = (struct _EX_RUNDOWN_REF *)v81;
    if ( !v81 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
      v31 = -1073741811;
      v30[3] = a2;
      v30[4] = v8;
      v30[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v30);
      goto LABEL_65;
    }
    if ( *((struct DXGDEVICE **)v81 + 1) != a2 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
      v31 = -1073741811;
      v32[3] = a2;
      v32[4] = v29;
      v32[5] = v29[1].Count;
      v32[6] = -1073741811LL;
      WdLogEvent5_WdWarning(v32);
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v86, 0LL);
      DXGRESOURCEREFERENCE::MoveAssign(&v81, &v86);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v86, v33);
      v34 = a6;
      goto LABEL_73;
    }
    if ( v19 < *((_DWORD *)a1 + 64) )
    {
      v35 = a1[30];
      v36 = *((_DWORD *)v35 + 4 * v19 + 2);
      if ( (((unsigned int)v8 >> 25) & 0x60) == (*((_BYTE *)v35 + 16 * v19 + 8) & 0x60)
        && (v36 & 0x2000) == 0
        && (v36 & 0x1F) != 0 )
      {
        *((_DWORD *)v35 + 4 * (((unsigned int)v8 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v90);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v83, 0LL);
    DXGRESOURCEREFERENCE::MoveAssign(&v81, &v83);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v83, v37);
    DxgkUnreferenceDxgResource((struct DXGRESOURCE *)v29);
    ExWaitForRundownProtectionRelease(v29 + 9);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)&v29[10]);
    DXGAUTOPUSHLOCK::AcquireExclusive(&v90);
    for ( i = v29[3].Count; i; i = *(_QWORD *)(i + 64) )
    {
      v39 = *(_DWORD *)(i + 16);
      if ( v39 )
      {
        v40 = (v39 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v40 < *((_DWORD *)a1 + 64) )
        {
          v41 = a1[30];
          v42 = *((_DWORD *)v41 + 4 * v40 + 2);
          if ( ((v39 >> 25) & 0x60) == (*((_BYTE *)v41 + 16 * v40 + 8) & 0x60)
            && (v42 & 0x2000) == 0
            && (v42 & 0x1F) != 0 )
          {
            *((_DWORD *)v41 + 4 * ((v39 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
          }
        }
      }
    }
    ExInitializeRundownProtection(v29 + 9);
    DxgkTryReferenceDxgResource(v29);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&Count, (struct DXGRESOURCE *)v29);
    DXGRESOURCEREFERENCE::MoveAssign(&v81, &Count);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&Count, v43);
    DXGAUTOPUSHLOCK::ReleaseExclusive((DXGAUTOPUSHLOCK *)&v90);
    DXGFASTMUTEX::Release((struct _KTHREAD **)&v29[10], v44);
    *a7 = v81;
LABEL_64:
    v31 = v12;
    goto LABEL_65;
  }
  v45 = a5;
  v34 = a6;
  v95 = 0;
  Count = 0LL;
  if ( !a5 )
  {
LABEL_61:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v90);
    if ( v45 )
    {
      v62 = v45;
      do
      {
        v63 = *v34;
        v82 = 0LL;
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v87, v63);
        DXGALLOCATIONREFERENCE::MoveAssign(&v82, &v87);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v87, v64);
        v65 = (struct _EX_RUNDOWN_REF *)v82;
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v88, 0LL);
        DXGALLOCATIONREFERENCE::MoveAssign(&v82, &v88);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v88, v66);
        DxgkUnreferenceDxgAllocation((struct DXGALLOCATION *)v65);
        ExWaitForRundownProtectionRelease(v65 + 11);
        ExInitializeRundownProtection(v65 + 11);
        DxgkReferenceDxgAllocation((struct DXGALLOCATION *)v65);
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v89, v65);
        DXGALLOCATIONREFERENCE::MoveAssign(&v82, &v89);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v89, v67);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v82, v68);
        ++v34;
        --v62;
      }
      while ( v62 );
    }
    goto LABEL_64;
  }
  v46 = a4;
  v47 = (struct DXGALLOCATION **)a6;
  v83 = a4;
  while ( 1 )
  {
    Count_low = LODWORD(v46->Count);
    v49 = (LODWORD(v46->Count) >> 6) & 0xFFFFFF;
    if ( v49 >= *((_DWORD *)a1 + 64) )
      goto LABEL_45;
    v50 = a1[30];
    v51 = *((_DWORD *)v50 + 4 * v49 + 2);
    if ( (((unsigned int)Count_low >> 25) & 0x60) != (*((_BYTE *)v50 + 16 * v49 + 8) & 0x60)
      || (v51 & 0x2000) != 0
      || (v51 & 0x1F) == 0 )
    {
      goto LABEL_45;
    }
    v52 = v51 & 0x1F;
    if ( (_BYTE)v52 != 5 )
    {
      v53 = WdLogNewEntry5_WdError(((unsigned int)Count_low >> 25) & 0x60, v52);
      *(_QWORD *)(v53 + 24) = 267LL;
      WdLogEvent5_WdError(v53);
LABEL_45:
      v54 = 0LL;
      goto LABEL_46;
    }
    v54 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v50 + 2 * v49);
LABEL_46:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v93, v54);
    v58 = v93;
    if ( !v93 )
      break;
    if ( (struct DXGDEVICE *)v93[1].Count != v94 )
    {
      v71 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdWarning(v94, v55, v57);
      v31 = -1073741811;
      v71[3].Count = (ULONG_PTR)v94;
      v71[4].Count = (ULONG_PTR)v93;
      v71[5].Count = v93[1].Count;
      v71[6].Count = -1073741811LL;
      goto LABEL_72;
    }
    if ( !v95 )
    {
      Count = (struct _EX_RUNDOWN_REF *)v93[5].Count;
      v95 = 1;
    }
    v59 = v93[5].Count;
    if ( (struct _EX_RUNDOWN_REF *)v59 != Count )
    {
LABEL_67:
      v71 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdWarning(v59, v55, v57);
      v31 = -1073741811;
      v71[4].Count = -1073741811LL;
      goto LABEL_71;
    }
    if ( v59 )
    {
      v55 = *(unsigned int *)(v59 + 4);
      if ( (v55 & 1) != 0 )
        goto LABEL_67;
      if ( !DxgkTryReferenceDxgResource((struct _EX_RUNDOWN_REF *)v59) )
      {
        LOBYTE(v12) = 1;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v93, v55);
        v31 = -1073741811;
        goto LABEL_73;
      }
      LODWORD(v93[9].Count) |= 0x100000u;
      v58 = v93;
    }
    if ( v49 < *((_DWORD *)a1 + 64) )
    {
      v60 = a1[30];
      v55 = ((unsigned int)Count_low >> 25) & 0x60;
      v61 = *((_DWORD *)v60 + 4 * v49 + 2);
      if ( (((unsigned int)Count_low >> 25) & 0x60) == (*((_BYTE *)v60 + 16 * v49 + 8) & 0x60)
        && (v61 & 0x2000) == 0
        && (v61 & 0x1F) != 0 )
      {
        *((_DWORD *)v60 + 4 * (((unsigned int)Count_low >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
        v58 = v93;
      }
    }
    *v47 = (struct DXGALLOCATION *)v58;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v93, v55);
    ++v13;
    v45 = a5;
    v46 = (struct _EX_RUNDOWN_REF *)((char *)&v83->Ptr + 4);
    ++v47;
    v83 = (struct _EX_RUNDOWN_REF *)((char *)v83 + 4);
    if ( v13 >= a5 )
      goto LABEL_61;
  }
  v71 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdWarning(v56, v55, v57);
  v31 = -1073741811;
  v71[4].Count = Count_low;
  v71[5].Count = -1073741811LL;
LABEL_71:
  v71[3].Count = (ULONG_PTR)v94;
LABEL_72:
  WdLogEvent5_WdWarning(v71);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v93, v72);
LABEL_73:
  if ( !v81 )
  {
    if ( v13 )
    {
      v73 = v96;
      v74 = v13;
      do
      {
        v75 = v73->Count;
        v76 = *v34;
        v77 = (LODWORD(v73->Count) >> 6) & 0xFFFFFF;
        if ( (unsigned int)v77 < *((_DWORD *)a1 + 64) )
        {
          v78 = a1[30];
          if ( ((v75 >> 25) & 0x60) == (*((_BYTE *)v78 + 16 * v77 + 8) & 0x60)
            && (*((_DWORD *)v78 + 4 * v77 + 2) & 0x1F) != 0 )
          {
            v79 = 2LL * ((v75 >> 6) & 0xFFFFFF);
            if ( (*((_DWORD *)v78 + 4 * ((v75 >> 6) & 0xFFFFFF) + 2) & 0x2000) == 0 )
            {
              v80 = WdLogNewEntry5_WdAssertion((v75 >> 25) & 0x60, v78);
              *(_QWORD *)(v80 + 24) = 217LL;
              WdLogEvent5_WdAssertion(v80);
              v78 = a1[30];
            }
            *((_DWORD *)v78 + 2 * v79 + 2) &= ~0x2000u;
            v73 = v96;
          }
        }
        if ( (v76[9].Count & 0x100000) != 0 )
        {
          DxgkUnreferenceDxgResource((struct DXGRESOURCE *)v76[5].Count);
          LODWORD(v76[9].Count) &= ~0x100000u;
        }
        v73 = (struct _EX_RUNDOWN_REF *)((char *)v73 + 4);
        ++v34;
        v96 = v73;
        --v74;
      }
      while ( v74 );
    }
    if ( (_BYTE)v12 )
    {
      v12 = 255;
      goto LABEL_64;
    }
    v31 = -1073741811;
  }
LABEL_65:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v90);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v81, v69);
  return v31;
}
