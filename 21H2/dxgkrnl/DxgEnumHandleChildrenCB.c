/*
 * XREFs of DxgEnumHandleChildrenCB @ 0x1C0257040
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002BD4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000670C (--1DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C00067D8 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00073EC (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     Feature_253710648__private_IsEnabledDeviceUsage @ 0x1C00260E4 (Feature_253710648__private_IsEnabledDeviceUsage.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00EF950 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01093F4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DpiGetDriverVersion @ 0x1C019FDA0 (DpiGetDriverVersion.c)
 */

__int64 __fastcall DxgEnumHandleChildrenCB(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rbx
  unsigned int v5; // edi
  unsigned int v6; // r14d
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _EX_RUNDOWN_REF *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // edx
  ULONG_PTR Count; // rcx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r9
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rax
  struct _EX_RUNDOWN_REF *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct _EX_RUNDOWN_REF *v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // ecx
  ULONG_PTR v43; // rax
  struct _EX_RUNDOWN_REF *v45; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v46[24]; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v47[56]; // [rsp+40h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v47);
  Current = DXGPROCESS::GetCurrent(v3, v2);
  v5 = 0;
  if ( (unsigned int)Feature_253710648__private_IsEnabledDeviceUsage() )
  {
    v6 = *a1;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
    v7 = (v6 >> 6) & 0xFFFFFF;
    if ( v7 < *((_DWORD *)Current + 64) )
    {
      v8 = *((_QWORD *)Current + 30);
      v9 = v7;
      v10 = *(_DWORD *)(v8 + 16LL * v7 + 8);
      if ( ((v6 >> 25) & 0x60) == (v10 & 0x60) && (v10 & 0x2000) == 0 && (v10 & 0x1F) != 0 )
      {
        v11 = 2 * v9;
        v12 = v10 & 0x1F;
        if ( (_BYTE)v12 == 4 )
        {
          v14 = *(struct _EX_RUNDOWN_REF **)(v8 + 8 * v11);
          goto LABEL_9;
        }
        v13 = WdLogNewEntry5_WdError(v12, v11);
        *(_QWORD *)(v13 + 24) = 316LL;
        WdLogEvent5_WdError(v13);
      }
    }
    v14 = 0LL;
LABEL_9:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v45, v14);
    ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
    KeLeaveCriticalRegion();
    v18 = v45;
    if ( v45 )
    {
      if ( KeGetCurrentIrql() >= 2u
        && (unsigned int)DpiGetDriverVersion(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v45[1].Count + 16) + 16LL) + 216LL)) >= 0x2003 )
      {
        v23 = WdLogNewEntry5_WdCriticalError(v22, v21);
        *(_QWORD *)(v23 + 24) = 275LL;
        *(_QWORD *)(v23 + 32) = 20LL;
        *(_QWORD *)(v23 + 40) = *(_QWORD *)(*(_QWORD *)(v45[1].Count + 16) + 16LL);
        *(_OWORD *)(v23 + 48) = 0LL;
        WdLogEvent5_WdCriticalError(v23);
        v18 = v45;
      }
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v46, (struct DXGFASTMUTEX *const)&v18[10], 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v46);
      v24 = a1[1];
      Count = v45[3].Count;
      v26 = 0;
      if ( v24 )
      {
        while ( Count )
        {
          Count = *(_QWORD *)(Count + 64);
          if ( ++v26 >= v24 )
            goto LABEL_18;
        }
      }
      else
      {
LABEL_18:
        if ( Count )
          v5 = *(_DWORD *)(Count + 16);
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v46);
    }
    else
    {
      v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
      *(_QWORD *)(v19 + 24) = *a1;
      WdLogEvent5_WdWarning(v19);
    }
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v45, v20);
    goto LABEL_41;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v46, (struct _KTHREAD **)Current);
  v27 = (*a1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v27 < *((_DWORD *)Current + 64) )
  {
    v28 = *((_QWORD *)Current + 30);
    v29 = *(_DWORD *)(v28 + 16 * v27 + 8);
    if ( ((*a1 >> 25) & 0x60) == (*(_BYTE *)(v28 + 16 * v27 + 8) & 0x60) && (v29 & 0x2000) == 0 && (v29 & 0x1F) != 0 )
    {
      v30 = v29 & 0x1F;
      if ( (_BYTE)v30 == 4 )
      {
        v32 = *(struct _EX_RUNDOWN_REF **)(v28 + 16LL * (unsigned int)v27);
        goto LABEL_29;
      }
      v31 = WdLogNewEntry5_WdError(v30, 2LL * (unsigned int)v27);
      *(_QWORD *)(v31 + 24) = 316LL;
      WdLogEvent5_WdError(v31);
    }
  }
  v32 = 0LL;
LABEL_29:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v45, v32);
  v36 = v45;
  if ( v45 )
  {
    if ( KeGetCurrentIrql() >= 2u
      && (unsigned int)DpiGetDriverVersion(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v45[1].Count + 16) + 16LL) + 216LL)) >= 0x2003 )
    {
      v41 = WdLogNewEntry5_WdCriticalError(v40, v39);
      *(_QWORD *)(v41 + 24) = 275LL;
      *(_QWORD *)(v41 + 32) = 20LL;
      *(_QWORD *)(v41 + 40) = *(_QWORD *)(*(_QWORD *)(v45[1].Count + 16) + 16LL);
      *(_OWORD *)(v41 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v41);
      v36 = v45;
    }
    v38 = a1[1];
    v42 = 0;
    v43 = v36[3].Count;
    if ( (_DWORD)v38 )
    {
      while ( v43 )
      {
        v43 = *(_QWORD *)(v43 + 64);
        if ( ++v42 >= (unsigned int)v38 )
          goto LABEL_38;
      }
    }
    else
    {
LABEL_38:
      if ( v43 )
        v5 = *(_DWORD *)(v43 + 16);
    }
  }
  else
  {
    v37 = WdLogNewEntry5_WdWarning(v34, v33, v35);
    *(_QWORD *)(v37 + 24) = *a1;
    WdLogEvent5_WdWarning(v37);
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v45, v38);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v46);
LABEL_41:
  DXGVALIDATIONPROCESSREATTACH::~DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v47);
  return v5;
}
