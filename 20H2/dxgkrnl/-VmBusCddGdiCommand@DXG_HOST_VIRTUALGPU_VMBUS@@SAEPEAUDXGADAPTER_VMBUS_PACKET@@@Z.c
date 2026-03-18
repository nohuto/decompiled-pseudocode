/*
 * XREFs of ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023AF00
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004050 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006CEC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001993C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F674 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00408F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C00E8900 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C00E8AD0 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C0226C60 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C022B3BC (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1C023A5DC (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z.c)
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
  struct _EX_RUNDOWN_REF **v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // esi
  unsigned int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  struct DXGDEVICE *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  _QWORD *v33; // r13
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  unsigned int v38; // r14d
  __int64 v39; // r12
  struct DXGALLOCATION *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  const unsigned __int8 *v46; // rdi
  const unsigned __int8 *v47; // r12
  const unsigned __int8 *v48; // r14
  unsigned int v49; // esi
  __int64 v50; // r10
  const unsigned __int8 *v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  const unsigned __int8 *v57; // r9
  __int64 v58; // r11
  unsigned int v59; // eax
  __int64 v60; // r8
  unsigned int v61; // eax
  int v62; // edx
  unsigned int v63; // eax
  LONG v64; // ecx
  int v65; // edx
  unsigned __int8 v66; // al
  const unsigned __int8 *v67; // r9
  __int64 v68; // rdx
  unsigned int v69; // eax
  __int64 v70; // r8
  unsigned int v71; // eax
  __int64 v72; // rcx
  unsigned int v73; // eax
  const unsigned __int8 *v74; // r9
  __int64 v75; // r8
  __int64 v76; // rcx
  unsigned __int64 v77; // rdx
  __int64 v78; // rax
  unsigned __int64 v79; // rdx
  const unsigned __int8 *v80; // r9
  __int64 v81; // r11
  unsigned int v82; // eax
  __int64 v83; // r8
  __int64 v84; // rcx
  unsigned __int64 v85; // rdx
  __int64 v86; // rax
  unsigned __int64 v87; // rdx
  _BYTE *v88; // rcx
  __int64 v89; // r8
  __int64 v90; // rax
  unsigned int v92; // [rsp+58h] [rbp-B0h]
  unsigned __int8 v93; // [rsp+60h] [rbp-A8h]
  char v94; // [rsp+68h] [rbp-A0h]
  unsigned int v95; // [rsp+70h] [rbp-98h]
  unsigned int v96; // [rsp+70h] [rbp-98h]
  unsigned __int8 **v97; // [rsp+78h] [rbp-90h]
  struct DXGALLOCATION **v98; // [rsp+88h] [rbp-80h]
  _BYTE v99[16]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v100[16]; // [rsp+A0h] [rbp-68h] BYREF
  int v101; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v102; // [rsp+B4h] [rbp-54h] BYREF
  struct DXGCONTEXT *v103; // [rsp+B8h] [rbp-50h] BYREF
  int v104; // [rsp+C0h] [rbp-48h]
  struct DXGADAPTER_VMBUS_PACKET *v105; // [rsp+C8h] [rbp-40h]
  struct tagRECT v106; // [rsp+D0h] [rbp-38h] BYREF
  char v107[8]; // [rsp+E0h] [rbp-28h] BYREF
  DXGPUSHLOCK *v108; // [rsp+E8h] [rbp-20h]
  int v109; // [rsp+F0h] [rbp-18h]
  PVOID v110; // [rsp+F8h] [rbp-10h] BYREF
  char v111; // [rsp+100h] [rbp-8h] BYREF
  int v112; // [rsp+200h] [rbp+F8h]
  PVOID P; // [rsp+208h] [rbp+100h] BYREF
  char v114; // [rsp+210h] [rbp+108h] BYREF
  int v115; // [rsp+310h] [rbp+208h]
  _QWORD v116[48]; // [rsp+318h] [rbp+210h] BYREF

  v1 = *((_QWORD *)a1 + 5);
  v2 = a1;
  v105 = a1;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v107, (struct _KTHREAD **)(v1 + 232), 0);
  DXGPUSHLOCK::AcquireShared(v108);
  v4 = *((_QWORD *)v2 + 5);
  v5 = 1;
  v109 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v6 = WdLogNewEntry5_WdError(0LL, v3);
    *(_QWORD *)(v6 + 24) = 2027LL;
    WdLogEvent5_WdError(v6);
LABEL_4:
    v5 = 0;
    goto LABEL_145;
  }
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)v2);
  v10 = v7;
  if ( !v7 )
    goto LABEL_4;
  v101 = -1073741811;
  v11 = 0LL;
  v110 = 0LL;
  v112 = 0;
  P = 0LL;
  v115 = 0;
  v12 = *(unsigned int *)(v7 + 32);
  v102 = 0;
  v104 = 0;
  if ( (unsigned int)v12 > 0x100 )
  {
    v13 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v13 + 24) = 2044LL;
LABEL_135:
    WdLogEvent5_WdError(v13);
    goto LABEL_136;
  }
  v14 = *(unsigned int *)(v10 + 28);
  if ( (unsigned int)v14 > 0x10000 )
  {
    v13 = WdLogNewEntry5_WdError(v14, v8);
    *(_QWORD *)(v13 + 24) = 2049LL;
    goto LABEL_135;
  }
  v15 = 8 * v12;
  if ( (unsigned __int64)(8 * v12) > 0xFFFFFFFF )
  {
    v13 = WdLogNewEntry5_WdError(v14, v8);
    *(_QWORD *)(v13 + 24) = 2054LL;
    goto LABEL_135;
  }
  v16 = v15 + 56;
  if ( v15 >= 0xFFFFFFC8 )
  {
    v13 = WdLogNewEntry5_WdError(v14, v8);
    *(_QWORD *)(v13 + 24) = 2059LL;
    goto LABEL_135;
  }
  v17 = (unsigned int)v14 + v16;
  if ( (unsigned int)v17 < v16 )
  {
    v13 = WdLogNewEntry5_WdError(v14, v17);
    *(_QWORD *)(v13 + 24) = 2064LL;
    goto LABEL_135;
  }
  if ( (unsigned int)v17 > *((_DWORD *)v2 + 22) )
  {
    v13 = WdLogNewEntry5_WdError(v14, v17);
    *(_QWORD *)(v13 + 24) = 2069LL;
    goto LABEL_135;
  }
  if ( (*(_DWORD *)(v10 + 48) & 0x20) == 0 )
  {
    v13 = WdLogNewEntry5_WdError(v14, v17);
    *(_QWORD *)(v13 + 24) = 2074LL;
    goto LABEL_135;
  }
  v18 = *(_DWORD *)(v10 + 24);
  v103 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v99, v18, *((struct DXGPROCESS **)v2 + 6), &v103, 0);
  if ( !v103 )
  {
    v21 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v21 + 24) = *(unsigned int *)(v10 + 24);
    WdLogEvent5_WdError(v21);
LABEL_18:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v99);
    v5 = 1;
    goto LABEL_136;
  }
  if ( (*((_DWORD *)v103 + 105) & 0x10) != 0 )
  {
    v24 = 0LL;
    if ( *((struct DXGCONTEXT **)v103 + 53) != (struct DXGCONTEXT *)((char *)v103 + 424) )
      v24 = *((_QWORD *)v103 + 53);
    v104 = *(_DWORD *)(v24 + 24);
  }
  v25 = (struct DXGDEVICE *)*((_QWORD *)v103 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v100, v25);
  v98 = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                   &v110,
                                   *(_DWORD *)(v10 + 32));
  v11 = (struct _EX_RUNDOWN_REF **)v98;
  if ( !v98 )
  {
    v29 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v29 + 24) = 2101LL;
LABEL_25:
    WdLogEvent5_WdWarning(v29);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v100);
    goto LABEL_18;
  }
  v33 = PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(&P, *(_DWORD *)(v10 + 32));
  if ( !v33 )
  {
    v29 = WdLogNewEntry5_WdWarning(v31, v30, v32);
    *(_QWORD *)(v29 + 24) = 2107LL;
    goto LABEL_25;
  }
  v102 = *(_DWORD *)(v10 + 32);
  v101 = DxgkReferenceAllocationList(&v102, (struct _D3DDDI_ALLOCATIONLIST *)(v10 + 56), v98, v25);
  if ( v101 < 0 )
  {
    v29 = WdLogNewEntry5_WdWarning(v35, v34, v36);
    *(_QWORD *)(v29 + 24) = 2114LL;
    goto LABEL_25;
  }
  v37 = *((_QWORD *)v25 + 2);
  v38 = 0;
  v39 = *(_QWORD *)(v37 + 648);
  if ( *(_DWORD *)(v10 + 32) )
  {
    do
    {
      v40 = v98[v38];
      if ( !v40 )
      {
        v44 = WdLogNewEntry5_WdWarning(v35, v34, v36);
        *(_QWORD *)(v44 + 24) = 2123LL;
        WdLogEvent5_WdWarning(v44);
        goto LABEL_39;
      }
      if ( *((struct DXGDEVICE **)v40 + 1) != v25 )
      {
        v43 = WdLogNewEntry5_WdError(v35, v34);
        *(_QWORD *)(v43 + 24) = 2128LL;
        goto LABEL_38;
      }
      v41 = *((_QWORD *)v40 + 3);
      if ( !v41 )
      {
        v43 = WdLogNewEntry5_WdError(v35, 0LL);
        *(_QWORD *)(v43 + 24) = 2133LL;
        goto LABEL_38;
      }
      v42 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 640LL)
                                                                            + 8LL)
                                                                + 632LL))(
              v39,
              v41,
              0LL);
      v33[v38] = v42;
      if ( !v42 )
      {
        v43 = WdLogNewEntry5_WdError(v35, v34);
        *(_QWORD *)(v43 + 24) = 2142LL;
        goto LABEL_38;
      }
      ++v38;
    }
    while ( v38 < *(_DWORD *)(v10 + 32) );
    v37 = *((_QWORD *)v25 + 2);
    v2 = v105;
  }
  v45 = 4LL;
  v103 = *(struct DXGCONTEXT **)(v37 + 16);
  if ( (*((_DWORD *)v103 + 511) & 4) == 0 )
  {
    v43 = WdLogNewEntry5_WdError(4LL, v34);
    *(_QWORD *)(v43 + 24) = 2150LL;
    goto LABEL_38;
  }
  v46 = (const unsigned __int8 *)(v15 + v10 + 56);
  v47 = &v46[*(unsigned int *)(v10 + 28)];
  v48 = v46;
  v49 = *(_DWORD *)(v10 + 28);
  if ( !v49 )
  {
LABEL_131:
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v100);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v99);
    memset(v116, 0, 0x178uLL);
    LODWORD(v116[0]) = v104;
    LODWORD(v116[1]) = *(_DWORD *)(v10 + 24);
    LODWORD(v116[2]) = *(_DWORD *)(v10 + 28);
    v116[6] = v10 + 56;
    HIDWORD(v116[2]) = *(_DWORD *)(v10 + 32);
    HIDWORD(v116[9]) = *(_DWORD *)(v10 + 48);
    v116[4] = v46;
    v101 = DxgkCddGdiCommand((struct _DXGKCDD_SUBMITRENDERTOHWQUEUE *)v116, 0LL, v89);
    goto LABEL_40;
  }
  while ( v49 >= 8 )
  {
    v50 = *((unsigned int *)v48 + 1);
    v51 = v48;
    if ( v49 < (unsigned int)v50 )
    {
      v43 = WdLogNewEntry5_WdError(v45, v48);
      *(_QWORD *)(v43 + 24) = 2172LL;
      goto LABEL_38;
    }
    v49 -= v50;
    v48 += v50;
    if ( v48 > v47 || (unsigned int)v50 > *(_DWORD *)(v10 + 28) )
    {
      v43 = WdLogNewEntry5_WdError(v45, v51);
      *(_QWORD *)(v43 + 24) = 2179LL;
      goto LABEL_38;
    }
    v52 = (unsigned int)(*(_DWORD *)v51 - 1);
    if ( *(_DWORD *)v51 == 1 )
    {
      v80 = v51 + 8;
      if ( (unsigned int)v50 < 0x48 )
      {
        v43 = WdLogNewEntry5_WdError(v52, v51);
        *(_QWORD *)(v43 + 24) = 2189LL;
        goto LABEL_38;
      }
      v81 = *((unsigned int *)v51 + 10);
      v82 = *(_DWORD *)(v10 + 32);
      if ( (unsigned int)v81 >= v82 || (v83 = *((unsigned int *)v51 + 11), (unsigned int)v83 >= v82) )
      {
        v43 = WdLogNewEntry5_WdError(v52, v51);
        *(_QWORD *)(v43 + 24) = 2195LL;
        goto LABEL_38;
      }
      v84 = *((unsigned __int16 *)v51 + 32);
      if ( (unsigned __int16)(v84 - 1) > 4u )
      {
        v43 = WdLogNewEntry5_WdError(v84, 4LL);
        *(_QWORD *)(v43 + 24) = 2200LL;
        goto LABEL_38;
      }
      if ( (_WORD)v84 == 5 )
      {
        if ( *(_BYTE *)(*((_QWORD *)v2 + 5) + 153LL) || (*((_DWORD *)v103 + 511) & 0x100000) == 0 )
        {
          v43 = WdLogNewEntry5_WdError(0LL, 4LL);
          *(_QWORD *)(v43 + 24) = 2207LL;
          goto LABEL_38;
        }
        v88 = gajRop3;
        v85 = *((unsigned __int16 *)v51 + 33);
        v86 = (unsigned __int8)v85;
        v87 = v85 >> 8;
        LOBYTE(v88) = gajRop3[v86];
        if ( (((unsigned __int8)v88 | gajRop3[v87]) & 0xE8) != 0 )
        {
          v43 = WdLogNewEntry5_WdError(v88, v87);
          *(_QWORD *)(v43 + 24) = 2212LL;
          goto LABEL_38;
        }
      }
      else if ( *((_WORD *)v51 + 33) )
      {
        v43 = WdLogNewEntry5_WdError(v84, 4LL);
        *(_QWORD *)(v43 + 24) = 2220LL;
        goto LABEL_38;
      }
      v66 = ValidateGdiCommand(
              72LL,
              (unsigned int)v50,
              v46,
              v80,
              *(const unsigned __int8 **)(v10 + 40),
              v33[v83],
              v33[v81],
              (const struct tagRECT *)v80 + 1,
              (const struct tagRECT *)v80,
              *((_DWORD *)v80 + 16),
              *((_DWORD *)v80 + 15),
              v93,
              0,
              *((_DWORD *)v80 + 10),
              (unsigned __int8 **)v80 + 6);
    }
    else
    {
      v53 = (unsigned int)(*(_DWORD *)v51 - 2);
      if ( *(_DWORD *)v51 == 2 )
      {
        v74 = v51 + 8;
        if ( (unsigned int)v50 < 0x28 )
        {
          v43 = WdLogNewEntry5_WdError(v53, v51);
          *(_QWORD *)(v43 + 24) = 2246LL;
          goto LABEL_38;
        }
        v75 = *((unsigned int *)v51 + 6);
        if ( (unsigned int)v75 >= *(_DWORD *)(v10 + 32) )
        {
          v43 = WdLogNewEntry5_WdError(v53, v51);
          *(_QWORD *)(v43 + 24) = 2251LL;
          goto LABEL_38;
        }
        v76 = *((unsigned __int16 *)v51 + 22);
        if ( (unsigned __int16)(v76 - 1) > 6u )
        {
          v43 = WdLogNewEntry5_WdError(v76, v51);
          *(_QWORD *)(v43 + 24) = 2256LL;
          goto LABEL_38;
        }
        if ( (_WORD)v76 == 7 )
        {
          if ( *(_BYTE *)(*((_QWORD *)v2 + 5) + 153LL) || (*((_DWORD *)v103 + 511) & 0x100000) == 0 )
          {
            v43 = WdLogNewEntry5_WdError(v76, v51);
            *(_QWORD *)(v43 + 24) = 2263LL;
            goto LABEL_38;
          }
          v77 = *((unsigned __int16 *)v51 + 23);
          v78 = (unsigned __int8)v77;
          v79 = v77 >> 8;
          LOBYTE(v76) = gajRop3[v78];
          if ( (((unsigned __int8)v76 | gajRop3[v79]) & 0xFC) != 0 )
          {
            v43 = WdLogNewEntry5_WdError(v76, v79);
            *(_QWORD *)(v43 + 24) = 2269LL;
            goto LABEL_38;
          }
        }
        else if ( *((_WORD *)v51 + 23) )
        {
          v43 = WdLogNewEntry5_WdError(v76, v51);
          *(_QWORD *)(v43 + 24) = 2277LL;
          goto LABEL_38;
        }
        v66 = ValidateGdiCommand(
                40LL,
                (unsigned int)v50,
                v46,
                v74,
                *(const unsigned __int8 **)(v10 + 40),
                v33[v75],
                0LL,
                (const struct tagRECT *)v74,
                0LL,
                0,
                0,
                v93,
                0,
                *((_DWORD *)v74 + 5),
                (unsigned __int8 **)v74 + 3);
      }
      else
      {
        v54 = (unsigned int)(*(_DWORD *)v51 - 3);
        if ( *(_DWORD *)v51 == 3 )
        {
          v67 = v51 + 8;
          if ( (unsigned int)v50 < 0x40 )
          {
            v43 = WdLogNewEntry5_WdError(v54, v51);
            *(_QWORD *)(v43 + 24) = 2302LL;
            goto LABEL_38;
          }
          v68 = *((unsigned int *)v51 + 10);
          v73 = *(_DWORD *)(v10 + 32);
          if ( (unsigned int)v68 >= v73 || (v70 = *((unsigned int *)v67 + 9), (unsigned int)v70 >= v73) )
          {
            v43 = WdLogNewEntry5_WdError(v54, v68);
            *(_QWORD *)(v43 + 24) = 2308LL;
            goto LABEL_38;
          }
          goto LABEL_77;
        }
        v55 = (unsigned int)(*(_DWORD *)v51 - 4);
        if ( *(_DWORD *)v51 == 4 )
        {
          v67 = v51 + 8;
          if ( (unsigned int)v50 < 0x40 )
          {
            v43 = WdLogNewEntry5_WdError(v55, v51);
            *(_QWORD *)(v43 + 24) = 2332LL;
            goto LABEL_38;
          }
          v68 = *((unsigned int *)v51 + 11);
          v71 = *(_DWORD *)(v10 + 32);
          if ( (unsigned int)v68 >= v71 || (v70 = *((unsigned int *)v67 + 8), (unsigned int)v70 >= v71) )
          {
            v43 = WdLogNewEntry5_WdError(v55, v68);
            *(_QWORD *)(v43 + 24) = 2338LL;
            goto LABEL_38;
          }
          v72 = *((unsigned int *)v67 + 14);
          if ( (_WORD)v72 != 3 )
          {
            v43 = WdLogNewEntry5_WdError(v72, v68);
            *(_QWORD *)(v43 + 24) = 2343LL;
            goto LABEL_38;
          }
          if ( (v72 & 0x30000) != 0 && (*((_DWORD *)v103 + 511) & 0x200000) == 0 )
          {
            v43 = WdLogNewEntry5_WdError(v72, v68);
            *(_QWORD *)(v43 + 24) = 2349LL;
            goto LABEL_38;
          }
LABEL_77:
          v97 = (unsigned __int8 **)(v67 + 48);
          v96 = *((_DWORD *)v67 + 10);
          v94 = 1;
          v92 = *((_DWORD *)v67 + 15);
LABEL_70:
          v66 = ValidateGdiCommand(
                  64LL,
                  (unsigned int)v50,
                  v46,
                  v67,
                  *(const unsigned __int8 **)(v10 + 40),
                  v33[v70],
                  v33[v68],
                  (const struct tagRECT *)v67 + 1,
                  (const struct tagRECT *)v67,
                  0,
                  v92,
                  v93,
                  v94,
                  v96,
                  v97);
          goto LABEL_103;
        }
        v56 = (unsigned int)(*(_DWORD *)v51 - 6);
        if ( *(_DWORD *)v51 == 6 )
        {
          v67 = v51 + 8;
          if ( (unsigned int)v50 < 0x40 )
          {
            v43 = WdLogNewEntry5_WdError(v56, v51);
            *(_QWORD *)(v43 + 24) = 2373LL;
            goto LABEL_38;
          }
          v68 = *((unsigned int *)v51 + 10);
          v69 = *(_DWORD *)(v10 + 32);
          if ( (unsigned int)v68 >= v69 || (v70 = *((unsigned int *)v67 + 9), (unsigned int)v70 >= v69) )
          {
            v43 = WdLogNewEntry5_WdError(v56, v68);
            *(_QWORD *)(v43 + 24) = 2379LL;
            goto LABEL_38;
          }
          v97 = (unsigned __int8 **)(v67 + 48);
          v96 = *((_DWORD *)v67 + 11);
          v94 = 0;
          v92 = *((_DWORD *)v67 + 15);
          goto LABEL_70;
        }
        if ( *(_DWORD *)v51 != 7 )
        {
          v43 = WdLogNewEntry5_WdError(v56, v51);
          *(_QWORD *)(v43 + 24) = 2451LL;
          goto LABEL_38;
        }
        v57 = v51 + 8;
        if ( (unsigned int)v50 < 0x48 )
        {
          v43 = WdLogNewEntry5_WdError(v56, v51);
          *(_QWORD *)(v43 + 24) = 2403LL;
          goto LABEL_38;
        }
        v58 = *((unsigned int *)v51 + 8);
        v59 = *(_DWORD *)(v10 + 32);
        if ( (unsigned int)v58 >= v59
          || *((_DWORD *)v51 + 7) >= v59
          || (v56 = *((unsigned int *)v51 + 6), (unsigned int)v56 >= v59)
          || (v60 = *((unsigned int *)v51 + 9), (unsigned int)v60 >= v59) )
        {
          v43 = WdLogNewEntry5_WdError(v56, v51);
          *(_QWORD *)(v43 + 24) = 2411LL;
          goto LABEL_38;
        }
        v61 = *((_DWORD *)v51 + 13);
        if ( v61 != -1 )
        {
          if ( v61 > 0xF )
          {
            v43 = WdLogNewEntry5_WdError(v56, 0xFFFFFFFFLL);
            *(_QWORD *)(v43 + 24) = 2418LL;
            goto LABEL_38;
          }
          if ( v33[v56] < 0x2000uLL )
          {
            v43 = WdLogNewEntry5_WdError(v56, 0xFFFFFFFFLL);
            *(_QWORD *)(v43 + 24) = 2423LL;
            goto LABEL_38;
          }
        }
        v62 = *((_DWORD *)v51 + 10);
        v95 = *((_DWORD *)v57 + 12);
        v63 = *((_DWORD *)v57 + 16);
        v106.left = v62 + *(_DWORD *)v57;
        v64 = v62 + *((_DWORD *)v57 + 2);
        v65 = *((_DWORD *)v57 + 9);
        v106.right = v64;
        v106.top = v65 + *((_DWORD *)v57 + 1);
        v106.bottom = v65 + *((_DWORD *)v57 + 3);
        v66 = ValidateGdiCommand(
                72LL,
                (unsigned int)v50,
                v46,
                v57,
                *(const unsigned __int8 **)(v10 + 40),
                v33[v60],
                v33[v58],
                (const struct tagRECT *)v57,
                &v106,
                0,
                v63,
                v93,
                0,
                v95,
                (unsigned __int8 **)v57 + 7);
      }
    }
LABEL_103:
    if ( !v66 )
      goto LABEL_39;
    if ( !v49 )
      goto LABEL_131;
  }
  v43 = WdLogNewEntry5_WdError(v45, v34);
  *(_QWORD *)(v43 + 24) = 2166LL;
LABEL_38:
  WdLogEvent5_WdError(v43);
LABEL_39:
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v100);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v99);
LABEL_40:
  v11 = (struct _EX_RUNDOWN_REF **)v98;
  v5 = 1;
LABEL_136:
  if ( v101 < 0 )
  {
    v90 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v90 + 24) = v101;
    WdLogEvent5_WdError(v90);
  }
  DxgkUnreferenceAllocationList(v102, v11);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v105 + 9), &v101, 4u);
  if ( P != &v114 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v115 = 0;
  if ( v110 != &v111 && v110 )
    ExFreePoolWithTag(v110, 0);
  v110 = 0LL;
  v112 = 0;
LABEL_145:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v107);
  return v5;
}
