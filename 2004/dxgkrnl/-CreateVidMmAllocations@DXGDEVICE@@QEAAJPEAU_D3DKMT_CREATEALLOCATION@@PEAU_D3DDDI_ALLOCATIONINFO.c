/*
 * XREFs of ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C014FDB0
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00F28E0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000D8EC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0039694 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqq_EtwWriteTransfer @ 0x1C003EBD4 (McTemplateK0pqqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqq_EtwWriteTransfer @ 0x1C003EC94 (McTemplateK0pqqqqqqq_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C02284C8 (-ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C02285F8 (-ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateVidMmAllocations(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        struct _DXGK_ALLOCATIONINFO *a4,
        struct DXGALLOCATION *a5,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a6,
        unsigned __int8 a7)
{
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // eax
  struct _DXGK_ALLOCATIONINFO *v8; // r10
  struct _D3DKMT_CREATEALLOCATION *v9; // r9
  HANDLE hSection; // rbx
  __int64 v12; // rax
  __int16 v14; // cx
  __int64 v15; // rdx
  BOOL v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  struct DXGALLOCATION *v22; // r13
  UINT v23; // eax
  struct DXGALLOCATION *v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // r15
  __int64 v27; // r14
  char v28; // al
  struct _DXGK_ALLOCATIONINFO *v29; // r14
  unsigned int v30; // ebx
  bool v31; // zf
  __int64 v32; // rax
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D Value; // r8d
  __int64 v34; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS v35; // eax
  __int64 v36; // rcx
  void *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  PVOID v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 (__fastcall *v46)(_QWORD, _QWORD); // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  void *v49; // rax
  struct _D3DDDI_ALLOCATIONINFO2 *v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  char v53; // r15
  __int64 v54; // rax
  void *v55; // rbx
  SIZE_T Size; // r15
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  void *v61; // rax
  int v62; // ecx
  __int64 v63; // rdx
  PVOID v64; // r15
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // rcx
  __int64 v68; // rax
  _DWORD *v69; // rcx
  _DWORD *v70; // rcx
  _DWORD *v71; // rcx
  _DWORD *v72; // rcx
  __int64 v73; // rcx
  int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 MaximumRenamingListLength; // r9
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rax
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D v82; // ecx
  int v83; // r8d
  __int64 v84; // rax
  __int64 v85; // rax
  unsigned int v86; // edx
  __int64 v87; // rax
  int v88; // eax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  UINT i; // edi
  __int64 v100; // rcx
  __int64 v101; // rdx
  int Object; // [rsp+20h] [rbp-A9h]
  PVOID *Objecta; // [rsp+20h] [rbp-A9h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-A1h]
  __int64 v105; // [rsp+30h] [rbp-99h]
  __int64 v106; // [rsp+38h] [rbp-91h]
  __int64 v107; // [rsp+40h] [rbp-89h]
  __int64 v108; // [rsp+48h] [rbp-81h]
  __int64 v109; // [rsp+50h] [rbp-79h]
  char v110; // [rsp+60h] [rbp-69h] BYREF
  char v111; // [rsp+61h] [rbp-68h]
  char v112; // [rsp+62h] [rbp-67h]
  void *v113; // [rsp+68h] [rbp-61h]
  int v114; // [rsp+70h] [rbp-59h]
  unsigned int v115; // [rsp+74h] [rbp-55h]
  PVOID v116; // [rsp+78h] [rbp-51h]
  unsigned int v117; // [rsp+80h] [rbp-49h]
  int v118; // [rsp+84h] [rbp-45h] BYREF
  UINT v119; // [rsp+88h] [rbp-41h]
  __int64 v120; // [rsp+90h] [rbp-39h] BYREF
  __int64 v121; // [rsp+98h] [rbp-31h] BYREF
  PVOID v122; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v123; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v124; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v125; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v126; // [rsp+C0h] [rbp-9h] BYREF
  unsigned __int8 v131; // [rsp+148h] [rbp+7Fh]

  Flags = a2->Flags;
  v8 = a4;
  v114 = 0;
  v9 = a2;
  v131 = 1;
  LODWORD(hSection) = 0;
  if ( (*(_DWORD *)&Flags & 0x10000) != 0 && a6 )
  {
    v12 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v12 + 24) = this;
    *(_QWORD *)(v12 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  v14 = (__int16)Flags;
  v15 = 1LL;
  v16 = (*(_DWORD *)&Flags & 0x40000) == 0;
  if ( (v14 & 0x400) == 0 )
    v15 = v16;
  v17 = *((_QWORD *)this + 2);
  v115 = v15;
  v18 = *(_QWORD *)(v17 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v18 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v18 + 168)) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v20, v19);
      *(_QWORD *)(v21 + 24) = 3940LL;
      WdLogEvent5_WdAssertion(v21);
    }
    v8 = a4;
    v15 = v115;
    v9 = a2;
  }
  v22 = a5;
  v23 = 0;
  v24 = a5;
  v119 = 0;
  if ( !v9->NumAllocations )
  {
LABEL_152:
    v9->Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v9->Flags & 0xFFFFBFFF | (v131 << 14));
    return (unsigned int)hSection;
  }
  while ( 1 )
  {
    v25 = *((_QWORD *)v24 + 6);
    v120 = 0LL;
    v121 = 0LL;
    v26 = v23;
    v110 = v15;
    v113 = 0LL;
    v116 = 0LL;
    v27 = v23;
    v28 = v15;
    v29 = &v8[v27];
    v30 = (LODWORD(v29->Size) + 4095) & 0xFFFFF000;
    v31 = (*(_DWORD *)(v25 + 4) & 0x200F) == 0;
    v117 = v30;
    if ( !v31 )
      v28 = 1;
    v110 = v28;
    if ( !*(_QWORD *)(v25 + 16) && (*(_DWORD *)&v9->Flags & 0x100000) == 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v25, v15);
      *(_QWORD *)(v32 + 24) = 3968LL;
      WdLogEvent5_WdAssertion(v32);
      v9 = a2;
    }
    Value = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v29->Flags.Value;
    if ( (*(_WORD *)&Value & 0x4000) != 0 )
    {
      v15 = 360LL * ((*((_DWORD *)v24 + 18) >> 12) & 0x3F);
      v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2704LL) + 16LL);
      hSection = *(HANDLE *)(v15 + *(_QWORD *)(v34 + 2584) + 40);
      if ( !*((_BYTE *)this + 1864) || !hSection )
      {
        v91 = WdLogNewEntry5_WdError(v34, v15);
        *(_QWORD *)(v91 + 24) = this;
        *(_QWORD *)(v91 + 32) = hSection;
        WdLogEvent5_WdError(v91);
        LODWORD(hSection) = -1073741823;
        goto LABEL_136;
      }
      v30 = v117;
    }
    if ( a7 )
    {
      v73 = *(_QWORD *)(*((_QWORD *)v24 + 5) + 56LL);
      if ( v73 )
        v113 = *(void **)(v73 + 192);
      v74 = v114;
      if ( *(_BYTE *)&v9->Flags < 0 )
        v74 = 1;
      v114 = v74;
      goto LABEL_96;
    }
    v35 = v9->Flags;
    v36 = *(_BYTE *)&v35 & 0x20;
    v111 = 0;
    if ( (*(_DWORD *)&v35 & 0x10000) != 0 )
    {
      v15 = (__int64)&a3[v26];
      if ( (*(_BYTE *)&v35 & 0x20) != 0 )
      {
        hSection = *(HANDLE *)(v15 + 8);
        v113 = hSection;
        v29->Flags.Value = *(_DWORD *)&Value | 0x10;
        goto LABEL_44;
      }
      v37 = *(void **)(v15 + 8);
      v122 = 0LL;
      hSection = (HANDLE)ObReferenceObjectByHandle(v37, 0x20000u, MmSectionObjectType, 1, &v122, 0LL);
      v40 = v122;
      v116 = v122;
      if ( (int)hSection < 0 )
      {
        v93 = WdLogNewEntry5_WdError(v39, v38);
        *(_QWORD *)(v93 + 24) = a3[v26].hSection;
        *(_QWORD *)(v93 + 32) = hSection;
        goto LABEL_133;
      }
      v29->Flags.Value |= 0x400000u;
      v41 = ProcessSectionAttributes(v40, v29);
      hSection = (HANDLE)v41;
      if ( v41 < 0 )
      {
        v92 = WdLogNewEntry5_WdError(v43, v42);
        *(_QWORD *)(v92 + 24) = this;
        *(_QWORD *)(v92 + 32) = hSection;
        WdLogEvent5_WdError(v92);
LABEL_125:
        ObfDereferenceObject(v116);
        goto LABEL_134;
      }
      v15 = *(_QWORD *)(*((_QWORD *)v24 + 5) + 56LL);
      *(_DWORD *)(v15 + 12) |= 0x400u;
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v24 + 5) + 56LL) + 192LL) = v116;
      *(_DWORD *)(v15 + 204) = v29->Alignment;
      *(_DWORD *)(v15 + 12) ^= (*(_DWORD *)(v15 + 12) ^ (v29->Flags.Value << 9)) & 0x800;
LABEL_43:
      hSection = v113;
      goto LABEL_44;
    }
    if ( (*(_BYTE *)&v35 & 0x20) == 0 )
    {
      if ( (*(_BYTE *)&Value & 0x10) != 0 )
      {
        hSection = a3[v26].hSection;
        v113 = hSection;
        goto LABEL_44;
      }
      if ( (*(_DWORD *)&Value & 0x400000) != 0 )
      {
        if ( v9->NumAllocations != 1
          || (*(_DWORD *)&Value & 0x2000000) == 0
          || !a6
          || (v46 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)a6 + 4)) == 0LL )
        {
          v47 = WdLogNewEntry5_WdAssertion(v36, v15);
          *(_QWORD *)(v47 + 24) = 4104LL;
          WdLogEvent5_WdAssertion(v47);
          v46 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)a6 + 4);
        }
        v116 = (PVOID)v46(*((_QWORD *)a6 + 5), v30);
        if ( !v116 )
        {
          v96 = WdLogNewEntry5_WdError(v48, v15);
          *(_QWORD *)(v96 + 24) = 4110LL;
          WdLogEvent5_WdError(v96);
          LODWORD(hSection) = -1073741823;
          goto LABEL_136;
        }
        v111 = 1;
      }
      goto LABEL_43;
    }
    if ( (*((_BYTE *)DXGPROCESS::GetCurrent(v36, v15) + 347) & 0x20) != 0 )
    {
      hSection = a3[v26].hSection;
      v29->Flags.Value |= 0x10u;
      v113 = hSection;
    }
    else
    {
      if ( v29->Size > v30 )
      {
        LODWORD(hSection) = -1073741811;
        v95 = WdLogNewEntry5_WdError(v44, v15);
        *(_QWORD *)(v95 + 24) = v29->Size;
        *(_QWORD *)(v95 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v95);
        goto LABEL_136;
      }
      v29->Size = v30;
      v113 = (void *)(*((__int64 (__fastcall **)(_QWORD, _QWORD))a6 + 4))(*((_QWORD *)a6 + 5), v30);
      hSection = v113;
      if ( !v113 )
      {
        v94 = WdLogNewEntry5_WdError(v45, v15);
        *(_QWORD *)(v94 + 24) = 4085LL;
        WdLogEvent5_WdError(v94);
        LODWORD(hSection) = -1073741823;
        goto LABEL_136;
      }
      a3[v26].hSection = v113;
    }
LABEL_44:
    if ( a6 && (*(_DWORD *)a6 & 0x40) != 0 )
    {
      if ( *(_OWORD *)((char *)a6 + 328) == 0LL )
      {
        v97 = WdLogNewEntry5_WdError(0LL, v15);
        *(_QWORD *)(v97 + 24) = 4132LL;
        WdLogEvent5_WdError(v97);
        LODWORD(hSection) = -1073741823;
        goto LABEL_136;
      }
      v49 = (void *)*((_QWORD *)a6 + 42);
      if ( v49 )
      {
        v29->Flags.Value |= 0x10u;
        hSection = v49;
        v113 = v49;
        v15 = *(_QWORD *)(*((_QWORD *)v24 + 5) + 56LL);
        *(_DWORD *)(v15 + 12) |= 0x200u;
        *(_QWORD *)(v15 + 192) = v49;
      }
      else
      {
        if ( !*((_QWORD *)a6 + 41) )
          goto LABEL_53;
        v29->Flags.Value |= 0x400000u;
        ObfReferenceObject(*((PVOID *)a6 + 41));
        v116 = (PVOID)*((_QWORD *)a6 + 41);
        v15 = *(_QWORD *)(*((_QWORD *)v24 + 5) + 56LL);
        *(_DWORD *)(v15 + 12) |= 0x400u;
        *(_QWORD *)(v15 + 192) = *((_QWORD *)a6 + 41);
      }
      *(_DWORD *)(v15 + 204) = *((_DWORD *)a6 + 98);
      *(_DWORD *)(v15 + 12) ^= ((unsigned __int16)*(_DWORD *)(v15 + 12) ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)a6 << 7)) & 0x800;
    }
LABEL_53:
    v50 = &a3[v26];
    if ( (v50->Flags.Value & 4) != 0 )
    {
      v29->AllocationPriority = v50->Priority;
    }
    else if ( !v29->AllocationPriority )
    {
      v51 = WdLogNewEntry5_WdError(v50, v15);
      *(_QWORD *)(v51 + 24) = 4178LL;
      WdLogEvent5_WdError(v51);
    }
    v52 = *((_QWORD *)v24 + 5);
    v53 = 0;
    if ( !v52 )
      goto LABEL_65;
    if ( (v29->Flags.Value & 0x100000) == 0 )
      goto LABEL_65;
    v54 = *(_QWORD *)(v52 + 56);
    v53 = 1;
    v112 = 1;
    if ( *(_QWORD *)(v54 + 184) )
      goto LABEL_65;
    v55 = 0LL;
    Size = 0LL;
    if ( (*(_DWORD *)&a2->Flags & 0x10000) != 0 && v113 )
    {
      v55 = v113;
      Size = a2->pStandardAllocation->ExistingHeapData.Size;
    }
    LOBYTE(Object) = (*((_BYTE *)DXGPROCESS::GetCurrent((__int64)a2, v15) + 347) & 0x20) != 0;
    v57 = (*(__int64 (__fastcall **)(_QWORD, __int64, void *, SIZE_T, int))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                  + 640LL)
                                                                                      + 8LL)
                                                                          + 1208LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
            *(_QWORD *)(*((_QWORD *)v24 + 5) + 56LL) + 184LL,
            v55,
            Size,
            Object);
    hSection = (HANDLE)v57;
    if ( v57 < 0 )
      break;
    v53 = v112;
    hSection = v113;
LABEL_65:
    if ( (*(_DWORD *)&a2->Flags & 0x10020) == 0x10020 )
    {
      if ( (*((_BYTE *)this + 1869) & 1) == 0 )
      {
        LODWORD(hSection) = ProcessSysMemAttributes(hSection, v117, v29);
        if ( (int)hSection < 0 )
          goto LABEL_136;
      }
      if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
      {
        v60 = *(_QWORD *)(*((_QWORD *)v24 + 5) + 56LL);
        v61 = v113;
        *(_DWORD *)(v60 + 12) |= 0x200u;
        v62 = *(_DWORD *)(v60 + 12);
        *(_QWORD *)(v60 + 192) = v61;
        *(_DWORD *)(v60 + 204) = v29->Alignment;
        *(_DWORD *)(v60 + 12) = v62 ^ ((unsigned __int16)v62 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v29->Flags.0 << 9)) & 0x800;
      }
    }
    if ( v53 )
      v63 = *(_QWORD *)(*((_QWORD *)v24 + 5) + 56LL) + 184LL;
    else
      v63 = 0LL;
    v64 = v116;
    LODWORD(hSection) = (*(__int64 (__fastcall **)(_QWORD, struct _DXGK_ALLOCATIONINFO *, _QWORD, PVOID, __int64, __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 128LL))(
                          *((_QWORD *)this + 95),
                          v29,
                          *((_QWORD *)v24 + 6),
                          v116,
                          v63,
                          &v120);
    if ( v111 )
      ObfDereferenceObject(v64);
    if ( (int)hSection < 0 )
      goto LABEL_136;
    v67 = v120;
    if ( !v120 )
    {
      v68 = WdLogNewEntry5_WdAssertion(0LL, v65);
      *(_QWORD *)(v68 + 24) = 4270LL;
      WdLogEvent5_WdAssertion(v68);
      v67 = v120;
    }
    *(_QWORD *)(*((_QWORD *)v24 + 6) + 8LL) = v67;
    if ( a6 )
    {
      switch ( *((_DWORD *)a6 + 4) )
      {
        case 1:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            v72 = (_DWORD *)*((_QWORD *)a6 + 3);
            LODWORD(v109) = v72[5];
            LODWORD(v108) = v72[4];
            LODWORD(v107) = v72[3];
            LODWORD(v106) = v72[2];
            LODWORD(v105) = v72[1];
            LODWORD(HandleInformation) = *v72;
            LODWORD(Objecta) = *(_DWORD *)a6;
            McTemplateK0pqqqqqqq_EtwWriteTransfer(
              (__int64)v72,
              &EventCddStandardAllocationSharedPrimarySurface,
              v66,
              *((_QWORD *)v24 + 6),
              Objecta,
              HandleInformation,
              v105,
              v106,
              v107,
              v108,
              v109);
          }
          break;
        case 2:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            v71 = (_DWORD *)*((_QWORD *)a6 + 3);
            LODWORD(v107) = v71[3];
            LODWORD(v106) = v71[2];
            LODWORD(v105) = v71[1];
            LODWORD(HandleInformation) = *v71;
            LODWORD(Objecta) = *(_DWORD *)a6;
            McTemplateK0pqqqqq_EtwWriteTransfer(
              (__int64)v71,
              v65,
              v66,
              *((_QWORD *)v24 + 6),
              Objecta,
              HandleInformation,
              v105,
              v106,
              v107);
          }
          break;
        case 3:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            v70 = (_DWORD *)*((_QWORD *)a6 + 3);
            LODWORD(v106) = v70[2];
            LODWORD(v105) = v70[1];
            LODWORD(HandleInformation) = *v70;
            LODWORD(Objecta) = *(_DWORD *)a6;
            McTemplateK0pqtqq_EtwWriteTransfer(
              (__int64)v70,
              &EventCddStandardAllocationStagingSurface,
              v66,
              *((_QWORD *)v24 + 6),
              Objecta,
              HandleInformation,
              v105,
              v106);
          }
          break;
        default:
          if ( *((_DWORD *)a6 + 4) == 4 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            v69 = (_DWORD *)*((_QWORD *)a6 + 3);
            LODWORD(v109) = v69[5];
            LODWORD(v108) = v69[4];
            LODWORD(v107) = v69[3];
            LODWORD(v106) = v69[2];
            LODWORD(v105) = v69[1];
            LODWORD(HandleInformation) = *v69;
            LODWORD(Objecta) = *(_DWORD *)a6;
            McTemplateK0pqqqqqqq_EtwWriteTransfer(
              (__int64)v69,
              &EventCddStandardAllocationGdiSurface,
              v66,
              *((_QWORD *)v24 + 6),
              Objecta,
              HandleInformation,
              v105,
              v106,
              v107,
              v108,
              v109);
          }
          break;
      }
    }
LABEL_96:
    v75 = *((_QWORD *)this + 2);
    v76 = *((_QWORD *)this + 95);
    MaximumRenamingListLength = v29->MaximumRenamingListLength;
    v118 = 0;
    LODWORD(HandleInformation) = v114;
    LODWORD(hSection) = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, void *, POBJECT_HANDLE_INFORMATION, struct DXGALLOCATION *, __int64 *, int *, char *))(*(_QWORD *)(*(_QWORD *)(v75 + 640) + 8LL) + 144LL))(
                          *(_QWORD *)(v75 + 648),
                          v76,
                          *(_QWORD *)(*((_QWORD *)v24 + 6) + 8LL),
                          MaximumRenamingListLength,
                          v113,
                          HandleInformation,
                          v24,
                          &v121,
                          &v118,
                          &v110);
    if ( !v131 || (v131 = 1, !v110) )
      v131 = 0;
    *((_DWORD *)v24 + 18) ^= (*((_DWORD *)v24 + 18) ^ (v118 << 12)) & 0x3F000;
    if ( (int)hSection < 0 )
      goto LABEL_136;
    v80 = v121;
    if ( !v121 )
    {
      v81 = WdLogNewEntry5_WdAssertion(v79, v78);
      *(_QWORD *)(v81 + 24) = 4374LL;
      WdLogEvent5_WdAssertion(v81);
      v80 = v121;
    }
    *((_QWORD *)v24 + 3) = v80;
    v82 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v29->Flags.Value;
    if ( (*(_WORD *)&v82 & 0x100) != 0
      || (v83 = *(_DWORD *)(*((_QWORD *)v24 + 6) + 4LL), (v83 & 0x20) != 0)
      || (*(_DWORD *)&v82 & 0x20200) != 0
      || (v83 & 0x4000) != 0 )
    {
      if ( (v29->Flags.Value & 0x100) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)v24 + 6) + 4LL) |= 8u;
        v82 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v29->Flags.Value;
      }
      if ( (*(_WORD *)&v82 & 0x200) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)v24 + 6) + 4LL) |= 0x20u;
        v82 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v29->Flags.Value;
      }
      if ( (*(_DWORD *)&v82 & 0x20000) != 0 )
        *(_DWORD *)(*((_QWORD *)v24 + 6) + 4LL) |= 0x4000u;
      LODWORD(hSection) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 232LL))(
                            *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
                            *((_QWORD *)v24 + 3),
                            0LL,
                            0LL,
                            0LL,
                            0LL);
      if ( (int)hSection < 0 )
        goto LABEL_136;
      v84 = *((_QWORD *)v24 + 6);
      *((_DWORD *)v24 + 18) |= 0x800u;
      if ( (*(_DWORD *)(v84 + 4) & 0x4000) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 240LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
          *((_QWORD *)v24 + 3));
        *((_DWORD *)v24 + 18) &= ~0x800u;
      }
    }
    if ( DXGDEVICE::UmdManagesResidency(this) && a6 && *((_DWORD *)a6 + 4) == 2 )
    {
      v85 = *((_QWORD *)this + 2);
      v86 = *((_DWORD *)v24 + 18);
      v123 = 0LL;
      v125 = 0LL;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v85 + 640) + 8LL) + 984LL))(
        *((_QWORD *)this + 95),
        (v86 >> 12) & 0x3F,
        &v123,
        &v125);
      v87 = *((_QWORD *)this + 2);
      v124 = 0LL;
      v126 = 0LL;
      v88 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v87 + 640) + 8LL) + 776LL))(
              *(_QWORD *)(v87 + 648),
              v123,
              (__int64)v24 + 24,
              1LL,
              3,
              &v124,
              &v126);
      hSection = (HANDLE)v88;
      if ( v88 >= 0 )
      {
        if ( v88 == 259 )
        {
          (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                + 640LL)
                                                                                    + 8LL)
                                                                        + 992LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
            &v125,
            &v124,
            1LL);
          LODWORD(hSection) = 0;
        }
        goto LABEL_121;
      }
      v93 = WdLogNewEntry5_WdError(v90, v89);
      *(_QWORD *)(v93 + 24) = hSection;
LABEL_133:
      WdLogEvent5_WdError(v93);
      goto LABEL_134;
    }
LABEL_121:
    v9 = a2;
    v23 = v119 + 1;
    v24 = (struct DXGALLOCATION *)*((_QWORD *)v24 + 8);
    v119 = v23;
    if ( v23 >= a2->NumAllocations )
      goto LABEL_135;
    v15 = v115;
    v8 = a4;
  }
  v98 = WdLogNewEntry5_WdError(v59, v58);
  *(_QWORD *)(v98 + 24) = hSection;
  WdLogEvent5_WdError(v98);
  if ( v111 )
    goto LABEL_125;
LABEL_134:
  v9 = a2;
LABEL_135:
  if ( (int)hSection >= 0 )
    goto LABEL_152;
LABEL_136:
  for ( i = 0; i < a2->NumAllocations; ++i )
  {
    if ( (*((_DWORD *)v22 + 18) & 0x800) != 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 240LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
        *((_QWORD *)v22 + 3));
      *((_DWORD *)v22 + 18) &= ~0x800u;
    }
    v100 = *((_QWORD *)v22 + 6);
    if ( *(_QWORD *)(v100 + 8)
      && !a7
      && (!*((_DWORD *)this + 108) && (*(_DWORD *)(v100 + 4) & 1) != 0 || (*(_DWORD *)(v100 + 4) & 2) != 0) )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 200LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL));
      *(_DWORD *)(*((_QWORD *)v22 + 6) + 4LL) |= 0x10u;
    }
    v101 = *((_QWORD *)v22 + 3);
    if ( v101 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL)
                                                                          + 8LL)
                                                              + 168LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
        v101,
        0LL,
        0LL);
      *((_QWORD *)v22 + 3) = 0LL;
    }
    if ( *(_QWORD *)(*((_QWORD *)v22 + 6) + 8LL) )
    {
      if ( !a7 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 136LL))(
          *((_QWORD *)this + 95),
          0LL);
        *(_QWORD *)(*((_QWORD *)v22 + 6) + 8LL) = 0LL;
      }
    }
    v22 = (struct DXGALLOCATION *)*((_QWORD *)v22 + 8);
  }
  return (unsigned int)hSection;
}
