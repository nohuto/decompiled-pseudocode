/*
 * XREFs of ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C026CF78
 * Callers:
 *     NtDxgkOutputDuplPresentToHwQueue @ 0x1C0273880 (NtDxgkOutputDuplPresentToHwQueue.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0002118 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004050 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C0009C94 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0016AF0 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0016C18 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0018834 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0019BA0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0019EC4 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01138D0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C015B3D0 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C022B448 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C029A700 (-OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C029AB94 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 */

__int64 __fastcall OutputDuplPresentToHwQueue(struct _D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE *a1, struct DXGPROCESS *a2)
{
  int v2; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int OutputDuplManager; // edi
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGDEVICE *v12; // rbx
  struct DXGADAPTER **v13; // rax
  int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned int *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGHWQUEUE *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  struct DXGDEVICE **v27; // r15
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // edi
  _BYTE *PoolWithTag; // rax
  unsigned int v33; // ebx
  __int64 v34; // rax
  __int64 v35; // r9
  int v36; // ecx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rdx
  char *v41; // rax
  _QWORD *v42; // rcx
  __int64 v43; // rdx
  _QWORD *v44; // rcx
  _QWORD *v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rax
  int v55; // eax
  struct DXGADAPTER *v56; // rdi
  struct DXGADAPTER **v57; // rbx
  __int64 v58; // rdx
  struct DXGADAPTER **v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // r14
  __int64 v63; // rax
  __int64 v64; // rax
  struct DXGDEVICE *v65; // rax
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rcx
  DXGADAPTER **v69; // rcx
  __int64 v70; // rax
  __int64 v71; // r8
  __int64 v72; // rax
  struct DXGGLOBAL *Global; // rax
  char *v74; // rbx
  PSLIST_ENTRY v75; // rdi
  __int64 v76; // rdx
  __int64 (__fastcall *v77)(__int64, __int64, __int64, char *); // rax
  __int64 v78; // r8
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rax
  int v85; // esi
  __int64 v86; // rdx
  __int64 v87; // rcx
  struct DXGGLOBAL *v88; // rax
  union _SLIST_HEADER *v89; // rbx
  __int64 v90; // rax
  struct DXGHWQUEUE *v92; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v93; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v94; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h]
  _BYTE v96[32]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v97; // [rsp+90h] [rbp-70h]
  DXGADAPTER *v98; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v99; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v100[2]; // [rsp+A8h] [rbp-58h] BYREF
  char v101[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v102; // [rsp+C0h] [rbp-40h]
  char v103; // [rsp+C8h] [rbp-38h]
  PVOID v104; // [rsp+D0h] [rbp-30h] BYREF
  char v105; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v106; // [rsp+F8h] [rbp-8h]
  DXGADAPTER *v107; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v108; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v109[16]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v110[6]; // [rsp+120h] [rbp+20h] BYREF
  char v111; // [rsp+150h] [rbp+50h]
  char v112[8]; // [rsp+160h] [rbp+60h] BYREF
  char v113[64]; // [rsp+168h] [rbp+68h] BYREF
  char v114[88]; // [rsp+1A8h] [rbp+A8h] BYREF

  v2 = *((_DWORD *)a1 + 14);
  v93 = 0LL;
  if ( (v2 & 8) != 0 )
  {
    v92 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v100, *((_DWORD *)a1 + 15), a2, &v92, 0);
    if ( !v92 )
    {
      OutputDuplManager = -1073741811;
      v9 = (_QWORD *)WdLogNewEntry5_WdWarning(v6, v5, v7);
      v9[3] = -1073741811LL;
      v9[4] = PsGetCurrentProcess(v11, v10);
      v9[5] = *((unsigned int *)a1 + 15);
      WdLogEvent5_WdWarning(v9);
LABEL_6:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v100);
      goto LABEL_90;
    }
    v12 = (struct DXGDEVICE *)*((_QWORD *)v92 + 2);
    v13 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v93, v5);
    v14 = OutputDuplPreIndirectPresent(v12, *((_DWORD *)a1 + 1), v13, &v94);
    if ( v14 < 0 )
    {
      OutputDuplManager = v14;
      goto LABEL_6;
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v100);
  }
  v15 = *((_DWORD *)a1 + 2);
  v104 = 0LL;
  v106 = 0;
  if ( !PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(&v104, v15) )
  {
    v19 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v19 + 24) = 2391LL;
    WdLogEvent5_WdWarning(v19);
    OutputDuplManager = -1073741801;
    goto LABEL_86;
  }
  v20 = (unsigned int *)*((_QWORD *)a1 + 2);
  v92 = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v109, *v20, (struct _KTHREAD **)a2, &v92, 0);
  v24 = v92;
  if ( !v92 )
  {
    v25 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v25 + 24) = **((unsigned int **)a1 + 2);
    WdLogEvent5_WdWarning(v25);
    OutputDuplManager = -1073741811;
    goto LABEL_85;
  }
  *(_QWORD *)v104 = v92;
  if ( !v93 )
    DXGADAPTER_REFERENCE::Assign(&v93, *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v24 + 2) + 16LL) + 1848LL));
  v27 = (struct DXGDEVICE **)*((_QWORD *)v24 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v100, v27[2]);
  v31 = *((_DWORD *)a1 + 2);
  P = 0LL;
  v97 = 0;
  if ( v31 <= 4 )
  {
    PoolWithTag = v96;
  }
  else
  {
    v28 = 0xFFFFFFFFFFFFFFFFuLL % v31;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v31 < 8 )
    {
LABEL_79:
      v90 = WdLogNewEntry5_WdWarning(v29, v28, v30);
      *(_QWORD *)(v90 + 24) = 2420LL;
      WdLogEvent5_WdWarning(v90);
      OutputDuplManager = -1073741801;
      goto LABEL_80;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v31, 0x4B677844u);
  }
  P = PoolWithTag;
  v97 = v31;
  if ( !PoolWithTag )
    goto LABEL_79;
  memset(PoolWithTag, 0, 8LL * v31);
  if ( !P )
    goto LABEL_79;
  *(_QWORD *)P = v27;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v101, (struct _KTHREAD **)a2);
  v33 = 1;
  if ( *((_DWORD *)a1 + 2) <= 1u )
  {
LABEL_47:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v101);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v110,
      P,
      v97);
    if ( v111 )
    {
      if ( v110[0] )
      {
        v54 = WdLogNewEntry5_WdWarning(v48, v47, v49);
        *(_QWORD *)(v54 + 24) = 2486LL;
        WdLogEvent5_WdWarning(v54);
        OutputDuplManager = -1073741811;
      }
      else
      {
        v50 = WdLogNewEntry5_WdWarning(v48, v47, v49);
        *(_QWORD *)(v50 + 24) = 2481LL;
        WdLogEvent5_WdWarning(v50);
        OutputDuplManager = -1073741801;
      }
      goto LABEL_78;
    }
    v55 = *((_DWORD *)a1 + 14);
    v107 = 0LL;
    v98 = 0LL;
    v92 = 0LL;
    if ( (v55 & 2) != 0 )
    {
      RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(v48, v47);
    }
    else
    {
      v56 = v93;
      v57 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v98, v47);
      v59 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v107, v58);
      OutputDuplManager = FindOutputDuplManager(v56, *((unsigned int *)a1 + 1), v59, &v108, v57, &v99, &v92);
      if ( OutputDuplManager < 0 )
      {
LABEL_77:
        DXGADAPTER_REFERENCE::Assign(&v98, 0LL);
        DXGADAPTER_REFERENCE::Assign(&v107, 0LL);
LABEL_78:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v110);
        goto LABEL_80;
      }
      RemoteOutputDuplMgr = v92;
    }
    if ( !RemoteOutputDuplMgr )
    {
      v63 = WdLogNewEntry5_WdAssertion(v61, v60);
      *(_QWORD *)(v63 + 24) = 2510LL;
      WdLogEvent5_WdAssertion(v63);
      OutputDuplManager = -1073741275;
      goto LABEL_77;
    }
    if ( *((_DWORD *)a1 + 1) >= *((_DWORD *)RemoteOutputDuplMgr + 13) )
    {
      v64 = WdLogNewEntry5_WdError(v61, v60);
      *(_QWORD *)(v64 + 24) = *((unsigned int *)a1 + 1);
      WdLogEvent5_WdError(v64);
      OutputDuplManager = -1073741811;
      goto LABEL_77;
    }
    v65 = v27[2];
    v103 = 0;
    v102 = *(_QWORD *)(*((_QWORD *)v65 + 2) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v101);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v112, (__int64)v27[2], 2, v66, 0);
    OutputDuplManager = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v112, 0LL);
    if ( OutputDuplManager >= 0 )
    {
      if ( (*((_DWORD *)a1 + 14) & 0xA) != 0 )
        goto LABEL_68;
      v69 = (DXGADAPTER **)*((_QWORD *)v98 + 337);
      if ( !v69 )
      {
        v70 = WdLogNewEntry5_WdError(0LL, v67);
        *(_QWORD *)(v70 + 24) = v98 != 0LL;
        WdLogEvent5_WdError(v70);
        OutputDuplManager = -1073741811;
        goto LABEL_75;
      }
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v69, v27[2], *((_DWORD *)a1 + 1)) )
      {
LABEL_68:
        Global = DXGGLOBAL::GetGlobal(v68, v67);
        v74 = (char *)Global + 1024;
        ++*((_DWORD *)Global + 261);
        v75 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 64);
        if ( v75
          || (v76 = *((unsigned int *)v74 + 11),
              v77 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)v74 + 6),
              v78 = *((unsigned int *)v74 + 10),
              v79 = *((unsigned int *)v74 + 9),
              ++*((_DWORD *)v74 + 6),
              (v75 = (PSLIST_ENTRY)v77(v79, v76, v78, v74)) != 0LL) )
        {
          memset(v75, 0, 0x5F8uLL);
          v75[94].Next = (struct _SLIST_ENTRY *)v104;
          v85 = OUTPUTDUPL_MGR::ProcessPresent(
                  RemoteOutputDuplMgr,
                  (struct DXGCONTEXT *)v27,
                  *(struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS *)((char *)a1 + 56),
                  *(_DWORD *)a1,
                  *((_DWORD *)a1 + 2) - 1,
                  (struct _D3DKMT_PRESENT_RGNS *)((char *)a1 + 24),
                  (const struct DXGK_PRESENT_PARAMS *)v75,
                  *((_DWORD *)a1 + 1),
                  (struct DXGCONTEXT **)P,
                  (struct COREDEVICEACCESS *)v112);
          v88 = DXGGLOBAL::GetGlobal(v87, v86);
          v89 = (union _SLIST_HEADER *)((char *)v88 + 1024);
          ++*((_DWORD *)v88 + 263);
          if ( ExQueryDepthSList((PSLIST_HEADER)v88 + 64) < *((_WORD *)v88 + 520) )
          {
            ExpInterlockedPushEntrySList(v89, v75);
          }
          else
          {
            ++LODWORD(v89[2].Alignment);
            ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v89[3].Region)(v75, v89);
          }
          OutputDuplManager = v85;
        }
        else
        {
          v84 = WdLogNewEntry5_WdLowResource(v81, v80, v82, v83);
          OutputDuplManager = -1073741801;
          *(_QWORD *)(v84 + 24) = -1073741801LL;
          WdLogEvent5_WdLowResource(v84);
        }
      }
      else
      {
        v72 = WdLogNewEntry5_WdWarning(v68, v67, v71);
        *(_QWORD *)(v72 + 24) = v27;
        *(_QWORD *)(v72 + 32) = *((unsigned int *)a1 + 1);
        WdLogEvent5_WdWarning(v72);
        OutputDuplManager = -1071775744;
      }
    }
LABEL_75:
    COREACCESS::~COREACCESS((COREACCESS *)v114);
    COREACCESS::~COREACCESS((COREACCESS *)v113);
    if ( v103 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v101);
    goto LABEL_77;
  }
  while ( 1 )
  {
    v34 = (*(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * v33) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v34 >= *((_DWORD *)a2 + 64) )
      goto LABEL_27;
    v35 = *((_QWORD *)a2 + 30);
    v36 = *(_DWORD *)(v35 + 16 * v34 + 8);
    if ( ((*(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * v33) >> 25) & 0x60) != (*(_BYTE *)(v35 + 16 * v34 + 8) & 0x60)
      || (v36 & 0x2000) != 0
      || (v36 & 0x1F) == 0 )
    {
      goto LABEL_27;
    }
    v37 = v36 & 0x1F;
    if ( (_BYTE)v37 != 15 )
    {
      v38 = WdLogNewEntry5_WdError(v37, (*(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * v33) >> 25) & 0x60);
      *(_QWORD *)(v38 + 24) = 267LL;
      WdLogEvent5_WdError(v38);
LABEL_27:
      v39 = 0LL;
      goto LABEL_28;
    }
    v39 = *(_QWORD *)(v35 + 16LL * (unsigned int)v34);
LABEL_28:
    if ( v33 >= v106 )
      v40 = v104;
    else
      v40 = (char *)v104 + 8 * v33;
    *v40 = v39;
    v41 = (char *)v104;
    v42 = (char *)v104 + 8 * v33;
    if ( v33 >= v106 )
      v42 = v104;
    OutputDuplManager = -1073741811;
    if ( !*v42 )
      break;
    if ( v33 < v106 )
      v41 = (char *)v104 + 8 * v33;
    v43 = *(_QWORD *)(*(_QWORD *)v41 + 16LL);
    if ( v33 >= v97 )
      v44 = P;
    else
      v44 = (char *)P + 8 * v33;
    *v44 = v43;
    v45 = P;
    v46 = (char *)P + 8 * v33;
    if ( v33 >= v97 )
      v46 = P;
    if ( !*v46 )
      goto LABEL_50;
    if ( v33 < v97 )
      v45 = (char *)P + 8 * v33;
    v45 = (_QWORD *)*v45;
    if ( (struct DXGDEVICE *)v45[2] != v27[2] )
    {
LABEL_50:
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v45, v43);
      v51[3] = v27;
      v52 = *(unsigned int *)(*((_QWORD *)a1 + 2) + 4LL * v33);
      v51[5] = v33;
      v51[4] = v52;
      v51[6] = -1073741811LL;
      goto LABEL_52;
    }
    if ( ++v33 >= *((_DWORD *)a1 + 2) )
      goto LABEL_47;
  }
  v51 = (_QWORD *)WdLogNewEntry5_WdError(v42, v40);
  v53 = *(unsigned int *)(*((_QWORD *)a1 + 2) + 4LL * v33);
  v51[4] = v33;
  v51[3] = v53;
LABEL_52:
  WdLogEvent5_WdError(v51);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v101);
LABEL_80:
  if ( P != v96 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v97 = 0;
  if ( v100[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v100);
LABEL_85:
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v109, v26);
LABEL_86:
  if ( v104 != &v105 && v104 )
    ExFreePoolWithTag(v104, 0);
  v104 = 0LL;
  v106 = 0;
LABEL_90:
  DXGADAPTER_REFERENCE::Assign(&v93, 0LL);
  return (unsigned int)OutputDuplManager;
}
