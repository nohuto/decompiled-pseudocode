/*
 * XREFs of ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C0104760
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0104C00 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000A6F4 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C00387B4 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqq_EtwWriteTransfer @ 0x1C003DC20 (McTemplateK0pqqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqq_EtwWriteTransfer @ 0x1C003DCE0 (McTemplateK0pqqqqqqq_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C0224288 (-ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C02243B8 (-ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateVidMmAllocations(
        DXGDEVICE *this,
        unsigned __int64 a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        struct _DXGK_ALLOCATIONINFO *a4,
        struct DXGALLOCATION *a5,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a6,
        unsigned __int8 a7)
{
  D3DKMT_CREATEALLOCATIONFLAGS v7; // eax
  struct _DXGK_ALLOCATIONINFO *v8; // r10
  struct _D3DKMT_CREATEALLOCATION *v9; // rdi
  DXGDEVICE *v10; // r11
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // r15d
  struct DXGALLOCATION *v16; // r14
  __int64 v17; // rcx
  HANDLE hSection; // r9
  PVOID v19; // r13
  struct _DXGK_ALLOCATIONINFO *v20; // rsi
  unsigned int v21; // ebx
  __int64 Value; // r8
  struct _D3DKMT_CREATEALLOCATION *v23; // rdx
  __int64 v24; // rcx
  struct _D3DDDI_ALLOCATIONINFO2 *v25; // r12
  const struct _D3DKM_CREATESTANDARDALLOCATION *v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rcx
  char v29; // di
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rcx
  HANDLE v34; // r11
  __int64 MaximumRenamingListLength; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D v39; // ecx
  int v40; // edx
  __int64 v42; // r11
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r12
  __int64 v52; // rax
  __int64 v53; // rdx
  HANDLE v54; // rcx
  NTSTATUS v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rcx
  void *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 (__fastcall *v67)(_QWORD, _QWORD, __int64, HANDLE); // rax
  const struct _D3DKM_CREATESTANDARDALLOCATION *v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  void *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  HANDLE v75; // r12
  bool v76; // zf
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  int v80; // eax
  __int64 v81; // rdx
  int v82; // ecx
  __int64 v83; // rax
  _DWORD *v84; // rcx
  _DWORD *v85; // rcx
  _DWORD *v86; // rcx
  __int64 v87; // r9
  const EVENT_DESCRIPTOR *v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  unsigned int v92; // edx
  int v93; // eax
  __int64 v94; // rdx
  __int64 v95; // rcx
  UINT v96; // ebx
  struct DXGALLOCATION *v97; // rsi
  __int64 v98; // r9
  __int64 v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  int Object; // [rsp+20h] [rbp-A9h]
  PVOID *Objecta; // [rsp+20h] [rbp-A9h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-A1h]
  __int64 v109; // [rsp+30h] [rbp-99h]
  __int64 v110; // [rsp+38h] [rbp-91h]
  __int64 v111; // [rsp+40h] [rbp-89h]
  __int64 v112; // [rsp+48h] [rbp-81h]
  __int64 v113; // [rsp+50h] [rbp-79h]
  bool v114; // [rsp+60h] [rbp-69h]
  char v115; // [rsp+61h] [rbp-68h] BYREF
  char v116; // [rsp+62h] [rbp-67h]
  HANDLE v117; // [rsp+68h] [rbp-61h]
  int v118; // [rsp+70h] [rbp-59h]
  int v119; // [rsp+74h] [rbp-55h] BYREF
  __int64 v120; // [rsp+78h] [rbp-51h] BYREF
  __int64 v121; // [rsp+80h] [rbp-49h] BYREF
  PVOID v122; // [rsp+88h] [rbp-41h] BYREF
  SIZE_T Size; // [rsp+90h] [rbp-39h]
  __int64 v124; // [rsp+98h] [rbp-31h] BYREF
  __int64 v125; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v126; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v127[3]; // [rsp+B0h] [rbp-19h] BYREF
  struct _D3DKMT_CREATEALLOCATION *v129; // [rsp+118h] [rbp+4Fh]
  unsigned __int8 v133; // [rsp+148h] [rbp+7Fh]

  v129 = (struct _D3DKMT_CREATEALLOCATION *)a2;
  v7 = *(D3DKMT_CREATEALLOCATIONFLAGS *)(a2 + 56);
  v118 = 0;
  v8 = a4;
  v114 = 1;
  v9 = (struct _D3DKMT_CREATEALLOCATION *)a2;
  v10 = this;
  LODWORD(v11) = 0;
  if ( (*(_DWORD *)&v7 & 0x10000) != 0 && a6 )
  {
    v46 = WdLogNewEntry5_WdError(this, a2);
    LODWORD(v11) = -1073741811;
    *(_QWORD *)(v46 + 24) = this;
    *(_QWORD *)(v46 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v46);
    return (unsigned int)v11;
  }
  LOBYTE(a2) = (*(_DWORD *)&v7 & 0x40000) == 0;
  if ( (*(_WORD *)&v7 & 0x400) != 0 )
    LOBYTE(a2) = 1;
  v133 = a2;
  v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v12 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v12 + 168)) )
    {
      v47 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v47 + 24) = 3880LL;
      WdLogEvent5_WdAssertion(v47);
    }
    v10 = this;
    v8 = a4;
    a2 = v133;
  }
  v15 = 0;
  v16 = a5;
  if ( !v9->NumAllocations )
  {
LABEL_49:
    v9->Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v9->Flags & 0xFFFFBFFF | (v114 << 14));
    return (unsigned int)v11;
  }
  while ( 1 )
  {
    v17 = *((_QWORD *)v16 + 6);
    hSection = 0LL;
    v120 = 0LL;
    v19 = 0LL;
    v121 = 0LL;
    v117 = 0LL;
    v115 = a2;
    v20 = &v8[v15];
    v21 = (LODWORD(v20->Size) + 4095) & 0xFFFFF000;
    if ( (*(_DWORD *)(v17 + 4) & 0x200F) != 0 )
      v115 = 1;
    if ( !*(_QWORD *)(v17 + 16) )
    {
      v48 = WdLogNewEntry5_WdAssertion(v17, a2);
      *(_QWORD *)(v48 + 24) = 3908LL;
      WdLogEvent5_WdAssertion(v48);
      v10 = this;
      hSection = 0LL;
    }
    Value = v20->Flags.Value;
    if ( (Value & 0x4000) != 0 )
    {
      v49 = 360LL * ((*((_DWORD *)v16 + 18) >> 12) & 0x3F);
      v50 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) + 2680LL) + 16LL);
      v51 = *(_QWORD *)(v49 + *(_QWORD *)(v50 + 2560) + 40);
      if ( !*((_BYTE *)v10 + 1864) || !v51 )
      {
        v52 = WdLogNewEntry5_WdError(v50, v49);
        *(_QWORD *)(v52 + 24) = this;
        *(_QWORD *)(v52 + 32) = v51;
LABEL_136:
        WdLogEvent5_WdError(v52);
        LODWORD(v11) = -1073741823;
LABEL_137:
        v10 = this;
        goto LABEL_138;
      }
    }
    if ( !a7 )
      break;
    v42 = *(_QWORD *)(*((_QWORD *)v16 + 5) + 56LL);
    if ( v42 )
      v34 = *(HANDLE *)(v42 + 192);
    else
      v34 = 0LL;
    v9 = v129;
    if ( (*(_DWORD *)&v129->Flags & 0x80u) != 0 )
      v118 = 1;
LABEL_35:
    MaximumRenamingListLength = v20->MaximumRenamingListLength;
    v119 = 0;
    LODWORD(HandleInformation) = v118;
    LODWORD(v11) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, HANDLE, POBJECT_HANDLE_INFORMATION, struct DXGALLOCATION *, __int64 *, int *, char *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 144LL))(
                     *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
                     *((_QWORD *)this + 95),
                     *(_QWORD *)(*((_QWORD *)v16 + 6) + 8LL),
                     MaximumRenamingListLength,
                     v34,
                     HandleInformation,
                     v16,
                     &v121,
                     &v119,
                     &v115);
    v114 = v115 && v114;
    *((_DWORD *)v16 + 18) ^= (*((_DWORD *)v16 + 18) ^ (v119 << 12)) & 0x3F000;
    if ( (int)v11 < 0 )
      goto LABEL_137;
    v38 = v121;
    if ( !v121 )
    {
      v89 = WdLogNewEntry5_WdAssertion(v37, v36);
      *(_QWORD *)(v89 + 24) = 4314LL;
      WdLogEvent5_WdAssertion(v89);
      v38 = v121;
    }
    *((_QWORD *)v16 + 3) = v38;
    v39 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v20->Flags.Value;
    if ( (*(_WORD *)&v39 & 0x100) != 0
      || (v40 = *(_DWORD *)(*((_QWORD *)v16 + 6) + 4LL), (v40 & 0x20) != 0)
      || (*(_DWORD *)&v39 & 0x20200) != 0
      || (v40 & 0x4000) != 0 )
    {
      if ( (v20->Flags.Value & 0x100) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)v16 + 6) + 4LL) |= 8u;
        v39 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v20->Flags.Value;
      }
      if ( (*(_WORD *)&v39 & 0x200) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)v16 + 6) + 4LL) |= 0x20u;
        v39 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v20->Flags.Value;
      }
      if ( (*(_DWORD *)&v39 & 0x20000) != 0 )
        *(_DWORD *)(*((_QWORD *)v16 + 6) + 4LL) |= 0x4000u;
      LODWORD(v11) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL)
                                                                                               + 232LL))(
                       *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
                       *((_QWORD *)v16 + 3),
                       0LL,
                       0LL,
                       0LL,
                       0LL);
      if ( (int)v11 < 0 )
        goto LABEL_137;
      v90 = *((_QWORD *)v16 + 6);
      *((_DWORD *)v16 + 18) |= 0x800u;
      if ( (*(_DWORD *)(v90 + 4) & 0x4000) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 240LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
          *((_QWORD *)v16 + 3));
        *((_DWORD *)v16 + 18) &= ~0x800u;
      }
    }
    if ( DXGDEVICE::UmdManagesResidency(this) && a6 && *((_DWORD *)a6 + 4) == 2 )
    {
      v91 = *((_QWORD *)v10 + 2);
      v92 = *((_DWORD *)v16 + 18);
      v124 = 0LL;
      v126 = 0LL;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v91 + 640) + 8LL) + 984LL))(
        *((_QWORD *)v10 + 95),
        (v92 >> 12) & 0x3F,
        &v124,
        &v126);
      v125 = 0LL;
      v127[0] = 0LL;
      v93 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 776LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
              v124,
              (__int64)v16 + 24,
              1LL,
              3,
              &v125,
              v127);
      v11 = v93;
      if ( v93 < 0 )
      {
        v105 = WdLogNewEntry5_WdError(v95, v94);
        *(_QWORD *)(v105 + 24) = v11;
        WdLogEvent5_WdError(v105);
        goto LABEL_158;
      }
      if ( v93 == 259 )
      {
        (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                              + 640LL)
                                                                                  + 8LL)
                                                                      + 992LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
          &v126,
          &v125,
          1LL);
        LODWORD(v11) = 0;
      }
      v10 = this;
    }
    v16 = (struct DXGALLOCATION *)*((_QWORD *)v16 + 8);
    if ( ++v15 >= v9->NumAllocations )
      goto LABEL_48;
    a2 = v133;
    v8 = a4;
  }
  v23 = v129;
  v116 = 0;
  v24 = *(_DWORD *)&v129->Flags & 0x20;
  if ( (*(_DWORD *)&v129->Flags & 0x10000) != 0 )
  {
    v25 = a3;
    v53 = v15;
    if ( (_DWORD)v24 )
    {
      hSection = a3[v53].hSection;
      v23 = v129;
      v117 = hSection;
      v20->Flags.Value = Value | 0x10;
      goto LABEL_20;
    }
    v54 = a3[v53].hSection;
    v122 = 0LL;
    v55 = ObReferenceObjectByHandle(v54, 0x20000u, MmSectionObjectType, 1, &v122, 0LL);
    v19 = v122;
    v11 = v55;
    if ( v55 < 0 )
    {
      v102 = WdLogNewEntry5_WdError(v57, v56);
      *(_QWORD *)(v102 + 24) = a3[v15].hSection;
      *(_QWORD *)(v102 + 32) = v11;
      WdLogEvent5_WdError(v102);
      goto LABEL_157;
    }
    v20->Flags.Value |= 0x400000u;
    v58 = ProcessSectionAttributes(v19, v20);
    v11 = v58;
    if ( v58 < 0 )
    {
      v101 = WdLogNewEntry5_WdError(v60, v59);
      *(_QWORD *)(v101 + 24) = this;
      *(_QWORD *)(v101 + 32) = v11;
      WdLogEvent5_WdError(v101);
LABEL_156:
      ObfDereferenceObject(v19);
      goto LABEL_157;
    }
    v61 = *(_QWORD *)(*((_QWORD *)v16 + 5) + 56LL);
    *(_DWORD *)(v61 + 12) |= 0x400u;
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 5) + 56LL) + 192LL) = v19;
    *(_DWORD *)(v61 + 204) = v20->Alignment;
    *(_DWORD *)(v61 + 12) ^= (*(_DWORD *)(v61 + 12) ^ (v20->Flags.Value << 9)) & 0x800;
    goto LABEL_95;
  }
  if ( !(_DWORD)v24 )
  {
    if ( (Value & 0x10) != 0 )
    {
      v25 = a3;
      hSection = a3[v15].hSection;
      v117 = hSection;
      goto LABEL_20;
    }
    if ( (Value & 0x400000) == 0 )
      goto LABEL_19;
    if ( v129->NumAllocations == 1
      && (Value & 0x2000000) != 0
      && a6
      && (v67 = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64, HANDLE))*((_QWORD *)a6 + 4)) != 0LL )
    {
      v68 = a6;
    }
    else
    {
      v69 = WdLogNewEntry5_WdAssertion(v24, v129);
      *(_QWORD *)(v69 + 24) = 4044LL;
      WdLogEvent5_WdAssertion(v69);
      v68 = a6;
      v67 = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64, HANDLE))*((_QWORD *)a6 + 4);
    }
    v19 = (PVOID)v67(*((_QWORD *)v68 + 5), v21, Value, hSection);
    if ( !v19 )
    {
      v52 = WdLogNewEntry5_WdError(v71, v70);
      *(_QWORD *)(v52 + 24) = 4050LL;
      goto LABEL_136;
    }
    v116 = 1;
LABEL_95:
    v10 = this;
    v23 = v129;
    hSection = v117;
LABEL_19:
    v25 = a3;
    goto LABEL_20;
  }
  if ( (*((_BYTE *)DXGPROCESS::GetCurrent() + 347) & 0x20) != 0 )
  {
    v25 = a3;
    v23 = v129;
    v10 = this;
    hSection = a3[v15].hSection;
    v20->Flags.Value |= 0x10u;
    v117 = hSection;
  }
  else
  {
    if ( v20->Size > v21 )
    {
      LODWORD(v11) = -1073741811;
      v103 = WdLogNewEntry5_WdError(v63, v62);
      *(_QWORD *)(v103 + 24) = v20->Size;
      *(_QWORD *)(v103 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v103);
      goto LABEL_137;
    }
    v20->Size = v21;
    v64 = (void *)(*((__int64 (__fastcall **)(_QWORD, _QWORD))a6 + 4))(*((_QWORD *)a6 + 5), v21);
    v117 = v64;
    hSection = v64;
    if ( !v64 )
    {
      v52 = WdLogNewEntry5_WdError(v66, v65);
      *(_QWORD *)(v52 + 24) = 4025LL;
      goto LABEL_136;
    }
    v25 = a3;
    v23 = v129;
    v10 = this;
    a3[v15].hSection = v64;
  }
LABEL_20:
  v26 = a6;
  if ( a6 && (*(_DWORD *)a6 & 0x40) != 0 )
  {
    if ( *(_OWORD *)((char *)a6 + 328) == 0LL )
    {
      v52 = WdLogNewEntry5_WdError(0LL, v23);
      *(_QWORD *)(v52 + 24) = 4072LL;
      goto LABEL_136;
    }
    v72 = (void *)*((_QWORD *)a6 + 42);
    if ( v72 )
    {
      v20->Flags.Value |= 0x10u;
      hSection = v72;
      v117 = v72;
      v73 = *(_QWORD *)(*((_QWORD *)v16 + 5) + 56LL);
      *(_DWORD *)(v73 + 12) |= 0x200u;
      *(_QWORD *)(v73 + 192) = v72;
    }
    else
    {
      if ( !*((_QWORD *)a6 + 41) )
        goto LABEL_21;
      v20->Flags.Value |= 0x400000u;
      ObfReferenceObject(*((PVOID *)a6 + 41));
      v26 = a6;
      hSection = v117;
      v10 = this;
      v73 = *(_QWORD *)(*((_QWORD *)v16 + 5) + 56LL);
      v19 = (PVOID)*((_QWORD *)a6 + 41);
      *(_DWORD *)(v73 + 12) |= 0x400u;
      *(_QWORD *)(v73 + 192) = *((_QWORD *)a6 + 41);
    }
    *(_DWORD *)(v73 + 204) = *((_DWORD *)v26 + 98);
    *(_DWORD *)(v73 + 12) ^= ((unsigned __int16)*(_DWORD *)(v73 + 12) ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)v26 << 7)) & 0x800;
    v23 = v129;
  }
LABEL_21:
  v27 = v15;
  if ( (v25[v27].Flags.Value & 4) != 0 )
  {
    v20->AllocationPriority = v25[v27].Priority;
  }
  else if ( !v20->AllocationPriority )
  {
    v74 = WdLogNewEntry5_WdError(v27 * 96, v23);
    *(_QWORD *)(v74 + 24) = 4118LL;
    WdLogEvent5_WdError(v74);
    hSection = v117;
    v23 = v129;
    v10 = this;
  }
  v28 = *((_QWORD *)v16 + 5);
  v29 = 0;
  if ( !v28 || (v20->Flags.Value & 0x100000) == 0 || (v29 = 1, *(_QWORD *)(*(_QWORD *)(v28 + 56) + 184LL)) )
  {
LABEL_25:
    if ( (*(_DWORD *)&v23->Flags & 0x10020) == 0x10020 )
    {
      if ( (*((_BYTE *)v10 + 1869) & 1) == 0 )
      {
        v80 = ProcessSysMemAttributes(hSection, v21, v20);
        v10 = this;
        LODWORD(v11) = v80;
        if ( v80 < 0 )
          goto LABEL_138;
        hSection = v117;
        v23 = v129;
      }
      if ( (*(_DWORD *)&v23->Flags & 2) != 0 )
      {
        v81 = *(_QWORD *)(*((_QWORD *)v16 + 5) + 56LL);
        *(_DWORD *)(v81 + 12) |= 0x200u;
        v82 = *(_DWORD *)(v81 + 12);
        *(_QWORD *)(v81 + 192) = hSection;
        *(_DWORD *)(v81 + 204) = v20->Alignment;
        *(_DWORD *)(v81 + 12) = v82 ^ ((unsigned __int16)v82 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v20->Flags.0 << 9)) & 0x800;
      }
    }
    if ( v29 )
      v30 = *(_QWORD *)(*((_QWORD *)v16 + 5) + 56LL) + 184LL;
    else
      v30 = 0LL;
    LODWORD(v11) = (*(__int64 (__fastcall **)(_QWORD, struct _DXGK_ALLOCATIONINFO *, _QWORD, PVOID, __int64, __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 640LL) + 8LL) + 128LL))(
                     *((_QWORD *)v10 + 95),
                     v20,
                     *((_QWORD *)v16 + 6),
                     v19,
                     v30,
                     &v120);
    if ( v116 )
      ObfDereferenceObject(v19);
    if ( (int)v11 < 0 )
      goto LABEL_137;
    v33 = v120;
    if ( !v120 )
    {
      v83 = WdLogNewEntry5_WdAssertion(0LL, v31);
      *(_QWORD *)(v83 + 24) = 4210LL;
      WdLogEvent5_WdAssertion(v83);
      v33 = v120;
    }
    *(_QWORD *)(*((_QWORD *)v16 + 6) + 8LL) = v33;
    if ( !a6 )
      goto LABEL_34;
    v43 = *((_DWORD *)a6 + 4);
    if ( v43 == 4 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v86 = (_DWORD *)*((_QWORD *)a6 + 3);
        v87 = *((_QWORD *)v16 + 6);
        LODWORD(v113) = v86[5];
        LODWORD(v112) = v86[4];
        LODWORD(v111) = v86[3];
        LODWORD(v110) = v86[2];
        LODWORD(v109) = v86[1];
        LODWORD(HandleInformation) = *v86;
        v88 = (const EVENT_DESCRIPTOR *)&EventCddStandardAllocationGdiSurface;
        LODWORD(Objecta) = *(_DWORD *)a6;
LABEL_119:
        McTemplateK0pqqqqqqq_EtwWriteTransfer(
          (__int64)v86,
          v88,
          v32,
          v87,
          Objecta,
          HandleInformation,
          v109,
          v110,
          v111,
          v112,
          v113);
      }
    }
    else
    {
      v44 = v43 - 1;
      if ( v44 )
      {
        v45 = v44 - 1;
        if ( v45 )
        {
          if ( v45 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            v84 = (_DWORD *)*((_QWORD *)a6 + 3);
            LODWORD(v110) = v84[2];
            LODWORD(v109) = v84[1];
            LODWORD(HandleInformation) = *v84;
            LODWORD(Objecta) = *(_DWORD *)a6;
            McTemplateK0pqtqq_EtwWriteTransfer(
              (__int64)v84,
              &EventCddStandardAllocationStagingSurface,
              v32,
              *((_QWORD *)v16 + 6),
              Objecta,
              HandleInformation,
              v109,
              v110);
          }
        }
        else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v85 = (_DWORD *)*((_QWORD *)a6 + 3);
          LODWORD(v111) = v85[3];
          LODWORD(v110) = v85[2];
          LODWORD(v109) = v85[1];
          LODWORD(HandleInformation) = *v85;
          LODWORD(Objecta) = *(_DWORD *)a6;
          McTemplateK0pqqqqq_EtwWriteTransfer(
            (__int64)v85,
            (__int64)a6,
            v32,
            *((_QWORD *)v16 + 6),
            Objecta,
            HandleInformation,
            v109,
            v110,
            v111);
        }
        goto LABEL_34;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v86 = (_DWORD *)*((_QWORD *)a6 + 3);
        v87 = *((_QWORD *)v16 + 6);
        LODWORD(v113) = v86[5];
        LODWORD(v112) = v86[4];
        LODWORD(v111) = v86[3];
        LODWORD(v110) = v86[2];
        LODWORD(v109) = v86[1];
        LODWORD(HandleInformation) = *v86;
        v88 = (const EVENT_DESCRIPTOR *)&EventCddStandardAllocationSharedPrimarySurface;
        LODWORD(Objecta) = *(_DWORD *)a6;
        goto LABEL_119;
      }
    }
LABEL_34:
    v9 = v129;
    v34 = v117;
    goto LABEL_35;
  }
  v75 = 0LL;
  v76 = (*(_DWORD *)&v23->Flags & 0x10000) == 0;
  Size = 0LL;
  if ( !v76 && hSection )
  {
    v75 = hSection;
    Size = v23->pStandardAllocation->ExistingHeapData.Size;
  }
  LOBYTE(Object) = (*((_BYTE *)DXGPROCESS::GetCurrent() + 347) & 0x20) != 0;
  v77 = (*(__int64 (__fastcall **)(_QWORD, __int64, HANDLE, SIZE_T, int))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                + 640LL)
                                                                                    + 8LL)
                                                                        + 1208LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
          *(_QWORD *)(*((_QWORD *)v16 + 5) + 56LL) + 184LL,
          v75,
          Size,
          Object);
  v11 = v77;
  if ( v77 >= 0 )
  {
    hSection = v117;
    v23 = v129;
    v10 = this;
    goto LABEL_25;
  }
  v104 = WdLogNewEntry5_WdError(v79, v78);
  *(_QWORD *)(v104 + 24) = v11;
  WdLogEvent5_WdError(v104);
  if ( v116 )
    goto LABEL_156;
LABEL_157:
  v9 = v129;
LABEL_158:
  v10 = this;
LABEL_48:
  if ( (int)v11 >= 0 )
    goto LABEL_49;
LABEL_138:
  v96 = 0;
  if ( v129->NumAllocations )
  {
    v97 = a5;
    v98 = a7;
    do
    {
      if ( (*((_DWORD *)v97 + 18) & 0x800) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 640LL)
                                                                             + 8LL)
                                                                 + 240LL))(
          *(_QWORD *)(*((_QWORD *)v10 + 2) + 648LL),
          *((_QWORD *)v97 + 3),
          v32,
          v98);
        *((_DWORD *)v97 + 18) &= ~0x800u;
        v10 = this;
        v98 = a7;
      }
      v99 = *((_QWORD *)v97 + 6);
      if ( *(_QWORD *)(v99 + 8)
        && !(_BYTE)v98
        && (!*((_DWORD *)v10 + 108) && (*(_DWORD *)(v99 + 4) & 1) != 0 || (*(_DWORD *)(v99 + 4) & 2) != 0) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 640LL) + 8LL) + 200LL))(*(_QWORD *)(*((_QWORD *)v10 + 2) + 648LL));
        v10 = this;
        v98 = a7;
        *(_DWORD *)(*((_QWORD *)v97 + 6) + 4LL) |= 0x10u;
      }
      v100 = *((_QWORD *)v97 + 3);
      if ( v100 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 640LL)
                                                                            + 8LL)
                                                                + 168LL))(
          *(_QWORD *)(*((_QWORD *)v10 + 2) + 648LL),
          v100,
          0LL,
          0LL);
        v10 = this;
        v98 = a7;
        *((_QWORD *)v97 + 3) = 0LL;
      }
      v32 = *(_QWORD *)(*((_QWORD *)v97 + 6) + 8LL);
      if ( v32 && !(_BYTE)v98 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 640LL) + 8LL) + 136LL))(
          *((_QWORD *)v10 + 95),
          0LL);
        v10 = this;
        v98 = a7;
        *(_QWORD *)(*((_QWORD *)v97 + 6) + 8LL) = 0LL;
      }
      v97 = (struct DXGALLOCATION *)*((_QWORD *)v97 + 8);
      ++v96;
    }
    while ( v96 < v129->NumAllocations );
  }
  return (unsigned int)v11;
}
