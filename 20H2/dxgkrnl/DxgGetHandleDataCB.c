/*
 * XREFs of DxgGetHandleDataCB @ 0x1C014CEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007264 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000D4DC (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00F60C0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00F9DB0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FBFC0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FD740 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01072A4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

ULONG_PTR __fastcall DxgGetHandleDataCB(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // eax
  ULONG_PTR Count; // rbx
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // ecx
  __int64 v19; // rcx
  struct _EX_RUNDOWN_REF *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  struct _EX_RUNDOWN_REF *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct DXGTHREAD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct DXGTHREAD *v32; // rdi
  struct DXGTHREAD *Current; // rax
  __int64 v35; // rax
  int v36; // r9d
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned int v44; // edi
  struct DXGPROCESS *v45; // rax
  unsigned int v46; // ecx
  __int64 v47; // r8
  __int64 v48; // rdx
  int v49; // ecx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  struct _EX_RUNDOWN_REF *v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  struct _EX_RUNDOWN_REF *v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  struct _EX_RUNDOWN_REF *v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  struct _EX_RUNDOWN_REF *v66; // [rsp+20h] [rbp-50h] BYREF
  struct _EX_RUNDOWN_REF *v67; // [rsp+28h] [rbp-48h] BYREF
  char v68[8]; // [rsp+30h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-38h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v68);
  CurrentProcess = PsGetCurrentProcess(v3, v2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v7, v6)) == 0LL
    || (v9 = *((_QWORD *)Current + 1)) == 0 )
  {
    v9 = v8;
  }
  v10 = v9 + 208;
  if ( v9 != -208 && *(struct _KTHREAD **)(v9 + 216) == KeGetCurrentThread() )
  {
    v35 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v35 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v35);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v9 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v36 = *(_DWORD *)(v9 + 232);
      if ( v36 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, &EventBlockThread, v13, v36);
    }
    ExAcquirePushLockSharedEx(v9 + 208, 0LL);
  }
  v14 = a1[1];
  Count = 0LL;
  if ( v14 != 1 )
  {
    if ( v14 != 2 )
    {
      v65 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      *(_QWORD *)(v65 + 24) = (int)a1[1];
      WdLogEvent5_WdWarning(v65);
      goto LABEL_29;
    }
    v44 = *a1;
    v45 = DXGPROCESS::GetCurrent(v12, v11);
    v46 = (v44 >> 6) & 0xFFFFFF;
    if ( v46 < *((_DWORD *)v45 + 64) )
    {
      v47 = *((_QWORD *)v45 + 30);
      v48 = v46;
      v49 = *(_DWORD *)(v47 + 16LL * v46 + 8);
      if ( ((v44 >> 25) & 0x60) == (v49 & 0x60) && (v49 & 0x2000) == 0 && (v49 & 0x1F) != 0 )
      {
        v50 = 2 * v48;
        v51 = v49 & 0x1F;
        if ( (_BYTE)v51 == 4 )
        {
          v53 = *(struct _EX_RUNDOWN_REF **)(v47 + 8 * v50);
LABEL_55:
          DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v67, v53);
          v56 = v67;
          if ( v67 )
          {
            if ( KeGetCurrentIrql() >= 2u )
            {
              v57 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v67[1].Count + 16) + 16LL) + 216LL)
                                          + 64LL)
                              + 40LL);
              if ( *(_DWORD *)(v57 + 28) >= 0x2003u )
              {
                v58 = WdLogNewEntry5_WdCriticalError(v57, v67);
                *(_QWORD *)(v58 + 24) = 275LL;
                *(_QWORD *)(v58 + 32) = 20LL;
                *(_QWORD *)(v58 + 40) = *(_QWORD *)(*(_QWORD *)(v67[1].Count + 16) + 16LL);
                *(_OWORD *)(v58 + 48) = 0LL;
                WdLogEvent5_WdCriticalError(v58);
                v56 = v67;
              }
            }
            if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v56[1].Count + 16) + 16LL)) )
            {
              if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v60, (__int64)v59) + 311) )
              {
                v63 = WdLogNewEntry5_WdAssertion(v62, v61);
                *(_QWORD *)(v63 + 24) = 129LL;
                WdLogEvent5_WdAssertion(v63);
LABEL_64:
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v67, (__int64)v59);
                goto LABEL_29;
              }
              v59 = v67;
            }
            if ( (HIDWORD(v59->Ptr) & 1) != 0 )
              Count = *(_QWORD *)(v59[7].Count + 16);
            else
              Count = v59[7].Count;
            goto LABEL_64;
          }
          v64 = WdLogNewEntry5_WdWarning(v54, 0LL, v55);
          *(_QWORD *)(v64 + 24) = *a1;
          WdLogEvent5_WdWarning(v64);
          goto LABEL_64;
        }
        v52 = WdLogNewEntry5_WdError(v51, v50);
        *(_QWORD *)(v52 + 24) = 267LL;
        WdLogEvent5_WdError(v52);
      }
    }
    v53 = 0LL;
    goto LABEL_55;
  }
  v16 = (*a1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v16 >= *(_DWORD *)(v9 + 256) )
    goto LABEL_16;
  v17 = *(_QWORD *)(v9 + 240);
  v18 = *(_DWORD *)(v17 + 16 * v16 + 8);
  if ( ((*a1 >> 25) & 0x60) != (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60) || (v18 & 0x2000) != 0 || (v18 & 0x1F) == 0 )
    goto LABEL_16;
  v19 = v18 & 0x1F;
  if ( (_BYTE)v19 != 5 )
  {
    v21 = WdLogNewEntry5_WdError(v19, 2LL * (unsigned int)v16);
    *(_QWORD *)(v21 + 24) = 267LL;
    WdLogEvent5_WdError(v21);
LABEL_16:
    v20 = 0LL;
    goto LABEL_17;
  }
  v20 = *(struct _EX_RUNDOWN_REF **)(v17 + 16LL * (unsigned int)v16);
LABEL_17:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v66, v20);
  v24 = v66;
  if ( v66 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v37 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v66[1].Count + 16) + 16LL) + 216LL) + 64LL)
                      + 40LL);
      if ( *(_DWORD *)(v37 + 28) >= 0x2003u )
      {
        v38 = WdLogNewEntry5_WdCriticalError(v66, v37);
        *(_QWORD *)(v38 + 24) = 275LL;
        *(_QWORD *)(v38 + 32) = 20LL;
        *(_QWORD *)(v38 + 40) = *(_QWORD *)(*(_QWORD *)(v66[1].Count + 16) + 16LL);
        *(_OWORD *)(v38 + 48) = 0LL;
        WdLogEvent5_WdCriticalError(v38);
        v24 = v66;
      }
    }
    v25 = *(_QWORD *)(v24[1].Count + 16);
    v26 = *(_QWORD *)(v25 + 16);
    if ( *(int *)(v26 + 2328) >= 0x2000 || *(_BYTE *)(v26 + 2628) )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v24, v25) + 311) )
      {
        v40 = WdLogNewEntry5_WdAssertion(v39, v25);
        *(_QWORD *)(v40 + 24) = 87LL;
        WdLogEvent5_WdAssertion(v40);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v66, v41);
        goto LABEL_29;
      }
      v24 = v66;
    }
    if ( (a1[2] & 1) != 0 )
      Count = v24[4].Count;
    else
      Count = *(_QWORD *)(v24[6].Count + 16);
  }
  else
  {
    v42 = WdLogNewEntry5_WdWarning(0LL, v22, v23);
    *(_QWORD *)(v42 + 24) = *a1;
    WdLogEvent5_WdWarning(v42);
    v24 = v66;
  }
  if ( v24 )
    ExReleaseRundownProtection(v24 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v24, v25) + 311) )
  {
    v29 = DXGTHREAD::GetCurrent(v28, v27);
    v32 = v29;
    if ( v29 )
    {
      if ( *((_DWORD *)v29 + 8) )
      {
        v43 = WdLogNewEntry5_WdCriticalError(v31, v30);
        *(_QWORD *)(v43 + 24) = 275LL;
        *(_QWORD *)(v43 + 32) = 38LL;
        *(_QWORD *)(v43 + 40) = *((int *)v32 + 8);
        *(_OWORD *)(v43 + 48) = 0LL;
        WdLogEvent5_WdCriticalError(v43);
      }
    }
  }
LABEL_29:
  ExReleasePushLockSharedEx(v10, 0LL);
  KeLeaveCriticalRegion();
  if ( v68[0] )
    KeUnstackDetachProcess(&ApcState);
  return Count;
}
