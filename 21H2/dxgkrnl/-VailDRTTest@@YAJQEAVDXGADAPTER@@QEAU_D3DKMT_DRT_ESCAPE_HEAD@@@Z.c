/*
 * XREFs of ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C02B5D80
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025F574 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0001FAC (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002824 (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00046F8 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C00069B4 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0006C64 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00073EC (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000D12C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001AAD0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C003BB58 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00EF950 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01093F4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C011DC54 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     DxgkShareObjectsInternal @ 0x1C011DD10 (DxgkShareObjectsInternal.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C011E138 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?FindVirtualMachine@DXGGLOBAL@@QEAAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@E@Z @ 0x1C0269AEC (-FindVirtualMachine@DXGGLOBAL@@QEAAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@E@Z.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C0285B6C (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C028A8A0 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     ?DxgkSendCreateBundleObject@@YAJKPEAI0@Z @ 0x1C028AB18 (-DxgkSendCreateBundleObject@@YAJKPEAI0@Z.c)
 *     ?DxgkSendCreateBundleObjectByPointer@@YAJKPEAPEAXPEAI@Z @ 0x1C028ACCC (-DxgkSendCreateBundleObjectByPointer@@YAJKPEAPEAXPEAI@Z.c)
 *     ?DxgkSendDestroyBundleObject@@YAJI@Z @ 0x1C028AE80 (-DxgkSendDestroyBundleObject@@YAJI@Z.c)
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C028CA10 (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z.c)
 */

__int64 __fastcall VailDRTTest(struct DXGADAPTER *const a1, struct _D3DKMT_DRT_ESCAPE_HEAD *const a2)
{
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // rcx
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGVIRTUALMACHINE *VirtualMachine; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rax
  HANDLE *p_Handle; // rcx
  __int64 v22; // rdx
  struct _KPROCESS *CurrentProcess; // r15
  __int64 v24; // rdx
  struct _KPROCESS *v25; // rdx
  __int64 v26; // rdi
  struct DXGPROCESS *v27; // rax
  struct DXGPROCESS *v28; // r14
  __int64 v29; // r15
  int v30; // r13d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r14
  unsigned int v35; // edi
  int v36; // eax
  int EntryType; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned int v42; // ecx
  __int64 v43; // rcx
  __int64 v44; // rax
  struct _EX_RUNDOWN_REF *v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rdx
  int v53; // ebx
  _QWORD *v54; // rax
  int v55; // ecx
  int v56; // ecx
  int v57; // ecx
  __int64 v58; // rcx
  PVOID v59; // rbx
  __int64 v60; // r8
  __int64 v61; // rdx
  struct DXGPROCESS *Current; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  DxgkCompositionObject **v65; // rbx
  struct DXGVAILOBJECT *v66; // rax
  void *v67; // r15
  __int64 v68; // rdx
  unsigned int v69; // ebx
  char *v70; // rax
  char *v71; // r12
  __int128 v72; // xmm0
  __int64 v73; // rax
  unsigned int v74; // edi
  __int64 v75; // r14
  unsigned int v76; // ebx
  void *v77; // rcx
  NTSTATUS v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rcx
  __int64 v83; // rax
  int BundleObjectByPointer; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // rax
  unsigned int i; // ebx
  PVOID v90; // rcx
  PVOID Object; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v93; // [rsp+68h] [rbp-A0h]
  struct _EX_RUNDOWN_REF *v94; // [rsp+70h] [rbp-98h] BYREF
  __int64 v95; // [rsp+78h] [rbp-90h]
  __int64 v96; // [rsp+80h] [rbp-88h] BYREF
  __int64 v97; // [rsp+88h] [rbp-80h]
  char v98[8]; // [rsp+90h] [rbp-78h] BYREF
  char v99; // [rsp+98h] [rbp-70h]
  _BYTE v100[24]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v101[4]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v102; // [rsp+D8h] [rbp-30h]
  struct _KAPC_STATE ApcState; // [rsp+E8h] [rbp-20h] BYREF
  char v104; // [rsp+118h] [rbp+10h]
  _BYTE v105[1040]; // [rsp+128h] [rbp+20h] BYREF
  PVOID v106[16]; // [rsp+538h] [rbp+430h] BYREF

  if ( !g_OSTestSigningEnabled || !(_BYTE)KdDebuggerEnabled )
    return 3221225506LL;
  if ( *((_DWORD *)a2 + 1) != 160 )
    return 3221225485LL;
  v3 = *((_DWORD *)a2 + 3);
  if ( v3 > 6 )
  {
    v55 = v3 - 7;
    if ( !v55 )
      return DxgkSendDestroyBundleObject(*((unsigned int *)a2 + 4), (__int64)a2);
    v56 = v55 - 1;
    if ( !v56 )
      return DxgkExtractRemoteBundleObject(*((unsigned int *)a2 + 4), *((unsigned int *)a2 + 5), (void **)a2 + 3, 0LL);
    v57 = v56 - 1;
    if ( !v57 )
    {
      v74 = *((_DWORD *)a2 + 4);
      LODWORD(v75) = -1073741823;
      if ( v74 > 0x10 )
        return 3221225485LL;
      memset(v106, 0, sizeof(v106));
      v76 = 0;
      if ( v74 )
      {
        while ( 1 )
        {
          Handle = 0LL;
          Object = 0LL;
          LODWORD(v75) = ObReferenceObjectByHandle(
                           *((HANDLE *)a2 + v76 + 3),
                           0x20000u,
                           g_pDxgkSharedAllocationObjectType,
                           1,
                           &Object,
                           (POBJECT_HANDLE_INFORMATION)&Handle);
          v106[v76] = Object;
          if ( (int)v75 < 0 )
          {
            v77 = (void *)*((_QWORD *)a2 + v76 + 3);
            Object = 0LL;
            v78 = ObReferenceObjectByHandle(
                    v77,
                    0x20000u,
                    g_pDxgkSharedSyncObjectType,
                    1,
                    &Object,
                    (POBJECT_HANDLE_INFORMATION)&Handle);
            v75 = v78;
            v106[v76] = Object;
            if ( v78 < 0 )
              break;
          }
          v82 = *((unsigned int *)a2 + 4);
          if ( ++v76 >= (unsigned int)v82 )
            goto LABEL_114;
        }
        v83 = WdLogNewEntry5_WdWarning(v80, v79, v81);
        *(_QWORD *)(v83 + 24) = v75;
        WdLogEvent5_WdWarning(v83);
        v82 = *((unsigned int *)a2 + 4);
LABEL_114:
        if ( (int)v75 >= 0 )
        {
          BundleObjectByPointer = DxgkSendCreateBundleObjectByPointer(v82, v106, (unsigned int *)a2 + 38);
          v75 = BundleObjectByPointer;
          if ( BundleObjectByPointer < 0 )
          {
            v88 = WdLogNewEntry5_WdWarning(v86, v85, v87);
            *(_QWORD *)(v88 + 24) = v75;
            WdLogEvent5_WdWarning(v88);
          }
        }
      }
      for ( i = 0; i < *((_DWORD *)a2 + 4); ++i )
      {
        v90 = v106[i];
        if ( v90 )
          ObfDereferenceObject(v90);
      }
      return (unsigned int)v75;
    }
    v58 = (unsigned int)(v57 - 1);
    if ( !(_DWORD)v58 )
    {
      Current = DXGPROCESS::GetCurrent(v58, (__int64)a2);
      v65 = (DxgkCompositionObject **)Current;
      if ( !Current || !*((_QWORD *)Current + 60) )
      {
        v73 = WdLogNewEntry5_WdError(v64, v63);
        *(_QWORD *)(v73 + 24) = -1073741811LL;
        WdLogEvent5_WdError(v73);
        return 3221225485LL;
      }
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v96, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v96);
      v66 = DXGPROCESS::ReferenceVailObject(v65);
      v67 = (void *)*((_QWORD *)v66 + 12);
      DxgkCompositionObject::Release(v66);
      ObfReferenceObject(v67);
      if ( (_BYTE)v97 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v96, v68);
      v69 = -1073741801;
      v70 = (char *)operator new(0xE8uLL, 0x4B677844u, 1, (POOL_TYPE)512);
      v71 = v70;
      if ( v70 )
      {
        *(_QWORD *)v70 = 0LL;
        *((_QWORD *)v70 + 2) = VailDRTProcessExtractWorker;
        *((_QWORD *)v70 + 3) = v70;
        *((_OWORD *)v70 + 2) = *(_OWORD *)a2;
        *((_OWORD *)v70 + 3) = *((_OWORD *)a2 + 1);
        *((_OWORD *)v70 + 4) = *((_OWORD *)a2 + 2);
        *((_OWORD *)v70 + 5) = *((_OWORD *)a2 + 3);
        *((_OWORD *)v70 + 6) = *((_OWORD *)a2 + 4);
        *((_OWORD *)v70 + 7) = *((_OWORD *)a2 + 5);
        *((_OWORD *)v70 + 8) = *((_OWORD *)a2 + 6);
        *((_OWORD *)v70 + 9) = *((_OWORD *)a2 + 7);
        *((_OWORD *)v70 + 10) = *((_OWORD *)a2 + 8);
        v72 = *((_OWORD *)a2 + 9);
        *((_QWORD *)v70 + 24) = v67;
        *((_OWORD *)v70 + 11) = v72;
        KeInitializeEvent((PRKEVENT)(v70 + 200), NotificationEvent, 0);
        *((_DWORD *)v71 + 56) = -1073741823;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)v71, NormalWorkQueue);
        KeWaitForSingleObject(v71 + 200, Executive, 0, 0, 0LL);
        *(_OWORD *)a2 = *((_OWORD *)v71 + 2);
        *((_OWORD *)a2 + 1) = *((_OWORD *)v71 + 3);
        *((_OWORD *)a2 + 2) = *((_OWORD *)v71 + 4);
        *((_OWORD *)a2 + 3) = *((_OWORD *)v71 + 5);
        *((_OWORD *)a2 + 4) = *((_OWORD *)v71 + 6);
        *((_OWORD *)a2 + 5) = *((_OWORD *)v71 + 7);
        *((_OWORD *)a2 + 6) = *((_OWORD *)v71 + 8);
        *((_OWORD *)a2 + 7) = *((_OWORD *)v71 + 9);
        *((_OWORD *)a2 + 8) = *((_OWORD *)v71 + 10);
        *((_OWORD *)a2 + 9) = *((_OWORD *)v71 + 11);
        v69 = *((_DWORD *)v71 + 56);
        operator delete(v71);
      }
      ObfDereferenceObject(v67);
      return v69;
    }
    if ( (_DWORD)v58 == 1 )
    {
      Object = 0LL;
      Handle = 0LL;
      if ( (int)DxgkCreateRemoteCompositionSurfaceObjectForPairing((struct IPairedSurfaceObject **)&Object, &Handle) >= 0 )
      {
        memset(v105, 0, sizeof(v105));
        v59 = Object;
        v94 = 0LL;
        LOBYTE(v60) = 1;
        if ( (*(int (__fastcall **)(PVOID, _BYTE *, __int64, struct _EX_RUNDOWN_REF **))(*(_QWORD *)Object + 24LL))(
               Object,
               v105,
               v60,
               &v94) >= 0 )
        {
          memset(v105, 0, 0x1C4uLL);
          (*(void (__fastcall **)(PVOID, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)v59 + 40LL))(v59, 0LL, 0LL, v105);
          LOBYTE(v61) = 1;
          (*(void (__fastcall **)(PVOID, __int64))(*(_QWORD *)v59 + 32LL))(v59, v61);
        }
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v59 + 16LL))(v59);
        if ( Handle )
          ObCloseHandle(Handle, 1);
      }
      return 0LL;
    }
    return 3221225485LL;
  }
  if ( v3 != 6 )
  {
    if ( !v3 )
      return 0LL;
    v4 = v3 - 1;
    if ( !v4 )
      return 0LL;
    v5 = (unsigned int)(v4 - 1);
    if ( (_DWORD)v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( (unsigned int)(v6 - 1) >= 2 )
          return 3221225485LL;
        return 0LL;
      }
      Object = 0LL;
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v98);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v98);
      Global = DXGGLOBAL::GetGlobal(v8, v7);
      VirtualMachine = DXGGLOBAL::FindVirtualMachine(Global, (struct _GUID *)a2 + 1);
      if ( VirtualMachine )
      {
        *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)VirtualMachine + 248);
        v13 = *((_QWORD *)VirtualMachine + 7);
        if ( v13 )
        {
          v14 = 0LL;
          if ( *((_DWORD *)a2 + 8) )
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&Handle, *(struct DXGFASTMUTEX *const *)(v13 + 104), 0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&Handle);
            if ( *(_DWORD *)(v13 + 40) != 1 )
            {
LABEL_23:
              if ( !(_BYTE)v93 )
                goto LABEL_26;
              p_Handle = &Handle;
              goto LABEL_25;
            }
            DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
              (DXGHANDLETABLELOCKSHARED *)v100,
              (struct _KTHREAD **)v13);
            v15 = (*((_DWORD *)a2 + 8) >> 6) & 0xFFFFFF;
            if ( (unsigned int)v15 >= *(_DWORD *)(v13 + 256)
              || (v16 = *(_QWORD *)(v13 + 240),
                  v17 = (*((_DWORD *)a2 + 8) >> 25) & 0x60,
                  v18 = *(_DWORD *)(v16 + 16 * v15 + 8),
                  ((*((_DWORD *)a2 + 8) >> 25) & 0x60) != (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60))
              || (v18 & 0x2000) != 0
              || (v18 & 0x1F) == 0 )
            {
LABEL_22:
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v100);
              goto LABEL_23;
            }
            v19 = v18 & 0x1F;
            if ( (_BYTE)v19 != 12 )
            {
              v20 = WdLogNewEntry5_WdError(v19, v17);
              *(_QWORD *)(v20 + 24) = 316LL;
              WdLogEvent5_WdError(v20);
              goto LABEL_22;
            }
            v14 = *(_QWORD *)(v16 + 16LL * (unsigned int)v15);
            if ( !v14 )
              goto LABEL_22;
            DXGPROCESS::AcquireReference((DXGPROCESS *)v14, v17);
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v100);
            if ( (_BYTE)v93 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&Handle, v11);
          }
          CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v12, v11);
          if ( !v14 )
            goto LABEL_42;
          if ( !*((_DWORD *)a2 + 9) )
          {
LABEL_41:
            DXGPROCESS::ReleaseReference((DXGPROCESS *)v14, v22);
LABEL_42:
            if ( v99 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v98, v22);
            return 0LL;
          }
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v94, *(struct DXGFASTMUTEX *const *)(v14 + 104), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v94);
          if ( *(_DWORD *)(v14 + 40) == 1 && (*(_BYTE *)(v14 + 347) & 0x20) != 0 )
          {
            v25 = *(struct _KPROCESS **)(v14 + 56);
            v104 = 0;
            CPROCESSATTACHHELPER::Attach(&ApcState, v25);
            CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess(
              (CEnsureCurrentDxgProcess *)&v96,
              (struct DXGPROCESS *)v14);
            v26 = v97;
            if ( v97 )
            {
              v101[0] = 48LL;
              memset(&v101[1], 0, 24);
              v102 = 0LL;
              if ( (int)DxgkShareObjectsInternal(
                          0LL,
                          1,
                          CurrentProcess,
                          1u,
                          (char *)a2 + 36,
                          (__int64)v101,
                          0x10000000u,
                          &Object,
                          0LL) >= 0 )
              {
                *((_QWORD *)a2 + 5) = Object;
                *(_QWORD *)(v26 + 8) = v96;
                if ( v104 )
                  KeUnstackDetachProcess(&ApcState);
                if ( (_BYTE)v95 )
                  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v94, v22);
                goto LABEL_41;
              }
            }
            DXGPROCESS::ReleaseReference((DXGPROCESS *)v14, v22);
            if ( v26 )
              *(_QWORD *)(v26 + 8) = v96;
            if ( v104 )
            {
              KeUnstackDetachProcess(&ApcState);
              v104 = 0;
            }
          }
          else
          {
            DXGPROCESS::ReleaseReference((DXGPROCESS *)v14, v24);
          }
          if ( (_BYTE)v95 )
          {
            p_Handle = (HANDLE *)&v94;
LABEL_25:
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)p_Handle, v11);
          }
        }
      }
LABEL_26:
      if ( v99 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v98, v11);
      return 3221225485LL;
    }
    v27 = DXGPROCESS::GetCurrent(v5, (__int64)a2);
    v28 = v27;
    if ( !v27 )
      return 3221225485LL;
    LODWORD(Object) = *((_DWORD *)v27 + 106);
    if ( !(_DWORD)Object )
      return 3221225485LL;
    v29 = *((unsigned int *)a2 + 4);
    if ( !(_DWORD)v29 )
      return 3221225485LL;
    v30 = 0;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v100, (struct _KTHREAD **)v27);
    v34 = (__int64)v28 + 240;
    v35 = ((unsigned int)v29 >> 6) & 0xFFFFFF;
    if ( v35 >= *(_DWORD *)(v34 + 16)
      || (v31 = *(unsigned int *)(*(_QWORD *)v34 + 16LL * v35 + 8),
          v32 = (unsigned int)v29 >> 30,
          v36 = (*(_DWORD *)(*(_QWORD *)v34 + 16LL * v35 + 8) >> 5) & 3,
          LODWORD(v94) = v32,
          (_DWORD)v32 != v36)
      || (v31 & 0x2000) != 0
      || (v31 & 0x1F) == 0 )
    {
      v53 = 0;
LABEL_84:
      v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
      v54[4] = v53;
      v54[3] = v29;
      v54[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v54);
LABEL_85:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v100);
      if ( !v30 )
        return 3221225485LL;
      *((_DWORD *)a2 + 5) = (_DWORD)Object;
      *((_DWORD *)a2 + 6) = v30;
      return 0LL;
    }
    EntryType = HMGRTABLE::GetEntryType(v34, v35);
    if ( EntryType != 4 )
    {
      if ( EntryType == 11 )
      {
        if ( v35 >= *(_DWORD *)(v34 + 16) )
          goto LABEL_66;
        v31 = *(_QWORD *)v34;
        v32 = *(unsigned int *)(*(_QWORD *)v34 + 16LL * v35 + 8);
        if ( (_DWORD)v94 != ((*(_DWORD *)(*(_QWORD *)v34 + 16LL * v35 + 8) >> 5) & 3)
          || (v32 & 0x2000) != 0
          || (v32 & 0x1F) == 0 )
        {
          goto LABEL_66;
        }
        v32 &= 0x1Fu;
        if ( (_BYTE)v32 != 11 )
        {
          v38 = WdLogNewEntry5_WdError(v32, v31);
          *(_QWORD *)(v38 + 24) = 316LL;
          WdLogEvent5_WdError(v38);
LABEL_66:
          v39 = WdLogNewEntry5_WdWarning(v32, v31, v33);
          *(_QWORD *)(v39 + 24) = v29;
          *(_QWORD *)(v39 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v39);
LABEL_78:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v100);
          return 3221225485LL;
        }
        v40 = *(_QWORD *)(v31 + 16LL * v35);
        if ( !v40 )
          goto LABEL_66;
        v30 = *(_DWORD *)(v40 + 44);
        goto LABEL_85;
      }
      v53 = EntryType;
      goto LABEL_84;
    }
    Handle = 0LL;
    if ( v35 < *(_DWORD *)(v34 + 16) )
    {
      v41 = *(_QWORD *)v34;
      v42 = *(_DWORD *)(*(_QWORD *)v34 + 16LL * v35 + 8);
      if ( (_DWORD)v94 == ((v42 >> 5) & 3) && (v42 & 0x2000) == 0 && (v42 & 0x1F) != 0 )
      {
        v43 = v42 & 0x1F;
        if ( (_BYTE)v43 == 4 )
        {
          v45 = *(struct _EX_RUNDOWN_REF **)(v41 + 16LL * v35);
          goto LABEL_76;
        }
        v44 = WdLogNewEntry5_WdError(v43, v41);
        *(_QWORD *)(v44 + 24) = 316LL;
        WdLogEvent5_WdError(v44);
      }
    }
    v45 = 0LL;
LABEL_76:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v94, v45);
    DXGRESOURCEREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&Handle, &v94);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v94, v46);
    if ( !Handle )
    {
      v50 = WdLogNewEntry5_WdWarning(v48, v47, v49);
      *(_QWORD *)(v50 + 24) = v29;
      *(_QWORD *)(v50 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v50);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&Handle, v51);
      goto LABEL_78;
    }
    v30 = *((_DWORD *)Handle + 5);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&Handle, v47);
    goto LABEL_85;
  }
  return DxgkSendCreateBundleObject(*((unsigned int *)a2 + 4), (unsigned int *)a2 + 5, (unsigned int *)a2 + 21);
}
