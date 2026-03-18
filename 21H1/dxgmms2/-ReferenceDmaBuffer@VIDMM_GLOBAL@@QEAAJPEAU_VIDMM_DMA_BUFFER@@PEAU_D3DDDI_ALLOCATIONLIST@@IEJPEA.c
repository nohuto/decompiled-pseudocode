/*
 * XREFs of ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C006EA30
 * Callers:
 *     ?VidMmReferenceDmaBuffer@@YAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0001B20 (-VidMmReferenceDmaBuffer@@YAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARG.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001194 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001A10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     VidSchMarkDeviceAsError @ 0x1C00140D0 (VidSchMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C0023BF8 (-RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 *     McTemplateK0ppqPR2TR2_EtwWriteTransfer @ 0x1C0024560 (McTemplateK0ppqPR2TR2_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E80 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C0061A44 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00638E0 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00874B0 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?AddDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C00AEED0 (-AddDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReferenceDmaBuffer(
        VIDMM_GLOBAL *this,
        union _LARGE_INTEGER *a2,
        struct _D3DDDI_ALLOCATIONLIST *a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        unsigned int *a7,
        union _LARGE_INTEGER *a8,
        union _LARGE_INTEGER *a9,
        struct VIDMM_ALLOC **a10,
        struct _VIDMM_PRIMARIES_REFERENCES *a11,
        struct DXGALLOCATION **a12)
{
  unsigned int v12; // r15d
  unsigned __int64 *p_QuadPart; // r13
  struct DXGPROCESS *Current; // r11
  __int64 v17; // r8
  unsigned int v18; // eax
  union _LARGE_INTEGER v19; // rax
  struct VIDMM_ALLOC *v20; // rdx
  unsigned int v21; // edi
  int v22; // r10d
  struct _D3DDDI_ALLOCATIONLIST *v23; // r14
  struct VIDMM_ALLOC **v24; // r12
  VIDMM_SEGMENT *v25; // r9
  struct DXGALLOCATION *v26; // rax
  struct VIDMM_ALLOC *v27; // r13
  __int64 v28; // r15
  _DWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  _DWORD *v33; // rdx
  unsigned __int64 i; // rcx
  unsigned __int64 *v35; // r14
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rdx
  VIDMM_GLOBAL *v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rdi
  int v44; // eax
  int v45; // eax
  struct VIDMM_ALLOC *v46; // r15
  UINT v47; // edi
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned int v50; // ebx
  unsigned int v51; // r15d
  __int64 v52; // rax
  int v53; // r9d
  _QWORD *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  int v68; // eax
  _DWORD *v69; // rdx
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  int v74; // edi
  __int64 v75; // rdx
  __int64 v76; // r9
  __int64 v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  int v81; // eax
  LONGLONG v82; // rdx
  union _LARGE_INTEGER *v83; // rcx
  union _LARGE_INTEGER v84; // r14
  signed int v85; // r15d
  unsigned int v86; // edi
  __int64 v88; // rdi
  _QWORD *v89; // rax
  __int64 v90; // rax
  union _LARGE_INTEGER v91; // r12
  union _LARGE_INTEGER v92; // r14
  __int64 v93; // r15
  __int64 j; // rsi
  __int64 v95; // rdx
  __int64 v96; // r8
  int *v97; // r9
  signed __int32 v98[8]; // [rsp+0h] [rbp-388h] BYREF
  __int64 v99; // [rsp+28h] [rbp-360h]
  unsigned int v100; // [rsp+40h] [rbp-348h]
  int v101; // [rsp+44h] [rbp-344h]
  VIDMM_SEGMENT *v102; // [rsp+48h] [rbp-340h]
  unsigned __int64 *v103; // [rsp+50h] [rbp-338h]
  struct VIDMM_ALLOC *v104; // [rsp+58h] [rbp-330h]
  VIDMM_SEGMENT *v105; // [rsp+60h] [rbp-328h]
  struct VIDMM_ALLOC **QuadPart; // [rsp+68h] [rbp-320h]
  struct DXGPROCESS *v107; // [rsp+70h] [rbp-318h]
  unsigned int v108; // [rsp+78h] [rbp-310h]
  __int64 v109; // [rsp+80h] [rbp-308h]
  struct VIDMM_ALLOC *v110; // [rsp+88h] [rbp-300h]
  unsigned int *v111; // [rsp+90h] [rbp-2F8h]
  __int64 v112; // [rsp+98h] [rbp-2F0h]
  struct _VIDMM_PRIMARIES_REFERENCES *v113; // [rsp+A0h] [rbp-2E8h]
  __int64 v114; // [rsp+A8h] [rbp-2E0h]
  union _LARGE_INTEGER *v115; // [rsp+B0h] [rbp-2D8h]
  unsigned int v116; // [rsp+B8h] [rbp-2D0h]
  struct DXGALLOCATION **v117; // [rsp+C0h] [rbp-2C8h]
  __int64 v118; // [rsp+C8h] [rbp-2C0h]
  struct VIDMM_ALLOC **v119; // [rsp+D0h] [rbp-2B8h]
  unsigned __int64 *v120; // [rsp+D8h] [rbp-2B0h]
  __int64 v121; // [rsp+E0h] [rbp-2A8h]
  unsigned __int64 v122; // [rsp+E8h] [rbp-2A0h]
  unsigned __int64 v123; // [rsp+F0h] [rbp-298h]
  __int64 v124; // [rsp+F8h] [rbp-290h]
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp-288h]
  struct _KTHREAD *v126; // [rsp+108h] [rbp-280h]
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp-278h] BYREF
  _BYTE v128[512]; // [rsp+140h] [rbp-248h] BYREF

  v12 = a4;
  v108 = a4;
  v115 = a8;
  v111 = a7;
  p_QuadPart = (unsigned __int64 *)&a9->QuadPart;
  v103 = (unsigned __int64 *)&a9->QuadPart;
  v120 = (unsigned __int64 *)&a9->QuadPart;
  v119 = a10;
  v113 = a11;
  v117 = a12;
  v100 = 0;
  QuadPart = (struct VIDMM_ALLOC **)a2[13].QuadPart;
  v105 = (VIDMM_SEGMENT *)a2[14].QuadPart;
  Current = DXGPROCESS::GetCurrent();
  v107 = Current;
  v17 = *(_QWORD *)(a2[17].QuadPart + 16);
  v114 = v17;
  if ( a9 )
    *a9 = a2[12];
  *a10 = 0LL;
  ++*((_DWORD *)this + 1796);
  *((_DWORD *)this + 1797) += v12;
  v18 = *((_DWORD *)this + 1798);
  if ( v12 > v18 )
    v18 = v12;
  *((_DWORD *)this + 1798) = v18;
  a2[3].HighPart |= 4u;
  v19 = *(union _LARGE_INTEGER *)(*(_QWORD *)a2[17].QuadPart + 40LL);
  _InterlockedOr(v98, 0);
  a2[19] = v19;
  *(_DWORD *)a11 = 0;
  v112 = 0LL;
  v20 = 0LL;
  v110 = 0LL;
  v21 = 0;
  v100 = 0;
  v22 = a6;
  v23 = a3;
  v24 = QuadPart;
  v25 = v105;
  while ( 1 )
  {
    v102 = v25;
    if ( v21 >= v12 )
      break;
    if ( !v23->hAllocation )
    {
      ++*((_DWORD *)this + 1799);
      *v24 = 0LL;
      *(_OWORD *)v25 = 0LL;
      *((_QWORD *)v25 + 2) = 0LL;
      goto LABEL_60;
    }
    v26 = v117[v21];
    if ( !v26 )
    {
      v80 = WdLogNewEntry5_WdError(v117, v20, v17, v25);
      *(_QWORD *)(v80 + 24) = v23->hAllocation;
      *(_QWORD *)(v80 + 32) = v21;
      WdLogEvent5_WdError(v80);
      v50 = -1071775468;
      v101 = -1071775468;
      v51 = a6;
LABEL_152:
      if ( !p_QuadPart && v21 )
      {
        do
        {
          if ( *--v24 )
            VIDMM_GLOBAL::RemoveDMAReferences(*v24, v51);
          --v21;
        }
        while ( v21 );
      }
      return v50;
    }
    v27 = (struct VIDMM_ALLOC *)*((_QWORD *)v26 + 3);
    v104 = v27;
    v28 = **(_QWORD **)v27;
    v29 = *(_DWORD **)(v28 + 496);
    v30 = *v29 >> 14;
    if ( (*v29 & 0x4000) != 0 )
    {
      if ( v20 || (v23->Value & 1) == 0 )
      {
        v54 = (_QWORD *)WdLogNewEntry5_WdAssertion(v30, v20, v17);
        v54[3] = v27;
        v54[4] = v110;
        v54[5] = v23->Value & 1;
        WdLogEvent5_WdAssertion(v54);
        v50 = -1071775482;
        v101 = -1071775482;
        v51 = a6;
        p_QuadPart = v103;
        goto LABEL_152;
      }
      v110 = v27;
    }
    if ( *(_BYTE *)(v28 + 88) )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v30);
        v56 = WdLogNewEntry5_WdTrace(v55);
        *(_QWORD *)(v56 + 24) = a2;
        *(_QWORD *)(v56 + 32) = v27;
      }
      v50 = -1071775482;
      v101 = -1071775482;
      v51 = a6;
      p_QuadPart = v103;
      goto LABEL_152;
    }
    if ( *((_QWORD *)v27 + 1) != v17 && (*((_BYTE *)Current + 347) & 0x20) == 0 )
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdError(v30, v20, v17, v25);
      v57[3] = v114;
      v57[4] = v27;
      v57[5] = v21;
      v57[6] = *((_QWORD *)v27 + 1);
      WdLogEvent5_WdError(v57);
      v50 = -1071775467;
      v101 = -1071775467;
      v51 = a6;
      p_QuadPart = v103;
      goto LABEL_152;
    }
    if ( *(_WORD *)(*((_QWORD *)v27 + 12) + 4LL) && a5 )
    {
      if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
      {
        v62 = WdLogNewEntry5_WdAssertion(v59, v58, v60);
        *(_QWORD *)(v62 + 24) = a2;
        *(_QWORD *)(v62 + 32) = v27;
        WdLogEvent5_WdAssertion(v62);
        v50 = -1071775466;
        v101 = -1071775466;
        v51 = a6;
        p_QuadPart = v103;
        goto LABEL_152;
      }
      v63 = WdLogNewEntry5_WdError(v59, v58, v60, v61);
      *(_QWORD *)(v63 + 24) = a2;
      *(_QWORD *)(v63 + 32) = v27;
      WdLogEvent5_WdError(v63);
      v25 = v102;
      v22 = a6;
      Current = v107;
    }
    *v24 = v27;
    v31 = *(_QWORD *)(*((_QWORD *)v27 + 2) + 32LL);
    *(_QWORD *)v25 = v31;
    v32 = v23->Value & 1;
    if ( (v23->Value & 1) != 0 )
    {
      if ( *((_BYTE *)v27 + 24) )
      {
        v121 = *((_QWORD *)this + 3);
        if ( *(int *)(v121 + 2304) >= 4608 )
        {
          v64 = WdLogNewEntry5_WdWarning(v31, v20);
          WdLogEvent5_WdWarning(v64);
          v67 = WdLogNewEntry5_WdWarning(v66, v65);
          *(_QWORD *)(v67 + 24) = a2;
          *(_QWORD *)(v67 + 32) = v27;
          WdLogEvent5_WdWarning(v67);
          v50 = -1073741790;
          v101 = -1073741790;
          v51 = a6;
          p_QuadPart = v103;
          goto LABEL_152;
        }
      }
    }
    v33 = (_DWORD *)((char *)v25 + 8);
    i = (unsigned int)v32 | *((_DWORD *)v25 + 2) & 0xFFFFFFFE;
    *((_DWORD *)v25 + 2) = i;
    if ( (v23->Value & 1) != 0 )
    {
      ++*((_DWORD *)this + 1800);
      i = (unsigned int)*v33;
    }
    if ( (i & 1) != 0 )
    {
      if ( (**(_DWORD **)(v28 + 496) & 0x200000) != 0 )
      {
        *((_DWORD *)v113 + 34) |= 1u;
        i = (unsigned int)*v33;
      }
      if ( (i & 1) != 0 )
      {
        i = (**(_DWORD **)(v28 + 496) >> 23) | ((unsigned __int16)**(_DWORD **)(v28 + 496) | (unsigned __int16)((unsigned int)(**(_DWORD **)(v28 + 496) | (**(_DWORD **)(v28 + 496) >> 11)) >> 11)) & 0x100u;
        if ( (unsigned int)i >= 0x100 )
        {
          i = (unsigned __int64)v113;
          if ( *(_DWORD *)v113 >= 0x10u )
          {
            ++*((_DWORD *)this + 1806);
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)v27 + 26);
            v27 = v104;
            *(_QWORD *)(i + 8LL * *(unsigned int *)i + 8) = v104;
            v25 = v105;
          }
          ++*(_DWORD *)i;
        }
      }
    }
    v102 = *(VIDMM_SEGMENT **)(v28 + 128);
    v35 = v103;
    if ( v103 )
      goto LABEL_23;
    if ( !v102 || (*((_DWORD *)this + 1762) & 0x40) != 0 )
    {
      v27 = v104;
      v25 = v105;
LABEL_23:
      ++*((_DWORD *)this + 1804);
      *v33 &= 0xFFFFFFC1;
      if ( v35 )
      {
        i = a2[17].QuadPart;
        v122 = i;
        if ( (*(_DWORD *)(i + 32) & 0x20) != 0 )
        {
          v36 = *((_QWORD *)v27 + 18);
        }
        else
        {
          v123 = i;
          v32 = *(unsigned int *)(i + 8);
          v116 = *(_DWORD *)(i + 8);
          v33 = (_DWORD *)((char *)v27 + 128);
          for ( i = *((_QWORD *)v27 + 16); (_DWORD *)i != v33; i = *(_QWORD *)i )
          {
            if ( ((*(_DWORD *)(i + 40) >> 4) & 0x3F) == (_DWORD)v32 )
            {
              v36 = *(_QWORD *)(i + 72);
              goto LABEL_29;
            }
          }
          v36 = 0LL;
LABEL_29:
          v118 = v36;
        }
        *((_QWORD *)v25 + 2) = v36;
      }
      else
      {
        *((_QWORD *)v25 + 2) = 0LL;
      }
      a2[3].HighPart &= ~4u;
      if ( (VIDMM_GLOBAL::_Config & 1) != 0 )
        goto LABEL_54;
      v124 = *((_QWORD *)this + 3);
      if ( (*(_DWORD *)(v124 + 348) & 4) != 0 || !*(_BYTE *)(v28 + 89) && (*(_DWORD *)(v28 + 76) & 0x400) == 0 )
        goto LABEL_54;
      v37 = *(_QWORD *)(v28 + 312);
      KeEnterCriticalRegion();
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v37 + 16) == CurrentThread )
      {
        v70 = *(_DWORD *)(v37 + 24);
        if ( v70 <= 0 )
        {
          v71 = WdLogNewEntry5_WdAssertion(v39, v38, v40);
          *(_QWORD *)(v71 + 24) = 659LL;
          WdLogEvent5_WdAssertion(v71);
          v70 = *(_DWORD *)(v37 + 24);
        }
        *(_DWORD *)(v37 + 24) = v70 + 1;
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v37, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v53 = *(_DWORD *)(v37 + 28);
            if ( v53 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer((__int64)v39, &EventBlockThread, v40, v53);
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v37 + 8));
          ExAcquirePushLockExclusiveEx(v37, 0LL);
        }
        if ( *(_QWORD *)(v37 + 16) )
        {
          v72 = WdLogNewEntry5_WdAssertion(v39, v38, v40);
          *(_QWORD *)(v72 + 24) = 683LL;
          WdLogEvent5_WdAssertion(v72);
        }
        if ( *(_DWORD *)(v37 + 24) )
        {
          v73 = WdLogNewEntry5_WdAssertion(v39, v38, v40);
          *(_QWORD *)(v73 + 24) = 684LL;
          WdLogEvent5_WdAssertion(v73);
        }
        *(_QWORD *)(v37 + 16) = KeGetCurrentThread();
        *(_DWORD *)(v37 + 24) = 1;
      }
      v112 = v28;
      v41 = *(_QWORD *)(v28 + 104);
      if ( v41 )
      {
        v48 = *(_QWORD *)(v41 + 8);
      }
      else if ( (*(_DWORD *)(v28 + 80) & 0xA000) != 0 )
      {
        v48 = *(_QWORD *)(v28 + 512);
      }
      else
      {
        v42 = *(_QWORD **)(v28 + 96);
        v38 = v42[3];
        if ( v38 )
        {
          v48 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v42[1] + 24LL) + 88LL))(*(_QWORD *)(v42[1] + 24LL));
        }
        else
        {
          v39 = (VIDMM_GLOBAL *)v42[10];
          if ( !v39 )
            goto LABEL_45;
          v48 = *((_QWORD *)v39 + 1);
        }
      }
      v109 = v48;
      if ( !v48 )
      {
LABEL_45:
        if ( !*(_QWORD *)(v28 + 128)
          && (**(_DWORD **)(v28 + 496) & 0x40000000) == 0
          && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(this, *(_QWORD *)(v28 + 8)) >= 0 )
        {
          v74 = 0;
          memset(&ApcState, 0, sizeof(ApcState));
          v75 = *(_QWORD *)(v28 + 96);
          if ( v75 )
          {
            KeStackAttachProcess(**(PRKPROCESS **)(v75 + 8), &ApcState);
            v74 = 1;
            v75 = *(_QWORD *)(v28 + 96);
          }
          if ( (int)VIDMM_GLOBAL::ProbeAndLockAllocation(
                      v39,
                      (struct _VIDMM_LOCAL_ALLOC *)v75,
                      (struct _VIDMM_GLOBAL_ALLOC *)v28,
                      0LL,
                      *(_QWORD *)(v28 + 8),
                      (enum _LOCK_OPERATION)v99,
                      0LL,
                      0) < 0 )
          {
            v77 = WdLogNewEntry5_WdError(v39, v38, v40, v76);
            *(_QWORD *)(v77 + 24) = v28;
            WdLogEvent5_WdError(v77);
            VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v28 + 8));
          }
          else
          {
            ++*(_DWORD *)(v28 + 340);
            *(_DWORD *)(v28 + 84) |= 2u;
          }
          if ( v74 )
            KeUnstackDetachProcess(&ApcState);
        }
      }
      v112 = 0LL;
      v43 = *(_QWORD *)(v28 + 312);
      v126 = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v43 + 16) != v126 )
      {
        v78 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v39, v38);
        v78[3] = 275LL;
        v78[4] = 4LL;
        v78[5] = v43;
        v78[6] = 0LL;
        v78[7] = 0LL;
        WdLogEvent5_WdCriticalError(v78);
      }
      v44 = *(_DWORD *)(v43 + 24);
      if ( v44 <= 0 )
      {
        v79 = WdLogNewEntry5_WdAssertion(v39, v38, v40);
        *(_QWORD *)(v79 + 24) = 703LL;
        WdLogEvent5_WdAssertion(v79);
        v44 = *(_DWORD *)(v43 + 24);
      }
      v45 = v44 - 1;
      *(_DWORD *)(v43 + 24) = v45;
      if ( !v45 )
      {
        *(_QWORD *)(v43 + 16) = 0LL;
        ExReleasePushLockExclusiveEx(v43, 0LL);
      }
      KeLeaveCriticalRegion();
      v22 = a6;
      Current = v107;
      goto LABEL_53;
    }
    ++*((_DWORD *)this + 1803);
    v68 = VIDMM_SEGMENT::DriverId(v102);
    *v69 ^= (*v69 ^ (2 * v68)) & 0x3E;
    v33 = (_DWORD *)(*(_QWORD *)(v28 + 136) + *((_QWORD *)v102 + 3));
    *((_QWORD *)v105 + 2) = v33;
LABEL_53:
    v27 = v104;
LABEL_54:
    if ( !v35 )
    {
      VIDMM_GLOBAL::AddDMAReferences(v27, v22);
      v22 = a6;
      Current = v107;
    }
    v46 = v104;
    if ( !*((_DWORD *)v27 + 38) && (*((_BYTE *)v104 + 25) & 1) == 0 )
    {
      if ( (*((_BYTE *)this + 40936) & 4) == 0
        || (i = *(unsigned int *)(*((_QWORD *)this + 3) + 348LL), (i & 0x10) == 0) )
      {
        v49 = WdLogNewEntry5_WdAssertion(i, v33, v32);
        *(_QWORD *)(v49 + 24) = v46;
        WdLogEvent5_WdAssertion(v49);
        v50 = -1073741823;
        v101 = -1073741823;
        VidSchMarkDeviceAsError(*(_QWORD *)(*((_QWORD *)v46 + 1) + 32LL));
        p_QuadPart = v35;
        if ( !v35 )
          VIDMM_GLOBAL::RemoveDMAReferences(v46, a6);
        v21 = v100;
        v24 = QuadPart;
        v51 = a6;
        goto LABEL_152;
      }
    }
    v23 = a3;
    v47 = (a3->Value >> 2) & 7;
    if ( v47 )
    {
      v52 = WdLogNewEntry5_WdAssertion(i, v33, v32);
      *(_QWORD *)(v52 + 24) = v46;
      *(_QWORD *)(v52 + 32) = v47;
      WdLogEvent5_WdAssertion(v52);
      v22 = a6;
      Current = v107;
    }
    v21 = v100;
    v24 = QuadPart;
    v25 = v105;
    p_QuadPart = v103;
    v12 = v108;
    v20 = v110;
    v17 = v114;
LABEL_60:
    QuadPart = ++v24;
    a3 = ++v23;
    v25 = (VIDMM_SEGMENT *)((char *)v25 + 24);
    v105 = v25;
    v100 = ++v21;
  }
  *v119 = v20;
  if ( a2[8].QuadPart )
  {
    v102 = *(VIDMM_SEGMENT **)(a2[7].QuadPart + 128);
    if ( !v102 || (*((_DWORD *)this + 1762) & 0x40) != 0 )
    {
      ++*((_DWORD *)this + 1804);
      a2[3].HighPart &= ~4u;
      *v111 = 0;
      v82 = 0LL;
    }
    else
    {
      ++*((_DWORD *)this + 1803);
      if ( (*((_DWORD *)v102 + 20) & 0x1000) != 0 )
        v81 = 0;
      else
        v81 = *((_DWORD *)v102 + 4) + 1;
      *v111 = v81;
      v82 = *((_QWORD *)v102 + 3) + *(_QWORD *)(a2[7].QuadPart + 136);
    }
    v83 = v115;
    v115->QuadPart = v82;
    v84 = a2[8];
    v85 = a6;
    if ( a6 + *(_DWORD *)(v84.QuadPart + 156) == 0x7FFFFFFF )
    {
      v88 = *(int *)(v84.QuadPart + 156);
      v89 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v83, v82);
      v89[3] = 270LL;
      v89[4] = 41LL;
      v89[5] = v84.QuadPart;
      v89[6] = v88;
      v89[7] = 0LL;
      WdLogEvent5_WdCriticalError(v89);
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(v84.QuadPart + 156), a6);
  }
  else
  {
    *v111 = 0;
    *v115 = a2[11];
    v85 = a6;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)&a2[4], v85);
  if ( v85 > 1 )
    a2[3].HighPart |= 2u;
  v86 = v100;
  if ( !p_QuadPart )
    a2[18].LowPart = v100;
  a2[2].LowPart = v85;
  if ( (a2[3].HighPart & 4) != 0 )
  {
    v90 = *(_QWORD *)(*(_QWORD *)a2[17].QuadPart + 40LL);
    _InterlockedOr(v98, 0);
    v86 = v100;
    if ( a2[19].QuadPart == v90 )
      ++*((_DWORD *)this + 1805);
  }
  if ( (qword_1C0051010 & 4) != 0 )
  {
    v91 = a2[14];
    v92 = a2[13];
    v93 = *(_QWORD *)(a2[17].QuadPart + 24);
    for ( j = 0LL; (unsigned int)j < v86; j = (unsigned int)(j + 128) )
    {
      v95 = 128LL;
      if ( v86 - (unsigned int)j < 0x80 )
        v95 = v86 - (unsigned int)j;
      v96 = 0LL;
      if ( (_DWORD)v95 )
      {
        v97 = (int *)v128;
        do
        {
          *v97 = *(_DWORD *)(v91.QuadPart + 24LL * (unsigned int)(v96 + j) + 8) & 1;
          v96 = (unsigned int)(v96 + 1);
          ++v97;
        }
        while ( (unsigned int)v96 < (unsigned int)v95 );
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      {
        LODWORD(v99) = v95;
        McTemplateK0ppqPR2TR2_EtwWriteTransfer(v92.QuadPart + 8 * j, v95, v96, v93, a2, v99, v92.QuadPart + 8 * j, v128);
      }
    }
  }
  return 0LL;
}
