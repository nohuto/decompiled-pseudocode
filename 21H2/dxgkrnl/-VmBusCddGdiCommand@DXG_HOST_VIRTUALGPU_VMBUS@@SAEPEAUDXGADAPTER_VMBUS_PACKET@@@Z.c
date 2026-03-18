/*
 * XREFs of ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0366FC0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C0008FF0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009178 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00137F4 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001E30C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C634 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C016F940 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C0172E70 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C0222F18 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C02DB5B0 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1C0366494 (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCddGdiCommand(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  struct DXGADAPTER_VMBUS_PACKET *v1; // r15
  __int64 v2; // rax
  char v3; // r13
  __int64 v4; // rax
  __int64 v5; // r14
  struct _EX_RUNDOWN_REF **v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbx
  const wchar_t *v9; // r9
  unsigned int v10; // ecx
  unsigned int v11; // r12d
  unsigned int v12; // eax
  __int64 v13; // r14
  struct DXGPROCESS *v14; // r8
  unsigned int v15; // edx
  __int64 v16; // rcx
  struct DXGDEVICE *v17; // r15
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // r13d
  __int64 v23; // rax
  __int64 v24; // r9
  struct DXGALLOCATION *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  struct DXGCONTEXT *v28; // r11
  __int64 v29; // r14
  const wchar_t *v30; // r9
  __int64 v31; // r13
  const unsigned __int8 *v32; // r15
  const unsigned __int8 *v33; // r8
  const unsigned __int8 *v34; // rcx
  int v35; // r12d
  unsigned int v36; // r12d
  __int64 v37; // r10
  const unsigned __int8 *v38; // rdx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  unsigned __int8 *v44; // r9
  __int64 v45; // r11
  unsigned int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // r8
  unsigned int v49; // eax
  struct DXGCONTEXT *v50; // r13
  int v51; // edx
  unsigned int v52; // eax
  LONG v53; // ecx
  int v54; // edx
  unsigned __int8 v55; // al
  unsigned __int8 *v56; // r9
  __int64 v57; // rdx
  unsigned int v58; // eax
  __int64 v59; // r8
  unsigned __int8 *v60; // r9
  __int64 v61; // rdx
  unsigned int v62; // eax
  __int64 v63; // r8
  int v64; // ecx
  unsigned __int8 v65; // al
  unsigned int v66; // eax
  __int64 v67; // r8
  __int16 v68; // cx
  __int64 v69; // r14
  const wchar_t *v70; // r9
  unsigned __int8 *v71; // r9
  __int64 v72; // r11
  unsigned int v73; // eax
  __int64 v74; // r8
  __int16 v75; // cx
  __int64 v76; // r8
  unsigned __int8 v78; // [rsp+60h] [rbp-A8h]
  unsigned int v79; // [rsp+70h] [rbp-98h]
  struct DXGALLOCATION **Elements; // [rsp+88h] [rbp-80h]
  _BYTE v82[16]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v83[16]; // [rsp+A8h] [rbp-60h] BYREF
  int v84; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v85; // [rsp+C0h] [rbp-48h]
  struct DXGCONTEXT *v86; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v87; // [rsp+D0h] [rbp-38h] BYREF
  int v88; // [rsp+D4h] [rbp-34h]
  struct tagRECT v89; // [rsp+D8h] [rbp-30h] BYREF
  const unsigned __int8 *v90; // [rsp+E8h] [rbp-20h]
  const unsigned __int8 *v91; // [rsp+F0h] [rbp-18h]
  char v92[8]; // [rsp+F8h] [rbp-10h] BYREF
  DXGPUSHLOCK *v93; // [rsp+100h] [rbp-8h]
  int v94; // [rsp+108h] [rbp+0h]
  PVOID v95; // [rsp+118h] [rbp+10h] BYREF
  char v96; // [rsp+120h] [rbp+18h] BYREF
  int v97; // [rsp+220h] [rbp+118h]
  PVOID P; // [rsp+228h] [rbp+120h] BYREF
  char v99; // [rsp+230h] [rbp+128h] BYREF
  int v100; // [rsp+330h] [rbp+228h]
  _QWORD v101[48]; // [rsp+338h] [rbp+230h] BYREF

  v1 = a1;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v92, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v93);
  v2 = *((_QWORD *)v1 + 10);
  v3 = 1;
  v94 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    WdLogSingleEntry1(2LL, 2364LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      2364LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_4:
    v3 = 0;
    goto LABEL_158;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)v1);
  v5 = v4;
  if ( !v4 )
    goto LABEL_4;
  v95 = 0LL;
  v6 = 0LL;
  v97 = 0;
  P = 0LL;
  v100 = 0;
  v84 = -1073741811;
  v7 = *(unsigned int *)(v4 + 32);
  Elements = 0LL;
  v87 = 0;
  v88 = 0;
  if ( (unsigned int)v7 > 0x100 )
  {
    v8 = 2381LL;
    WdLogSingleEntry1(2LL, 2381LL);
    v9 = L"Invalid allocation count";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v8, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_149;
  }
  v10 = *(_DWORD *)(v5 + 28);
  if ( v10 > 0x10000 )
  {
    v8 = 2386LL;
    WdLogSingleEntry1(2LL, 2386LL);
    v9 = L"Invalid command buffer size";
    goto LABEL_7;
  }
  v11 = 8 * v7;
  if ( (unsigned __int64)(8 * v7) > 0xFFFFFFFF )
  {
    v13 = 2391LL;
    WdLogSingleEntry1(2LL, 2391LL);
    goto LABEL_147;
  }
  v12 = v11 + 56;
  if ( v11 >= 0xFFFFFFC8 )
  {
    v13 = 2396LL;
    WdLogSingleEntry1(2LL, 2396LL);
    goto LABEL_147;
  }
  if ( v10 + v12 < v12 )
  {
    v13 = 2401LL;
    WdLogSingleEntry1(2LL, 2401LL);
    goto LABEL_147;
  }
  if ( v10 + v12 > *((_DWORD *)v1 + 36) )
  {
    v13 = 2406LL;
    WdLogSingleEntry1(2LL, 2406LL);
LABEL_147:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Malformed packet", v13, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_148;
  }
  if ( (*(_DWORD *)(v5 + 48) & 0x20) == 0 )
  {
    v13 = 2411LL;
    WdLogSingleEntry1(2LL, 2411LL);
    goto LABEL_147;
  }
  v14 = (struct DXGPROCESS *)*((_QWORD *)v1 + 11);
  v15 = *(_DWORD *)(v5 + 24);
  v86 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v82, v15, v14, &v86, 0, 1);
  v16 = 0LL;
  if ( !v86 )
  {
    WdLogSingleEntry1(2LL, *(unsigned int *)(v5 + 24));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid context handle 0x%I64x",
      *(unsigned int *)(v5 + 24),
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_19:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v82);
    v1 = a1;
    goto LABEL_148;
  }
  if ( (*((_DWORD *)v86 + 101) & 0x10) != 0 )
  {
    if ( *((struct DXGCONTEXT **)v86 + 51) != (struct DXGCONTEXT *)((char *)v86 + 408) )
      v16 = *((_QWORD *)v86 + 51);
    v88 = *(_DWORD *)(v16 + 24);
  }
  v17 = (struct DXGDEVICE *)*((_QWORD *)v86 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v83, v17);
  Elements = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                        (__int64 *)&v95,
                                        *(_DWORD *)(v5 + 32),
                                        v18,
                                        v19);
  if ( !Elements )
  {
    WdLogSingleEntry1(3LL, 2438LL);
LABEL_26:
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v83);
    goto LABEL_19;
  }
  v86 = (struct DXGCONTEXT *)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                               (__int64 *)&P,
                               *(_DWORD *)(v5 + 32),
                               v20,
                               v21);
  if ( !v86 )
  {
    WdLogSingleEntry1(3LL, 2444LL);
    goto LABEL_29;
  }
  v87 = *(_DWORD *)(v5 + 32);
  v84 = DxgkReferenceAllocationList(&v87, (struct _D3DDDI_ALLOCATIONLIST *)(v5 + 56), Elements, v17);
  if ( v84 < 0 )
  {
    WdLogSingleEntry1(3LL, 2451LL);
    goto LABEL_29;
  }
  v22 = 0;
  v23 = *((_QWORD *)v17 + 2);
  v24 = *(_QWORD *)(v23 + 656);
  v85 = v24;
  if ( *(_DWORD *)(v5 + 32) )
  {
    do
    {
      v25 = Elements[v22];
      if ( !v25 )
      {
        WdLogSingleEntry1(3LL, 2460LL);
        goto LABEL_29;
      }
      if ( *((struct DXGDEVICE **)v25 + 1) != v17 )
      {
        v29 = 2465LL;
        WdLogSingleEntry1(2LL, 2465LL);
        v30 = L"Invalid allocation device";
        goto LABEL_41;
      }
      v26 = *((_QWORD *)v25 + 3);
      if ( !v26 )
      {
        v29 = 2470LL;
        WdLogSingleEntry1(2LL, 2470LL);
        v30 = L"Invalid allocation";
        goto LABEL_41;
      }
      v27 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 648LL)
                                                                            + 8LL)
                                                                + 640LL))(
              v24,
              v26,
              0LL);
      v28 = v86;
      *((_QWORD *)v86 + v22) = v27;
      if ( !v27 )
      {
        v29 = 2479LL;
        WdLogSingleEntry1(2LL, 2479LL);
        v30 = L"Invalid allocation size";
        goto LABEL_41;
      }
      v24 = v85;
      ++v22;
    }
    while ( v22 < *(_DWORD *)(v5 + 32) );
    v23 = *((_QWORD *)v17 + 2);
  }
  else
  {
    v28 = v86;
  }
  v31 = *(_QWORD *)(v23 + 16);
  v85 = v31;
  if ( (*(_DWORD *)(v31 + 2140) & 4) == 0 )
  {
    v29 = 2487LL;
    WdLogSingleEntry1(2LL, 2487LL);
    v30 = L"Driver does not support GDI interrop";
    goto LABEL_41;
  }
  v32 = (const unsigned __int8 *)(v11 + v5 + 56);
  v33 = &v32[*(unsigned int *)(v5 + 28)];
  v34 = v32;
  v35 = (_DWORD)v32 + *(_DWORD *)(v5 + 28);
  v91 = v33;
  v36 = v35 - (_DWORD)v32;
  if ( !v36 )
  {
LABEL_143:
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v83);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v82);
    memset(v101, 0, 0x178uLL);
    LODWORD(v101[0]) = v88;
    LODWORD(v101[1]) = *(_DWORD *)(v5 + 24);
    LODWORD(v101[2]) = *(_DWORD *)(v5 + 28);
    v101[6] = v5 + 56;
    HIDWORD(v101[2]) = *(_DWORD *)(v5 + 32);
    HIDWORD(v101[9]) = *(_DWORD *)(v5 + 48);
    v101[4] = v32;
    v84 = DxgkCddGdiCommand((struct _DXGKCDD_SUBMITRENDERTOHWQUEUE *)v101, 0LL, v76);
    goto LABEL_30;
  }
  while ( 1 )
  {
    if ( v36 < 8 )
    {
      v29 = 2503LL;
      WdLogSingleEntry1(2LL, 2503LL);
      goto LABEL_119;
    }
    v37 = *((unsigned int *)v34 + 1);
    v38 = v34;
    if ( v36 < (unsigned int)v37 )
    {
      v29 = 2509LL;
      WdLogSingleEntry1(2LL, 2509LL);
      goto LABEL_119;
    }
    v36 -= v37;
    v90 = &v34[v37];
    if ( &v34[v37] > v33 || (unsigned int)v37 > *(_DWORD *)(v5 + 28) )
    {
      v29 = 2516LL;
      WdLogSingleEntry1(2LL, 2516LL);
      goto LABEL_119;
    }
    v39 = *(_DWORD *)v34 - 1;
    if ( *(_DWORD *)v38 == 1 )
    {
      if ( (unsigned int)v37 < 0x48 )
      {
        v29 = 2526LL;
        WdLogSingleEntry1(2LL, 2526LL);
        goto LABEL_119;
      }
      v72 = *((unsigned int *)v38 + 10);
      v73 = *(_DWORD *)(v5 + 32);
      if ( (unsigned int)v72 < v73 )
      {
        v74 = *((unsigned int *)v38 + 11);
        if ( (unsigned int)v74 < v73 )
        {
          v75 = *((_WORD *)v38 + 32);
          v3 = 1;
          if ( (unsigned __int16)(v75 - 1) <= 4u )
          {
            if ( v75 == 5 )
            {
              if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 153LL) || (*(_DWORD *)(v85 + 2140) & 0x100000) == 0 )
              {
                v69 = 2544LL;
                WdLogSingleEntry1(2LL, 2544LL);
                goto LABEL_129;
              }
              if ( ((gajRop3[(unsigned __int8)*((_WORD *)v38 + 33)] | gajRop3[(unsigned __int64)*((unsigned __int16 *)v38
                                                                                                + 33) >> 8]) & 0xE8) != 0 )
              {
                v69 = 2549LL;
                WdLogSingleEntry1(2LL, 2549LL);
                goto LABEL_96;
              }
            }
            else if ( *((_WORD *)v38 + 33) )
            {
              v69 = 2557LL;
              WdLogSingleEntry1(2LL, 2557LL);
              goto LABEL_96;
            }
            v71 = (unsigned __int8 *)(v38 + 8);
            v55 = ValidateGdiCommand(
                    0x48u,
                    v37,
                    v32,
                    v71,
                    *(const unsigned __int8 **)(v5 + 40),
                    *((_QWORD *)v86 + v74),
                    *((_QWORD *)v86 + v72),
                    (const struct tagRECT *)v71 + 1,
                    (const struct tagRECT *)v71,
                    *((_DWORD *)v71 + 16),
                    *((_DWORD *)v71 + 15),
                    v78,
                    0,
                    *((_DWORD *)v71 + 10),
                    (unsigned __int8 **)v71 + 6);
            goto LABEL_111;
          }
          v69 = 2537LL;
          WdLogSingleEntry1(2LL, 2537LL);
LABEL_132:
          v70 = L"Invalid ROP";
          goto LABEL_97;
        }
      }
      v29 = 2532LL;
      WdLogSingleEntry1(2LL, 2532LL);
LABEL_117:
      v30 = L"Invalid allocation index";
      goto LABEL_41;
    }
    v40 = v39 - 1;
    if ( !v40 )
    {
      if ( (unsigned int)v37 < 0x28 )
      {
        v29 = 2583LL;
        WdLogSingleEntry1(2LL, 2583LL);
        goto LABEL_119;
      }
      v67 = *((unsigned int *)v38 + 6);
      if ( (unsigned int)v67 < *(_DWORD *)(v5 + 32) )
      {
        v68 = *((_WORD *)v38 + 22);
        v3 = 1;
        if ( (unsigned __int16)(v68 - 1) <= 6u )
        {
          if ( v68 != 7 )
          {
            if ( *((_WORD *)v38 + 23) )
            {
              v69 = 2614LL;
              WdLogSingleEntry1(2LL, 2614LL);
              goto LABEL_96;
            }
            goto LABEL_99;
          }
          if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 153LL) && (*(_DWORD *)(v85 + 2140) & 0x100000) != 0 )
          {
            if ( ((gajRop3[(unsigned __int8)*((_WORD *)v38 + 23)] | gajRop3[(unsigned __int64)*((unsigned __int16 *)v38
                                                                                              + 23) >> 8]) & 0xFC) != 0 )
            {
              v69 = 2606LL;
              WdLogSingleEntry1(2LL, 2606LL);
LABEL_96:
              v70 = L"Invalid ROP3";
LABEL_97:
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v70, v69, 0LL, 0LL, 0LL, 0LL);
              goto LABEL_26;
            }
LABEL_99:
            v65 = ValidateGdiCommand(
                    0x28u,
                    v37,
                    v32,
                    (unsigned __int8 *)v38 + 8,
                    *(const unsigned __int8 **)(v5 + 40),
                    *((_QWORD *)v28 + v67),
                    0LL,
                    (const struct tagRECT *)(v38 + 8),
                    0LL,
                    0,
                    0,
                    v78,
                    0,
                    *((_DWORD *)v38 + 7),
                    (unsigned __int8 **)v38 + 4);
            goto LABEL_82;
          }
          v69 = 2600LL;
          WdLogSingleEntry1(2LL, 2600LL);
LABEL_129:
          v70 = L"Driver does not support all ROPs";
          goto LABEL_97;
        }
        v69 = 2593LL;
        WdLogSingleEntry1(2LL, 2593LL);
        goto LABEL_132;
      }
      v29 = 2588LL;
      WdLogSingleEntry1(2LL, 2588LL);
      goto LABEL_117;
    }
    v41 = v40 - 1;
    if ( !v41 )
    {
      v60 = (unsigned __int8 *)(v38 + 8);
      if ( (unsigned int)v37 >= 0x40 )
      {
        v61 = *((unsigned int *)v38 + 10);
        v66 = *(_DWORD *)(v5 + 32);
        if ( (unsigned int)v61 >= v66 || (v63 = *((unsigned int *)v60 + 9), (unsigned int)v63 >= v66) )
        {
          v29 = 2645LL;
          WdLogSingleEntry1(2LL, 2645LL);
          goto LABEL_117;
        }
        goto LABEL_81;
      }
      v29 = 2639LL;
      WdLogSingleEntry1(2LL, 2639LL);
LABEL_119:
      v30 = L"Malformed packet";
      goto LABEL_41;
    }
    v42 = v41 - 1;
    if ( !v42 )
      break;
    v43 = v42 - 2;
    if ( v43 )
    {
      if ( v43 != 1 )
      {
        v29 = 2788LL;
        WdLogSingleEntry1(2LL, 2788LL);
        goto LABEL_119;
      }
      v44 = (unsigned __int8 *)(v38 + 8);
      if ( (unsigned int)v37 < 0x48 )
      {
        v29 = 2740LL;
        WdLogSingleEntry1(2LL, 2740LL);
        goto LABEL_119;
      }
      v45 = *((unsigned int *)v38 + 8);
      v46 = *(_DWORD *)(v5 + 32);
      if ( (unsigned int)v45 >= v46
        || *((_DWORD *)v38 + 7) >= v46
        || (v47 = *((unsigned int *)v38 + 6), (unsigned int)v47 >= v46)
        || (v48 = *((unsigned int *)v38 + 9), (unsigned int)v48 >= v46) )
      {
        v29 = 2748LL;
        WdLogSingleEntry1(2LL, 2748LL);
        goto LABEL_117;
      }
      v49 = *((_DWORD *)v38 + 13);
      if ( v49 == -1 )
      {
        v50 = v86;
      }
      else
      {
        if ( v49 > 0xF )
        {
          v29 = 2755LL;
          WdLogSingleEntry1(2LL, 2755LL);
          v30 = L"Invalid gamma";
          goto LABEL_41;
        }
        v50 = v86;
        if ( *((_QWORD *)v86 + v47) < 0x2000uLL )
        {
          v29 = 2760LL;
          WdLogSingleEntry1(2LL, 2760LL);
          v30 = L"Invalid temporary allocation size";
          goto LABEL_41;
        }
      }
      v51 = *((_DWORD *)v38 + 10);
      v79 = *((_DWORD *)v44 + 12);
      v52 = *((_DWORD *)v44 + 16);
      v89.left = v51 + *(_DWORD *)v44;
      v53 = v51 + *((_DWORD *)v44 + 2);
      v54 = *((_DWORD *)v44 + 9);
      v89.right = v53;
      v89.top = v54 + *((_DWORD *)v44 + 1);
      v89.bottom = v54 + *((_DWORD *)v44 + 3);
      v55 = ValidateGdiCommand(
              0x48u,
              v37,
              v32,
              v44,
              *(const unsigned __int8 **)(v5 + 40),
              *((_QWORD *)v50 + v48),
              *((_QWORD *)v50 + v45),
              (const struct tagRECT *)v44,
              &v89,
              0,
              v52,
              v78,
              0,
              v79,
              (unsigned __int8 **)v44 + 7);
LABEL_111:
      if ( !v55 )
        goto LABEL_29;
LABEL_112:
      v31 = v85;
      goto LABEL_113;
    }
    v56 = (unsigned __int8 *)(v38 + 8);
    if ( (unsigned int)v37 < 0x40 )
    {
      v29 = 2710LL;
      WdLogSingleEntry1(2LL, 2710LL);
      goto LABEL_119;
    }
    v57 = *((unsigned int *)v38 + 10);
    v58 = *(_DWORD *)(v5 + 32);
    if ( (unsigned int)v57 >= v58 || (v59 = *((unsigned int *)v56 + 9), (unsigned int)v59 >= v58) )
    {
      v29 = 2716LL;
      WdLogSingleEntry1(2LL, 2716LL);
      goto LABEL_117;
    }
    if ( !ValidateGdiCommand(
            0x40u,
            v37,
            v32,
            v56,
            *(const unsigned __int8 **)(v5 + 40),
            *((_QWORD *)v28 + v59),
            *((_QWORD *)v28 + v57),
            (const struct tagRECT *)v56 + 1,
            (const struct tagRECT *)v56,
            0,
            *((_DWORD *)v56 + 15),
            v78,
            0,
            *((_DWORD *)v56 + 11),
            (unsigned __int8 **)v56 + 6) )
      goto LABEL_29;
LABEL_113:
    if ( !v36 )
      goto LABEL_143;
    v28 = v86;
    v34 = v90;
    v33 = v91;
  }
  v60 = (unsigned __int8 *)(v38 + 8);
  if ( (unsigned int)v37 < 0x40 )
  {
    v29 = 2669LL;
    WdLogSingleEntry1(2LL, 2669LL);
    goto LABEL_119;
  }
  v61 = *((unsigned int *)v38 + 11);
  v62 = *(_DWORD *)(v5 + 32);
  if ( (unsigned int)v61 >= v62 || (v63 = *((unsigned int *)v60 + 8), (unsigned int)v63 >= v62) )
  {
    v29 = 2675LL;
    WdLogSingleEntry1(2LL, 2675LL);
    goto LABEL_117;
  }
  v64 = *((_DWORD *)v60 + 14);
  if ( (_WORD)v64 == 3 )
  {
    if ( (v64 & 0x30000) != 0 && (*(_DWORD *)(v31 + 2140) & 0x200000) == 0 )
    {
      v29 = 2686LL;
      WdLogSingleEntry1(2LL, 2686LL);
      v30 = L"Invalid stretch BLT flags";
      goto LABEL_41;
    }
LABEL_81:
    v3 = 1;
    v65 = ValidateGdiCommand(
            0x40u,
            v37,
            v32,
            v60,
            *(const unsigned __int8 **)(v5 + 40),
            *((_QWORD *)v28 + v63),
            *((_QWORD *)v28 + v61),
            (const struct tagRECT *)v60 + 1,
            (const struct tagRECT *)v60,
            0,
            *((_DWORD *)v60 + 15),
            v78,
            1,
            *((_DWORD *)v60 + 10),
            (unsigned __int8 **)v60 + 6);
LABEL_82:
    if ( !v65 )
      goto LABEL_26;
    goto LABEL_112;
  }
  v29 = 2680LL;
  WdLogSingleEntry1(2LL, 2680LL);
  v30 = L"Invalid stretch BLT mode";
LABEL_41:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v30, v29, 0LL, 0LL, 0LL, 0LL);
LABEL_29:
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v83);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v82);
LABEL_30:
  v1 = a1;
  v3 = 1;
LABEL_148:
  v6 = (struct _EX_RUNDOWN_REF **)Elements;
LABEL_149:
  if ( v84 < 0 )
  {
    WdLogSingleEntry1(2LL, v84);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusCddGdiCommand failed: 0x%I64x",
      v84,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DxgkUnreferenceAllocationList(v87, v6);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v1 + 16), &v84, 4u);
  if ( P != &v99 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v100 = 0;
  if ( v95 != &v96 && v95 )
    ExFreePoolWithTag(v95, 0);
  v95 = 0LL;
  v97 = 0;
LABEL_158:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v92);
  return v3;
}
