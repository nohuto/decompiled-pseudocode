/*
 * XREFs of DxgkShareObjectsInternal @ 0x1C011DD10
 * Callers:
 *     ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x1C0064840 (-AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z.c)
 *     DxgkShareObjects @ 0x1C011DC90 (DxgkShareObjects.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023E4C0 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C02B5D80 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004370 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00070D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007124 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00073EC (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C0026754 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0040BB4 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0040ED0 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C00DCB58 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C011DA4C (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C011E138 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C016A934 (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C0276F1C (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 */

__int64 __fastcall DxgkShareObjectsInternal(
        __int64 a1,
        char a2,
        struct _KPROCESS *a3,
        unsigned int a4,
        char *Src,
        __int64 a6,
        ACCESS_MASK DesiredAccess,
        _QWORD *a8,
        PVOID *a9)
{
  __int64 v9; // r13
  KPROCESSOR_MODE v10; // r14
  char v11; // r15
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DXGPROCESS *Current; // r12
  char *v18; // rcx
  __int64 v19; // r15
  char *v20; // r12
  unsigned int v21; // edx
  unsigned int EntryType; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  DXGKEYEDMUTEX *v26; // r14
  struct DXGSYNCOBJECT *v27; // rsi
  PERESOURCE *Global; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  struct DXGPROCESS *v32; // r13
  unsigned int v33; // r8d
  char v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 inserted; // rbx
  struct _KPROCESS *v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int v44; // r8d
  __int64 v45; // r8
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // rax
  PERESOURCE *v63; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rax
  char v68; // [rsp+41h] [rbp-127h]
  char v69; // [rsp+42h] [rbp-126h]
  PVOID Object; // [rsp+50h] [rbp-118h] BYREF
  char v71[8]; // [rsp+58h] [rbp-110h] BYREF
  char v72; // [rsp+60h] [rbp-108h]
  HANDLE Handle; // [rsp+68h] [rbp-100h] BYREF
  __int64 v74; // [rsp+70h] [rbp-F8h]
  struct DXGPROCESS *v75; // [rsp+78h] [rbp-F0h]
  __int64 v76; // [rsp+80h] [rbp-E8h]
  int v77; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v78; // [rsp+90h] [rbp-D8h]
  char v79; // [rsp+98h] [rbp-D0h]
  PRKPROCESS PROCESS; // [rsp+A0h] [rbp-C8h]
  PVOID *v81; // [rsp+A8h] [rbp-C0h]
  _BYTE v82[24]; // [rsp+B0h] [rbp-B8h] BYREF
  _BYTE v83[24]; // [rsp+C8h] [rbp-A0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v85; // [rsp+110h] [rbp-58h] BYREF
  unsigned int v86; // [rsp+118h] [rbp-50h]

  v9 = a4;
  PROCESS = a3;
  v10 = a2;
  v11 = a1;
  v68 = a1;
  v74 = a6;
  v12 = a8;
  v76 = (__int64)a8;
  v81 = a9;
  v77 = -1;
  v78 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v79 = 1;
    v77 = 2074;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 2074);
  }
  else
  {
    v79 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v77, 2074LL);
  Object = 0LL;
  Handle = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v69 = 0;
  Current = DXGPROCESS::GetCurrent(v14, v13);
  v75 = Current;
  if ( !Current )
    goto LABEL_45;
  if ( (unsigned int)(v9 - 1) > 2 )
  {
    v66 = WdLogNewEntry5_WdError(v16, v15);
    LODWORD(inserted) = -1073741811;
    *(_QWORD *)(v66 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v66);
    goto LABEL_30;
  }
  v85 = 0LL;
  v86 = 0;
  if ( v11 == 1 )
  {
    v18 = &Src[4 * v9];
    if ( v18 < Src || (unsigned __int64)v18 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(&v85, Src, 4 * v9);
  if ( !v74 || (v19 = (unsigned int)v85, !(_DWORD)v85) )
  {
LABEL_45:
    v46 = WdLogNewEntry5_WdError(v16, v15);
    LODWORD(inserted) = -1073741811;
    *(_QWORD *)(v46 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v46);
    goto LABEL_46;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v83, (struct _KTHREAD **)Current);
  v20 = (char *)Current + 240;
  v21 = ((unsigned int)v19 >> 6) & 0xFFFFFF;
  if ( v21 < *((_DWORD *)v20 + 4)
    && (v44 = *(_DWORD *)(*(_QWORD *)v20 + 16LL * v21 + 8), (unsigned int)v19 >> 30 == ((v44 >> 5) & 3))
    && (v44 & 0x2000) == 0
    && (v44 & 0x1F) != 0 )
  {
    EntryType = HMGRTABLE::GetEntryType(v20);
  }
  else
  {
    EntryType = 0;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v83);
  if ( EntryType == 4 )
  {
    v26 = 0LL;
    v27 = 0LL;
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v24, v23);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v71, Global, 0);
    if ( (unsigned int)v9 <= 1 )
    {
      v32 = v75;
LABEL_16:
      v33 = v19;
      v34 = v68;
      LOBYTE(v30) = v68;
      LODWORD(inserted) = CreateSharedResourceNtObject(v30, v29, v33, 0LL, v74, a2, &Object);
      if ( (int)inserted >= 0 )
      {
        if ( v26 || v27 )
        {
          v64 = Object;
          *((_QWORD *)Object + 3) = v26;
          v64[4] = v27;
        }
        if ( v72 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v71);
        v10 = a2;
        v12 = (_QWORD *)v76;
        goto LABEL_22;
      }
      if ( Object )
      {
        v62 = WdLogNewEntry5_WdAssertion(v36, v35);
        *(_QWORD *)(v62 + 24) = 767LL;
        WdLogEvent5_WdAssertion(v62);
      }
      if ( v26 )
        DXGKEYEDMUTEX::ReleaseReference(v26, v35);
      if ( v27 )
      {
        v63 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v36, v35);
        DXGGLOBAL::DestroySyncObject(v63, v27, 0, 0);
      }
LABEL_64:
      if ( v72 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v71);
      v10 = a2;
LABEL_30:
      if ( (int)inserted >= 0 )
        goto LABEL_31;
      goto LABEL_46;
    }
    if ( (_DWORD)v9 != 3 )
    {
      v50 = WdLogNewEntry5_WdWarning(v30, v29, v31);
      *(_QWORD *)(v50 + 24) = v19;
      LODWORD(inserted) = -1073741811;
      *(_QWORD *)(v50 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v50);
      goto LABEL_64;
    }
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v71, v29);
    v32 = v75;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v82, (struct _KTHREAD **)v75);
    inserted = HIDWORD(v85);
    v54 = (HIDWORD(v85) >> 6) & 0xFFFFFF;
    v55 = HIDWORD(v85) >> 30;
    if ( (unsigned int)v54 < *((_DWORD *)v20 + 4) )
    {
      v53 = *(_QWORD *)v20;
      v52 = *(unsigned int *)(*(_QWORD *)v20 + 16 * v54 + 8);
      if ( (_DWORD)v55 == ((*(_DWORD *)(*(_QWORD *)v20 + 16 * v54 + 8) >> 5) & 3)
        && (v52 & 0x2000) == 0
        && (v52 & 0x1F) != 0 )
      {
        v52 &= 0x1Fu;
        if ( (_BYTE)v52 == 9 )
        {
          v26 = *(DXGKEYEDMUTEX **)(v53 + 16LL * (unsigned int)v54);
LABEL_74:
          if ( !v26 )
            goto LABEL_62;
          if ( (*((_DWORD *)v26 + 41) & 1) == 0 )
          {
            _InterlockedIncrement(&dword_1C00B3394);
            v57 = WdLogNewEntry5_WdError(v52, v55);
            *(_QWORD *)(v57 + 24) = v26;
LABEL_79:
            LODWORD(inserted) = -1073741811;
            *(_QWORD *)(v57 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v57);
            goto LABEL_63;
          }
          inserted = v86;
          v58 = (v86 >> 6) & 0xFFFFFF;
          v55 = v86 >> 30;
          if ( (unsigned int)v58 < *((_DWORD *)v20 + 4) )
          {
            v53 = *(_QWORD *)v20;
            v52 = *(unsigned int *)(*(_QWORD *)v20 + 16 * v58 + 8);
            if ( (_DWORD)v55 == ((*(_DWORD *)(*(_QWORD *)v20 + 16 * v58 + 8) >> 5) & 3)
              && (v52 & 0x2000) == 0
              && (v52 & 0x1F) != 0 )
            {
              v52 &= 0x1Fu;
              if ( (_BYTE)v52 == 8 )
              {
                v27 = *(struct DXGSYNCOBJECT **)(v53 + 16LL * (unsigned int)v58);
LABEL_87:
                if ( v27 )
                {
                  if ( (*((_DWORD *)v27 + 49) & 2) != 0 )
                  {
                    DXGKEYEDMUTEX::AcquireReference(v26, v55);
                    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v82);
                    DXGSYNCOBJECT::AddReference(v27, v60, v61);
                    goto LABEL_16;
                  }
                  _InterlockedIncrement(&dword_1C00B3394);
                  v57 = WdLogNewEntry5_WdError(v52, v55);
                  *(_QWORD *)(v57 + 24) = v27;
                  goto LABEL_79;
                }
LABEL_62:
                v51 = WdLogNewEntry5_WdWarning(v52, v55, v53);
                *(_QWORD *)(v51 + 24) = inserted;
                LODWORD(inserted) = -1073741811;
                *(_QWORD *)(v51 + 32) = -1073741811LL;
                WdLogEvent5_WdWarning(v51);
LABEL_63:
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v82);
                goto LABEL_64;
              }
              v59 = WdLogNewEntry5_WdError(v52, v55);
              *(_QWORD *)(v59 + 24) = 316LL;
              WdLogEvent5_WdError(v59);
            }
          }
          v27 = 0LL;
          goto LABEL_87;
        }
        v56 = WdLogNewEntry5_WdError(v52, v55);
        *(_QWORD *)(v56 + 24) = 316LL;
        WdLogEvent5_WdError(v56);
      }
    }
    v26 = 0LL;
    goto LABEL_74;
  }
  if ( EntryType == 11 || EntryType == 8 )
  {
    if ( (_DWORD)v9 == 1 )
    {
      v45 = (unsigned int)v19;
      v34 = v68;
      LOBYTE(v24) = v68;
      LODWORD(inserted) = CreateSharedSyncNtObject(v24, EntryType, v45, 0LL, v74, v10, &Object);
      if ( (int)inserted < 0 )
      {
        if ( !Object )
          goto LABEL_30;
        v49 = WdLogNewEntry5_WdAssertion(v36, v35);
        *(_QWORD *)(v49 + 24) = 807LL;
        goto LABEL_59;
      }
LABEL_40:
      v32 = v75;
LABEL_22:
      v38 = PROCESS;
      if ( PROCESS && v38 != (struct _KPROCESS *)PsGetCurrentProcess(v36, v35) )
      {
        KeStackAttachProcess(v38, &ApcState);
        v69 = 1;
      }
      inserted = ObInsertObject(Object, 0LL, DesiredAccess, 0, 0LL, &Handle);
      if ( v69 )
        KeUnstackDetachProcess(&ApcState);
      if ( (int)inserted < 0 )
      {
        v65 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v35, v40);
        v65[3] = Object;
        v65[4] = v32;
        v65[5] = inserted;
        WdLogEvent5_WdWarning(v65);
      }
      else if ( v34 == 1 )
      {
        if ( (unsigned __int64)v12 >= MmUserProbeAddress )
          v12 = (_QWORD *)MmUserProbeAddress;
        *v12 = Handle;
      }
      else
      {
        *v12 = Handle;
        if ( v81 )
          *v81 = Object;
      }
      goto LABEL_30;
    }
LABEL_51:
    v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
    v47[3] = v19;
    LODWORD(inserted) = -1073741811;
    v47[4] = -1073741811LL;
    goto LABEL_52;
  }
  v23 = 14LL;
  if ( EntryType == 14 )
  {
    if ( (_DWORD)v9 == 1 )
    {
      v48 = (unsigned int)v19;
      v34 = v68;
      LOBYTE(v24) = v68;
      LODWORD(inserted) = CreateSharedProtectedSessionNtObject(v24, 14LL, v48);
      if ( (int)inserted < 0 )
      {
        if ( !Object )
          goto LABEL_30;
        v49 = WdLogNewEntry5_WdAssertion(v36, v35);
        *(_QWORD *)(v49 + 24) = 830LL;
LABEL_59:
        WdLogEvent5_WdAssertion(v49);
        goto LABEL_30;
      }
      goto LABEL_40;
    }
    goto LABEL_51;
  }
  v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, 14LL, v25);
  v47[3] = v19;
  v47[4] = (int)EntryType;
  LODWORD(inserted) = -1073741811;
  v47[5] = -1073741811LL;
LABEL_52:
  WdLogEvent5_WdWarning(v47);
LABEL_46:
  if ( Handle )
    ObCloseHandle(Handle, v10);
LABEL_31:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v77, v35);
  if ( v79 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v77);
  return (unsigned int)inserted;
}
