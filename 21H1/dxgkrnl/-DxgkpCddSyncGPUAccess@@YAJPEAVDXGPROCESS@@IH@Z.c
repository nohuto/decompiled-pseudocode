/*
 * XREFs of ?DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z @ 0x1C01463F0
 * Callers:
 *     ?DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z @ 0x1C0146360 (-DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z.c)
 *     ?VmBusCddSyncGpuAccess@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0238A40 (-VmBusCddSyncGpuAccess@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C000A358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000AA48 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000B19C (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0011F0C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD2B0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD5D0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FEE50 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0208CF4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendCddSyncGpuAccess@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IE@Z @ 0x1C0242378 (-VmBusSendCddSyncGpuAccess@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IE@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026494C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkpCddSyncGPUAccess(struct DXGPROCESS *a1, __int64 a2, int a3)
{
  bool v4; // zf
  struct _KTHREAD **v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r9
  int v11; // edx
  __int64 v12; // rdx
  struct _EX_RUNDOWN_REF **v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGTHREAD *Current; // rax
  struct DXGTHREAD *v23; // rdi
  __int64 v24; // r15
  struct _KEVENT *v25; // rbx
  char v26; // r13
  __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  struct DXGADAPTER *v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned int v35; // r14d
  unsigned int v36; // r14d
  struct DXGADAPTER *v37; // rcx
  struct DXGADAPTER *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  struct DXGTHREAD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  struct DXGTHREAD *v46; // rbx
  __int64 v48; // rcx
  unsigned __int8 v49; // bl
  __int64 v50; // r8
  __int64 v51; // rax
  int v52; // r9d
  _QWORD *v53; // rax
  __int64 v54; // rax
  struct _KTHREAD **v55; // rcx
  _QWORD *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  _QWORD *v59; // rax
  int v60; // r12d
  __int64 v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  __int64 v66; // [rsp+38h] [rbp-C8h]
  __int64 v67; // [rsp+40h] [rbp-C0h] BYREF
  char v68[8]; // [rsp+48h] [rbp-B8h] BYREF
  struct _KTHREAD **v69; // [rsp+50h] [rbp-B0h]
  int v70; // [rsp+58h] [rbp-A8h]
  char v71; // [rsp+60h] [rbp-A0h] BYREF
  char v72; // [rsp+61h] [rbp-9Fh]
  char v73[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v74; // [rsp+70h] [rbp-90h]
  struct DXGADAPTER *v75; // [rsp+78h] [rbp-88h]
  char v76; // [rsp+80h] [rbp-80h]
  __int64 v77; // [rsp+88h] [rbp-78h]
  char v78[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v79; // [rsp+B0h] [rbp-50h]
  struct DXGADAPTER *v80; // [rsp+B8h] [rbp-48h]
  char v81; // [rsp+C0h] [rbp-40h]
  char *v82; // [rsp+C8h] [rbp-38h]

  v4 = (struct DXGPROCESS *)((char *)a1 + 208) == 0LL;
  v5 = (struct _KTHREAD **)((char *)a1 + 208);
  v69 = v5;
  v6 = (unsigned int)a2;
  if ( !v4 && v5[1] == KeGetCurrentThread() )
  {
    v51 = WdLogNewEntry5_WdAssertion(v5, a2);
    *(_QWORD *)(v51 + 24) = 1569LL;
    WdLogEvent5_WdAssertion(v51);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v69, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v52 = *((_DWORD *)v69 + 6);
      if ( v52 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, &EventBlockThread, v8, v52);
    }
    ExAcquirePushLockSharedEx(v69, 0LL);
  }
  v70 = 1;
  v9 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 >= *((_DWORD *)a1 + 64) )
    goto LABEL_12;
  v10 = *((_QWORD *)a1 + 30);
  v11 = *(_DWORD *)(v10 + 16 * v9 + 8);
  if ( (((unsigned int)v6 >> 25) & 0x60) != (*(_BYTE *)(v10 + 16 * v9 + 8) & 0x60)
    || (v11 & 0x2000) != 0
    || (v11 & 0x1F) == 0 )
  {
    goto LABEL_12;
  }
  v12 = v11 & 0x1F;
  v13 = (struct _EX_RUNDOWN_REF **)(v10 + 16LL * (unsigned int)v9);
  if ( (_BYTE)v12 != 5 )
  {
    v15 = WdLogNewEntry5_WdError(((unsigned int)v6 >> 25) & 0x60, v12);
    *(_QWORD *)(v15 + 24) = 267LL;
    WdLogEvent5_WdError(v15);
LABEL_12:
    v14 = 0LL;
    goto LABEL_13;
  }
  v14 = *v13;
LABEL_13:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v67, v14);
  v16 = v67;
  v66 = v67;
  v67 = 0LL;
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v18, v17) + 283) )
  {
    Current = DXGTHREAD::GetCurrent(v20, v19);
    v23 = Current;
    if ( Current )
    {
      if ( *((_DWORD *)Current + 8) )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19);
        v53[3] = 275LL;
        v53[4] = 38LL;
        v53[5] = *((int *)v23 + 8);
        v53[6] = 0LL;
        v53[7] = 0LL;
        WdLogEvent5_WdCriticalError(v53);
      }
    }
  }
  if ( !v16 )
  {
    v54 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    v36 = -1073741811;
    *(_QWORD *)(v54 + 24) = v6;
    *(_QWORD *)(v54 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v54);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v68);
    goto LABEL_64;
  }
  v24 = *(_QWORD *)(v16 + 8);
  if ( v70 == 1 )
  {
    v70 = 0;
    ExReleasePushLockSharedEx(v69, 0LL);
LABEL_20:
    KeLeaveCriticalRegion();
    goto LABEL_21;
  }
  if ( v70 == 2 )
  {
    v55 = v69;
    v70 = 0;
    v69[1] = 0LL;
    ExReleasePushLockExclusiveEx(v55, 0LL);
    goto LABEL_20;
  }
LABEL_21:
  v25 = *(struct _KEVENT **)(v24 + 16);
  v26 = 1;
  if ( !KeReadStateEvent(v25 + 5) )
    KeWaitForSingleObject(&v25[5], Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v24 + 136), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL) + 104LL));
    v49 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v24 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v48, &EventBlockThread, v50, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v24 + 136), 1u);
    if ( v49 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v24 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL) + 104LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v27 = *(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)(v27 + 24));
  KeEnterCriticalRegion();
  v28 = v27 + 136;
  ExAcquirePushLockSharedEx(v27 + 136, 0LL);
  v72 = 0;
  v76 = 0;
  v77 = 0LL;
  v75 = (struct DXGADAPTER *)v27;
  if ( v27 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v27 + 24));
    v74 = -1LL;
  }
  v80 = (struct DXGADAPTER *)v27;
  v81 = 0;
  v82 = 0LL;
  if ( v27 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v27 + 24));
    v79 = -1LL;
    if ( v81 )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29);
      v56[5] = v78;
      v56[3] = 275LL;
      v56[4] = 4LL;
      v56[6] = 0LL;
      v56[7] = 0LL;
      WdLogEvent5_WdCriticalError(v56);
    }
  }
  v32 = v80;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v80 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v80 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v33, &EventBlockThread, v34, 72);
      KeWaitForSingleObject((char *)v80 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v80, 0LL);
    v32 = v80;
  }
  v82 = 0LL;
  v81 = 1;
  if ( *((_DWORD *)v32 + 50) != 1 )
    goto LABEL_89;
  if ( v75 != v80 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v73, 0LL);
    v32 = (struct DXGADAPTER *)*((unsigned int *)v75 + 50);
    if ( (_DWORD)v32 != 1 )
    {
      COREACCESS::Release((COREACCESS *)v73);
LABEL_89:
      COREACCESS::Release((COREACCESS *)v78);
      v59 = (_QWORD *)WdLogNewEntry5_WdEvent(v58, v57);
      v60 = -1073741130;
      v59[3] = -1073741130LL;
      v59[4] = v27;
      v59[5] = a1;
      WdLogEvent5_WdEvent(v59);
      goto LABEL_90;
    }
  }
  v72 = 1;
  if ( !*(_QWORD *)(v27 + 2680) )
  {
    v61 = WdLogNewEntry5_WdAssertion(v32, v29);
    *(_QWORD *)(v61 + 24) = 2065LL;
    WdLogEvent5_WdAssertion(v61);
  }
  if ( !*(_BYTE *)(v27 + 209) )
  {
    if ( *(_QWORD *)(v66 + 24) )
    {
      v26 = 0;
      v35 = 0;
      if ( a3 )
      {
        v35 = 1;
        *(_DWORD *)(*(_QWORD *)(v66 + 48) + 4LL) &= ~0x400u;
      }
      if ( v75 != v80 )
        COREACCESS::Release((COREACCESS *)v73);
      if ( !v81 )
      {
        v63 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v32, v29);
        v63[5] = v78;
        v63[3] = 275LL;
        v63[4] = 4LL;
        v63[6] = 0LL;
        v63[7] = 0LL;
        WdLogEvent5_WdCriticalError(v63);
      }
      v81 = 0;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v80 + 23) )
        DXGADAPTER::ReleaseCoreResource(v80, v82);
      v82 = 0LL;
      v72 = 0;
      ExReleaseResourceLite(*(PERESOURCE *)(v24 + 136));
      KeLeaveCriticalRegion();
      v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 2680)
                                                                                               + 640LL)
                                                                                   + 8LL)
                                                                       + 616LL))(
              *(_QWORD *)(*(_QWORD *)(v27 + 2680) + 648LL),
              *(_QWORD *)(v66 + 24),
              v6 & 0x3F,
              v35);
      v28 = v27 + 136;
    }
    else
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v29, v31);
      v36 = -1073741811;
      v62[3] = v6;
      v62[4] = v66;
      v62[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v62);
      v28 = v27 + 136;
    }
    goto LABEL_47;
  }
  v60 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCddSyncGpuAccess(
          (DXG_GUEST_VIRTUALGPU_VMBUS *)(v27 + 4208),
          a1,
          *(_DWORD *)(v66 + 96),
          a3 != 0);
LABEL_90:
  v36 = v60;
LABEL_47:
  if ( v72 )
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v71);
  v37 = v80;
  if ( v80 )
  {
    if ( v81 )
    {
      COREACCESS::Release((COREACCESS *)v78);
      v37 = v80;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v37 + 2), v37);
  }
  v38 = v75;
  if ( v75 )
  {
    if ( v76 )
    {
      COREACCESS::Release((COREACCESS *)v73);
      v38 = v75;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v38 + 2), v38);
  }
  ExReleasePushLockSharedEx(v28, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v27 + 16), (struct DXGADAPTER *)v27);
  if ( v26 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v24 + 136));
    KeLeaveCriticalRegion();
  }
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v66 + 88));
LABEL_64:
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v40, v39) + 283) )
  {
    v43 = DXGTHREAD::GetCurrent(v42, v41);
    v46 = v43;
    if ( v43 )
    {
      if ( *((_DWORD *)v43 + 8) )
      {
        v64 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v45, v44);
        v64[3] = 275LL;
        v64[4] = 38LL;
        v64[5] = *((int *)v46 + 8);
        v64[6] = 0LL;
        v64[7] = 0LL;
        WdLogEvent5_WdCriticalError(v64);
      }
    }
  }
  return v36;
}
