/*
 * XREFs of ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010E330
 * Callers:
 *     DxgkDestroyAllocation2 @ 0x1C010EA00 (DxgkDestroyAllocation2.c)
 *     DxgkDestroyAllocation @ 0x1C010EC60 (DxgkDestroyAllocation.c)
 * Callees:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C000A358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000AA48 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000B19C (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD2B0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD5D0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010C740 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     _lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_ @ 0x1C011C130 (_lambda_593c7b7db45d2905858a3969fb7431d6_--_lambda_invoker_cdecl_.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0208CF4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     _lambda_f082766c36497653ae8a33afcd4107b6_::_lambda_invoker_cdecl_ @ 0x1C020C330 (_lambda_f082766c36497653ae8a33afcd4107b6_--_lambda_invoker_cdecl_.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026494C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkDestroyAllocationHelper(
        struct DXGPROCESS *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7,
        char a8)
{
  unsigned int v9; // r13d
  __int64 v10; // r14
  __int64 v11; // rdx
  void *v12; // rcx
  __int64 v13; // r8
  int v14; // r15d
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // r14d
  struct _KEVENT *v26; // rbx
  __int64 v27; // rcx
  volatile signed __int64 *v28; // rax
  __int64 v29; // rax
  volatile signed __int64 *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdx
  struct DXGGLOBAL *Global; // r14
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  struct OUTPUTDUPL_MGR_INDIRECT *v44; // rbx
  struct OUTPUTDUPL_MGR_INDIRECT *v45; // r14
  struct _KTHREAD **v46; // rbx
  int v47; // eax
  int v48; // eax
  struct DXGADAPTER *v49; // rcx
  struct DXGADAPTER *v50; // rcx
  unsigned int *v51; // r15
  unsigned int v52; // eax
  unsigned int v53; // r14d
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r13
  bool v59; // zf
  unsigned int v60; // ebx
  int v62; // r9d
  __int64 v63; // rax
  SIZE_T v64; // rax
  SIZE_T v65; // rax
  PVOID v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  struct _KEVENT *v71; // rcx
  __int64 v72; // rcx
  unsigned __int8 v73; // bl
  __int64 v74; // r8
  unsigned __int8 v75; // bl
  __int64 v76; // rax
  __int64 v77; // rax
  _QWORD *v78; // rax
  int v79; // eax
  __int64 v80; // rax
  int v81; // r9d
  __int64 v82; // rax
  __int64 v83; // rax
  _QWORD *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  unsigned int v87; // [rsp+68h] [rbp-A0h]
  unsigned int v88; // [rsp+6Ch] [rbp-9Ch]
  int v89; // [rsp+70h] [rbp-98h]
  struct _KTHREAD **v90; // [rsp+78h] [rbp-90h] BYREF
  char v91; // [rsp+80h] [rbp-88h]
  unsigned int v92; // [rsp+88h] [rbp-80h]
  void *v93; // [rsp+90h] [rbp-78h]
  unsigned int *v94; // [rsp+98h] [rbp-70h] BYREF
  struct DXGALLOCATION **v95; // [rsp+A0h] [rbp-68h]
  unsigned int *v96; // [rsp+A8h] [rbp-60h]
  void *v97; // [rsp+B0h] [rbp-58h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v98; // [rsp+C0h] [rbp-48h]
  struct DXGPROCESS *v99; // [rsp+C8h] [rbp-40h]
  _QWORD v100[4]; // [rsp+D0h] [rbp-38h] BYREF
  char v101[8]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v102; // [rsp+F8h] [rbp-10h]
  struct DXGADAPTER *v103; // [rsp+100h] [rbp-8h]
  char v104; // [rsp+108h] [rbp+0h]
  char *v105; // [rsp+110h] [rbp+8h]
  char v106[8]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v107; // [rsp+138h] [rbp+30h]
  struct DXGADAPTER *v108; // [rsp+140h] [rbp+38h]
  char v109; // [rsp+148h] [rbp+40h]
  __int64 v110; // [rsp+150h] [rbp+48h]
  __int64 v111; // [rsp+170h] [rbp+68h]
  char v112; // [rsp+178h] [rbp+70h]
  _BYTE v113[256]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v114[512]; // [rsp+288h] [rbp+180h] BYREF

  v9 = a5;
  v10 = a2;
  v99 = a1;
  v92 = a3;
  v94 = a4;
  v88 = a5;
  v98 = a7;
  memset(v113, 0, sizeof(v113));
  memset(v114, 0, sizeof(v114));
  v93 = 0LL;
  v96 = (unsigned int *)v113;
  v95 = (struct DXGALLOCATION **)v114;
  v97 = 0LL;
  if ( v92 && a5 )
  {
    v63 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    v60 = -1073741811;
    *(_QWORD *)(v63 + 24) = v10;
    *(_QWORD *)(v63 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v63);
    goto LABEL_83;
  }
  v87 = a5;
  v14 = 1;
  if ( a5 >= 0x41 )
  {
    v64 = 4LL * a5;
    if ( !is_mul_ok(a5, 4uLL) )
      v64 = -1LL;
    v93 = operator new[](v64, 0x4B677844u, PagedPool);
    v65 = 8LL * a5;
    if ( !is_mul_ok(a5, 8uLL) )
      v65 = -1LL;
    v66 = operator new[](v65, 0x4B677844u, PagedPool);
    v97 = v66;
    if ( !g_DxgkDestroyAllocationFailMemoryAlloc && (v12 = v93) != 0LL && v66 )
    {
      v95 = (struct DXGALLOCATION **)v66;
      v96 = (unsigned int *)v93;
    }
    else
    {
      v67 = WdLogNewEntry5_WdEvent(v12, v11);
      *(_QWORD *)(v67 + 24) = 9906LL;
      WdLogEvent5_WdEvent(v67);
      v9 = 64;
      v88 = 64;
    }
  }
  if ( a1 != (struct DXGPROCESS *)-208LL && *((struct _KTHREAD **)a1 + 27) == KeGetCurrentThread() )
  {
    v68 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v68 + 24) = 1569LL;
    WdLogEvent5_WdAssertion(v68);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)a1 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v62 = *((_DWORD *)a1 + 58);
      if ( v62 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, &EventBlockThread, v16, v62);
    }
    ExAcquirePushLockSharedEx((char *)a1 + 208, 0LL);
  }
  v17 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v17 >= *((_DWORD *)a1 + 64) )
    goto LABEL_88;
  v18 = *((_QWORD *)a1 + 30);
  v19 = *(_DWORD *)(v18 + 16 * v17 + 8);
  if ( (((unsigned int)v10 >> 25) & 0x60) != (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60)
    || (v19 & 0x2000) != 0
    || (v19 & 0x1F) == 0 )
  {
    goto LABEL_88;
  }
  v20 = v19 & 0x1F;
  if ( (_BYTE)v20 != 3 )
  {
    v69 = WdLogNewEntry5_WdError(((unsigned int)v10 >> 25) & 0x60, v20);
    *(_QWORD *)(v69 + 24) = 267LL;
    WdLogEvent5_WdError(v69);
LABEL_88:
    v21 = 0LL;
    goto LABEL_14;
  }
  v21 = *(_QWORD *)(v18 + 16LL * (unsigned int)v17);
  if ( v21 )
    _InterlockedIncrement64((volatile signed __int64 *)(v21 + 64));
LABEL_14:
  ExReleasePushLockSharedEx((char *)a1 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v21 )
  {
    v70 = WdLogNewEntry5_WdError(v23, v22);
    v60 = -1073741811;
    *(_QWORD *)(v70 + 24) = v10;
    *(_QWORD *)(v70 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v70);
    goto LABEL_83;
  }
  v24 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL);
  if ( *(int *)(v24 + 2304) >= 0x2000 || *(_BYTE *)(v24 + 2604) )
    v25 = *((_DWORD *)DXGGLOBAL::GetGlobal(v24, v22) + 283);
  else
    v25 = 0;
  v26 = *(struct _KEVENT **)(v21 + 16);
  v89 = v25;
  if ( *(_DWORD *)(v21 + 432) == 2 )
  {
    if ( KeReadStateEvent(v26 + 5) )
      goto LABEL_19;
    v71 = v26 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v26 + 4) )
      goto LABEL_19;
    v71 = v26 + 4;
  }
  KeWaitForSingleObject(v71, Executive, 0, 0, 0LL);
LABEL_19:
  KeEnterCriticalRegion();
  if ( !v25 )
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v21 + 136), 0) )
      goto LABEL_23;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 104LL));
    v73 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v72, &EventBlockThread, v74, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v21 + 136), 1u);
    if ( !v73 )
      goto LABEL_124;
    goto LABEL_123;
  }
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v21 + 144, 0LL) )
  {
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 104LL));
    v75 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v21 + 144));
    if ( !v75 )
    {
LABEL_124:
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 104LL, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_23;
    }
LABEL_123:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
    goto LABEL_124;
  }
LABEL_23:
  v27 = *(_QWORD *)(v21 + 16);
  v28 = *(volatile signed __int64 **)(v27 + 16);
  v103 = (struct DXGADAPTER *)v28;
  v104 = 0;
  v105 = 0LL;
  if ( v28 )
  {
    _InterlockedIncrement64(v28 + 3);
    v27 = *(_QWORD *)(v21 + 16);
    v102 = -1LL;
  }
  v29 = *(_QWORD *)(v21 + 1848);
  if ( v29 )
    v30 = *(volatile signed __int64 **)(v21 + 1848);
  else
    v30 = *(volatile signed __int64 **)(v27 + 16);
  v108 = (struct DXGADAPTER *)v30;
  v109 = 0;
  v110 = 0LL;
  if ( v30 )
  {
    _InterlockedIncrement64(v30 + 3);
    v27 = *(_QWORD *)(v21 + 16);
    v29 = *(_QWORD *)(v21 + 1848);
    v107 = -1LL;
  }
  v111 = v21;
  if ( v29 == *(_QWORD *)(v27 + 16) || !v29 )
  {
    v112 = 0;
    goto LABEL_31;
  }
  v112 = 1;
  COREACCESS::AcquireShared((COREACCESS *)v106, 0LL);
  if ( *((_DWORD *)v108 + 50) == 1 )
  {
LABEL_31:
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v103 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v103 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v31, &EventBlockThread, v32, 72);
        KeWaitForSingleObject((char *)v103 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v103, 0LL);
    }
    v105 = 0LL;
    v104 = 1;
    if ( *(_DWORD *)(v111 + 576) == 1 )
    {
      v33 = *(_QWORD *)(v21 + 1848);
      if ( v33 )
      {
        v34 = *(_QWORD *)(v33 + 2672);
        v35 = *(_QWORD *)(v34 + 104);
        if ( !v35 || (int)lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_(v35, v21) >= 0 )
        {
          v36 = *(_QWORD *)(*(_QWORD *)(v34 + 16) + 316LL);
          v100[1] = lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_;
          v100[0] = v36;
          v100[2] = v21;
          Global = DXGGLOBAL::GetGlobal(v36, (__int64)v30);
          v91 = 0;
          v90 = (struct _KTHREAD **)((char *)Global + 1320);
          if ( Global == (struct DXGGLOBAL *)-1320LL )
          {
            v76 = WdLogNewEntry5_WdAssertion(0LL, v37);
            *(_QWORD *)(v76 + 24) = 760LL;
            WdLogEvent5_WdAssertion(v76);
          }
          CurrentThread = KeGetCurrentThread();
          if ( v90[2] == CurrentThread )
          {
            v77 = WdLogNewEntry5_WdAssertion(CurrentThread, v37);
            *(_QWORD *)(v77 + 24) = 767LL;
            WdLogEvent5_WdAssertion(v77);
          }
          if ( v91 )
          {
            v78 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v37);
            v78[5] = &v90;
            v78[3] = 275LL;
            v78[4] = 4LL;
            v78[6] = 0LL;
            v78[7] = 0LL;
            WdLogEvent5_WdCriticalError(v78);
          }
          v40 = v90;
          KeEnterCriticalRegion();
          if ( v40[2] == KeGetCurrentThread() )
          {
            v79 = *((_DWORD *)v40 + 6);
            if ( v79 <= 0 )
            {
              v80 = WdLogNewEntry5_WdAssertion(v42, v41);
              *(_QWORD *)(v80 + 24) = 659LL;
              WdLogEvent5_WdAssertion(v80);
              v79 = *((_DWORD *)v40 + 6);
            }
            v14 = v79 + 1;
          }
          else
          {
            if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v40, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v81 = *((_DWORD *)v40 + 7);
                if ( v81 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v42, &EventBlockThread, v43, v81);
              }
              _InterlockedIncrement64((volatile signed __int64 *)v40 + 1);
              ExAcquirePushLockExclusiveEx(v40, 0LL);
            }
            if ( v40[2] )
            {
              v82 = WdLogNewEntry5_WdAssertion(v42, v41);
              *(_QWORD *)(v82 + 24) = 683LL;
              WdLogEvent5_WdAssertion(v82);
            }
            if ( *((_DWORD *)v40 + 6) )
            {
              v83 = WdLogNewEntry5_WdAssertion(v42, v41);
              *(_QWORD *)(v83 + 24) = 684LL;
              WdLogEvent5_WdAssertion(v83);
            }
            v40[2] = KeGetCurrentThread();
          }
          *((_DWORD *)v40 + 6) = v14;
          v44 = (struct DXGGLOBAL *)((char *)Global + 1360);
          v45 = (struct OUTPUTDUPL_MGR_INDIRECT *)*((_QWORD *)Global + 170);
          v91 = 1;
          while ( v45 != v44 && v45 )
          {
            if ( lambda_f082766c36497653ae8a33afcd4107b6_::_lambda_invoker_cdecl_(v45, v100) < 0 )
            {
              if ( v91 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v90, v41);
              goto LABEL_61;
            }
            v45 = *(struct OUTPUTDUPL_MGR_INDIRECT **)v45;
          }
          if ( v91 )
          {
            v46 = v90;
            v91 = 0;
            if ( v90[2] != KeGetCurrentThread() )
            {
              v84 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v42, v41);
              v84[3] = 275LL;
              v84[4] = 4LL;
              v84[5] = v46;
              v84[6] = 0LL;
              v84[7] = 0LL;
              WdLogEvent5_WdCriticalError(v84);
            }
            v47 = *((_DWORD *)v46 + 6);
            if ( v47 <= 0 )
            {
              v85 = WdLogNewEntry5_WdAssertion(v42, v41);
              *(_QWORD *)(v85 + 24) = 703LL;
              WdLogEvent5_WdAssertion(v85);
              v47 = *((_DWORD *)v46 + 6);
            }
            v48 = v47 - 1;
            *((_DWORD *)v46 + 6) = v48;
            if ( !v48 )
            {
              v46[2] = 0LL;
              ExReleasePushLockExclusiveEx(v46, 0LL);
            }
            KeLeaveCriticalRegion();
          }
        }
      }
    }
    else
    {
      COREACCESS::Release((COREACCESS *)v101);
      if ( v112 )
        COREACCESS::Release((COREACCESS *)v106);
    }
    goto LABEL_61;
  }
  COREACCESS::Release((COREACCESS *)v106);
LABEL_61:
  v49 = v108;
  if ( v108 )
  {
    if ( v109 )
    {
      COREACCESS::Release((COREACCESS *)v106);
      v49 = v108;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v49 + 2), v49);
  }
  v50 = v103;
  if ( v103 )
  {
    if ( v104 )
    {
      v104 = 0;
      v50 = v103;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v103 + 23) )
      {
        DXGADAPTER::ReleaseCoreResource(v103, v105);
        v50 = v103;
      }
      v105 = 0LL;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v50 + 2), v50);
  }
  v51 = v94;
  v52 = a5;
  while ( 1 )
  {
    v53 = v52 < v9 ? v52 : v9;
    v54 = DxgkDestroyAllocationInternal(
            (struct _KTHREAD **)v99,
            (struct DXGDEVICE *)v21,
            v96,
            v95,
            v92,
            (const unsigned int **)&v94,
            v53,
            a6,
            (char *)v51,
            v98,
            a8);
    v58 = v54;
    if ( v54 < 0 )
      break;
    v9 = v88;
    v51 += v53;
    v59 = v87 == v53;
    v52 = v87 - v53;
    v87 -= v53;
    if ( v59 )
    {
      v60 = 0;
      goto LABEL_79;
    }
  }
  v86 = WdLogNewEntry5_WdWarning(v56, v55, v57);
  *(_QWORD *)(v86 + 24) = v58;
  WdLogEvent5_WdWarning(v86);
  v60 = v58;
LABEL_79:
  if ( v89 )
    ExReleasePushLockSharedEx(v21 + 144, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v21 + 136));
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v21 + 16), (struct DXGDEVICE *)v21);
LABEL_83:
  if ( v97 )
    operator delete[](v97);
  if ( v93 )
    operator delete[](v93);
  return v60;
}
