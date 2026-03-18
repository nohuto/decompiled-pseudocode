/*
 * XREFs of DxgkShareObjectsInternal @ 0x1C01A5DA0
 * Callers:
 *     ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x1C0076780 (-AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z.c)
 *     DxgkShareObjects @ 0x1C01A61E0 (DxgkShareObjects.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0369D60 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009B5C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0009BB0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C005583C (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C005591C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C019A7B8 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C01A619C (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01D9694 (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01E03F8 (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C031B698 (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 */

__int64 __fastcall DxgkShareObjectsInternal(
        __int64 a1,
        KPROCESSOR_MODE a2,
        struct _KPROCESS *a3,
        unsigned int a4,
        char *Src,
        __int64 a6,
        ACCESS_MASK DesiredAccess,
        _QWORD *a8,
        PVOID *a9)
{
  __int64 v9; // r13
  _QWORD *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGPROCESS *Current; // rsi
  char *v16; // rcx
  __int64 inserted; // rdi
  _QWORD *v18; // r10
  __int64 v19; // rdx
  unsigned int EntryType; // esi
  __int64 v21; // rcx
  DXGKEYEDMUTEX *v22; // r14
  __int64 v23; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  KPROCESSOR_MODE v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  struct _KPROCESS *v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v36; // r8
  const wchar_t *v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rdx
  struct DXGPROCESS *v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rax
  _QWORD *v46; // r13
  unsigned int v47; // ecx
  __int64 v48; // rax
  unsigned int v49; // ecx
  PERESOURCE *v50; // rax
  _QWORD *v51; // rax
  int Handle; // [rsp+28h] [rbp-150h]
  char v54; // [rsp+51h] [rbp-127h]
  char v55; // [rsp+52h] [rbp-126h]
  PVOID Object; // [rsp+60h] [rbp-118h] BYREF
  char v57[8]; // [rsp+68h] [rbp-110h] BYREF
  char v58; // [rsp+70h] [rbp-108h]
  HANDLE v59; // [rsp+78h] [rbp-100h] BYREF
  __int64 v60; // [rsp+80h] [rbp-F8h]
  struct DXGPROCESS *v61; // [rsp+88h] [rbp-F0h]
  __int64 v62; // [rsp+90h] [rbp-E8h]
  int v63; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v64; // [rsp+A0h] [rbp-D8h]
  char v65; // [rsp+A8h] [rbp-D0h]
  PRKPROCESS PROCESS; // [rsp+B0h] [rbp-C8h]
  PVOID *v67; // [rsp+B8h] [rbp-C0h]
  _BYTE v68[24]; // [rsp+C0h] [rbp-B8h] BYREF
  _BYTE v69[24]; // [rsp+D8h] [rbp-A0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-88h] BYREF
  __int64 v71; // [rsp+120h] [rbp-58h] BYREF
  unsigned int v72; // [rsp+128h] [rbp-50h]

  v9 = a4;
  PROCESS = a3;
  v54 = a1;
  v60 = a6;
  v10 = a8;
  v62 = (__int64)a8;
  v67 = a9;
  v63 = -1;
  v64 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v65 = 1;
    v63 = 2074;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 2074);
  }
  else
  {
    v65 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v63, 2074);
  Object = 0LL;
  v59 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v55 = 0;
  Current = DXGPROCESS::GetCurrent(v12, v11, v13, v14);
  v61 = Current;
  if ( !Current )
  {
    LODWORD(inserted) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v37 = L"Invalid process context. Returning 0x%I64x";
LABEL_46:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v37, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_48;
  }
  if ( (unsigned int)(v9 - 1) > 2 )
  {
    LODWORD(inserted) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Input handle count is out of range. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_108:
    v27 = a2;
    goto LABEL_29;
  }
  v71 = 0LL;
  v72 = 0;
  if ( v54 == 1 )
  {
    v16 = &Src[4 * v9];
    if ( v16 < Src || (unsigned __int64)v16 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(&v71, Src, 4 * v9);
  if ( !a6 )
  {
    LODWORD(inserted) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v37 = L"Invalid object attributes. Returning 0x%I64x";
    goto LABEL_46;
  }
  inserted = (unsigned int)v71;
  if ( !(_DWORD)v71 )
  {
    LODWORD(inserted) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v37 = L"Input object handle is NULL. Returning 0x%I64x";
    goto LABEL_46;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v69, Current);
  v18 = (_QWORD *)((char *)Current + 280);
  v19 = ((unsigned int)inserted >> 6) & 0xFFFFFF;
  if ( (unsigned int)v19 < *((_DWORD *)Current + 74)
    && (v36 = *(unsigned int *)(*v18 + 16LL * (unsigned int)v19 + 8),
        (unsigned int)inserted >> 30 == ((*(_DWORD *)(*v18 + 16LL * (unsigned int)v19 + 8) >> 5) & 3))
    && (v36 & 0x2000) == 0
    && (v36 & 0x1F) != 0 )
  {
    EntryType = HMGRTABLE::GetEntryType((char *)Current + 280, v19, v36);
  }
  else
  {
    EntryType = 0;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v69);
  switch ( EntryType )
  {
    case 4u:
      v22 = 0LL;
      v23 = 0LL;
      Global = DXGGLOBAL_GetGlobal();
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v57, Global, 0);
      if ( (unsigned int)v9 <= 1 )
      {
LABEL_15:
        v27 = a2;
        LOBYTE(Handle) = a2;
        LOBYTE(v26) = v54;
        LODWORD(inserted) = CreateSharedResourceNtObject(v26, v25, (unsigned int)inserted, 0LL, v60, Handle, &Object);
        if ( (int)inserted < 0 )
        {
          if ( Object )
          {
            WdLogSingleEntry1(1LL, 812LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pObject == NULL", 812LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( v22 )
            DXGKEYEDMUTEX::ReleaseReference(v22);
          if ( v23 )
          {
            v50 = (PERESOURCE *)DXGGLOBAL_GetGlobal();
            DXGGLOBAL::DestroySyncObject(v50, (struct DXGSYNCOBJECT *)v23, 0);
          }
          if ( v58 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v57);
LABEL_29:
          if ( (int)inserted >= 0 )
            goto LABEL_30;
          goto LABEL_49;
        }
        if ( v22 || v23 )
        {
          v51 = Object;
          *((_QWORD *)Object + 3) = v22;
          v51[4] = v23;
        }
        if ( v58 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v57);
        v10 = (_QWORD *)v62;
LABEL_21:
        v32 = PROCESS;
        if ( PROCESS && v32 != (struct _KPROCESS *)PsGetCurrentProcess(v29, v28, v30, v31) )
        {
          KeStackAttachProcess(v32, &ApcState);
          v55 = 1;
        }
        inserted = ObInsertObject(Object, 0LL, DesiredAccess, 0, 0LL, &v59);
        if ( v55 )
          KeUnstackDetachProcess(&ApcState);
        if ( (int)inserted < 0 )
        {
          WdLogSingleEntry3(3LL, Object, v61, inserted);
        }
        else if ( v54 == 1 )
        {
          if ( (unsigned __int64)v10 >= MmUserProbeAddress )
            v10 = (_QWORD *)MmUserProbeAddress;
          *v10 = v59;
        }
        else
        {
          *v10 = v59;
          if ( v67 )
            *v67 = Object;
        }
        goto LABEL_29;
      }
      if ( (_DWORD)v9 != 3 )
      {
        v41 = inserted;
        LODWORD(inserted) = -1073741811;
        WdLogSingleEntry2(3LL, v41, -1073741811LL);
        goto LABEL_67;
      }
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v57);
      v43 = v61;
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v68, v61);
      v44 = HIDWORD(v71);
      v45 = (HIDWORD(v71) >> 6) & 0xFFFFFF;
      v46 = (_QWORD *)((char *)v43 + 280);
      if ( (unsigned int)v45 < *((_DWORD *)v43 + 74) )
      {
        v47 = *(_DWORD *)(*v46 + 16 * v45 + 8);
        if ( HIDWORD(v71) >> 30 == ((v47 >> 5) & 3) && (v47 & 0x2000) == 0 && (v47 & 0x1F) != 0 )
        {
          if ( (v47 & 0x1F) == 9 )
          {
            v22 = *(DXGKEYEDMUTEX **)(*v46 + 16LL * (unsigned int)v45);
            goto LABEL_77;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v22 = 0LL;
LABEL_77:
      if ( !v22 )
      {
        v42 = v44;
LABEL_65:
        LODWORD(inserted) = -1073741811;
        WdLogSingleEntry2(3LL, v42, -1073741811LL);
LABEL_66:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v68);
LABEL_67:
        if ( v58 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v57);
        goto LABEL_108;
      }
      if ( (*((_DWORD *)v22 + 43) & 1) == 0 )
      {
        _InterlockedIncrement(&dword_1C0132124);
        LODWORD(inserted) = -1073741811;
        WdLogSingleEntry2(2LL, v22, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot share object: Keyed mutex 0x%I64x does not use NT security sharing. Returning 0x%I64x.",
          (__int64)v22,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_66;
      }
      v48 = (v72 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v48 < *((_DWORD *)v43 + 74) )
      {
        v49 = *(_DWORD *)(*v46 + 16 * v48 + 8);
        if ( v72 >> 30 == ((v49 >> 5) & 3) && (v49 & 0x2000) == 0 && (v49 & 0x1F) != 0 )
        {
          if ( (v49 & 0x1F) == 8 )
          {
            v23 = *(_QWORD *)(*v46 + 16LL * (unsigned int)v48);
            goto LABEL_88;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v23 = 0LL;
LABEL_88:
      if ( v23 )
      {
        if ( (*(_DWORD *)(v23 + 204) & 2) != 0 )
        {
          DXGKEYEDMUTEX::AcquireReference(v22);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v68);
          _InterlockedIncrement((volatile signed __int32 *)(v23 + 24));
          LODWORD(inserted) = v71;
          goto LABEL_15;
        }
        _InterlockedIncrement(&dword_1C0132124);
        LODWORD(inserted) = -1073741811;
        WdLogSingleEntry2(2LL, v23, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot share object: Shared sync object 0x%I64x does not use NT security sharing. Returning 0x%I64x.",
          v23,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_66;
      }
      v42 = v72;
      goto LABEL_65;
    case 0xBu:
    case 8u:
      if ( (_DWORD)v9 == 1 )
      {
        v27 = a2;
        LOBYTE(v21) = v54;
        LODWORD(inserted) = CreateSharedSyncNtObject(v21, EntryType, (unsigned int)inserted, 0LL, v60, a2, &Object);
        if ( (int)inserted >= 0 )
          goto LABEL_21;
        if ( !Object )
          goto LABEL_29;
        v40 = 852LL;
        WdLogSingleEntry1(1LL, 852LL);
        goto LABEL_61;
      }
      break;
    case 0xEu:
      if ( (_DWORD)v9 == 1 )
      {
        v27 = a2;
        LOBYTE(v21) = v54;
        LODWORD(inserted) = CreateSharedProtectedSessionNtObject(v21, 14LL, (unsigned int)inserted);
        if ( (int)inserted >= 0 )
          goto LABEL_21;
        if ( !Object )
          goto LABEL_29;
        v40 = 875LL;
        WdLogSingleEntry1(1LL, 875LL);
LABEL_61:
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pObject == NULL", v40, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_29;
      }
      break;
    default:
      v39 = inserted;
      LODWORD(inserted) = -1073741811;
      WdLogSingleEntry3(3LL, v39, (int)EntryType, -1073741811LL);
      goto LABEL_48;
  }
  v38 = inserted;
  LODWORD(inserted) = -1073741811;
  WdLogSingleEntry2(3LL, v38, -1073741811LL);
LABEL_48:
  v27 = a2;
LABEL_49:
  if ( v59 )
    ObCloseHandle(v59, v27);
LABEL_30:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
  if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v63);
  return (unsigned int)inserted;
}
