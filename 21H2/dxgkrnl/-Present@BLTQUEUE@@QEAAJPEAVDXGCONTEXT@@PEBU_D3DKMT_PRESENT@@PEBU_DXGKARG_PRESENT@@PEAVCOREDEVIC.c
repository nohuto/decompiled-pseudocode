/*
 * XREFs of ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02FE454
 * Callers:
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C0213AB4 (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002BD4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009B90 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014AB0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C001AFA4 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z @ 0x1C015E678 (-RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C0167BA8 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C0245FD4 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2I.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C024BC24 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ?Cleanup@BLTENTRY@@QEAAXE@Z @ 0x1C02FCA08 (-Cleanup@BLTENTRY@@QEAAXE@Z.c)
 *     ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C02FD840 (-InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C02FD904 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C02FDAF0 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C02FDD0C (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C02FFA0C (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 */

__int64 __fastcall BLTQUEUE::Present(
        BLTQUEUE *this,
        struct DXGDEVICE **a2,
        struct _D3DKMT_PRESENT *a3,
        struct _DXGKARG_PRESENT *a4,
        struct COREDEVICEACCESS *a5)
{
  __int64 v8; // rdx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // r8d
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 Current; // r14
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  struct _LIST_ENTRY *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct _LIST_ENTRY **v27; // r13
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct DXGADAPTER *Adapter; // rax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 hDestination; // rdx
  struct _D3DKMT_PRESENT *v42; // rcx
  struct DXGCONTEXT *v43; // rdx
  const struct _DXGKARG_PRESENT *v44; // r9
  struct DXGDEVICE *v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  bool v48; // zf
  RECT *p_SrcRect; // rax
  struct tagRECT *Src; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  struct _LIST_ENTRY *v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  struct DXGPROCESS *v60; // rax
  struct _EX_RUNDOWN_REF *v61; // rbx
  struct _DXGKARG_PRESENT *v62; // rdx
  __int64 SubRectCnt; // rax
  _QWORD *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  struct COREDEVICEACCESS *Timeout; // [rsp+20h] [rbp-108h]
  size_t Size; // [rsp+48h] [rbp-E0h]
  PVOID BaseAddress; // [rsp+70h] [rbp-B8h] BYREF
  int v71; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v72; // [rsp+80h] [rbp-A8h]
  char v73; // [rsp+88h] [rbp-A0h]
  int v74; // [rsp+90h] [rbp-98h]
  struct _EX_RUNDOWN_REF *v75; // [rsp+98h] [rbp-90h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+A0h] [rbp-88h] BYREF
  struct _LIST_ENTRY *v77; // [rsp+B0h] [rbp-78h]
  _QWORD v78[2]; // [rsp+B8h] [rbp-70h] BYREF
  struct DXGDEVICE *v79; // [rsp+C8h] [rbp-60h]
  _BYTE v80[88]; // [rsp+D0h] [rbp-58h] BYREF
  BLTQUEUE *v81; // [rsp+130h] [rbp+8h] BYREF
  struct DXGCONTEXT *v82; // [rsp+138h] [rbp+10h]
  struct _D3DKMT_PRESENT *v83; // [rsp+140h] [rbp+18h]
  struct _DXGKARG_PRESENT *v84; // [rsp+148h] [rbp+20h]

  v84 = a4;
  v83 = a3;
  v82 = (struct DXGCONTEXT *)a2;
  v81 = this;
  v71 = -1;
  v72 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v73 = 1;
    v71 = 12000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 12000);
  }
  else
  {
    v73 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v71, 12000LL);
  if ( (*((_DWORD *)this + 234) & 1) == 0 )
    goto LABEL_37;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a3->Flags.Value;
  if ( (*(_BYTE *)&Value & 7) == 0 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71, v8);
    if ( v73 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v71);
    }
    LODWORD(Current) = -1073741811;
    return (unsigned int)Current;
  }
  LOBYTE(v8) = *((_BYTE *)a2 + 457);
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2[2] + 2) + 16LL) + 348LL) & 0x10) != 0 )
  {
LABEL_20:
    if ( !(_BYTE)v8 )
      goto LABEL_26;
    goto LABEL_21;
  }
  if ( !(_BYTE)v8 )
  {
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 87) & 0x100) == 0 )
    {
      v14 = WdLogNewEntry5_WdError(v13, v8);
      Current = -1073741811LL;
LABEL_15:
      *(_QWORD *)(v14 + 32) = this;
      *(_QWORD *)(v14 + 24) = Current;
      WdLogEvent5_WdError(v14);
LABEL_16:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71, v15);
      if ( v73 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v71);
      return (unsigned int)Current;
    }
    goto LABEL_20;
  }
LABEL_21:
  if ( (*(_BYTE *)&Value & 4) == 0 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71, v8);
    if ( v73 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v71);
    return 3221225659LL;
  }
LABEL_26:
  if ( *((int *)this + 235) < 0 )
    goto LABEL_37;
  if ( (*(_BYTE *)&Value & 0x20) != 0 )
  {
    *((_BYTE *)this + 567) = 1;
    if ( (int)BLTQUEUE::IssueCommand(this) < 0 )
    {
      v23 = WdLogNewEntry5_WdError(v22, v21);
      *(_QWORD *)(v23 + 24) = -1073741130LL;
      *(_QWORD *)(v23 + 32) = this;
      WdLogEvent5_WdError(v23);
LABEL_37:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71, v8);
      if ( v73 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v71);
      return 3221226166LL;
    }
  }
  LODWORD(BaseAddress) = 0;
  v24 = (struct _LIST_ENTRY *)((char *)this + 232);
  v77 = (struct _LIST_ENTRY *)((char *)this + 232);
  do
  {
    v27 = BLTQUEUE::RemoveQueueHead(this, v24);
    v78[0] = v27;
    if ( v27 )
      break;
    if ( (a3->Flags.Value & 0x10) != 0 )
    {
      v32 = WdLogNewEntry5_WdEvent(v26, v25);
      *(_QWORD *)(v32 + 24) = -1071775486LL;
      *(_QWORD *)(v32 + 32) = this;
      WdLogEvent5_WdEvent(v32);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71, v33);
      if ( v73 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v71);
      return 3223191810LL;
    }
    *((_BYTE *)this + 566) = 1;
    v28 = BLTQUEUE::IssueCommand(this);
    Current = v28;
    if ( v28 < 0 )
    {
      v14 = WdLogNewEntry5_WdError(v26, v25);
      goto LABEL_15;
    }
    LODWORD(BaseAddress) = (_DWORD)BaseAddress + 1;
    v24 = v77;
  }
  while ( (unsigned int)BaseAddress < 3 );
  if ( !v27 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v26, v25);
    *(_QWORD *)(v29 + 24) = -1073741130LL;
    *(_QWORD *)(v29 + 32) = this;
    WdLogEvent5_WdAssertion(v29);
    goto LABEL_37;
  }
  Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
  v37 = BLTENTRY::SetupPresentParameters(
          (BLTENTRY *)v27,
          this,
          (struct DXGCONTEXT *)a2,
          a3,
          v84,
          a5,
          BYTE1(*((_DWORD *)Adapter + 87)) & 1);
  Current = v37;
  if ( v37 >= 0 )
  {
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 87) & 0x100) != 0 )
    {
      KeWaitForSingleObject((char *)this + 2704, Executive, 0, 0, 0LL);
      if ( (v83->Flags.Value & 8) != 0 )
        LODWORD(Current) = 0;
      else
        LODWORD(Current) = BLTQUEUE::PreparePresentIndirect(this, v43, v83, v44, Timeout, (struct BLTENTRY *)v27);
      KeReleaseMutex((PRKMUTEX)((char *)this + 2704), 0);
      goto LABEL_83;
    }
    if ( !*((_BYTE *)a2 + 457) )
    {
      BaseAddress = 0LL;
      v75 = (struct _EX_RUNDOWN_REF *)a2[7];
      v61 = v75 + 1;
      RegionSize[1] = (ULONG_PTR)&v75[1];
      if ( LODWORD(v75->Count) != -791674878
        || ((v42 = v83, (v83->Flags.Value & 4) == 0)
          ? (hDestination = v83->hDestination)
          : (hDestination = v83->hSource),
            LODWORD(v61->Count) != (_DWORD)hDestination) )
      {
        v64 = (_QWORD *)WdLogNewEntry5_WdError(v42, hDestination);
        v64[3] = Current;
        v64[4] = a2;
        v64[5] = this;
        WdLogEvent5_WdError(v64);
        LODWORD(Current) = -1073741811;
        v74 = -1073741811;
        goto LABEL_83;
      }
      if ( (v83->Flags.Value & 4) != 0 )
      {
        memset(v61, 0, 0x48uLL);
        LODWORD(v61[1].Count) |= 4u;
      }
      else
      {
        v62 = v84;
        LODWORD(v75[2].Count) = v84->Flags.0;
        HIDWORD(v61[1].Ptr) = v62->Color;
        *(RECT *)&v61[4].Count = v62->DstRect;
        *(RECT *)&v61[2].Count = v62->SrcRect;
        v79 = a2[6];
        SubRectCnt = v62->SubRectCnt;
        if ( (unsigned int)SubRectCnt > (unsigned int)(((unsigned __int64)(unsigned int)v79 - 80) >> 4) )
        {
          RegionSize[0] = 16 * SubRectCnt;
          if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x1000u, 4u) < 0 )
            goto LABEL_83;
          v62 = v84;
        }
        else
        {
          BaseAddress = (char *)&v61[6].Ptr + 4;
        }
        memmove(BaseAddress, v62->pDstSubRects, 16LL * v62->SubRectCnt);
        LODWORD(v61[6].Count) = v84->SubRectCnt;
        v61->Count = (ULONG_PTR)BaseAddress;
      }
      LODWORD(v75->Count) = -791674877;
      goto LABEL_83;
    }
    v45 = a2[2];
    BaseAddress = *(PVOID *)(*((_QWORD *)v45 + 2) + 16LL);
    LODWORD(Current) = BLTQUEUE::PrepareStagingBuffer(this, v45, a3->hSource, a5);
    if ( (int)Current < 0 )
    {
      v40 = WdLogNewEntry5_WdError(v47, v46);
      *(_QWORD *)(v40 + 24) = 1136LL;
      goto LABEL_48;
    }
    v48 = (*(_DWORD *)&a3->Flags.0 & 0x80u) == 0;
    p_SrcRect = &a3->SrcRect;
    Src = (struct tagRECT *)((char *)this + 2824);
    if ( !v48 )
      Src = p_SrcRect;
    Current = (__int64)DXGPROCESS::GetCurrent(v47, v46);
    RegionSize[0] = Current;
    DXGPROCESS::GetAllocationSafe(Current, (DXGALLOCATIONREFERENCE *)&v75, v83->hSource);
    LODWORD(Size) = 0;
    LODWORD(Current) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                         (DXG_GUEST_VIRTUALGPU_VMBUS *)((char *)BaseAddress + 4240),
                         (struct DXGPROCESS *)Current,
                         (struct DXGCONTEXT *)a2,
                         v75[12].Count,
                         *((_DWORD *)this + 693),
                         Src,
                         Src,
                         1u,
                         Src,
                         Size,
                         0LL);
    if ( (int)Current >= 0 )
    {
      ++*((_QWORD *)this + 352);
      LODWORD(v81) = *((_DWORD *)a2 + 6);
      LODWORD(Current) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
                           (DXG_GUEST_VIRTUALGPU_VMBUS *)((char *)BaseAddress + 4240),
                           (struct DXGPROCESS *)RegionSize[0],
                           1u,
                           (const unsigned int *)this + 700,
                           0,
                           1u,
                           (unsigned int *)&v81,
                           (unsigned __int64 *)this + 352,
                           0LL,
                           0LL,
                           0,
                           0,
                           0LL);
      v74 = Current;
      if ( (int)Current >= 0 )
      {
        v57 = (struct _LIST_ENTRY *)a2[2];
        v27[70] = (struct _LIST_ENTRY *)*((_QWORD *)this + 352);
        v27[71] = v57;
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v78, (BLTQUEUE *)((char *)this + 720), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v78);
        v60 = DXGPROCESS::GetCurrent(v59, v58);
        DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v80, v60);
        if ( *(_DWORD *)(*(_QWORD *)this + 140LL) )
        {
          LODWORD(Current) = -1073741823;
        }
        else
        {
          *((_DWORD *)v27 + 22) = 4;
          *((_DWORD *)v27 + 18) = *((_DWORD *)this + 62);
          *((_DWORD *)v27 + 23) = *((_DWORD *)this + 695);
          v27[10] = (struct _LIST_ENTRY *)*((_QWORD *)this + 349);
          LODWORD(Current) = v74;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v80);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v78);
        goto LABEL_68;
      }
      v53 = WdLogNewEntry5_WdError(v56, v55);
      *(_QWORD *)(v53 + 24) = 1181LL;
    }
    else
    {
      v53 = WdLogNewEntry5_WdError(v52, v51);
      *(_QWORD *)(v53 + 24) = 1161LL;
    }
    WdLogEvent5_WdError(v53);
LABEL_68:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v75, v54);
    goto LABEL_83;
  }
  v40 = WdLogNewEntry5_WdError(v39, v38);
  *(_QWORD *)(v40 + 24) = Current;
  *(_QWORD *)(v40 + 32) = this;
LABEL_48:
  WdLogEvent5_WdError(v40);
LABEL_83:
  if ( (int)Current < 0 )
  {
    BLTENTRY::Cleanup((BLTENTRY *)v27, 1);
    BLTQUEUE::InsertQueueHead(this, v77, (struct BLTENTRY *)v27);
    goto LABEL_16;
  }
  BLTQUEUE::InsertQueueTail(this, (struct _LIST_ENTRY *)((char *)this + 216), (struct BLTENTRY *)v27);
  *((LARGE_INTEGER *)this + 104) = KeQueryPerformanceCounter(0LL);
  KeSetEvent((PRKEVENT)((char *)this + 512), 0, 0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71, v65);
  if ( v73 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v66, &EventProfilerExit, v67, v71);
  return 0LL;
}
