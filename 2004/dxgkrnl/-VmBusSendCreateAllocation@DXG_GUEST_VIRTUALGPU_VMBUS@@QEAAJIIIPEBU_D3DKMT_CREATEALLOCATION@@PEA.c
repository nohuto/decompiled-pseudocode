/*
 * XREFs of ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C024671C
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00F28E0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?CreateGpadlFromBuffer@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAXIPEAI@Z @ 0x1C0237E38 (-CreateGpadlFromBuffer@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAXIPEAI@Z.c)
 *     ?CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z @ 0x1C0237EC4 (-CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024D0C8 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C024D3DC (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateAllocation(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        int a4,
        const struct _D3DKMT_CREATEALLOCATION *a5,
        struct _D3DDDI_ALLOCATIONINFO2 *a6,
        void **a7,
        void *a8,
        void *Src,
        unsigned int a10,
        char a11,
        unsigned __int8 **a12)
{
  bool v13; // zf
  UINT PrivateRuntimeDataSize; // ecx
  unsigned int v15; // edx
  __int64 NumAllocations; // rcx
  unsigned int v17; // edi
  unsigned int v18; // r9d
  UINT *p_PrivateDriverDataSize; // r8
  unsigned int v20; // r10d
  unsigned int v21; // eax
  __int64 v22; // rdx
  int v23; // r15d
  unsigned int v24; // r8d
  size_t v25; // r12
  char *v26; // rax
  char *v27; // rsi
  _DWORD *v29; // r13
  struct _MDL *v30; // rdi
  __int64 v31; // rcx
  size_t v32; // r8
  char v33; // al
  __int64 PrivateDriverDataSize; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS v35; // eax
  __int64 v36; // rax
  char v37; // r12
  int v38; // ecx
  __int64 v39; // rcx
  int v40; // edi
  int v41; // eax
  int v42; // r9d
  __int64 v43; // rdx
  _DWORD *v44; // r15
  UINT *v45; // rdi
  D3DKMT_CREATEALLOCATIONFLAGS v46; // eax
  __int64 v47; // rcx
  _QWORD *v48; // rax
  const void *v49; // rdx
  struct _MDL *v50; // r9
  UINT v51; // r12d
  UINT v52; // edx
  __int64 v53; // rcx
  union _D3DDDI_ALLOCATIONINFO2::$332422D50CC5DC1C38BC4DCC57A4E2CB *p_hSection; // r15
  __int64 v55; // rdx
  __int64 v56; // r12
  SIZE_T v57; // rax
  PMDL PagesForMdl; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  struct DXGGLOBAL *v63; // rax
  __int64 v64; // rax
  PVOID v65; // r13
  HANDLE hSection; // rcx
  NTSTATUS v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 CurrentProcess; // rax
  __int64 v72; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 hSection_low; // rcx
  _QWORD *v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rax
  struct _MDL *Flags; // [rsp+30h] [rbp-99h]
  __int64 v87; // [rsp+58h] [rbp-71h] BYREF
  void *v88; // [rsp+60h] [rbp-69h]
  PVOID Object; // [rsp+68h] [rbp-61h] BYREF
  void *v90; // [rsp+70h] [rbp-59h] BYREF
  _DWORD *v91; // [rsp+78h] [rbp-51h]
  __int64 v92; // [rsp+80h] [rbp-49h] BYREF
  unsigned int v93[2]; // [rsp+88h] [rbp-41h]
  __int64 v94; // [rsp+90h] [rbp-39h]
  __int64 v95; // [rsp+98h] [rbp-31h] BYREF
  int v96; // [rsp+A0h] [rbp-29h]
  int v97; // [rsp+A4h] [rbp-25h]
  int v98; // [rsp+A8h] [rbp-21h]
  int v99; // [rsp+B0h] [rbp-19h]
  int v100; // [rsp+B4h] [rbp-15h]
  int v101; // [rsp+B8h] [rbp-11h]
  int v106; // [rsp+138h] [rbp+6Fh]
  UINT v107; // [rsp+138h] [rbp+6Fh]

  *a12 = 0LL;
  if ( !(_BYTE)a10 || (v13 = (*(_DWORD *)&a5->Flags & 0x10000) == 0, LOBYTE(a10) = 1, !v13) )
    LOBYTE(a10) = 0;
  PrivateRuntimeDataSize = a5->PrivateRuntimeDataSize;
  v15 = PrivateRuntimeDataSize + a5->PrivateDriverDataSize;
  if ( v15 < PrivateRuntimeDataSize )
    return 2147483653LL;
  NumAllocations = a5->NumAllocations;
  v17 = 0;
  v18 = 0;
  if ( (_DWORD)NumAllocations )
  {
    p_PrivateDriverDataSize = &a6->PrivateDriverDataSize;
    do
    {
      v20 = v17 + *p_PrivateDriverDataSize;
      if ( v20 < v17 )
        return 2147483653LL;
      ++v18;
      p_PrivateDriverDataSize += 24;
      v17 = v20;
    }
    while ( v18 < (unsigned int)NumAllocations );
  }
  v21 = v17 + v15;
  if ( v17 + v15 < v15 )
    return 2147483653LL;
  v22 = v21 + 64;
  if ( (unsigned int)v22 < v21 )
    return 2147483653LL;
  v23 = 12 * NumAllocations;
  if ( (unsigned __int64)(12 * NumAllocations) > 0xFFFFFFFF )
    return 2147483653LL;
  v24 = v23 + v22;
  LODWORD(v88) = v23 + v22;
  if ( v23 + (int)v22 < (unsigned int)v22 )
    return 2147483653LL;
  if ( (unsigned int)(NumAllocations - 1) > 0x71B || v17 > 0x20000 )
  {
    v85 = WdLogNewEntry5_WdError(NumAllocations, v22);
    *(_QWORD *)(v85 + 24) = v17;
    *(_QWORD *)(v85 + 32) = a5->NumAllocations;
    WdLogEvent5_WdError(v85);
    return 2147483653LL;
  }
  v25 = v24;
  v106 = 0;
  v26 = (char *)operator new[](v24, 0x4B677844u, (POOL_TYPE)512);
  v27 = v26;
  if ( !v26 )
    return 3221225495LL;
  memset(v26, 0, v25);
  *(_QWORD *)v27 = 0LL;
  *((_QWORD *)v27 + 1) = 0LL;
  *((_DWORD *)v27 + 4) = 4;
  LODWORD(v90) = (v17 + 72 * a5->NumAllocations + 23) & 0xFFFFFFF8;
  v94 = (unsigned int)v90;
  v91 = operator new((unsigned int)v90, 0x4B677844u, 1, (POOL_TYPE)512);
  v29 = v91;
  if ( !v91 )
  {
    LODWORD(v30) = -1073741801;
    goto LABEL_87;
  }
  *((_DWORD *)v27 + 6) = a3;
  *((_DWORD *)v27 + 2) = a2;
  v31 = (unsigned int)a5->Flags;
  *((_DWORD *)v27 + 11) = v31;
  LODWORD(v31) = v31 & 0xFFFEFFFF;
  *((_DWORD *)v27 + 7) = a4;
  *((_QWORD *)v27 + 6) = a5->hPrivateRuntimeResourceHandle;
  *((_DWORD *)v27 + 10) = a5->NumAllocations;
  v32 = a5->PrivateRuntimeDataSize;
  v33 = a11;
  *((_DWORD *)v27 + 8) = v32;
  PrivateDriverDataSize = a5->PrivateDriverDataSize;
  *((_DWORD *)v27 + 9) = PrivateDriverDataSize;
  v27[56] = v33;
  *((_DWORD *)v27 + 11) = v31;
  v35 = a5->Flags;
  if ( (*(_DWORD *)&v35 & 0x20020) != 0 )
  {
    LODWORD(v31) = v31 & 0xFFFFE7FF;
    *((_DWORD *)v27 + 11) = v31;
    v35 = a5->Flags;
  }
  else if ( (v31 & 0x1000) != 0 )
  {
    v36 = WdLogNewEntry5_WdError(v31, PrivateDriverDataSize);
    *(_QWORD *)(v36 + 24) = 8256LL;
    WdLogEvent5_WdError(v36);
    LODWORD(v30) = -1073741811;
    goto LABEL_87;
  }
  if ( (*(_BYTE *)&v35 & 8) != 0 )
  {
    v37 = 1;
    v38 = v31 & 0xFFFFFFF7;
LABEL_25:
    LOBYTE(v106) = v37;
    *((_DWORD *)v27 + 11) = v38 | 0x20;
    goto LABEL_31;
  }
  if ( (*(_BYTE *)&v35 & 0x20) != 0 )
  {
    v37 = 2;
    LOBYTE(v106) = 2;
  }
  else
  {
    if ( (*(_DWORD *)&v35 & 0x20000) != 0 )
    {
      v37 = 2;
      v38 = v31 & 0xFFFDFFFF;
      goto LABEL_25;
    }
    v37 = 0;
  }
LABEL_31:
  v39 = (unsigned int)(v23 + 64);
  v40 = v39 + a5->PrivateRuntimeDataSize;
  if ( (_DWORD)v32 && Src )
  {
    memmove(&v27[v39], Src, v32);
    LODWORD(PrivateDriverDataSize) = *((_DWORD *)v27 + 9);
  }
  v41 = PrivateDriverDataSize;
  if ( (_DWORD)PrivateDriverDataSize && a8 )
  {
    memmove(&v27[v40], a8, (unsigned int)PrivateDriverDataSize);
    v41 = *((_DWORD *)v27 + 9);
  }
  v42 = v41 + v40;
  v43 = 0LL;
  v44 = v27 + 64;
  LODWORD(Object) = v41 + v40;
  LODWORD(v87) = 0;
  if ( a5->NumAllocations )
  {
    v45 = &a6->PrivateDriverDataSize;
    do
    {
      v46 = a5->Flags;
      if ( *((_QWORD *)v45 - 2) )
      {
        if ( (*(_DWORD *)&v46 & 0x20000) == 0 )
        {
          *((_DWORD *)v27 + 11) |= 0x20u;
          v37 |= 2u;
          LOBYTE(v106) = v37;
        }
      }
      else if ( (*(_BYTE *)&v46 & 0x20) != 0 )
      {
        LODWORD(v30) = -1073741811;
        v64 = WdLogNewEntry5_WdError(v39, v43);
        *(_QWORD *)(v64 + 24) = 8342LL;
        WdLogEvent5_WdError(v64);
        goto LABEL_87;
      }
      *v44 = v45[2];
      v44[2] = v45[1];
      v47 = *v45;
      if ( v42 + (int)v47 > (unsigned int)v88 )
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47, v43);
        v48[3] = 275LL;
        v48[4] = 2LL;
        v48[5] = 0LL;
        v48[6] = 0LL;
        v48[7] = 0LL;
        WdLogEvent5_WdCriticalError(v48);
        LODWORD(v47) = *v45;
        LODWORD(v43) = v87;
        v42 = (int)Object;
      }
      v44[1] = v47;
      v39 = *v45;
      if ( (_DWORD)v39 )
      {
        if ( (_BYTE)a10 )
          v49 = a7[(unsigned int)v43];
        else
          v49 = (const void *)*((_QWORD *)v45 - 1);
        if ( v49 )
        {
          memmove(&v27[v42], v49, *v45);
          v39 = *v45;
          v42 = (int)Object;
        }
        LODWORD(v43) = v87;
        v42 += v39;
        LODWORD(Object) = v42;
      }
      v43 = (unsigned int)(v43 + 1);
      v44 += 3;
      v45 += 24;
      LODWORD(v87) = v43;
    }
    while ( (unsigned int)v43 < a5->NumAllocations );
  }
  a10 = (unsigned int)v90;
  LODWORD(v30) = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
                   this,
                   (struct DXGKVMB_COMMAND_BASE *)v27,
                   (unsigned int)v88,
                   v29,
                   &a10,
                   Flags);
  if ( (int)v30 < 0 )
    goto LABEL_87;
  LODWORD(v30) = -1073741823;
  if ( a10 < (unsigned int)v90 )
    goto LABEL_87;
  LODWORD(v30) = 0;
  v29[3] = v106;
  v51 = 0;
  v52 = a5->NumAllocations;
  v107 = 0;
  v53 = v52 - 1;
  v88 = &v29[16 * v53 + 22 + 2 * v53];
  if ( !v52 )
    goto LABEL_86;
  p_hSection = (union _D3DDDI_ALLOCATIONINFO2::$332422D50CC5DC1C38BC4DCC57A4E2CB *)&a6->hSection;
  while ( 1 )
  {
    v55 = (unsigned int)a5->Flags;
    LOBYTE(v53) = (*((_DWORD *)v27 + 11) & 0x20020) == 0;
    if ( ((unsigned __int8)v53 & ((v55 & 8) == 0)) != 0 || (int)v30 < 0 )
      goto LABEL_81;
    v56 = 9LL * v51;
    v57 = *(_QWORD *)&v29[2 * v56 + 8];
    *(_QWORD *)v93 = v57;
    if ( (v55 & 8) != 0 )
      break;
    v90 = 0LL;
    LOBYTE(a10) = 0;
    v65 = 0LL;
    if ( (v55 & 0x20000) != 0 )
    {
      hSection = p_hSection->hSection;
      Object = 0LL;
      v67 = ObReferenceObjectByHandle(hSection, 0x20000u, MmSectionObjectType, 1, &Object, 0LL);
      v65 = Object;
      v30 = (struct _MDL *)v67;
      if ( v67 >= 0 )
      {
        v92 = 0LL;
        v87 = *(_QWORD *)&v91[2 * v56 + 8];
        CurrentProcess = PsGetCurrentProcess(v69, v68);
        LODWORD(v30) = ((__int64 (__fastcall *)(PVOID, __int64, void **, _QWORD, __int64, __int64 *, __int64 *, int, _DWORD, int))MmMapViewOfSection)(
                         v65,
                         CurrentProcess,
                         &v90,
                         0LL,
                         v87,
                         &v92,
                         &v87,
                         2,
                         0,
                         4);
        if ( (int)v30 >= 0 )
        {
          LOBYTE(a10) = 1;
        }
        else
        {
          v72 = WdLogNewEntry5_WdError(v53, v55);
          *(_QWORD *)(v72 + 24) = v87;
          WdLogEvent5_WdError(v72);
          ObfDereferenceObject(v65);
        }
      }
      else
      {
        v70 = WdLogNewEntry5_WdError(v69, v68);
        *(union _D3DDDI_ALLOCATIONINFO2::$332422D50CC5DC1C38BC4DCC57A4E2CB *)(v70 + 24) = (union _D3DDDI_ALLOCATIONINFO2::$332422D50CC5DC1C38BC4DCC57A4E2CB)p_hSection->hSection;
        *(_QWORD *)(v70 + 32) = v30;
        WdLogEvent5_WdError(v70);
      }
    }
    else
    {
      v90 = p_hSection->hSection;
    }
    if ( (int)v30 >= 0 )
    {
      Global = DXGGLOBAL::GetGlobal(v53, v55);
      LODWORD(v30) = DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromBuffer(
                       *((struct _KTHREAD ***)Global + 197),
                       v90,
                       v93[0],
                       &v91[2 * v56 + 7]);
    }
    if ( (_BYTE)a10 )
    {
      v74 = PsGetCurrentProcess(v53, v55);
      MmUnmapViewOfSection(v74);
      ObfDereferenceObject(v65);
    }
    v29 = v91;
LABEL_75:
    if ( (int)v30 < 0 )
    {
      v75 = WdLogNewEntry5_WdError(v53, v55);
      *(_QWORD *)(v75 + 24) = (int)v30;
LABEL_79:
      WdLogEvent5_WdError(v75);
      goto LABEL_80;
    }
    v96 = a2;
    v99 = a3;
    v100 = v29[2 * v56 + 4];
    v101 = v29[2 * v56 + 7];
    v95 = 0LL;
    v97 = 0;
    v98 = 45;
    v76 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
            this,
            (struct DXGKVMB_COMMAND_BASE *)&v95,
            0x28u,
            v50);
    v30 = (struct _MDL *)v76;
    if ( v76 < 0 )
    {
      v75 = WdLogNewEntry5_WdError(v78, v77);
      *(_QWORD *)(v75 + 24) = v30;
      goto LABEL_79;
    }
LABEL_80:
    v51 = v107;
LABEL_81:
    hSection_low = LODWORD(p_hSection[2].hSection);
    if ( (char *)v88 + hSection_low > (char *)v29 + v94 )
    {
      v80 = (_QWORD *)WdLogNewEntry5_WdCriticalError(hSection_low, (char *)v29 + v94);
      v80[3] = 275LL;
      v80[4] = 2LL;
      v80[5] = 0LL;
      v80[6] = 0LL;
      v80[7] = 0LL;
      WdLogEvent5_WdCriticalError(v80);
      LODWORD(hSection_low) = p_hSection[2].hSection;
    }
    memmove(a7[v51++], v88, (unsigned int)hSection_low);
    v88 = (char *)v88 + LODWORD(p_hSection[2].hSection);
    p_hSection += 12;
    v107 = v51;
    if ( v51 >= a5->NumAllocations )
      goto LABEL_86;
  }
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v57, MmCached, 4u);
  v30 = PagesForMdl;
  if ( PagesForMdl )
  {
    p_hSection->hSection = PagesForMdl;
    v63 = DXGGLOBAL::GetGlobal(v60, v59);
    LODWORD(v30) = DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromMdl(*((struct _KTHREAD ***)v63 + 197), v30, &v29[2 * v56 + 7]);
    goto LABEL_75;
  }
  LODWORD(v30) = -1073741801;
  v81 = WdLogNewEntry5_WdLowResource(v60, v59, v61, v62);
  *(_QWORD *)(v81 + 24) = 8419LL;
  WdLogEvent5_WdLowResource(v81);
LABEL_86:
  *a12 = (unsigned __int8 *)v29;
  v29 = 0LL;
LABEL_87:
  operator delete[](v29);
  operator delete[](v27);
  if ( (int)v30 < 0 )
  {
    v84 = WdLogNewEntry5_WdError(v83, v82);
    *(_QWORD *)(v84 + 24) = (int)v30;
    WdLogEvent5_WdError(v84);
  }
  return (unsigned int)v30;
}
