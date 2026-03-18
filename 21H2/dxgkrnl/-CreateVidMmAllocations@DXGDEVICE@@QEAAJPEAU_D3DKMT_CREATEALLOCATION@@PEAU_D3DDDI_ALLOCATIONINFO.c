/*
 * XREFs of ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C01950A0
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0191710 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000D9FC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0044E7C (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqq_EtwWriteTransfer @ 0x1C004AEA8 (McTemplateK0pqqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqq_EtwWriteTransfer @ 0x1C004AF60 (McTemplateK0pqqqqqqq_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C019EA24 (-DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C02D6824 (-ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C02D6948 (-ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C02D747C (-TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateVidMmAllocations(
        DXGDEVICE *this,
        __int64 a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        struct _DXGK_ALLOCATIONINFO *a4,
        struct DXGALLOCATION *a5,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a6,
        char a7)
{
  D3DKMT_CREATEALLOCATIONFLAGS v7; // eax
  bool v8; // si
  struct _DXGK_ALLOCATIONINFO *v9; // r10
  struct _D3DKMT_CREATEALLOCATION *v10; // rdi
  __int64 v12; // r12
  __int64 v13; // rcx
  struct DXGALLOCATION *v14; // r15
  UINT v15; // ecx
  __int64 v16; // rsi
  HANDLE hSection; // r13
  __int64 v18; // rcx
  PVOID v19; // r9
  __int64 v20; // rdi
  int Size; // ebx
  unsigned int v22; // ebx
  struct _DXGK_ALLOCATIONINFO *v23; // r14
  __int64 Value; // r8
  struct _D3DKMT_CREATEALLOCATION *v25; // r11
  __int64 Flags; // rcx
  int v27; // eax
  struct _D3DDDI_ALLOCATIONINFO2 *v28; // r12
  const struct _D3DKM_CREATESTANDARDALLOCATION *v29; // r8
  __int64 v30; // rcx
  char v31; // si
  DXGDEVICE *v32; // rcx
  __int64 v33; // r11
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 MaximumRenamingListLength; // r9
  unsigned int v37; // eax
  int v38; // ecx
  __int64 v39; // rax
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D v40; // ecx
  int v41; // edx
  DXGDEVICE *v42; // r14
  bool v44; // zf
  __int64 v45; // rcx
  int v46; // ecx
  __int64 v47; // rax
  unsigned int v48; // edx
  __int64 v49; // rax
  int v50; // eax
  int v51; // ecx
  int v52; // ecx
  __int64 v53; // rax
  HANDLE v54; // rcx
  PVOID v55; // rax
  int v56; // eax
  unsigned __int64 v57; // rdx
  void *v58; // rax
  __int64 (__fastcall *v59)(_QWORD, _QWORD, __int64, PVOID); // rax
  const struct _D3DKM_CREATESTANDARDALLOCATION *v60; // rcx
  D3DDDI_ALLOCATIONINFO *v61; // rax
  HANDLE v62; // r12
  __int64 v63; // rdi
  int v64; // eax
  __int64 v65; // rdx
  int v66; // ecx
  int v67; // eax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  _DWORD *v71; // rcx
  _DWORD *v72; // rcx
  _DWORD *v73; // rcx
  __int64 v74; // r9
  const EVENT_DESCRIPTOR *v75; // rdx
  __int64 v76; // rax
  struct _D3DDDI_ALLOCATIONINFO2 *v77; // rbx
  SIZE_T v78; // rax
  const wchar_t *v79; // r9
  UINT v80; // ebx
  struct DXGALLOCATION *v81; // rsi
  __int64 v82; // rcx
  __int64 v83; // rdx
  int Object; // [rsp+20h] [rbp-B9h]
  PVOID *Objecta; // [rsp+20h] [rbp-B9h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-B1h]
  __int64 v87; // [rsp+30h] [rbp-A9h]
  __int64 v88; // [rsp+38h] [rbp-A1h]
  __int64 v89; // [rsp+40h] [rbp-99h]
  __int64 v90; // [rsp+48h] [rbp-91h]
  __int64 v91; // [rsp+50h] [rbp-89h]
  char v92; // [rsp+60h] [rbp-79h] BYREF
  char v93; // [rsp+61h] [rbp-78h]
  char v94; // [rsp+62h] [rbp-77h]
  PVOID v95; // [rsp+68h] [rbp-71h]
  int v96; // [rsp+70h] [rbp-69h]
  int v97; // [rsp+74h] [rbp-65h] BYREF
  UINT v98; // [rsp+78h] [rbp-61h]
  __int64 v99; // [rsp+80h] [rbp-59h] BYREF
  __int64 v100; // [rsp+88h] [rbp-51h] BYREF
  PVOID v101; // [rsp+90h] [rbp-49h] BYREF
  SIZE_T v102; // [rsp+98h] [rbp-41h]
  __int64 v103; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v104; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v105; // [rsp+B0h] [rbp-29h] BYREF
  __int64 v106; // [rsp+B8h] [rbp-21h]
  __int64 v107[3]; // [rsp+C0h] [rbp-19h] BYREF
  struct _D3DKMT_CREATEALLOCATION *v109; // [rsp+128h] [rbp+4Fh]
  unsigned __int8 v113; // [rsp+158h] [rbp+7Fh]

  v109 = (struct _D3DKMT_CREATEALLOCATION *)a2;
  v7 = *(D3DKMT_CREATEALLOCATIONFLAGS *)(a2 + 56);
  v96 = 0;
  v8 = 1;
  v93 = 1;
  v9 = a4;
  v10 = (struct _D3DKMT_CREATEALLOCATION *)a2;
  LODWORD(v12) = 0;
  if ( (*(_DWORD *)&v7 & 0x10000) != 0 && a6 )
  {
    LODWORD(v12) = -1073741811;
    WdLogSingleEntry2(2LL, this, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: Can not create StandardAllocation from UserMode and Kernel simultaneously,               "
                "              returning 0x%I64x",
      (__int64)this,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v12;
  }
  if ( (*(_DWORD *)&v7 & 0x40000) != 0 )
    LOBYTE(a2) = 0;
  else
    a2 = 1LL;
  if ( (*(_WORD *)&v7 & 0x400) != 0 )
    a2 = 1LL;
  v113 = a2;
  v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v13 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v13 + 168)) )
    {
      WdLogSingleEntry1(1LL, 4031LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
        4031LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    a2 = v113;
    v9 = a4;
  }
  v14 = a5;
  v15 = 0;
  v98 = 0;
  if ( !v10->NumAllocations )
  {
LABEL_52:
    v10->Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v10->Flags & 0xFFFFBFFF | (v8 << 14));
    return (unsigned int)v12;
  }
  while ( 1 )
  {
    v16 = v15;
    hSection = 0LL;
    v18 = *((_QWORD *)v14 + 6);
    v19 = 0LL;
    v20 = 88 * v16;
    Size = v9[v16].Size;
    v99 = 0LL;
    v100 = 0LL;
    v22 = (Size + 4095) & 0xFFFFF000;
    v95 = 0LL;
    v23 = &v9[v16];
    v92 = a2;
    if ( (*(_DWORD *)(v18 + 4) & 0x200F) != 0 )
      v92 = 1;
    if ( !*(_QWORD *)(v18 + 16) && (*(_DWORD *)&v109->Flags & 0x100000) == 0 )
    {
      WdLogSingleEntry1(1LL, 4059LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pAllocation->m_pAllocation->m_hDriverAllocation != NULL || pKMTCreateAllocation->Flags.NoKmdAccess",
        4059LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v9 = a4;
      v19 = 0LL;
    }
    Value = v23->Flags.Value;
    if ( (Value & 0x4000) != 0 )
    {
      a2 = 344LL * ((*((_DWORD *)v14 + 18) >> 12) & 0x3F);
      v53 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2800LL) + 16LL) + 2680LL);
      v12 = *(_QWORD *)(a2 + v53 + 40);
      if ( !*((_BYTE *)this + 1864) || !v12 )
      {
        v42 = this;
        WdLogSingleEntry2(2LL, this, *(_QWORD *)(a2 + v53 + 40));
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver asking for history buffer, but device history buffer creation is disabled, or adapter does not"
                    " have precision data. Device=0x%I64x, PrecisionData=%I64X",
          (__int64)this,
          v12,
          0LL,
          0LL,
          0LL);
        LODWORD(v12) = -1073741823;
        goto LABEL_150;
      }
    }
    if ( !a7 )
    {
      v25 = v109;
      v94 = 0;
      Flags = (unsigned int)v109->Flags;
      v27 = *(_DWORD *)&v109->Flags & 0x20;
      if ( (Flags & 0x10000) != 0 )
      {
        if ( v27 )
        {
          v28 = a3;
          hSection = a3[v16].hSection;
          v23->Flags.Value = Value | 0x10;
          goto LABEL_21;
        }
        if ( (Flags & 0x20000) == 0 )
          goto LABEL_20;
        v54 = a3[v16].hSection;
        v101 = 0LL;
        v12 = ObReferenceObjectByHandle(v54, 0x20000u, MmSectionObjectType, 1, &v101, 0LL);
        v55 = v101;
        v95 = v101;
        if ( (int)v12 < 0 )
        {
          v77 = &a3[v16];
          WdLogSingleEntry2(2LL, v77->hSection, v12);
          v78 = (SIZE_T)v77->hSection;
          v79 = L"Failed to take a reference on hSection:0x%I64x, returning 0x%I64x";
LABEL_148:
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v79, v78, v12, 0LL, 0LL, 0LL);
          goto LABEL_149;
        }
        v23->Flags.Value |= 0x400000u;
        v56 = ProcessSectionAttributes(v55, v23);
        v12 = v56;
        if ( v56 < 0 )
        {
          v42 = this;
          WdLogSingleEntry2(2LL, this, v56);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to query section attributes. Device=0x%I64x, Status=%I64X",
            (__int64)this,
            v12,
            0LL,
            0LL,
            0LL);
          ObfDereferenceObject(v95);
          goto LABEL_150;
        }
        v19 = v95;
        a2 = *(_QWORD *)(*((_QWORD *)v14 + 5) + 56LL);
        *(_DWORD *)(a2 + 12) |= 0x400u;
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 5) + 56LL) + 192LL) = v19;
        *(_DWORD *)(a2 + 204) = v23->Alignment;
        *(_DWORD *)(a2 + 12) ^= (*(_DWORD *)(a2 + 12) ^ (v23->Flags.Value << 9)) & 0x800;
      }
      else
      {
        if ( v27 )
        {
          if ( (*((_DWORD *)DXGPROCESS::GetCurrent(Flags, a2, Value, 0LL) + 106) & 0x100) != 0 )
          {
            v28 = a3;
            v19 = v95;
            v9 = a4;
            v25 = v109;
            hSection = a3[v16].hSection;
            v23->Flags.Value |= 0x10u;
          }
          else
          {
            v57 = v23->Size;
            if ( v57 > v22 )
            {
              v12 = -1073741811LL;
              WdLogSingleEntry2(2LL, v57, -1073741811LL);
              v79 = L"Overflow rounding allocation size 0x%I64x to next page boundary returning 0x%I64x";
              v78 = a4[v16].Size;
              goto LABEL_148;
            }
            v23->Size = v22;
            v58 = (void *)(*((__int64 (__fastcall **)(_QWORD, _QWORD))a6 + 4))(*((_QWORD *)a6 + 5), v22);
            hSection = v58;
            if ( !v58 )
            {
              WdLogSingleEntry1(2LL, 4177LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Cannot allocate memory allocation for existing sys mem.",
                4177LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_164;
            }
            v28 = a3;
            v19 = v95;
            v9 = a4;
            v25 = v109;
            a3[v16].hSection = v58;
          }
LABEL_21:
          v29 = a6;
          if ( !a6 || (*(_DWORD *)a6 & 0x40) == 0 )
          {
LABEL_22:
            if ( (v28[v16].Flags.Value & 4) != 0 )
            {
              v23->AllocationPriority = v28[v16].Priority;
            }
            else if ( !v23->AllocationPriority )
            {
              WdLogSingleEntry1(2LL, 4270LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"KMD should set a non-zero initial priority for allocations.",
                4270LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v19 = v95;
              v9 = a4;
              v25 = v109;
            }
            v30 = *((_QWORD *)v14 + 5);
            v31 = 0;
            if ( v30 )
            {
              v44 = (*(UINT *)((_BYTE *)&v9->Flags.Value + v20) & 0x100000) == 0;
              v106 = v20;
              if ( !v44 )
              {
                v31 = 1;
                if ( !*(_QWORD *)(*(_QWORD *)(v30 + 56) + 184LL) )
                {
                  v62 = 0LL;
                  v44 = (*(_DWORD *)&v25->Flags & 0x10000) == 0;
                  v102 = 0LL;
                  if ( !v44 && hSection )
                  {
                    v62 = hSection;
                    v102 = v25->pStandardAllocation->ExistingHeapData.Size;
                  }
                  v63 = *(_QWORD *)(*((_QWORD *)this + 2) + 648LL);
                  LOBYTE(Object) = BYTE1(*((_DWORD *)DXGPROCESS::GetCurrent(v30, a2, (__int64)v29, (__int64)v19) + 106)) & 1;
                  v64 = (*(__int64 (__fastcall **)(_QWORD, __int64, HANDLE, SIZE_T, int))(*(_QWORD *)(v63 + 8) + 1216LL))(
                          *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
                          *(_QWORD *)(*((_QWORD *)v14 + 5) + 56LL) + 184LL,
                          v62,
                          v102,
                          Object);
                  v20 = v106;
                  v12 = v64;
                  if ( v64 < 0 )
                  {
                    WdLogSingleEntry1(2LL, v64);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Failed to create VIDMM_CROSSADAPTER_ALLOC, returning 0x%I64x",
                      v12,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    if ( v94 )
                      ObfDereferenceObject(v95);
                    goto LABEL_149;
                  }
                  v19 = v95;
                  v9 = a4;
                  v25 = v109;
                }
              }
            }
            v32 = this;
            if ( (*(_DWORD *)&v25->Flags & 0x10020) == 0x10020 )
            {
              if ( (*((_BYTE *)this + 1869) & 1) == 0 )
              {
                if ( (*((_DWORD *)DXGPROCESS::GetCurrent((__int64)this, a2, (__int64)v29, (__int64)v19) + 106) & 0x10) == 0 )
                {
                  LODWORD(v12) = ProcessSysMemAttributes(
                                   hSection,
                                   v22,
                                   (struct _DXGK_ALLOCATIONINFO *)((char *)a4 + v20));
                  if ( (int)v12 < 0 )
                    goto LABEL_149;
                }
                v32 = this;
                v25 = v109;
                v9 = a4;
                v19 = v95;
              }
              if ( (*(_DWORD *)&v25->Flags & 2) != 0 )
              {
                v65 = *(_QWORD *)(*((_QWORD *)v14 + 5) + 56LL);
                *(_DWORD *)(v65 + 12) |= 0x200u;
                v66 = *(_DWORD *)(v65 + 12);
                *(_QWORD *)(v65 + 192) = hSection;
                *(_DWORD *)(v65 + 204) = v23->Alignment;
                v67 = v66 ^ ((unsigned __int16)v66 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v23->Flags.0 << 9)) & 0x800;
                v32 = this;
                *(_DWORD *)(v65 + 12) = v67;
              }
            }
            if ( hSection )
            {
              if ( (*(_DWORD *)&v25->Flags & 0x80u) != 0 )
              {
                v68 = *((_QWORD *)v14 + 6);
                v96 = 1;
                *(_DWORD *)(v68 + 4) |= 0x8000000u;
                v69 = *((_QWORD *)v14 + 5);
                if ( v69 )
                {
                  v70 = *(_QWORD *)(v69 + 56);
                  if ( v70 )
                    *(_DWORD *)(v70 + 12) |= 0x1000u;
                }
              }
            }
            if ( v31 )
              v33 = *(_QWORD *)(*((_QWORD *)v14 + 5) + 56LL) + 184LL;
            else
              v33 = 0LL;
            LODWORD(v12) = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, PVOID, __int64, __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v32 + 2) + 648LL) + 8LL) + 128LL))(
                             *((_QWORD *)v32 + 95),
                             (char *)v9 + v20,
                             *((_QWORD *)v14 + 6),
                             v19,
                             v33,
                             &v99);
            if ( v94 )
              ObfDereferenceObject(v95);
            if ( (int)v12 < 0 )
              goto LABEL_149;
            v35 = v99;
            if ( !v99 )
            {
              WdLogSingleEntry1(1LL, 4372LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pVidMmMultiGlobalAlloc",
                4372LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v35 = v99;
            }
            *(_QWORD *)(*((_QWORD *)v14 + 6) + 8LL) = v35;
            if ( !a6 )
              goto LABEL_36;
            v46 = *((_DWORD *)a6 + 4);
            if ( v46 == 4 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              {
                v73 = (_DWORD *)*((_QWORD *)a6 + 3);
                v74 = *((_QWORD *)v14 + 6);
                LODWORD(v91) = v73[5];
                LODWORD(v90) = v73[4];
                LODWORD(v89) = v73[3];
                LODWORD(v88) = v73[2];
                LODWORD(v87) = v73[1];
                LODWORD(HandleInformation) = *v73;
                v75 = (const EVENT_DESCRIPTOR *)&EventCddStandardAllocationGdiSurface;
                LODWORD(Objecta) = *(_DWORD *)a6;
LABEL_135:
                McTemplateK0pqqqqqqq_EtwWriteTransfer(
                  (__int64)v73,
                  v75,
                  v34,
                  v74,
                  Objecta,
                  HandleInformation,
                  v87,
                  v88,
                  v89,
                  v90,
                  v91);
              }
            }
            else
            {
              v51 = v46 - 1;
              if ( v51 )
              {
                v52 = v51 - 1;
                if ( v52 )
                {
                  if ( v52 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  {
                    v71 = (_DWORD *)*((_QWORD *)a6 + 3);
                    LODWORD(v88) = v71[2];
                    LODWORD(v87) = v71[1];
                    LODWORD(HandleInformation) = *v71;
                    LODWORD(Objecta) = *(_DWORD *)a6;
                    McTemplateK0pqtqq_EtwWriteTransfer(
                      (__int64)v71,
                      &EventCddStandardAllocationStagingSurface,
                      v34,
                      *((_QWORD *)v14 + 6),
                      Objecta,
                      HandleInformation,
                      v87,
                      v88);
                  }
                }
                else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                {
                  v72 = (_DWORD *)*((_QWORD *)a6 + 3);
                  LODWORD(v89) = v72[3];
                  LODWORD(v88) = v72[2];
                  LODWORD(v87) = v72[1];
                  LODWORD(HandleInformation) = *v72;
                  LODWORD(Objecta) = *(_DWORD *)a6;
                  McTemplateK0pqqqqq_EtwWriteTransfer(
                    (__int64)v72,
                    &EventCddStandardAllocationShadowSurface,
                    v34,
                    *((_QWORD *)v14 + 6),
                    Objecta,
                    HandleInformation,
                    v87,
                    v88,
                    v89);
                }
                goto LABEL_36;
              }
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              {
                v73 = (_DWORD *)*((_QWORD *)a6 + 3);
                v74 = *((_QWORD *)v14 + 6);
                LODWORD(v91) = v73[5];
                LODWORD(v90) = v73[4];
                LODWORD(v89) = v73[3];
                LODWORD(v88) = v73[2];
                LODWORD(v87) = v73[1];
                LODWORD(HandleInformation) = *v73;
                v75 = (const EVENT_DESCRIPTOR *)&EventCddStandardAllocationSharedPrimarySurface;
                LODWORD(Objecta) = *(_DWORD *)a6;
                goto LABEL_135;
              }
            }
LABEL_36:
            v10 = v109;
            goto LABEL_37;
          }
          if ( *((_QWORD *)a6 + 41) )
          {
            v61 = (D3DDDI_ALLOCATIONINFO *)*((_QWORD *)a6 + 42);
            if ( !v61 )
            {
              v23->Flags.Value |= 0x400000u;
              ObfReferenceObject(*((PVOID *)a6 + 41));
              v29 = a6;
              v9 = a4;
              v25 = v109;
              a2 = *(_QWORD *)(*((_QWORD *)v14 + 5) + 56LL);
              v19 = (PVOID)*((_QWORD *)a6 + 41);
              v95 = v19;
              *(_DWORD *)(a2 + 12) |= 0x400u;
              *(_QWORD *)(a2 + 192) = *((_QWORD *)a6 + 41);
              goto LABEL_113;
            }
          }
          else
          {
            if ( !*((_QWORD *)a6 + 42) )
            {
              WdLogSingleEntry1(2LL, 4224LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Section object or SystemMem is not supplied for a cross adapter allocation.",
                4224LL,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_164;
            }
            v61 = (D3DDDI_ALLOCATIONINFO *)*((_QWORD *)a6 + 42);
          }
          v23->Flags.Value |= 0x10u;
          hSection = v61;
          a2 = *(_QWORD *)(*((_QWORD *)v14 + 5) + 56LL);
          *(_DWORD *)(a2 + 12) |= 0x200u;
          *(_QWORD *)(a2 + 192) = v61;
LABEL_113:
          *(_DWORD *)(a2 + 204) = *((_DWORD *)v29 + 98);
          *(_DWORD *)(a2 + 12) ^= ((unsigned __int16)*(_DWORD *)(a2 + 12) ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)v29 << 7)) & 0x800;
          goto LABEL_22;
        }
        if ( (Value & 0x10) != 0 )
        {
          v28 = a3;
          hSection = a3[v16].hSection;
          goto LABEL_21;
        }
        if ( (Value & 0x400000) == 0 )
        {
LABEL_20:
          v28 = a3;
          goto LABEL_21;
        }
        if ( v109->NumAllocations == 1
          && (Value & 0x2000000) != 0
          && a6
          && (v59 = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64, PVOID))*((_QWORD *)a6 + 4)) != 0LL )
        {
          v60 = a6;
        }
        else
        {
          WdLogSingleEntry1(1LL, 4196LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(pKMTCreateAllocation->NumAllocations == 1) && (pDriverAllocations[i].Flags.DoDPrimary) && (pCreate"
                      "StandardAllocation != NULL) && (pCreateStandardAllocation->pfnAllocateSysMem != NULL)",
            4196LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v60 = a6;
          v59 = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64, PVOID))*((_QWORD *)a6 + 4);
        }
        v95 = (PVOID)v59(*((_QWORD *)v60 + 5), v22, Value, v19);
        v19 = v95;
        if ( !v95 )
        {
          WdLogSingleEntry1(2LL, 4202LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Cannot create section object for DoD primary backing store.",
            4202LL,
            0LL,
            0LL,
            0LL,
            0LL);
LABEL_164:
          LODWORD(v12) = -1073741823;
LABEL_149:
          v42 = this;
          goto LABEL_150;
        }
        v94 = 1;
      }
      v25 = v109;
      v9 = a4;
      goto LABEL_20;
    }
    v45 = *(_QWORD *)(*((_QWORD *)v14 + 5) + 56LL);
    if ( v45 )
      hSection = *(HANDLE *)(v45 + 192);
    v10 = v109;
    if ( (*(_DWORD *)&v109->Flags & 0x80u) != 0 )
      v96 = 1;
LABEL_37:
    MaximumRenamingListLength = v23->MaximumRenamingListLength;
    v97 = 0;
    LODWORD(HandleInformation) = v96;
    LODWORD(v12) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, HANDLE, POBJECT_HANDLE_INFORMATION, struct DXGALLOCATION *, __int64 *, int *, char *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL) + 144LL))(
                     *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
                     *((_QWORD *)this + 95),
                     *(_QWORD *)(*((_QWORD *)v14 + 6) + 8LL),
                     MaximumRenamingListLength,
                     hSection,
                     HandleInformation,
                     v14,
                     &v100,
                     &v97,
                     &v92);
    v8 = v92 && v93;
    v37 = *((_DWORD *)v14 + 18) & 0xFFFC0FFF;
    v93 = v8;
    v38 = v97 & 0x3F;
    *((_DWORD *)v14 + 18) = v37 | (v38 << 12);
    *(_DWORD *)(*((_QWORD *)v14 + 6) + 4LL) = (v38 << 21) | *(_DWORD *)(*((_QWORD *)v14 + 6) + 4LL) & 0xF81FFFFF;
    if ( (int)v12 < 0 )
      goto LABEL_149;
    v39 = v100;
    if ( !v100 )
    {
      WdLogSingleEntry1(1LL, 4477LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pVidMmMultiAlloc", 4477LL, 0LL, 0LL, 0LL, 0LL);
      v39 = v100;
    }
    *((_QWORD *)v14 + 3) = v39;
    v40 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v23->Flags.Value;
    if ( (*(_WORD *)&v40 & 0x100) != 0
      || (v41 = *(_DWORD *)(*((_QWORD *)v14 + 6) + 4LL), (v41 & 0x20) != 0)
      || (*(_DWORD *)&v40 & 0x20200) != 0
      || (v41 & 0x4000) != 0 )
    {
      if ( (v23->Flags.Value & 0x100) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)v14 + 6) + 4LL) |= 8u;
        v40 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v23->Flags.Value;
      }
      if ( (*(_WORD *)&v40 & 0x200) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)v14 + 6) + 4LL) |= 0x20u;
        v40 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v23->Flags.Value;
      }
      if ( (*(_DWORD *)&v40 & 0x20000) != 0 )
        *(_DWORD *)(*((_QWORD *)v14 + 6) + 4LL) |= 0x4000u;
      v42 = this;
      LODWORD(v12) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL)
                                                                                               + 232LL))(
                       *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
                       *((_QWORD *)v14 + 3),
                       0LL,
                       0LL,
                       0LL,
                       0LL);
      if ( (int)v12 < 0 )
        goto LABEL_150;
      v76 = *((_QWORD *)v14 + 6);
      *((_DWORD *)v14 + 18) |= 0x800u;
      if ( (*(_DWORD *)(v76 + 4) & 0x4000) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL) + 240LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
          *((_QWORD *)v14 + 3));
        *((_DWORD *)v14 + 18) &= ~0x800u;
      }
    }
    else
    {
      v42 = this;
    }
    if ( DXGDEVICE::UmdManagesResidency(v42) && a6 && *((_DWORD *)a6 + 4) == 2 )
    {
      v47 = *((_QWORD *)v42 + 2);
      v48 = *((_DWORD *)v14 + 18);
      v103 = 0LL;
      v105 = 0LL;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v47 + 648) + 8LL) + 992LL))(
        *((_QWORD *)v42 + 95),
        (v48 >> 12) & 0x3F,
        &v103,
        &v105);
      v49 = *((_QWORD *)v42 + 2);
      v104 = 0LL;
      v107[0] = 0LL;
      v50 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v49 + 648) + 8LL) + 784LL))(
              *(_QWORD *)(v49 + 656),
              v103,
              (__int64)v14 + 24,
              1LL,
              3,
              &v104,
              v107);
      v12 = v50;
      if ( v50 < 0 )
      {
        WdLogSingleEntry1(2LL, v50);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to make shadow allocation resident. Status = 0x%I64x",
          v12,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_150;
      }
      if ( v50 == 259 )
      {
        (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v42 + 2)
                                                                                              + 648LL)
                                                                                  + 8LL)
                                                                      + 1000LL))(
          *(_QWORD *)(*((_QWORD *)v42 + 2) + 656LL),
          &v105,
          &v104,
          1LL);
        LODWORD(v12) = 0;
      }
    }
    v14 = (struct DXGALLOCATION *)*((_QWORD *)v14 + 8);
    v15 = v98 + 1;
    v98 = v15;
    if ( v15 >= v10->NumAllocations )
      break;
    v9 = a4;
    a2 = v113;
  }
  if ( (int)v12 >= 0 )
    goto LABEL_52;
LABEL_150:
  v80 = 0;
  if ( v109->NumAllocations )
  {
    v81 = a5;
    do
    {
      if ( (*((_DWORD *)v81 + 18) & 0x800) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v42 + 2) + 648LL) + 8LL) + 240LL))(
          *(_QWORD *)(*((_QWORD *)v42 + 2) + 656LL),
          *((_QWORD *)v81 + 3));
        *((_DWORD *)v81 + 18) &= ~0x800u;
      }
      v82 = *((_QWORD *)v81 + 6);
      if ( *(_QWORD *)(v82 + 8)
        && !a7
        && (!*((_DWORD *)v42 + 108) && (*(_DWORD *)(v82 + 4) & 1) != 0 || (*(_DWORD *)(v82 + 4) & 2) != 0) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v42 + 2) + 648LL) + 8LL) + 200LL))(*(_QWORD *)(*((_QWORD *)v42 + 2) + 656LL));
        *(_DWORD *)(*((_QWORD *)v81 + 6) + 4LL) |= 0x10u;
      }
      v83 = *((_QWORD *)v81 + 3);
      if ( v83 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v42 + 2) + 648LL)
                                                                             + 8LL)
                                                                 + 168LL))(
          *(_QWORD *)(*((_QWORD *)v42 + 2) + 656LL),
          v83,
          0LL,
          1LL);
        *((_QWORD *)v81 + 3) = 0LL;
      }
      else
      {
        DXGDEVICE::TraceCloseParavirtualizedAllocation(v42, v81);
      }
      if ( !a7 )
        DXGDEVICE::DestroyAdapterAllocation(v42, *((struct DXGADAPTERALLOCATION **)v81 + 6));
      v81 = (struct DXGALLOCATION *)*((_QWORD *)v81 + 8);
      ++v80;
    }
    while ( v80 < v109->NumAllocations );
  }
  return (unsigned int)v12;
}
