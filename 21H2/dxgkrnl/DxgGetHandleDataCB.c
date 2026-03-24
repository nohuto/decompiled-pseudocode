/*
 * XREFs of DxgGetHandleDataCB @ 0x1C0115070
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000670C (--1DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C00067D8 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007514 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00EF950 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBBF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FF580 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01093F4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

ULONG_PTR __fastcall DxgGetHandleDataCB(unsigned int *a1)
{
  struct DXGPROCESS *Current; // rax
  ULONG_PTR v3; // rbx
  struct DXGPROCESS *v4; // r14
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r9d
  unsigned int v11; // eax
  ULONG_PTR Count; // rsi
  __int64 v13; // rax
  __int64 v14; // r9
  int v15; // ecx
  struct _EX_RUNDOWN_REF *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _EX_RUNDOWN_REF *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct DXGTHREAD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct DXGTHREAD *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r9
  int v37; // ecx
  struct _EX_RUNDOWN_REF *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  struct _EX_RUNDOWN_REF *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  struct _EX_RUNDOWN_REF *v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rax
  struct _EX_RUNDOWN_REF *v53; // [rsp+20h] [rbp-29h] BYREF
  struct _EX_RUNDOWN_REF *v54; // [rsp+28h] [rbp-21h] BYREF
  char v55[8]; // [rsp+30h] [rbp-19h] BYREF
  char *v56; // [rsp+38h] [rbp-11h]
  int v57; // [rsp+40h] [rbp-9h]
  _BYTE v58[56]; // [rsp+48h] [rbp-1h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v58);
  Current = DXGPROCESS::GetCurrent();
  v3 = 0LL;
  v4 = Current;
  v56 = (char *)Current + 208;
  if ( Current != (struct DXGPROCESS *)-208LL )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)Current + 27) == CurrentThread )
    {
      v6 = WdLogNewEntry5_WdAssertion(CurrentThread, (char *)Current + 208);
      *(_QWORD *)(v6 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v6);
    }
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v56, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v10 = *((_DWORD *)v56 + 6);
      if ( v10 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, &EventBlockThread, v9, v10);
    }
    ExAcquirePushLockSharedEx(v56, 0LL);
  }
  v11 = a1[1];
  Count = 0LL;
  v57 = 1;
  if ( v11 != 1 )
  {
    if ( v11 == 2 )
    {
      v35 = (*a1 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v35 < *((_DWORD *)v4 + 64)
        && (v36 = *((_QWORD *)v4 + 30),
            v37 = *(_DWORD *)(v36 + 16 * v35 + 8),
            ((*a1 >> 25) & 0x60) == (*(_BYTE *)(v36 + 16 * v35 + 8) & 0x60))
        && ((v37 & 0x2000) == 0 || (v37 & 0x4000) != 0)
        && (v37 & 0x1F) == 4 )
      {
        v38 = *(struct _EX_RUNDOWN_REF **)(v36 + 16LL * (unsigned int)v35);
      }
      else
      {
        v38 = 0LL;
      }
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v54, v38);
      v41 = v54;
      if ( v54 )
      {
        if ( KeGetCurrentIrql() >= 2u )
        {
          v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v54[1].Count + 16) + 16LL) + 216LL) + 64LL)
                          + 40LL);
          if ( *(_DWORD *)(v42 + 28) >= 0x2003u )
          {
            v43 = WdLogNewEntry5_WdCriticalError(v42, v54);
            *(_QWORD *)(v43 + 24) = 275LL;
            *(_QWORD *)(v43 + 32) = 20LL;
            *(_QWORD *)(v43 + 40) = *(_QWORD *)(*(_QWORD *)(v54[1].Count + 16) + 16LL);
            *(_OWORD *)(v43 + 48) = 0LL;
            WdLogEvent5_WdCriticalError(v43);
            v41 = v54;
          }
        }
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v41[1].Count + 16) + 16LL)) )
        {
          if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v45, (__int64)v44) + 311) )
          {
            v48 = WdLogNewEntry5_WdAssertion(v47, v46);
            *(_QWORD *)(v48 + 24) = 130LL;
            WdLogEvent5_WdAssertion(v48);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v54, v49);
            goto LABEL_60;
          }
          v44 = v54;
        }
        if ( (HIDWORD(v44->Ptr) & 1) != 0 )
          Count = *(_QWORD *)(v44[7].Count + 16);
        else
          Count = v44[7].Count;
      }
      else
      {
        v50 = WdLogNewEntry5_WdWarning(v39, 0LL, v40);
        *(_QWORD *)(v50 + 24) = *a1;
        WdLogEvent5_WdWarning(v50);
      }
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v54, (__int64)v44);
    }
    else
    {
      v51 = WdLogNewEntry5_WdWarning(v8, v7, v9);
      *(_QWORD *)(v51 + 24) = (int)a1[1];
      WdLogEvent5_WdWarning(v51);
    }
LABEL_59:
    v3 = Count;
    goto LABEL_60;
  }
  v13 = (*a1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v13 < *((_DWORD *)v4 + 64)
    && (v14 = *((_QWORD *)v4 + 30),
        v15 = *(_DWORD *)(v14 + 16 * v13 + 8),
        ((*a1 >> 25) & 0x60) == (*(_BYTE *)(v14 + 16 * v13 + 8) & 0x60))
    && ((v15 & 0x2000) == 0 || (v15 & 0x4000) != 0)
    && (v15 & 0x1F) == 5 )
  {
    v16 = *(struct _EX_RUNDOWN_REF **)(v14 + 16LL * (unsigned int)v13);
  }
  else
  {
    v16 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v53, v16);
  v19 = v53;
  if ( !v53 )
  {
    v27 = WdLogNewEntry5_WdWarning(0LL, v17, v18);
    *(_QWORD *)(v27 + 24) = *a1;
    WdLogEvent5_WdWarning(v27);
    v19 = v53;
LABEL_31:
    if ( v19 )
      ExReleaseRundownProtection(v19 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v19, v22) + 311) )
    {
      v30 = DXGTHREAD::GetCurrent(v29, v28);
      v33 = v30;
      if ( v30 )
      {
        if ( *((_DWORD *)v30 + 8) )
        {
          v34 = WdLogNewEntry5_WdCriticalError(v32, v31);
          *(_QWORD *)(v34 + 24) = 275LL;
          *(_QWORD *)(v34 + 32) = 38LL;
          *(_QWORD *)(v34 + 40) = *((int *)v33 + 8);
          *(_OWORD *)(v34 + 48) = 0LL;
          WdLogEvent5_WdCriticalError(v34);
        }
      }
    }
    goto LABEL_59;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v53[1].Count + 16) + 16LL) + 216LL) + 64LL) + 40LL);
    if ( *(_DWORD *)(v20 + 28) >= 0x2003u )
    {
      v21 = WdLogNewEntry5_WdCriticalError(v53, v20);
      *(_QWORD *)(v21 + 24) = 275LL;
      *(_QWORD *)(v21 + 32) = 20LL;
      *(_QWORD *)(v21 + 40) = *(_QWORD *)(*(_QWORD *)(v53[1].Count + 16) + 16LL);
      *(_OWORD *)(v21 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v21);
      v19 = v53;
    }
  }
  v22 = *(_QWORD *)(v19[1].Count + 16);
  v23 = *(_QWORD *)(v22 + 16);
  if ( *(int *)(v23 + 2328) < 0x2000 && !*(_BYTE *)(v23 + 2628) )
  {
LABEL_27:
    if ( (a1[2] & 1) != 0 )
      Count = v19[4].Count;
    else
      Count = *(_QWORD *)(v19[6].Count + 16);
    goto LABEL_31;
  }
  if ( !*((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v19, v22) + 311) )
  {
    v19 = v53;
    goto LABEL_27;
  }
  v25 = WdLogNewEntry5_WdAssertion(v24, v22);
  *(_QWORD *)(v25 + 24) = 87LL;
  WdLogEvent5_WdAssertion(v25);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v53, v26);
LABEL_60:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v55);
  DXGVALIDATIONPROCESSREATTACH::~DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v58);
  return v3;
}
