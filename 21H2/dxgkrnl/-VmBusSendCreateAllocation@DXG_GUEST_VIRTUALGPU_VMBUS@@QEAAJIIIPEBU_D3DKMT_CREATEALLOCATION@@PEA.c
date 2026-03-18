/*
 * XREFs of ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C03746FC
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0191710 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C0009C20 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?FindMappingFromGuestVidPnSourceId@REMOTEMONITORMAPPING@@QEAAJIPEAUPATH_IDENTIFIER_HOST@1@@Z @ 0x1C033D6F4 (-FindMappingFromGuestVidPnSourceId@REMOTEMONITORMAPPING@@QEAAJIPEAUPATH_IDENTIFIER_HOST@1@@Z.c)
 *     ?CreateGpadlFromBuffer@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAXIPEAI@Z @ 0x1C0361674 (-CreateGpadlFromBuffer@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAXIPEAI@Z.c)
 *     ?CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z @ 0x1C0361700 (-CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C037E5E0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C037E984 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateAllocation(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        int a4,
        const struct _D3DKMT_CREATEALLOCATION *a5,
        struct _D3DDDI_ALLOCATIONINFO2 *a6,
        void **a7,
        const void *a8,
        const void *a9,
        unsigned __int8 a10,
        unsigned __int8 a11,
        unsigned __int8 **a12)
{
  struct DXGGLOBAL *Global; // rax
  UINT PrivateRuntimeDataSize; // ecx
  unsigned int v16; // edx
  __int64 NumAllocations; // rcx
  unsigned int v18; // r9d
  __int64 v19; // rdi
  UINT *p_PrivateDriverDataSize; // r8
  unsigned int v21; // r10d
  unsigned int v22; // eax
  unsigned int v23; // edx
  int v24; // esi
  __int64 v25; // r9
  __int64 v26; // r12
  __int64 v27; // r14
  _DWORD *v28; // rdi
  bool v29; // cf
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // ecx
  size_t v31; // r8
  UINT PrivateDriverDataSize; // edx
  unsigned int v33; // ecx
  D3DKMT_CREATEALLOCATIONFLAGS v34; // eax
  char v35; // r14
  unsigned int v36; // ecx
  __int64 v37; // rcx
  unsigned int v38; // edi
  UINT v39; // eax
  UINT v40; // r9d
  _DWORD *v41; // rsi
  _DWORD *v42; // rdi
  D3DKMT_CREATEALLOCATIONFLAGS v43; // eax
  struct DXGGLOBAL *v44; // rax
  int v45; // ecx
  int v46; // ecx
  const void *v47; // rdx
  __int64 v48; // rsi
  UINT v49; // edx
  char *v50; // rsi
  UINT v51; // edi
  __int64 *v52; // r15
  D3DKMT_CREATEALLOCATIONFLAGS v53; // edx
  __int64 v54; // rsi
  SIZE_T v55; // rax
  PMDL PagesForMdl; // rax
  struct _MDL *v57; // rdi
  struct DXGGLOBAL *v58; // rax
  char v59; // di
  void *v60; // rcx
  NTSTATUS v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdi
  __int64 CurrentProcess; // rsi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  PVOID v73; // rdi
  struct DXGGLOBAL *v74; // rax
  void *v75; // rsi
  __int64 v76; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v77; // rax
  struct DXGKVMB_COMMAND_BASE *v78; // rdx
  int v79; // ecx
  int v80; // eax
  int v81; // r8d
  DXG_VMBUS_CHANNEL_BASE *v82; // rcx
  int v83; // eax
  __int64 v84; // rcx
  MEMORY_CACHING_TYPE CacheType[2]; // [rsp+28h] [rbp-E0h]
  struct _MDL *CacheTypea; // [rsp+28h] [rbp-E0h]
  char v88; // [rsp+68h] [rbp-A0h]
  UINT v89; // [rsp+70h] [rbp-98h]
  __int64 v90; // [rsp+70h] [rbp-98h]
  int v91; // [rsp+78h] [rbp-90h]
  char *v92; // [rsp+78h] [rbp-90h]
  UINT Src; // [rsp+80h] [rbp-88h]
  UINT Srca; // [rsp+80h] [rbp-88h]
  PVOID v95; // [rsp+88h] [rbp-80h] BYREF
  void *v96; // [rsp+90h] [rbp-78h]
  void *v97; // [rsp+98h] [rbp-70h] BYREF
  int v98; // [rsp+A0h] [rbp-68h]
  int v99; // [rsp+A4h] [rbp-64h]
  __int64 v100; // [rsp+A8h] [rbp-60h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-58h] BYREF
  char *v102; // [rsp+B8h] [rbp-50h] BYREF
  int v103; // [rsp+C0h] [rbp-48h]
  struct DXG_VMBUS_CHANNEL_BASE *v104; // [rsp+C8h] [rbp-40h]
  void **v105; // [rsp+D0h] [rbp-38h]
  __int64 v106; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v107[2]; // [rsp+E0h] [rbp-28h]
  unsigned __int8 **v108; // [rsp+E8h] [rbp-20h]
  struct DXGKVMB_COMMAND_BASE *v109[2]; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int v110; // [rsp+108h] [rbp+0h]
  __int128 v111; // [rsp+218h] [rbp+110h] BYREF
  int v112; // [rsp+228h] [rbp+120h]

  v105 = a7;
  v99 = a3;
  v98 = a2;
  v104 = this;
  *a12 = 0LL;
  Object = a6;
  v108 = a12;
  if ( !a10 || (v88 = 1, (*(_DWORD *)&a5->Flags & 0x10000) != 0) )
    v88 = 0;
  Global = DXGGLOBAL_GetGlobal();
  PrivateRuntimeDataSize = a5->PrivateRuntimeDataSize;
  v16 = PrivateRuntimeDataSize + a5->PrivateDriverDataSize;
  LODWORD(v95) = *((_DWORD *)Global + 450);
  if ( v16 >= PrivateRuntimeDataSize )
  {
    NumAllocations = a5->NumAllocations;
    v18 = 0;
    v19 = 0LL;
    if ( (_DWORD)NumAllocations )
    {
      p_PrivateDriverDataSize = &a6->PrivateDriverDataSize;
      do
      {
        v21 = v19 + *p_PrivateDriverDataSize;
        if ( v21 < (unsigned int)v19 )
          return 2147483653LL;
        ++v18;
        v19 = v21;
        p_PrivateDriverDataSize += 24;
      }
      while ( v18 < (unsigned int)NumAllocations );
    }
    v22 = v19 + v16;
    if ( (unsigned int)v19 + v16 >= v16 )
    {
      v23 = v22 + 64;
      if ( v22 + 64 >= v22 )
      {
        if ( (unsigned int)(NumAllocations - 1) > 0x71B || (unsigned int)v19 > 0x20000 )
        {
          WdLogSingleEntry2(2LL, v19, a5->NumAllocations);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid VM bus message size: 0x%I64x or invalid number of allocations: 0x%I64x",
            v19,
            a5->NumAllocations,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          v24 = 12 * NumAllocations;
          if ( (unsigned __int64)(12 * NumAllocations) <= 0xFFFFFFFF )
          {
            LODWORD(v100) = v24 + v23;
            if ( v24 + v23 >= v23 )
            {
              v111 = 0LL;
              v91 = 0;
              v112 = 0;
              DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v111, this, v24 + v23, 0LL, 0LL, 0LL);
              v26 = v111;
              if ( !(_QWORD)v111 )
              {
                LODWORD(v27) = -1073741801;
LABEL_100:
                DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v111);
                return (unsigned int)v27;
              }
              *(_BYTE *)(v111 + 12) = 0;
              *(_DWORD *)(v26 + 12) &= 0x1FFu;
              *(_QWORD *)v26 = 0LL;
              *(_DWORD *)(v26 + 8) = 0;
              *(_QWORD *)(v26 + 16) = 4LL;
              LODWORD(v97) = (v19 + 72 * a5->NumAllocations + 23) & 0xFFFFFFF8;
              v96 = (void *)operator new[]((unsigned int)v97, 0x4B677844u, 64LL, v25);
              v28 = v96;
              if ( !v96 )
              {
                LODWORD(v27) = -1073741801;
                goto LABEL_98;
              }
              v29 = (unsigned int)v95 < 0x1E;
              *(_DWORD *)(v26 + 24) = v99;
              *(_DWORD *)(v26 + 8) = v98;
              Flags = a5->Flags;
              *(D3DKMT_CREATEALLOCATIONFLAGS *)(v26 + 44) = Flags;
              *(_DWORD *)(v26 + 28) = a4;
              *(_QWORD *)(v26 + 48) = a5->hPrivateRuntimeResourceHandle;
              *(_DWORD *)(v26 + 40) = a5->NumAllocations;
              v31 = a5->PrivateRuntimeDataSize;
              *(_DWORD *)(v26 + 32) = v31;
              PrivateDriverDataSize = a5->PrivateDriverDataSize;
              *(_DWORD *)(v26 + 36) = PrivateDriverDataSize;
              if ( v29 )
                *(_BYTE *)(v26 + 56) = a11;
              else
                *(_QWORD *)(v26 + 56) ^= (*(_DWORD *)(v26 + 56) ^ a11) & 1;
              v33 = *(_DWORD *)&Flags & 0xFFFEFFFF;
              *(_DWORD *)(v26 + 44) = v33;
              v34 = a5->Flags;
              if ( (*(_DWORD *)&v34 & 0x20020) != 0 )
              {
                v33 &= 0xFFFFE7FF;
                *(_DWORD *)(v26 + 44) = v33;
                v34 = a5->Flags;
              }
              else if ( (v33 & 0x1000) != 0 )
              {
                WdLogSingleEntry1(2LL, 9638LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Open cross adapter allocation is not supported",
                  9638LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                LODWORD(v27) = -1073741811;
                goto LABEL_98;
              }
              if ( (*(_BYTE *)&v34 & 8) != 0 )
              {
                v35 = 1;
                v36 = v33 & 0xFFFFFFF7;
LABEL_28:
                LOBYTE(v91) = v35;
                *(_DWORD *)(v26 + 44) = v36 | 0x20;
                goto LABEL_34;
              }
              if ( (*(_BYTE *)&v34 & 0x20) != 0 )
              {
                v35 = 2;
                LOBYTE(v91) = 2;
              }
              else
              {
                if ( (*(_DWORD *)&v34 & 0x20000) != 0 )
                {
                  v35 = 2;
                  v36 = v33 & 0xFFFDFFFF;
                  goto LABEL_28;
                }
                v35 = 0;
              }
LABEL_34:
              v37 = (unsigned int)(v24 + 64);
              v38 = v37 + a5->PrivateRuntimeDataSize;
              if ( (_DWORD)v31 && a9 )
              {
                memmove((void *)(v26 + v37), a9, v31);
                PrivateDriverDataSize = *(_DWORD *)(v26 + 36);
              }
              v39 = PrivateDriverDataSize;
              if ( PrivateDriverDataSize && a8 )
              {
                memmove((void *)(v26 + v38), a8, PrivateDriverDataSize);
                v39 = *(_DWORD *)(v26 + 36);
              }
              v40 = v38 + v39;
              Src = 0;
              v41 = (_DWORD *)(v26 + 64);
              v89 = v38 + v39;
              if ( a5->NumAllocations )
              {
                v42 = (char *)Object + 32;
                do
                {
                  v43 = a5->Flags;
                  if ( *((_QWORD *)v42 - 3) )
                  {
                    if ( (*(_DWORD *)&v43 & 0x20000) == 0 )
                    {
                      *(_DWORD *)(v26 + 44) |= 0x20u;
                      v35 |= 2u;
                      LOBYTE(v91) = v35;
                    }
                  }
                  else if ( (*(_BYTE *)&v43 & 0x20) != 0 )
                  {
                    LODWORD(v27) = -1073741811;
                    WdLogSingleEntry1(2LL, 9724LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"pSysMem pointer is NULL: 0x%I64x",
                      9724LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    v28 = v96;
                    goto LABEL_98;
                  }
                  *v41 = *v42;
                  if ( (*v42 & 1) != 0 && a5->NumAllocations == 1 && (unsigned int)v95 >= 0x1E )
                  {
                    v102 = 0LL;
                    v103 = 0;
                    v44 = DXGGLOBAL_GetGlobal();
                    if ( (int)REMOTEMONITORMAPPING::FindMappingFromGuestVidPnSourceId(
                                (struct _KTHREAD **)v44 + 38108,
                                *(v42 - 1),
                                (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v102) >= 0
                      && v102 == *(char **)(*((_QWORD *)v104 + 9) + 4444LL) )
                    {
                      v41[2] = v103;
                      *(_QWORD *)(v26 + 56) |= 2uLL;
                    }
                    else
                    {
                      v41[2] = 0;
                    }
                    v40 = v89;
                  }
                  else
                  {
                    v41[2] = *(v42 - 1);
                  }
                  v45 = *(v42 - 2);
                  if ( v45 + v40 > (unsigned int)v100 )
                  {
                    WdLogSingleEntry5(0LL, 275LL, 2LL, 0LL, 0LL, 0LL);
                    v45 = *(v42 - 2);
                    v40 = v89;
                  }
                  v41[1] = v45;
                  v46 = *(v42 - 2);
                  if ( v46 )
                  {
                    if ( v88 )
                      v47 = v105[Src];
                    else
                      v47 = (const void *)*((_QWORD *)v42 - 2);
                    if ( v47 )
                    {
                      memmove((void *)(v26 + v40), v47, (unsigned int)*(v42 - 2));
                      v46 = *(v42 - 2);
                      v40 = v89;
                    }
                    v40 += v46;
                    v89 = v40;
                  }
                  v41 += 3;
                  v42 += 24;
                  ++Src;
                }
                while ( Src < a5->NumAllocations );
              }
              v28 = v96;
              v48 = (unsigned int)v97;
              LODWORD(v95) = (_DWORD)v97;
              LODWORD(v27) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(
                               v104,
                               (struct DXGVMBUSMESSAGE *)&v111,
                               v96,
                               (unsigned int *)&v95);
              if ( (int)v27 < 0 || (LODWORD(v27) = -1073741823, (unsigned int)v95 < (unsigned int)v48) )
              {
LABEL_98:
                operator delete[](v28);
                if ( (int)v27 < 0 )
                {
                  WdLogSingleEntry1(2LL, (int)v27);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"VmBusSendCreateAllocation failed: 0x%I64x",
                    (int)v27,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                goto LABEL_100;
              }
              LODWORD(v27) = 0;
              v28[3] = v91;
              v49 = a5->NumAllocations;
              v102 = (char *)v28 + v48;
              Srca = 0;
              v50 = (char *)&v28[16 * v49 + 4 + 2 * v49];
              v51 = 0;
              v92 = v50;
              if ( !v49 )
                goto LABEL_97;
              v52 = (__int64 *)((char *)Object + 8);
              while ( 1 )
              {
                v53 = a5->Flags;
                if ( ((*(_DWORD *)(v26 + 44) & 0x20020) != 0 || (*(_BYTE *)&v53 & 8) != 0) && (int)v27 >= 0 )
                  break;
LABEL_94:
                v84 = *((unsigned int *)v52 + 4);
                if ( &v50[v84] > v102 )
                {
                  WdLogSingleEntry5(0LL, 275LL, 2LL, 0LL, 0LL, 0LL);
                  LODWORD(v84) = *((_DWORD *)v52 + 4);
                }
                memmove(v105[v51++], v50, (unsigned int)v84);
                v50 += *((unsigned int *)v52 + 4);
                Srca = v51;
                v52 += 12;
                v92 = v50;
                if ( v51 >= a5->NumAllocations )
                  goto LABEL_97;
              }
              v27 = (__int64)v96;
              v54 = 9LL * v51;
              v55 = *((_QWORD *)v96 + 9 * v51 + 4);
              *(_QWORD *)v107 = v55;
              v90 = v54;
              if ( (*(_BYTE *)&v53 & 8) != 0 )
              {
                PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v55, MmCached, 4u);
                v57 = PagesForMdl;
                if ( !PagesForMdl )
                {
                  LODWORD(v27) = -1073741801;
                  WdLogSingleEntry1(6LL, 9825LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262145,
                    -1,
                    (__int64)L"Failed to allocate memory for protecter allocation",
                    9825LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
LABEL_97:
                  v28 = 0LL;
                  *v108 = (unsigned __int8 *)v96;
                  goto LABEL_98;
                }
                *v52 = (__int64)PagesForMdl;
                v58 = DXGGLOBAL_GetGlobal();
                LODWORD(v27) = DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromMdl(
                                 *((struct _KTHREAD ***)v58 + 218),
                                 v57,
                                 (unsigned int *)(v27 + 28 + 8 * v54));
                goto LABEL_88;
              }
              v97 = 0LL;
              v95 = 0LL;
              v59 = 0;
              if ( (*(_DWORD *)&v53 & 0x20000) != 0 )
              {
                v60 = (void *)*v52;
                Object = 0LL;
                v61 = ObReferenceObjectByHandle(v60, 0x20000u, MmSectionObjectType, 1, &Object, 0LL);
                v27 = v61;
                v95 = Object;
                if ( v61 >= 0 )
                {
                  v106 = 0LL;
                  v100 = *((_QWORD *)v96 + v54 + 4);
                  v70 = v100;
                  CurrentProcess = PsGetCurrentProcess(v63, v62, v64, v65);
                  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
                  *(_QWORD *)CacheType = v70;
                  v73 = v95;
                  LODWORD(v27) = (*((__int64 (__fastcall **)(PVOID, __int64, void **, _QWORD, MEMORY_CACHING_TYPE *, __int64 *, __int64 *, int, _DWORD, int))VirtualMemoryInterface
                                  + 3))(
                                   v95,
                                   CurrentProcess,
                                   &v97,
                                   0LL,
                                   *(MEMORY_CACHING_TYPE **)CacheType,
                                   &v106,
                                   &v100,
                                   2,
                                   0,
                                   4);
                  if ( (int)v27 >= 0 )
                  {
                    v59 = 1;
                  }
                  else
                  {
                    WdLogSingleEntry1(2LL, v100);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Failed to map allocation view. Size: 0x%I64x",
                      v100,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    ObfDereferenceObject(v73);
                    v59 = 0;
                  }
                  v54 = v90;
                }
                else
                {
                  WdLogSingleEntry2(2LL, *v52, v61);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Failed to take a reference on hSection:0x%I64x, returning 0x%I64x",
                    *v52,
                    v27,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( (int)v27 < 0 )
                {
LABEL_86:
                  if ( v59 )
                  {
                    v75 = v97;
                    v76 = PsGetCurrentProcess(v67, v66, v68, v69);
                    v77 = DxgkGetVirtualMemoryInterface();
                    (*((void (__fastcall **)(__int64, void *))v77 + 4))(v76, v75);
                    ObfDereferenceObject(v95);
                  }
LABEL_88:
                  if ( (int)v27 >= 0 )
                  {
                    v110 = 0;
                    *(_OWORD *)v109 = 0LL;
                    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v109, v104, 0x28u, 0LL, 0LL, 0LL);
                    v78 = v109[0];
                    v79 = *((_DWORD *)v96 + 2 * v90 + 7);
                    v80 = *((_DWORD *)v96 + 2 * v90 + 4);
                    *((_DWORD *)v109[0] + 2) = v98;
                    v81 = v99;
                    *((_BYTE *)v78 + 12) = 0;
                    *((_DWORD *)v78 + 3) &= 0x1FFu;
                    *((_DWORD *)v78 + 8) = v79;
                    v82 = v104;
                    *((_DWORD *)v78 + 6) = v81;
                    *(_QWORD *)v78 = 0LL;
                    *((_QWORD *)v78 + 2) = 45LL;
                    *((_DWORD *)v78 + 7) = v80;
                    v83 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
                            v82,
                            (unsigned __int8 *)v109[1],
                            v109[0],
                            v110,
                            CacheTypea);
                    v27 = v83;
                    if ( v83 < 0 )
                    {
                      WdLogSingleEntry1(2LL, v83);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"Failed to set existing sysmem Gpadl: 0x%I64x",
                        v27,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v109);
                  }
                  else
                  {
                    WdLogSingleEntry1(2LL, (int)v27);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Failed to allocate existing sysmem Gpadl: 0x%I64x",
                      (int)v27,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  v50 = v92;
                  v51 = Srca;
                  goto LABEL_94;
                }
                v27 = (__int64)v96;
              }
              else
              {
                v97 = (void *)*v52;
              }
              v74 = DXGGLOBAL_GetGlobal();
              LODWORD(v27) = DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromBuffer(
                               *((struct _KTHREAD ***)v74 + 218),
                               v97,
                               v107[0],
                               (unsigned int *)(v27 + 8 * v54 + 28));
              goto LABEL_86;
            }
          }
        }
      }
    }
  }
  return 2147483653LL;
}
