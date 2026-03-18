/*
 * XREFs of ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C019C2A0
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019B990 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0195040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C019E94C (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01D98D8 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall ValidateDestroyAllocation(
        struct _KTHREAD **a1,
        struct DXGDEVICE *a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned int a5,
        struct DXGALLOCATION **a6,
        struct _EX_RUNDOWN_REF **a7)
{
  char *v8; // rdi
  __int64 v10; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // r12
  struct DXGALLOCATION **v16; // r14
  const unsigned int *v17; // rax
  struct DXGALLOCATION **v18; // r13
  unsigned int v19; // ecx
  unsigned int v20; // ebx
  struct _KTHREAD *v21; // r9
  int v22; // edx
  struct _EX_RUNDOWN_REF *v23; // rdx
  struct _EX_RUNDOWN_REF *v24; // r8
  ULONG_PTR v25; // rcx
  struct DXGTHREAD *DxgThread; // rax
  struct _EX_RUNDOWN_REF *v27; // rbx
  struct DXGTHREAD *v28; // rax
  struct DXGTHREAD *v29; // rax
  struct DXGTHREAD *v30; // rax
  struct DXGTHREAD *v31; // rax
  struct _EX_RUNDOWN_REF *v32; // rbx
  unsigned int v33; // esi
  struct DXGTHREAD *v34; // rax
  struct _KTHREAD *v36; // r9
  int v37; // edx
  unsigned int v38; // r14d
  struct DXGRESOURCE *v39; // rdx
  struct DXGTHREAD *Current; // rax
  struct DXGDEVICE *Count; // r9
  struct _EX_RUNDOWN_REF *v42; // rsi
  struct DXGTHREAD *v43; // rax
  struct _KTHREAD **v44; // r14
  __int64 v45; // rcx
  __int64 v46; // r8
  ULONG_PTR i; // rdx
  unsigned int v48; // r8d
  __int64 v49; // rax
  struct _KTHREAD *v50; // r10
  int v51; // r9d
  __int64 v52; // rdx
  struct _KTHREAD *v53; // r9
  int v54; // edx
  struct _KTHREAD *v55; // r8
  int v56; // edx
  int v57; // r9d
  __int64 v58; // r8
  int v59; // r9d
  const unsigned int *v60; // rbx
  unsigned int v61; // r8d
  struct DXGALLOCATION *v62; // r13
  __int64 v63; // rax
  struct _KTHREAD *v64; // rdx
  __int64 v65; // rbx
  struct DXGTHREAD *v66; // [rsp+58h] [rbp-31h] BYREF
  struct _EX_RUNDOWN_REF *v67; // [rsp+60h] [rbp-29h] BYREF
  struct _EX_RUNDOWN_REF *v68; // [rsp+68h] [rbp-21h] BYREF
  ULONG_PTR v69; // [rsp+70h] [rbp-19h]
  const unsigned int *v70; // [rsp+78h] [rbp-11h]
  struct _EX_RUNDOWN_REF *v71; // [rsp+D8h] [rbp+4Fh] BYREF
  struct DXGDEVICE *v72; // [rsp+E0h] [rbp+57h]
  char v73; // [rsp+E8h] [rbp+5Fh]
  const unsigned int *v74; // [rsp+F0h] [rbp+67h]

  v74 = a4;
  v72 = a2;
  v8 = (char *)(a1 + 31);
  v10 = a3;
  v67 = 0LL;
  LOBYTE(v71) = 0;
  if ( a1 != (struct _KTHREAD **)-248LL && a1[32] == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1425LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1425LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v8, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v57 = *((_DWORD *)v8 + 6);
      if ( v57 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (const EVENT_DESCRIPTOR *)"g", v13, v57);
    }
    ExAcquirePushLockExclusiveEx(v8, 0LL);
  }
  *((_QWORD *)v8 + 1) = KeGetCurrentThread();
  if ( (_DWORD)v10 )
  {
    v38 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
    if ( v38 < *((_DWORD *)a1 + 74) )
    {
      v53 = a1[35];
      v54 = *((_DWORD *)v53 + 4 * v38 + 2);
      if ( (((unsigned int)v10 >> 25) & 0x60) == (*((_BYTE *)v53 + 16 * v38 + 8) & 0x60)
        && (v54 & 0x2000) == 0
        && (v54 & 0x1F) != 0 )
      {
        if ( (v54 & 0x1F) == 4 )
        {
          v39 = (struct DXGRESOURCE *)*((_QWORD *)v53 + 2 * v38);
LABEL_84:
          DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v71, v39);
          v32 = v71;
          v67 = v71;
          v71 = 0LL;
          if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
          {
            if ( DXGTHREAD::GetCurrent() )
            {
              Current = DXGTHREAD::GetCurrent();
              if ( *((_DWORD *)Current + 12) )
                WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)Current + 12), 0LL, 0LL);
            }
          }
          if ( !v32 )
          {
            v58 = v10;
            v33 = -1073741811;
            WdLogSingleEntry3(3LL, a2, v58, -1073741811LL);
            goto LABEL_166;
          }
          Count = (struct DXGDEVICE *)v32[1].Count;
          if ( Count != a2 )
          {
            v33 = -1073741811;
            WdLogSingleEntry4(3LL, a2, v32, Count, -1073741811LL);
            v71 = 0LL;
            DXGRESOURCEREFERENCE::MoveAssign(&v67, &v71);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v71);
            goto LABEL_165;
          }
          if ( v38 < *((_DWORD *)a1 + 74) )
          {
            v55 = a1[35];
            v56 = *((_DWORD *)v55 + 4 * v38 + 2);
            if ( (((unsigned int)v10 >> 25) & 0x60) == (*((_BYTE *)v55 + 16 * v38 + 8) & 0x60)
              && (v56 & 0x2000) == 0
              && (v56 & 0x1F) != 0 )
            {
              *((_DWORD *)v55 + 4 * (((unsigned int)v10 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
            }
          }
          *((_QWORD *)v8 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v8, 0LL);
          KeLeaveCriticalRegion();
          v42 = v32 + 9;
          ExReleaseRundownProtection(v32 + 9);
          if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
          {
            if ( DXGTHREAD::GetCurrent() )
            {
              v43 = DXGTHREAD::GetCurrent();
              if ( *((_DWORD *)v43 + 12) )
                WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v43 + 12), 0LL, 0LL);
            }
          }
          ExReleaseRundownProtection(v32 + 9);
          ExWaitForRundownProtectionRelease(v32 + 9);
          v44 = (struct _KTHREAD **)&v32[10];
          DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)&v32[10]);
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v8, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v59 = *((_DWORD *)v8 + 6);
              if ( v59 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v45, (const EVENT_DESCRIPTOR *)"g", v46, v59);
            }
            ExAcquirePushLockExclusiveEx(v8, 0LL);
          }
          v32 = v67;
          *((_QWORD *)v8 + 1) = KeGetCurrentThread();
          for ( i = v32[3].Count; i; i = *(_QWORD *)(i + 64) )
          {
            v48 = *(_DWORD *)(i + 16);
            if ( v48 )
            {
              v49 = (v48 >> 6) & 0xFFFFFF;
              if ( (unsigned int)v49 < *((_DWORD *)a1 + 74) )
              {
                v50 = a1[35];
                v51 = *((_DWORD *)v50 + 4 * v49 + 2);
                if ( ((v48 >> 25) & 0x60) == (*((_BYTE *)v50 + 16 * v49 + 8) & 0x60)
                  && (v51 & 0x2000) == 0
                  && (v51 & 0x1F) != 0 )
                {
                  *((_DWORD *)v50 + 4 * ((v48 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
                }
              }
            }
          }
          ExInitializeRundownProtection(v42);
          ExAcquireRundownProtection(v42);
          if ( !ExAcquireRundownProtection(v42) )
            WdLogSingleEntry5(0LL, 275LL, 38LL, v32, 0LL, 0LL);
          if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
          {
            if ( DXGTHREAD::GetCurrent() )
            {
              v52 = *((int *)DXGTHREAD::GetCurrent() + 12);
              if ( (_DWORD)v52 )
                WdLogSingleEntry5(0LL, 275LL, 38LL, v52, 0LL, 0LL);
            }
          }
          *((_QWORD *)v8 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v8, 0LL);
          KeLeaveCriticalRegion();
          DXGFASTMUTEX::Release(v44);
          *a7 = v32;
          goto LABEL_66;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v39 = 0LL;
    goto LABEL_84;
  }
  v14 = a5;
  v73 = 0;
  v69 = 0LL;
  v15 = 0LL;
  if ( !a5 )
  {
    *((_QWORD *)v8 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
LABEL_65:
    v32 = v67;
LABEL_66:
    v33 = 0;
    goto LABEL_67;
  }
  v16 = a6;
  v17 = a4;
  v18 = a6;
  v70 = a4;
  while ( 1 )
  {
    v19 = *v17;
    v20 = (*v17 >> 6) & 0xFFFFFF;
    LODWORD(v66) = *v17;
    if ( v20 < *((_DWORD *)a1 + 74) )
    {
      v21 = a1[35];
      v22 = *((_DWORD *)v21 + 4 * v20 + 2);
      if ( ((v19 >> 25) & 0x60) == (*((_BYTE *)v21 + 16 * v20 + 8) & 0x60) && (v22 & 0x2000) == 0 && (v22 & 0x1F) != 0 )
      {
        if ( (v22 & 0x1F) == 5 )
        {
          v23 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v21 + 2 * v20);
          goto LABEL_16;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v23 = 0LL;
LABEL_16:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v68, v23);
    v24 = v68;
    if ( !v68 )
      break;
    if ( (struct DXGDEVICE *)v68[1].Count != v72 )
    {
      v33 = -1073741811;
      WdLogSingleEntry4(3LL, v72, v68, v68[1].Count, -1073741811LL);
      goto LABEL_152;
    }
    if ( !v73 )
    {
      v69 = v68[5].Count;
      v73 = 1;
    }
    v25 = v68[5].Count;
    if ( v25 != v69 )
    {
LABEL_140:
      v33 = -1073741811;
      WdLogSingleEntry2(3LL, v72, -1073741811LL);
      goto LABEL_152;
    }
    if ( v25 )
    {
      if ( (*(_DWORD *)(v25 + 4) & 1) != 0 )
        goto LABEL_140;
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v25 + 72)) )
      {
        LOBYTE(v71) = 1;
        v33 = -1073741811;
        goto LABEL_152;
      }
      LODWORD(v68[9].Count) |= 0x100000u;
      v24 = v68;
    }
    if ( v20 < *((_DWORD *)a1 + 74) )
    {
      v36 = a1[35];
      v37 = *((_DWORD *)v36 + 4 * v20 + 2);
      if ( (((unsigned int)v66 >> 25) & 0x60) == (*((_BYTE *)v36 + 16 * v20 + 8) & 0x60)
        && (v37 & 0x2000) == 0
        && (v37 & 0x1F) != 0 )
      {
        *((_DWORD *)v36 + 4 * (((unsigned int)v66 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
        v24 = v68;
      }
    }
    *v18 = (struct DXGALLOCATION *)v24;
    if ( v24 )
      ExReleaseRundownProtection(v24 + 11);
    if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
    {
      v66 = 0LL;
      if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v66) >= 0 )
      {
        DxgThread = v66;
        if ( v66 || (DxgThread = DxgkThreadObjectCreateDxgThread(), (v66 = DxgThread) != 0LL) )
        {
          if ( *((_DWORD *)DxgThread + 12) )
            WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
        }
      }
    }
    v15 = (unsigned int)(v15 + 1);
    v17 = v70 + 1;
    ++v18;
    ++v70;
    if ( (unsigned int)v15 >= (unsigned int)v14 )
    {
      *((_QWORD *)v8 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v8, 0LL);
      KeLeaveCriticalRegion();
      do
      {
        v27 = (struct _EX_RUNDOWN_REF *)*v16;
        if ( *v16 && !ExAcquireRundownProtection(v27 + 11) )
          WdLogSingleEntry5(0LL, 275LL, 38LL, v27, 0LL, 0LL);
        if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
        {
          v71 = 0LL;
          if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v71) >= 0 )
          {
            v28 = (struct DXGTHREAD *)v71;
            if ( v71 || (v28 = DxgkThreadObjectCreateDxgThread(), (v71 = (struct _EX_RUNDOWN_REF *)v28) != 0LL) )
            {
              if ( *((_DWORD *)v28 + 12) )
                WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v28 + 12), 0LL, 0LL);
            }
          }
        }
        if ( v27 )
          ExReleaseRundownProtection(v27 + 11);
        if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
        {
          v71 = 0LL;
          if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v71) >= 0 )
          {
            v29 = (struct DXGTHREAD *)v71;
            if ( v71 || (v29 = DxgkThreadObjectCreateDxgThread(), (v71 = (struct _EX_RUNDOWN_REF *)v29) != 0LL) )
            {
              if ( *((_DWORD *)v29 + 12) )
                WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v29 + 12), 0LL, 0LL);
            }
          }
        }
        ExReleaseRundownProtection(v27 + 11);
        ExWaitForRundownProtectionRelease(v27 + 11);
        ExInitializeRundownProtection(v27 + 11);
        if ( !ExAcquireRundownProtection(v27 + 11) )
          WdLogSingleEntry5(0LL, 275LL, 38LL, v27, 0LL, 0LL);
        if ( v27 && !ExAcquireRundownProtection(v27 + 11) )
          WdLogSingleEntry5(0LL, 275LL, 38LL, v27, 0LL, 0LL);
        if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
        {
          v71 = 0LL;
          if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v71) >= 0 )
          {
            v30 = (struct DXGTHREAD *)v71;
            if ( v71 || (v30 = DxgkThreadObjectCreateDxgThread(), (v71 = (struct _EX_RUNDOWN_REF *)v30) != 0LL) )
            {
              if ( *((_DWORD *)v30 + 12) )
                WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v30 + 12), 0LL, 0LL);
            }
          }
        }
        if ( v27 )
          ExReleaseRundownProtection(v27 + 11);
        if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
        {
          v71 = 0LL;
          if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v71) >= 0 )
          {
            v31 = (struct DXGTHREAD *)v71;
            if ( v71 || (v31 = DxgkThreadObjectCreateDxgThread(), (v71 = (struct _EX_RUNDOWN_REF *)v31) != 0LL) )
            {
              if ( *((_DWORD *)v31 + 12) )
                WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v31 + 12), 0LL, 0LL);
            }
          }
        }
        ++v16;
        --v14;
      }
      while ( v14 );
      goto LABEL_65;
    }
  }
  v33 = -1073741811;
  WdLogSingleEntry3(3LL, v72, (unsigned int)v66, -1073741811LL);
LABEL_152:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v68);
  if ( (_DWORD)v15 )
  {
    v60 = v74;
    do
    {
      v61 = *v60;
      v62 = *v16;
      v63 = (*v60 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v63 < *((_DWORD *)a1 + 74) )
      {
        v64 = a1[35];
        if ( ((v61 >> 25) & 0x60) == (*((_BYTE *)v64 + 16 * v63 + 8) & 0x60)
          && (*((_DWORD *)v64 + 4 * v63 + 2) & 0x1F) != 0 )
        {
          v65 = 2LL * ((v61 >> 6) & 0xFFFFFF);
          if ( (*((_DWORD *)v64 + 4 * ((v61 >> 6) & 0xFFFFFF) + 2) & 0x2000) == 0 )
          {
            WdLogSingleEntry1(1LL, 217LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              217LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v64 = a1[35];
          }
          *((_DWORD *)v64 + 2 * v65 + 2) &= ~0x2000u;
          v60 = v74;
        }
      }
      if ( (*((_DWORD *)v62 + 18) & 0x100000) != 0 )
      {
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)v62 + 5) + 72LL));
        *((_DWORD *)v62 + 18) &= ~0x100000u;
      }
      ++v60;
      ++v16;
      v74 = v60;
      --v15;
    }
    while ( v15 );
  }
  if ( (_BYTE)v71 )
    v33 = 255;
LABEL_165:
  v32 = v67;
LABEL_166:
  *((_QWORD *)v8 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
LABEL_67:
  if ( v32 )
    ExReleaseRundownProtection(v32 + 9);
  if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
  {
    v71 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v71) >= 0 && (v71 || DxgkThreadObjectCreateDxgThread()) )
    {
      v71 = 0LL;
      if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v71) < 0 )
      {
        v34 = 0LL;
      }
      else
      {
        v34 = (struct DXGTHREAD *)v71;
        if ( !v71 )
        {
          v34 = DxgkThreadObjectCreateDxgThread();
          v71 = (struct _EX_RUNDOWN_REF *)v34;
        }
      }
      if ( *((_DWORD *)v34 + 12) )
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v34 + 12), 0LL, 0LL);
    }
  }
  return v33;
}
