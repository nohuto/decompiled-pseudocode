/*
 * XREFs of ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C030F8B4
 * Callers:
 *     NtDxgkOutputDuplPresentToHwQueue @ 0x1C0315510 (NtDxgkOutputDuplPresentToHwQueue.c)
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001960 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0001AE8 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0001C4C (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1C0001DB4 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C0008FF0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009178 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0009418 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C000969C (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01872C0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01A5388 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C02DB630 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C0322E18 (-OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0323350 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 */

__int64 __fastcall OutputDuplPresentToHwQueue(
        struct _D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE *a1,
        struct DXGPROCESS *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  __int64 v5; // r12
  unsigned int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGHWQUEUE *v14; // rbx
  unsigned int v15; // ebx
  __int64 CurrentProcess; // rax
  __int64 v17; // r9
  int OutputDuplManager; // ebx
  struct DXGADAPTER **v19; // rax
  int v20; // eax
  unsigned int v21; // edx
  unsigned int *v22; // rax
  struct DXGHWQUEUE *v23; // rbx
  struct DXGDEVICE **v24; // r15
  __int64 v25; // r9
  unsigned __int64 v26; // rbx
  _QWORD *Pool2; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r9
  int v31; // ecx
  __int64 v32; // rcx
  _QWORD *v33; // rdx
  char *v34; // rax
  _QWORD *v35; // rcx
  _QWORD *v36; // rcx
  char *v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // r9
  const wchar_t *v40; // r9
  __int64 v41; // rax
  int v42; // eax
  struct DXGADAPTER **v43; // rbx
  struct DXGADAPTER **v44; // rax
  struct DXGHWQUEUE *RemoteOutputDuplMgr; // r14
  struct DXGDEVICE *v46; // rax
  __int64 v47; // r9
  DXGADAPTER **v48; // rcx
  struct DXGGLOBAL *Global; // rax
  char *v50; // rbx
  PSLIST_ENTRY v51; // rsi
  __int64 (__fastcall *v52)(__int64, __int64, __int64, char *); // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rcx
  int v56; // edi
  struct DXGGLOBAL *v57; // rax
  union _SLIST_HEADER *v58; // rbx
  struct DXGHWQUEUE *v60; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h]
  _BYTE v62[32]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v63; // [rsp+80h] [rbp-80h]
  struct DXGADAPTER *v64; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v65; // [rsp+90h] [rbp-70h] BYREF
  DXGADAPTER *v66; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v67; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v68[2]; // [rsp+A8h] [rbp-58h] BYREF
  char v69[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v70; // [rsp+C0h] [rbp-40h]
  char v71; // [rsp+C8h] [rbp-38h]
  PVOID v72; // [rsp+D0h] [rbp-30h] BYREF
  char v73; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v74; // [rsp+F8h] [rbp-8h]
  DXGADAPTER *v75; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v76; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v77[16]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v78[6]; // [rsp+120h] [rbp+20h] BYREF
  char v79; // [rsp+150h] [rbp+50h]
  char v80[8]; // [rsp+160h] [rbp+60h] BYREF
  char v81[64]; // [rsp+168h] [rbp+68h] BYREF
  char v82[88]; // [rsp+1A8h] [rbp+A8h] BYREF

  v4 = *((_DWORD *)a1 + 14);
  v5 = 0LL;
  v64 = 0LL;
  if ( (v4 & 8) != 0 )
  {
    v9 = *((_DWORD *)a1 + 15);
    v60 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v68, v9, a2, &v60, 0, 1);
    v14 = v60;
    if ( !v60 )
    {
      v15 = *((_DWORD *)a1 + 15);
      CurrentProcess = PsGetCurrentProcess(v11, v10, v12, v13);
      v17 = v15;
      OutputDuplManager = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, CurrentProcess, v17);
LABEL_6:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v68);
      goto LABEL_90;
    }
    v19 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v64);
    v20 = OutputDuplPreIndirectPresent(*((struct DXGDEVICE **)v14 + 2), *((_DWORD *)a1 + 1), v19, &v65);
    if ( v20 < 0 )
    {
      OutputDuplManager = v20;
      goto LABEL_6;
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v68);
  }
  v21 = *((_DWORD *)a1 + 2);
  v72 = 0LL;
  v74 = 0;
  if ( !PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements((__int64 *)&v72, v21, a3, a4) )
  {
    WdLogSingleEntry1(3LL, 2478LL);
    OutputDuplManager = -1073741801;
    goto LABEL_86;
  }
  v22 = (unsigned int *)*((_QWORD *)a1 + 2);
  v60 = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v77, *v22, a2, &v60, 0);
  v23 = v60;
  if ( !v60 )
  {
    WdLogSingleEntry1(3LL, **((unsigned int **)a1 + 2));
    OutputDuplManager = -1073741811;
    goto LABEL_85;
  }
  *(_QWORD *)v72 = v60;
  if ( !v64 )
    DXGADAPTER_REFERENCE::Assign(&v64, *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v23 + 2) + 16LL) + 1848LL));
  v24 = (struct DXGDEVICE **)*((_QWORD *)v23 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v68, v24[2]);
  v26 = *((unsigned int *)a1 + 2);
  P = 0LL;
  v63 = 0;
  if ( (unsigned int)v26 <= 4 )
  {
    Pool2 = v62;
    P = v62;
    if ( (_DWORD)v26 )
    {
      memset(v62, 0, 8 * v26);
      Pool2 = P;
    }
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v26 < 8 )
    {
LABEL_20:
      WdLogSingleEntry1(3LL, 2507LL);
      OutputDuplManager = -1073741801;
      goto LABEL_80;
    }
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v26, 1265072196LL, v25);
    P = Pool2;
  }
  v63 = v26;
  if ( !Pool2 )
    goto LABEL_20;
  *Pool2 = v24;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v69, a2);
  v28 = 1LL;
  if ( *((_DWORD *)a1 + 2) <= 1u )
  {
LABEL_48:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v69);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v78,
      P,
      v63,
      v39,
      1);
    if ( v79 )
    {
      if ( v78[0] )
      {
        WdLogSingleEntry1(3LL, 2573LL);
        OutputDuplManager = -1073741811;
      }
      else
      {
        WdLogSingleEntry1(3LL, 2568LL);
        OutputDuplManager = -1073741801;
      }
      goto LABEL_79;
    }
    v42 = *((_DWORD *)a1 + 14);
    v75 = 0LL;
    v66 = 0LL;
    v60 = 0LL;
    if ( (v42 & 2) != 0 )
    {
      RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    }
    else
    {
      v43 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v66);
      v44 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v75);
      OutputDuplManager = FindOutputDuplManager(v64, *((_DWORD *)a1 + 1), v44, &v76, v43, &v67, &v60);
      if ( OutputDuplManager < 0 )
      {
LABEL_78:
        DXGADAPTER_REFERENCE::Assign(&v66, 0LL);
        DXGADAPTER_REFERENCE::Assign(&v75, 0LL);
LABEL_79:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v78);
        goto LABEL_80;
      }
      RemoteOutputDuplMgr = v60;
    }
    if ( !RemoteOutputDuplMgr )
    {
      WdLogSingleEntry1(1LL, 2597LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Failed to get output dupl manager",
        2597LL,
        0LL,
        0LL,
        0LL,
        0LL);
      OutputDuplManager = -1073741275;
      goto LABEL_78;
    }
    if ( *((_DWORD *)a1 + 1) >= *((_DWORD *)RemoteOutputDuplMgr + 19) )
    {
      WdLogSingleEntry1(2LL, *((unsigned int *)a1 + 1));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VidPn source 0x%I64x is not valid for output duplication manager",
        *((unsigned int *)a1 + 1),
        0LL,
        0LL,
        0LL,
        0LL);
      OutputDuplManager = -1073741811;
      goto LABEL_78;
    }
    v46 = v24[2];
    v71 = 0;
    v70 = *(_QWORD *)(*((_QWORD *)v46 + 2) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v69);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v80, (__int64)v24[2], 2, v47, 0);
    OutputDuplManager = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v80, 0LL);
    if ( OutputDuplManager >= 0 )
    {
      if ( (*((_DWORD *)a1 + 14) & 0xA) != 0 )
        goto LABEL_68;
      v48 = (DXGADAPTER **)*((_QWORD *)v66 + 349);
      if ( !v48 )
      {
        WdLogSingleEntry1(2LL, 1LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Output duplication is not supported on render only device 0x%I64x",
          v66 != 0LL,
          0LL,
          0LL,
          0LL,
          0LL);
        OutputDuplManager = -1073741811;
        goto LABEL_75;
      }
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v48, v24[2], *((_DWORD *)a1 + 1)) )
      {
LABEL_68:
        Global = DXGGLOBAL_GetGlobal();
        v50 = (char *)Global + 1168;
        ++*((_DWORD *)Global + 297);
        v51 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 73);
        if ( v51
          || (v52 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)v50 + 6),
              v53 = *((unsigned int *)v50 + 11),
              v54 = *((unsigned int *)v50 + 10),
              v55 = *((unsigned int *)v50 + 9),
              ++*((_DWORD *)v50 + 6),
              (v51 = (PSLIST_ENTRY)v52(v55, v53, v54, v50)) != 0LL) )
        {
          memset(v51, 0, 0x5F8uLL);
          v51[94].Next = (struct _SLIST_ENTRY *)v72;
          v56 = OUTPUTDUPL_MGR::ProcessPresent(
                  RemoteOutputDuplMgr,
                  (struct DXGCONTEXT *)v24,
                  *(struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS *)((char *)a1 + 56),
                  *(_DWORD *)a1,
                  *((_DWORD *)a1 + 2) - 1,
                  (struct _D3DKMT_PRESENT_RGNS *)((char *)a1 + 24),
                  (const struct DXGK_PRESENT_PARAMS *)v51,
                  *((_DWORD *)a1 + 1),
                  (struct DXGCONTEXT **)P,
                  (struct COREDEVICEACCESS *)v80);
          v57 = DXGGLOBAL_GetGlobal();
          v58 = (union _SLIST_HEADER *)((char *)v57 + 1168);
          ++*((_DWORD *)v57 + 299);
          if ( ExQueryDepthSList((PSLIST_HEADER)v57 + 73) < *((_WORD *)v57 + 592) )
          {
            ExpInterlockedPushEntrySList(v58, v51);
          }
          else
          {
            ++LODWORD(v58[2].Alignment);
            ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v58[3].Region)(v51, v58);
          }
          OutputDuplManager = v56;
        }
        else
        {
          WdLogSingleEntry1(6LL, -1073741801LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate memory for present parameters. Returing 0x%I64x",
            -1073741801LL,
            0LL,
            0LL,
            0LL,
            0LL);
          OutputDuplManager = -1073741801;
        }
      }
      else
      {
        WdLogSingleEntry2(3LL, v24, *((unsigned int *)a1 + 1));
        OutputDuplManager = -1071775744;
      }
    }
LABEL_75:
    COREACCESS::~COREACCESS((COREACCESS *)v82);
    COREACCESS::~COREACCESS((COREACCESS *)v81);
    if ( v71 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v69);
    goto LABEL_78;
  }
  while ( 1 )
  {
    v29 = (*(_DWORD *)(*((_QWORD *)a1 + 2) + 4 * v28) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v29 >= *((_DWORD *)a2 + 74) )
      goto LABEL_28;
    v30 = *((_QWORD *)a2 + 35);
    v31 = *(_DWORD *)(v30 + 16 * v29 + 8);
    if ( ((*(_DWORD *)(*((_QWORD *)a1 + 2) + 4 * v28) >> 25) & 0x60) != (*(_BYTE *)(v30 + 16 * v29 + 8) & 0x60)
      || (v31 & 0x2000) != 0
      || (v31 & 0x1F) == 0 )
    {
      goto LABEL_28;
    }
    if ( (v31 & 0x1F) != 0xF )
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_28:
      v32 = 0LL;
      goto LABEL_29;
    }
    v32 = *(_QWORD *)(v30 + 16LL * (unsigned int)v29);
LABEL_29:
    if ( (unsigned int)v28 >= v74 )
      v33 = v72;
    else
      v33 = (char *)v72 + 8 * v28;
    *v33 = v32;
    v34 = (char *)v72;
    v35 = (char *)v72 + 8 * v28;
    if ( (unsigned int)v28 >= v74 )
      v35 = v72;
    OutputDuplManager = -1073741811;
    if ( !*v35 )
      break;
    if ( (unsigned int)v28 < v74 )
      v34 = (char *)v72 + 8 * v28;
    if ( (unsigned int)v28 >= v63 )
      v36 = P;
    else
      v36 = (char *)P + 8 * v28;
    *v36 = *(_QWORD *)(*(_QWORD *)v34 + 16LL);
    v37 = (char *)P;
    v38 = (char *)P + 8 * v28;
    if ( (unsigned int)v28 >= v63 )
      v38 = P;
    if ( !*v38 )
      goto LABEL_51;
    if ( (unsigned int)v28 < v63 )
      v37 = (char *)P + 8 * v28;
    if ( *(struct DXGDEVICE **)(*(_QWORD *)v37 + 16LL) != v24[2] )
    {
LABEL_51:
      v5 = (unsigned int)v28;
      WdLogSingleEntry4(2LL, v24, *(unsigned int *)(*((_QWORD *)a1 + 2) + 4 * v28), (unsigned int)v28, -1073741811LL);
      v40 = L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x";
      v28 = *(unsigned int *)(*((_QWORD *)a1 + 2) + 4 * v28);
      v41 = -1073741811LL;
      goto LABEL_53;
    }
    v28 = (unsigned int)(v28 + 1);
    if ( (unsigned int)v28 >= *((_DWORD *)a1 + 2) )
      goto LABEL_48;
  }
  WdLogSingleEntry2(2LL, *(unsigned int *)(*((_QWORD *)a1 + 2) + 4 * v28), v28);
  v40 = L"DxgkOutputDuplPresentToHwQueue failed with invalid HW queue handle 0x%x at index %d";
  v24 = (struct DXGDEVICE **)*(unsigned int *)(*((_QWORD *)a1 + 2) + 4 * v28);
  v41 = 0LL;
LABEL_53:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v40, (__int64)v24, v28, v5, v41, 0LL);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v69);
LABEL_80:
  if ( P != v62 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v63 = 0;
  if ( v68[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v68);
LABEL_85:
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v77);
LABEL_86:
  if ( v72 != &v73 && v72 )
    ExFreePoolWithTag(v72, 0);
  v72 = 0LL;
  v74 = 0;
LABEL_90:
  DXGADAPTER_REFERENCE::Assign(&v64, 0LL);
  return (unsigned int)OutputDuplManager;
}
