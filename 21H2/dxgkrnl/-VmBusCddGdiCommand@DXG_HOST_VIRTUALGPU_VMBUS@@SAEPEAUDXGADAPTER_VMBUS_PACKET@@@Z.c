/*
 * XREFs of ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023BE10
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004200 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006F9C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@XZ @ 0x1C003AB98 (--1DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@XZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEBAPEAVDXGHWQUEUE@@XZ @ 0x1C003FB90 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEBAPEAVDXGHWQUEUE@@XZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00405D4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0041850 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C00EA1A0 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C00EA370 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C0227B6C (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C022C2CC (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1C023B500 (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCddGdiCommand(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdx
  struct DXGADAPTER_VMBUS_PACKET *v2; // r15
  __int64 v3; // rdx
  __int64 v4; // rax
  char v5; // di
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  struct _EX_RUNDOWN_REF **v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // r14d
  unsigned int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct DXGCONTEXT *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct DXGDEVICE *v25; // rsi
  __int64 Current; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD *v37; // r13
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned int v41; // edi
  __int64 v42; // rax
  __int64 v43; // r12
  struct DXGALLOCATION *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  const unsigned __int8 *v50; // rdi
  const unsigned __int8 *v51; // r12
  const unsigned __int8 *v52; // r14
  unsigned int v53; // esi
  __int64 v54; // r10
  const unsigned __int8 *v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  unsigned __int8 *v61; // r9
  __int64 v62; // r11
  unsigned int v63; // eax
  __int64 v64; // r8
  unsigned int v65; // eax
  int v66; // edx
  unsigned int v67; // eax
  int v68; // ecx
  int v69; // edx
  const unsigned __int8 *v70; // r9
  __int64 v71; // rdx
  unsigned int v72; // eax
  __int64 v73; // r8
  unsigned __int8 v74; // al
  unsigned int v75; // eax
  __int64 v76; // rcx
  unsigned int v77; // eax
  const unsigned __int8 *v78; // r9
  __int64 v79; // r8
  __int64 v80; // rcx
  unsigned __int64 v81; // rdx
  __int64 v82; // rax
  unsigned __int64 v83; // rdx
  unsigned int v84; // eax
  __int64 v85; // rcx
  unsigned __int64 v86; // rdx
  __int64 v87; // rax
  unsigned __int64 v88; // rdx
  _BYTE *v89; // rcx
  __int64 v90; // r8
  __int64 v91; // rax
  struct tagRECT *v93; // [rsp+40h] [rbp-C8h]
  struct tagRECT *v94; // [rsp+48h] [rbp-C0h]
  unsigned int v95; // [rsp+50h] [rbp-B8h]
  unsigned int v96; // [rsp+58h] [rbp-B0h]
  unsigned int v97; // [rsp+58h] [rbp-B0h]
  unsigned __int8 v98; // [rsp+60h] [rbp-A8h]
  char v99; // [rsp+68h] [rbp-A0h]
  unsigned int v100; // [rsp+70h] [rbp-98h]
  unsigned int v101; // [rsp+70h] [rbp-98h]
  unsigned __int8 **v102; // [rsp+78h] [rbp-90h]
  unsigned __int8 **v103; // [rsp+78h] [rbp-90h]
  struct DXGALLOCATION **v104; // [rsp+88h] [rbp-80h]
  _BYTE v105[16]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v106[16]; // [rsp+A0h] [rbp-68h] BYREF
  int v107; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v108; // [rsp+B4h] [rbp-54h] BYREF
  struct DXGCONTEXT *v109; // [rsp+B8h] [rbp-50h] BYREF
  int v110; // [rsp+C0h] [rbp-48h]
  char *v111; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v112; // [rsp+D0h] [rbp-38h]
  struct DXGADAPTER_VMBUS_PACKET *v113; // [rsp+D8h] [rbp-30h]
  char v114[8]; // [rsp+E0h] [rbp-28h] BYREF
  DXGPUSHLOCK *v115; // [rsp+E8h] [rbp-20h]
  int v116; // [rsp+F0h] [rbp-18h]
  PVOID v117; // [rsp+F8h] [rbp-10h] BYREF
  char v118; // [rsp+100h] [rbp-8h] BYREF
  int v119; // [rsp+200h] [rbp+F8h]
  PVOID P; // [rsp+208h] [rbp+100h] BYREF
  char v121; // [rsp+210h] [rbp+108h] BYREF
  int v122; // [rsp+310h] [rbp+208h]
  _QWORD v123[48]; // [rsp+318h] [rbp+210h] BYREF

  v1 = *((_QWORD *)a1 + 5);
  v2 = a1;
  v113 = a1;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v114, (struct _KTHREAD **)(v1 + 232), 0);
  DXGPUSHLOCK::AcquireShared(v115);
  v4 = *((_QWORD *)v2 + 5);
  v5 = 1;
  v116 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v6 = WdLogNewEntry5_WdError(0LL, v3);
    *(_QWORD *)(v6 + 24) = 2038LL;
    WdLogEvent5_WdError(v6);
LABEL_4:
    v5 = 0;
    goto LABEL_147;
  }
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)v2);
  v10 = v7;
  if ( !v7 )
    goto LABEL_4;
  v107 = -1073741811;
  v11 = 0LL;
  v117 = 0LL;
  v119 = 0;
  P = 0LL;
  v122 = 0;
  v12 = *(unsigned int *)(v7 + 32);
  v108 = 0;
  v110 = 0;
  if ( (unsigned int)v12 > 0x100 )
  {
    v13 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v13 + 24) = 2055LL;
LABEL_137:
    WdLogEvent5_WdError(v13);
    goto LABEL_138;
  }
  v14 = *(unsigned int *)(v10 + 28);
  if ( (unsigned int)v14 > 0x10000 )
  {
    v13 = WdLogNewEntry5_WdError(v14, v8);
    *(_QWORD *)(v13 + 24) = 2060LL;
    goto LABEL_137;
  }
  v15 = 8 * v12;
  if ( (unsigned __int64)(8 * v12) > 0xFFFFFFFF )
  {
    v13 = WdLogNewEntry5_WdError(v14, v8);
    *(_QWORD *)(v13 + 24) = 2065LL;
    goto LABEL_137;
  }
  v16 = v15 + 56;
  if ( v15 >= 0xFFFFFFC8 )
  {
    v13 = WdLogNewEntry5_WdError(v14, v8);
    *(_QWORD *)(v13 + 24) = 2070LL;
    goto LABEL_137;
  }
  v17 = (unsigned int)v14 + v16;
  if ( (unsigned int)v17 < v16 )
  {
    v13 = WdLogNewEntry5_WdError(v14, v17);
    *(_QWORD *)(v13 + 24) = 2075LL;
    goto LABEL_137;
  }
  if ( (unsigned int)v17 > *((_DWORD *)v2 + 22) )
  {
    v13 = WdLogNewEntry5_WdError(v14, v17);
    *(_QWORD *)(v13 + 24) = 2080LL;
    goto LABEL_137;
  }
  if ( (*(_DWORD *)(v10 + 48) & 0x20) == 0 )
  {
    v13 = WdLogNewEntry5_WdError(v14, v17);
    *(_QWORD *)(v13 + 24) = 2085LL;
    goto LABEL_137;
  }
  v18 = *(_DWORD *)(v10 + 24);
  v109 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v105, v18, *((struct DXGPROCESS **)v2 + 6), &v109, 0);
  v21 = v109;
  if ( !v109 )
  {
    v22 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v22 + 24) = *(unsigned int *)(v10 + 24);
    WdLogEvent5_WdError(v22);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v105);
    v5 = 1;
    goto LABEL_138;
  }
  v25 = (struct DXGDEVICE *)*((_QWORD *)v109 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v106, v25);
  if ( (*((_DWORD *)v21 + 105) & 0x10) != 0 )
  {
    v111 = (char *)v21 + 424;
    v112 = *((_QWORD *)v21 + 53);
    Current = DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::ITERATOR::GetCurrent(&v111);
    if ( !Current )
    {
      v29 = WdLogNewEntry5_WdError(v28, v27);
      *(_QWORD *)(v29 + 24) = v21;
      WdLogEvent5_WdError(v29);
LABEL_21:
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::~DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v106);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v105);
      goto LABEL_22;
    }
    v110 = *(_DWORD *)(Current + 24);
  }
  v104 = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                    &v117,
                                    *(_DWORD *)(v10 + 32));
  v11 = (struct _EX_RUNDOWN_REF **)v104;
  if ( !v104 )
  {
    v33 = WdLogNewEntry5_WdWarning(v31, v30, v32);
    *(_QWORD *)(v33 + 24) = 2118LL;
LABEL_26:
    WdLogEvent5_WdWarning(v33);
    goto LABEL_21;
  }
  v37 = PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(&P, *(_DWORD *)(v10 + 32));
  if ( !v37 )
  {
    v33 = WdLogNewEntry5_WdWarning(v35, v34, v36);
    *(_QWORD *)(v33 + 24) = 2124LL;
    goto LABEL_26;
  }
  v108 = *(_DWORD *)(v10 + 32);
  v107 = DxgkReferenceAllocationList(&v108, (struct _D3DDDI_ALLOCATIONLIST *)(v10 + 56), v104, v25);
  if ( v107 < 0 )
  {
    v33 = WdLogNewEntry5_WdWarning(v39, v38, v40);
    *(_QWORD *)(v33 + 24) = 2131LL;
    goto LABEL_26;
  }
  v41 = 0;
  v42 = *((_QWORD *)v25 + 2);
  v43 = *(_QWORD *)(v42 + 648);
  if ( *(_DWORD *)(v10 + 32) )
  {
    do
    {
      v44 = v104[v41];
      if ( !v44 )
      {
        v48 = WdLogNewEntry5_WdWarning(v39, v38, v40);
        *(_QWORD *)(v48 + 24) = 2140LL;
        WdLogEvent5_WdWarning(v48);
        goto LABEL_43;
      }
      if ( *((struct DXGDEVICE **)v44 + 1) != v25 )
      {
        v47 = WdLogNewEntry5_WdError(v39, v38);
        *(_QWORD *)(v47 + 24) = 2145LL;
        goto LABEL_41;
      }
      v45 = *((_QWORD *)v44 + 3);
      if ( !v45 )
      {
        v47 = WdLogNewEntry5_WdError(v39, 0LL);
        *(_QWORD *)(v47 + 24) = 2150LL;
        goto LABEL_41;
      }
      v46 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 640LL)
                                                                            + 8LL)
                                                                + 632LL))(
              v43,
              v45,
              0LL);
      v37[v41] = v46;
      if ( !v46 )
      {
        v47 = WdLogNewEntry5_WdError(v39, v38);
        *(_QWORD *)(v47 + 24) = 2159LL;
        goto LABEL_41;
      }
      ++v41;
    }
    while ( v41 < *(_DWORD *)(v10 + 32) );
    v42 = *((_QWORD *)v25 + 2);
    v2 = v113;
  }
  v109 = *(struct DXGCONTEXT **)(v42 + 16);
  if ( (*((_DWORD *)v109 + 511) & 4) == 0 )
  {
    v49 = WdLogNewEntry5_WdError(v39, v38);
    *(_QWORD *)(v49 + 24) = 2167LL;
    WdLogEvent5_WdError(v49);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::~DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v106);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v105);
    v11 = (struct _EX_RUNDOWN_REF **)v104;
    v5 = 1;
    goto LABEL_138;
  }
  v50 = (const unsigned __int8 *)(v15 + v10 + 56);
  v51 = &v50[*(unsigned int *)(v10 + 28)];
  v52 = v50;
  v53 = *(_DWORD *)(v10 + 28);
  if ( !v53 )
  {
LABEL_133:
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::~DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v106);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v105);
    memset(v123, 0, 0x178uLL);
    LODWORD(v123[0]) = v110;
    LODWORD(v123[1]) = *(_DWORD *)(v10 + 24);
    LODWORD(v123[2]) = *(_DWORD *)(v10 + 28);
    v123[6] = v10 + 56;
    HIDWORD(v123[2]) = *(_DWORD *)(v10 + 32);
    HIDWORD(v123[9]) = *(_DWORD *)(v10 + 48);
    v123[4] = v50;
    v107 = DxgkCddGdiCommand((struct _DXGKCDD_SUBMITRENDERTOHWQUEUE *)v123, 0LL, v90);
    goto LABEL_44;
  }
  while ( v53 >= 8 )
  {
    v54 = *((unsigned int *)v52 + 1);
    v55 = v52;
    if ( v53 < (unsigned int)v54 )
    {
      v47 = WdLogNewEntry5_WdError(v39, v52);
      *(_QWORD *)(v47 + 24) = 2189LL;
      goto LABEL_41;
    }
    v53 -= v54;
    v52 += v54;
    if ( v52 > v51 || (unsigned int)v54 > *(_DWORD *)(v10 + 28) )
    {
      v47 = WdLogNewEntry5_WdError(v39, v55);
      *(_QWORD *)(v47 + 24) = 2196LL;
      goto LABEL_41;
    }
    v56 = (unsigned int)(*(_DWORD *)v55 - 1);
    if ( *(_DWORD *)v55 == 1 )
    {
      v61 = (unsigned __int8 *)(v55 + 8);
      if ( (unsigned int)v54 < 0x48 )
      {
        v47 = WdLogNewEntry5_WdError(v56, v55);
        *(_QWORD *)(v47 + 24) = 2206LL;
        goto LABEL_41;
      }
      v62 = *((unsigned int *)v55 + 10);
      v84 = *(_DWORD *)(v10 + 32);
      if ( (unsigned int)v62 >= v84 || (v64 = *((unsigned int *)v55 + 11), (unsigned int)v64 >= v84) )
      {
        v47 = WdLogNewEntry5_WdError(v56, v55);
        *(_QWORD *)(v47 + 24) = 2212LL;
        goto LABEL_41;
      }
      v85 = *((unsigned __int16 *)v55 + 32);
      if ( (unsigned __int16)(v85 - 1) > 4u )
      {
        v47 = WdLogNewEntry5_WdError(v85, 4LL);
        *(_QWORD *)(v47 + 24) = 2217LL;
        goto LABEL_41;
      }
      if ( (_WORD)v85 == 5 )
      {
        if ( *(_BYTE *)(*((_QWORD *)v2 + 5) + 153LL) || (*((_DWORD *)v109 + 511) & 0x100000) == 0 )
        {
          v47 = WdLogNewEntry5_WdError(0LL, 4LL);
          *(_QWORD *)(v47 + 24) = 2224LL;
          goto LABEL_41;
        }
        v89 = gajRop3;
        v86 = *((unsigned __int16 *)v55 + 33);
        v87 = (unsigned __int8)v86;
        v88 = v86 >> 8;
        LOBYTE(v89) = gajRop3[v87];
        if ( (((unsigned __int8)v89 | gajRop3[v88]) & 0xE8) != 0 )
        {
          v47 = WdLogNewEntry5_WdError(v89, v88);
          *(_QWORD *)(v47 + 24) = 2229LL;
          goto LABEL_41;
        }
      }
      else if ( *((_WORD *)v55 + 33) )
      {
        v47 = WdLogNewEntry5_WdError(v85, 4LL);
        *(_QWORD *)(v47 + 24) = 2237LL;
        goto LABEL_41;
      }
      v102 = (unsigned __int8 **)(v61 + 48);
      v100 = *((_DWORD *)v61 + 10);
      v96 = *((_DWORD *)v61 + 15);
      v95 = *((_DWORD *)v61 + 16);
      v94 = (struct tagRECT *)v61;
      v93 = (struct tagRECT *)(v61 + 16);
      goto LABEL_104;
    }
    v57 = (unsigned int)(*(_DWORD *)v55 - 2);
    if ( *(_DWORD *)v55 != 2 )
    {
      v58 = (unsigned int)(*(_DWORD *)v55 - 3);
      if ( *(_DWORD *)v55 == 3 )
      {
        v70 = v55 + 8;
        if ( (unsigned int)v54 < 0x40 )
        {
          v47 = WdLogNewEntry5_WdError(v58, v55);
          *(_QWORD *)(v47 + 24) = 2319LL;
          goto LABEL_41;
        }
        v71 = *((unsigned int *)v55 + 10);
        v77 = *(_DWORD *)(v10 + 32);
        if ( (unsigned int)v71 >= v77 || (v73 = *((unsigned int *)v70 + 9), (unsigned int)v73 >= v77) )
        {
          v47 = WdLogNewEntry5_WdError(v58, v71);
          *(_QWORD *)(v47 + 24) = 2325LL;
          goto LABEL_41;
        }
      }
      else
      {
        v59 = (unsigned int)(*(_DWORD *)v55 - 4);
        if ( *(_DWORD *)v55 != 4 )
        {
          v60 = (unsigned int)(*(_DWORD *)v55 - 6);
          if ( *(_DWORD *)v55 != 6 )
          {
            if ( *(_DWORD *)v55 != 7 )
            {
              v47 = WdLogNewEntry5_WdError(v60, v55);
              *(_QWORD *)(v47 + 24) = 2468LL;
              goto LABEL_41;
            }
            v61 = (unsigned __int8 *)(v55 + 8);
            if ( (unsigned int)v54 < 0x48 )
            {
              v47 = WdLogNewEntry5_WdError(v60, v55);
              *(_QWORD *)(v47 + 24) = 2420LL;
              goto LABEL_41;
            }
            v62 = *((unsigned int *)v55 + 8);
            v63 = *(_DWORD *)(v10 + 32);
            if ( (unsigned int)v62 >= v63
              || *((_DWORD *)v55 + 7) >= v63
              || (v60 = *((unsigned int *)v55 + 6), (unsigned int)v60 >= v63)
              || (v64 = *((unsigned int *)v55 + 9), (unsigned int)v64 >= v63) )
            {
              v47 = WdLogNewEntry5_WdError(v60, v55);
              *(_QWORD *)(v47 + 24) = 2428LL;
              goto LABEL_41;
            }
            v65 = *((_DWORD *)v55 + 13);
            if ( v65 != -1 )
            {
              if ( v65 > 0xF )
              {
                v47 = WdLogNewEntry5_WdError(v60, 0xFFFFFFFFLL);
                *(_QWORD *)(v47 + 24) = 2435LL;
                goto LABEL_41;
              }
              if ( v37[v60] < 0x2000uLL )
              {
                v47 = WdLogNewEntry5_WdError(v60, 0xFFFFFFFFLL);
                *(_QWORD *)(v47 + 24) = 2440LL;
                goto LABEL_41;
              }
            }
            v66 = *((_DWORD *)v55 + 10);
            v102 = (unsigned __int8 **)(v61 + 56);
            v100 = *((_DWORD *)v61 + 12);
            v67 = *((_DWORD *)v61 + 16);
            LODWORD(v111) = v66 + *(_DWORD *)v61;
            v68 = v66 + *((_DWORD *)v61 + 2);
            v69 = *((_DWORD *)v61 + 9);
            LODWORD(v112) = v68;
            HIDWORD(v111) = v69 + *((_DWORD *)v61 + 1);
            HIDWORD(v112) = v69 + *((_DWORD *)v61 + 3);
            v96 = v67;
            v95 = 0;
            v94 = (struct tagRECT *)&v111;
            v93 = (struct tagRECT *)v61;
LABEL_104:
            v74 = ValidateGdiCommand(
                    72LL,
                    (unsigned int)v54,
                    v50,
                    v61,
                    *(const unsigned __int8 **)(v10 + 40),
                    v37[v64],
                    v37[v62],
                    v93,
                    v94,
                    v95,
                    v96,
                    v98,
                    0,
                    v100,
                    v102);
            goto LABEL_105;
          }
          v70 = v55 + 8;
          if ( (unsigned int)v54 < 0x40 )
          {
            v47 = WdLogNewEntry5_WdError(v60, v55);
            *(_QWORD *)(v47 + 24) = 2390LL;
            goto LABEL_41;
          }
          v71 = *((unsigned int *)v55 + 10);
          v72 = *(_DWORD *)(v10 + 32);
          if ( (unsigned int)v71 >= v72 || (v73 = *((unsigned int *)v70 + 9), (unsigned int)v73 >= v72) )
          {
            v47 = WdLogNewEntry5_WdError(v60, v71);
            *(_QWORD *)(v47 + 24) = 2396LL;
            goto LABEL_41;
          }
          v103 = (unsigned __int8 **)(v70 + 48);
          v101 = *((_DWORD *)v70 + 11);
          v99 = 0;
          v97 = *((_DWORD *)v70 + 15);
          goto LABEL_71;
        }
        v70 = v55 + 8;
        if ( (unsigned int)v54 < 0x40 )
        {
          v47 = WdLogNewEntry5_WdError(v59, v55);
          *(_QWORD *)(v47 + 24) = 2349LL;
          goto LABEL_41;
        }
        v71 = *((unsigned int *)v55 + 11);
        v75 = *(_DWORD *)(v10 + 32);
        if ( (unsigned int)v71 >= v75 || (v73 = *((unsigned int *)v70 + 8), (unsigned int)v73 >= v75) )
        {
          v47 = WdLogNewEntry5_WdError(v59, v71);
          *(_QWORD *)(v47 + 24) = 2355LL;
          goto LABEL_41;
        }
        v76 = *((unsigned int *)v70 + 14);
        if ( (_WORD)v76 != 3 )
        {
          v47 = WdLogNewEntry5_WdError(v76, v71);
          *(_QWORD *)(v47 + 24) = 2360LL;
          goto LABEL_41;
        }
        if ( (v76 & 0x30000) != 0 && (*((_DWORD *)v109 + 511) & 0x200000) == 0 )
        {
          v47 = WdLogNewEntry5_WdError(v76, v71);
          *(_QWORD *)(v47 + 24) = 2366LL;
          goto LABEL_41;
        }
      }
      v103 = (unsigned __int8 **)(v70 + 48);
      v101 = *((_DWORD *)v70 + 10);
      v99 = 1;
      v97 = *((_DWORD *)v70 + 15);
LABEL_71:
      v74 = ValidateGdiCommand(
              64LL,
              (unsigned int)v54,
              v50,
              v70,
              *(const unsigned __int8 **)(v10 + 40),
              v37[v73],
              v37[v71],
              (const struct tagRECT *)v70 + 1,
              (const struct tagRECT *)v70,
              0,
              v97,
              v98,
              v99,
              v101,
              v103);
      goto LABEL_105;
    }
    v78 = v55 + 8;
    if ( (unsigned int)v54 < 0x28 )
    {
      v47 = WdLogNewEntry5_WdError(v57, v55);
      *(_QWORD *)(v47 + 24) = 2263LL;
      goto LABEL_41;
    }
    v79 = *((unsigned int *)v55 + 6);
    if ( (unsigned int)v79 >= *(_DWORD *)(v10 + 32) )
    {
      v47 = WdLogNewEntry5_WdError(v57, v55);
      *(_QWORD *)(v47 + 24) = 2268LL;
      goto LABEL_41;
    }
    v80 = *((unsigned __int16 *)v55 + 22);
    if ( (unsigned __int16)(v80 - 1) > 6u )
    {
      v47 = WdLogNewEntry5_WdError(v80, v55);
      *(_QWORD *)(v47 + 24) = 2273LL;
      goto LABEL_41;
    }
    if ( (_WORD)v80 == 7 )
    {
      if ( *(_BYTE *)(*((_QWORD *)v2 + 5) + 153LL) || (*((_DWORD *)v109 + 511) & 0x100000) == 0 )
      {
        v47 = WdLogNewEntry5_WdError(v80, v55);
        *(_QWORD *)(v47 + 24) = 2280LL;
        goto LABEL_41;
      }
      v81 = *((unsigned __int16 *)v55 + 23);
      v82 = (unsigned __int8)v81;
      v83 = v81 >> 8;
      LOBYTE(v80) = gajRop3[v82];
      if ( (((unsigned __int8)v80 | gajRop3[v83]) & 0xFC) != 0 )
      {
        v47 = WdLogNewEntry5_WdError(v80, v83);
        *(_QWORD *)(v47 + 24) = 2286LL;
        goto LABEL_41;
      }
    }
    else if ( *((_WORD *)v55 + 23) )
    {
      v47 = WdLogNewEntry5_WdError(v80, v55);
      *(_QWORD *)(v47 + 24) = 2294LL;
      goto LABEL_41;
    }
    v74 = ValidateGdiCommand(
            40LL,
            (unsigned int)v54,
            v50,
            v78,
            *(const unsigned __int8 **)(v10 + 40),
            v37[v79],
            0LL,
            (const struct tagRECT *)v78,
            0LL,
            0,
            0,
            v98,
            0,
            *((_DWORD *)v78 + 5),
            (unsigned __int8 **)v78 + 3);
LABEL_105:
    if ( !v74 )
      goto LABEL_43;
    if ( !v53 )
      goto LABEL_133;
  }
  v47 = WdLogNewEntry5_WdError(v39, v38);
  *(_QWORD *)(v47 + 24) = 2183LL;
LABEL_41:
  WdLogEvent5_WdError(v47);
LABEL_43:
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::~DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v106);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v105);
LABEL_44:
  v11 = (struct _EX_RUNDOWN_REF **)v104;
LABEL_22:
  v5 = 1;
LABEL_138:
  if ( v107 < 0 )
  {
    v91 = WdLogNewEntry5_WdError(v24, v23);
    *(_QWORD *)(v91 + 24) = v107;
    WdLogEvent5_WdError(v91);
  }
  DxgkUnreferenceAllocationList(v108, v11);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v113 + 9), &v107, 4u);
  if ( P != &v121 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v122 = 0;
  if ( v117 != &v118 && v117 )
    ExFreePoolWithTag(v117, 0);
  v117 = 0LL;
  v119 = 0;
LABEL_147:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v114);
  return v5;
}
