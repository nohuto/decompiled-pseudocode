/*
 * XREFs of DxgkShareObjectsInternal @ 0x1C011B710
 * Callers:
 *     ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x1C0063A60 (-AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z.c)
 *     DxgkShareObjects @ 0x1C011B690 (DxgkShareObjects.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023E670 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C02B5910 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004150 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0006E20 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0006E74 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003FDA4 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0040074 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0113088 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C011B44C (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C011BB28 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01657B4 (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C0276C6C (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 */

__int64 __fastcall DxgkShareObjectsInternal(
        __int64 a1,
        char a2,
        struct _KPROCESS *a3,
        unsigned int a4,
        char *Src,
        __int64 a6,
        ACCESS_MASK DesiredAccess,
        HANDLE *a8,
        PVOID *a9)
{
  __int64 v9; // r15
  KPROCESSOR_MODE v10; // r14
  char v11; // r12
  _QWORD *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DXGPROCESS *Current; // rsi
  char *v18; // rcx
  __int64 inserted; // rbx
  char *v20; // r12
  unsigned int v21; // edx
  unsigned int EntryType; // esi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  DXGKEYEDMUTEX *v26; // r14
  __int64 v27; // rsi
  PERESOURCE *Global; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  struct DXGPROCESS *v32; // r15
  char v33; // r12
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct _KPROCESS *v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned int v42; // r8d
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  PERESOURCE *v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rax
  char v62; // [rsp+41h] [rbp-117h]
  char v63; // [rsp+42h] [rbp-116h]
  PVOID Object; // [rsp+50h] [rbp-108h] BYREF
  char v65[8]; // [rsp+58h] [rbp-100h] BYREF
  char v66; // [rsp+60h] [rbp-F8h]
  HANDLE Handle; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v68; // [rsp+70h] [rbp-E8h]
  struct DXGPROCESS *v69; // [rsp+78h] [rbp-E0h]
  int v70; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v71; // [rsp+88h] [rbp-D0h]
  char v72; // [rsp+90h] [rbp-C8h]
  PRKPROCESS PROCESS; // [rsp+98h] [rbp-C0h]
  PVOID *v74; // [rsp+A0h] [rbp-B8h]
  _BYTE v75[24]; // [rsp+A8h] [rbp-B0h] BYREF
  _BYTE v76[24]; // [rsp+C0h] [rbp-98h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D8h] [rbp-80h] BYREF
  __int64 v78; // [rsp+108h] [rbp-50h] BYREF
  unsigned int v79; // [rsp+110h] [rbp-48h]

  v9 = a4;
  PROCESS = a3;
  v10 = a2;
  v11 = a1;
  v62 = a1;
  v68 = a6;
  v12 = a8;
  v74 = a9;
  v70 = -1;
  v71 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v72 = 1;
    v70 = 2074;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 2074);
  }
  else
  {
    v72 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v70, 2074LL);
  Object = 0LL;
  Handle = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v63 = 0;
  Current = DXGPROCESS::GetCurrent(v14, v13);
  v69 = Current;
  if ( !Current )
    goto LABEL_45;
  if ( (unsigned int)(v9 - 1) > 2 )
  {
    v60 = WdLogNewEntry5_WdError(v16, v15);
    LODWORD(inserted) = -1073741811;
    *(_QWORD *)(v60 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v60);
    goto LABEL_30;
  }
  v78 = 0LL;
  v79 = 0;
  if ( v11 == 1 )
  {
    v18 = &Src[4 * v9];
    if ( v18 < Src || (unsigned __int64)v18 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(&v78, Src, 4 * v9);
  if ( !v68 || (inserted = (unsigned int)v78, !(_DWORD)v78) )
  {
LABEL_45:
    v43 = WdLogNewEntry5_WdError(v16, v15);
    LODWORD(inserted) = -1073741811;
    *(_QWORD *)(v43 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v43);
    goto LABEL_46;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v76, (struct _KTHREAD **)Current);
  v20 = (char *)Current + 240;
  v21 = ((unsigned int)inserted >> 6) & 0xFFFFFF;
  if ( v21 < *((_DWORD *)Current + 64)
    && (v42 = *(_DWORD *)(*(_QWORD *)v20 + 16LL * v21 + 8), (unsigned int)inserted >> 30 == ((v42 >> 5) & 3))
    && (v42 & 0x2000) == 0
    && (v42 & 0x1F) != 0 )
  {
    EntryType = HMGRTABLE::GetEntryType((char *)Current + 240);
  }
  else
  {
    EntryType = 0;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v76);
  if ( EntryType == 4 )
  {
    v26 = 0LL;
    v27 = 0LL;
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v24, v23);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v65, Global, 0);
    if ( (unsigned int)v9 <= 1 )
    {
      v32 = v69;
LABEL_16:
      v33 = v62;
      LOBYTE(v30) = v62;
      LODWORD(inserted) = CreateSharedResourceNtObject(v30, v29, inserted, 0LL, v68, a2, &Object);
      if ( (int)inserted >= 0 )
      {
        if ( v26 || v27 )
        {
          v58 = Object;
          *((_QWORD *)Object + 3) = v26;
          v58[4] = v27;
        }
        if ( v66 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v65);
        v10 = a2;
        goto LABEL_22;
      }
      if ( Object )
      {
        v56 = WdLogNewEntry5_WdAssertion(v35, v34);
        *(_QWORD *)(v56 + 24) = 767LL;
        WdLogEvent5_WdAssertion(v56);
      }
      if ( v26 )
        DXGKEYEDMUTEX::ReleaseReference(v26, v34);
      if ( v27 )
      {
        v57 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v35, v34);
        DXGGLOBAL::DestroySyncObject(v57, (struct DXGSYNCOBJECT *)v27, 0);
      }
LABEL_64:
      if ( v66 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v65);
      v10 = a2;
LABEL_30:
      if ( (int)inserted >= 0 )
        goto LABEL_31;
      goto LABEL_46;
    }
    if ( (_DWORD)v9 != 3 )
    {
      v46 = WdLogNewEntry5_WdWarning(v30, v29, v31);
      *(_QWORD *)(v46 + 24) = inserted;
      LODWORD(inserted) = -1073741811;
      *(_QWORD *)(v46 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v46);
      goto LABEL_64;
    }
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v65, v29);
    v32 = v69;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v75, (struct _KTHREAD **)v69);
    inserted = HIDWORD(v78);
    v50 = (HIDWORD(v78) >> 6) & 0xFFFFFF;
    v51 = HIDWORD(v78) >> 30;
    if ( (unsigned int)v50 < *((_DWORD *)v20 + 4) )
    {
      v49 = *(_QWORD *)v20;
      v48 = *(unsigned int *)(*(_QWORD *)v20 + 16 * v50 + 8);
      if ( (_DWORD)v51 == ((*(_DWORD *)(*(_QWORD *)v20 + 16 * v50 + 8) >> 5) & 3)
        && (v48 & 0x2000) == 0
        && (v48 & 0x1F) != 0 )
      {
        v48 &= 0x1Fu;
        if ( (_BYTE)v48 == 9 )
        {
          v26 = *(DXGKEYEDMUTEX **)(v49 + 16LL * (unsigned int)v50);
LABEL_74:
          if ( !v26 )
            goto LABEL_62;
          if ( (*((_DWORD *)v26 + 41) & 1) == 0 )
          {
            _InterlockedIncrement(&dword_1C00B229C);
            v53 = WdLogNewEntry5_WdError(v48, v51);
            *(_QWORD *)(v53 + 24) = v26;
LABEL_79:
            LODWORD(inserted) = -1073741811;
            *(_QWORD *)(v53 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v53);
            goto LABEL_63;
          }
          inserted = v79;
          v54 = (v79 >> 6) & 0xFFFFFF;
          v51 = v79 >> 30;
          if ( (unsigned int)v54 < *((_DWORD *)v20 + 4) )
          {
            v49 = *(_QWORD *)v20;
            v48 = *(unsigned int *)(*(_QWORD *)v20 + 16 * v54 + 8);
            if ( (_DWORD)v51 == ((*(_DWORD *)(*(_QWORD *)v20 + 16 * v54 + 8) >> 5) & 3)
              && (v48 & 0x2000) == 0
              && (v48 & 0x1F) != 0 )
            {
              v48 &= 0x1Fu;
              if ( (_BYTE)v48 == 8 )
              {
                v27 = *(_QWORD *)(v49 + 16LL * (unsigned int)v54);
LABEL_87:
                if ( v27 )
                {
                  if ( (*(_DWORD *)(v27 + 196) & 2) != 0 )
                  {
                    DXGKEYEDMUTEX::AcquireReference(v26, v51);
                    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v75);
                    _InterlockedIncrement((volatile signed __int32 *)(v27 + 24));
                    LODWORD(inserted) = v78;
                    goto LABEL_16;
                  }
                  _InterlockedIncrement(&dword_1C00B229C);
                  v53 = WdLogNewEntry5_WdError(v48, v51);
                  *(_QWORD *)(v53 + 24) = v27;
                  goto LABEL_79;
                }
LABEL_62:
                v47 = WdLogNewEntry5_WdWarning(v48, v51, v49);
                *(_QWORD *)(v47 + 24) = inserted;
                LODWORD(inserted) = -1073741811;
                *(_QWORD *)(v47 + 32) = -1073741811LL;
                WdLogEvent5_WdWarning(v47);
LABEL_63:
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v75);
                goto LABEL_64;
              }
              v55 = WdLogNewEntry5_WdError(v48, v51);
              *(_QWORD *)(v55 + 24) = 267LL;
              WdLogEvent5_WdError(v55);
            }
          }
          v27 = 0LL;
          goto LABEL_87;
        }
        v52 = WdLogNewEntry5_WdError(v48, v51);
        *(_QWORD *)(v52 + 24) = 267LL;
        WdLogEvent5_WdError(v52);
      }
    }
    v26 = 0LL;
    goto LABEL_74;
  }
  if ( EntryType == 11 || EntryType == 8 )
  {
    if ( (_DWORD)v9 == 1 )
    {
      v33 = v62;
      LOBYTE(v24) = v62;
      LODWORD(inserted) = CreateSharedSyncNtObject(v24, EntryType, (unsigned int)inserted, 0LL, v68, v10, &Object);
      if ( (int)inserted < 0 )
      {
        if ( !Object )
          goto LABEL_30;
        v45 = WdLogNewEntry5_WdAssertion(v35, v34);
        *(_QWORD *)(v45 + 24) = 807LL;
        goto LABEL_59;
      }
LABEL_40:
      v32 = v69;
LABEL_22:
      v36 = PROCESS;
      if ( PROCESS && v36 != (struct _KPROCESS *)PsGetCurrentProcess(v35, v34) )
      {
        KeStackAttachProcess(v36, &ApcState);
        v63 = 1;
      }
      inserted = ObInsertObject(Object, 0LL, DesiredAccess, 0, 0LL, &Handle);
      if ( v63 )
        KeUnstackDetachProcess(&ApcState);
      if ( (int)inserted < 0 )
      {
        v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v34, v38);
        v59[3] = Object;
        v59[4] = v32;
        v59[5] = inserted;
        WdLogEvent5_WdWarning(v59);
      }
      else if ( v33 == 1 )
      {
        if ( (unsigned __int64)a8 >= MmUserProbeAddress )
          v12 = (_QWORD *)MmUserProbeAddress;
        *v12 = Handle;
      }
      else
      {
        *a8 = Handle;
        if ( v74 )
          *v74 = Object;
      }
      goto LABEL_30;
    }
LABEL_51:
    v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
    v44[3] = inserted;
    LODWORD(inserted) = -1073741811;
    v44[4] = -1073741811LL;
    goto LABEL_52;
  }
  v23 = 14LL;
  if ( EntryType == 14 )
  {
    if ( (_DWORD)v9 == 1 )
    {
      v33 = v62;
      LOBYTE(v24) = v62;
      LODWORD(inserted) = CreateSharedProtectedSessionNtObject(v24, 14LL, (unsigned int)inserted);
      if ( (int)inserted < 0 )
      {
        if ( !Object )
          goto LABEL_30;
        v45 = WdLogNewEntry5_WdAssertion(v35, v34);
        *(_QWORD *)(v45 + 24) = 830LL;
LABEL_59:
        WdLogEvent5_WdAssertion(v45);
        goto LABEL_30;
      }
      goto LABEL_40;
    }
    goto LABEL_51;
  }
  v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, 14LL, v25);
  v44[3] = inserted;
  v44[4] = (int)EntryType;
  LODWORD(inserted) = -1073741811;
  v44[5] = -1073741811LL;
LABEL_52:
  WdLogEvent5_WdWarning(v44);
LABEL_46:
  if ( Handle )
    ObCloseHandle(Handle, v10);
LABEL_31:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v70, v34);
  if ( v72 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v70);
  return (unsigned int)inserted;
}
