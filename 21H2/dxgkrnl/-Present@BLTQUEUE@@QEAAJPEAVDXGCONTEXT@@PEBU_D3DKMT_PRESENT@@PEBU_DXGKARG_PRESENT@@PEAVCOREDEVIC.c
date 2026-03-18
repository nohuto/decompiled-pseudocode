/*
 * XREFs of ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03BD184
 * Callers:
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C02C16C8 (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C0002624 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C0009C20 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000A4D0 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000B970 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C0160498 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1C022615A (-InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C0373D20 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2I.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C037CE14 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ?Cleanup@BLTENTRY@@QEAAXE@Z @ 0x1C03BB450 (-Cleanup@BLTENTRY@@QEAAXE@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1C03BC43C (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C03BC67C (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C03BC8A4 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z @ 0x1C03BDFA4 (-RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03BEAB0 (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 */

__int64 __fastcall BLTQUEUE::Present(
        BLTQUEUE *this,
        struct DXGDEVICE **a2,
        struct _D3DKMT_PRESENT *a3,
        struct _DXGKARG_PRESENT *a4,
        struct COREDEVICEACCESS *a5)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  bool v10; // sf
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // r8d
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 Current; // r14
  char v15; // dl
  const wchar_t *v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  struct _LIST_ENTRY *v22; // rax
  struct BLTENTRY *v23; // r13
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  struct DXGADAPTER *Adapter; // rax
  int v28; // eax
  struct DXGCONTEXT *v29; // rdx
  const struct _DXGKARG_PRESENT *v30; // r9
  struct DXGDEVICE *v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  bool v36; // zf
  RECT *p_SrcRect; // rax
  struct tagRECT *v38; // rbx
  __int64 v39; // rbx
  const wchar_t *v40; // r9
  struct DXGDEVICE *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  struct DXGPROCESS *v46; // rax
  _DWORD *v47; // rbx
  D3DKMT_HANDLE hDestination; // edx
  struct _DXGKARG_PRESENT *v49; // rcx
  __int64 SubRectCnt; // rdx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  struct COREDEVICEACCESS *Timeout; // [rsp+20h] [rbp-F8h]
  void *v55; // [rsp+70h] [rbp-A8h] BYREF
  int v56; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+80h] [rbp-98h]
  char v58; // [rsp+88h] [rbp-90h]
  int v59; // [rsp+90h] [rbp-88h]
  struct DXGDEVICE *v60; // [rsp+98h] [rbp-80h]
  struct DXGPROCESS *v61; // [rsp+A0h] [rbp-78h] BYREF
  struct _LIST_ENTRY *v62; // [rsp+A8h] [rbp-70h]
  _QWORD v63[3]; // [rsp+B0h] [rbp-68h] BYREF
  _BYTE v64[80]; // [rsp+C8h] [rbp-50h] BYREF
  BLTQUEUE *v65; // [rsp+120h] [rbp+8h] BYREF
  struct DXGCONTEXT *v66; // [rsp+128h] [rbp+10h]
  struct _D3DKMT_PRESENT *v67; // [rsp+130h] [rbp+18h]
  struct _DXGKARG_PRESENT *v68; // [rsp+138h] [rbp+20h]

  v68 = a4;
  v67 = a3;
  v66 = (struct DXGCONTEXT *)a2;
  v65 = this;
  v56 = -1;
  v57 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v58 = 1;
    v56 = 12000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 12000);
  }
  else
  {
    v58 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v56, 12000);
  if ( (*((_DWORD *)this + 238) & 1) == 0 )
    goto LABEL_6;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a3->Flags.Value;
  if ( (*(_BYTE *)&Value & 7) == 0 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
    if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v56);
    LODWORD(Current) = -1073741811;
    return (unsigned int)Current;
  }
  v15 = *((_BYTE *)a2 + 441);
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2[2] + 2) + 16LL) + 436LL) & 0x10) != 0 )
  {
LABEL_22:
    if ( !v15 )
      goto LABEL_28;
    goto LABEL_23;
  }
  if ( !v15 )
  {
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 109) & 0x100) == 0 )
    {
      Current = -1073741811LL;
      WdLogSingleEntry2(2LL, -1073741811LL, this);
      v16 = L"0x%I64x unsupported adapter is used for display only Present 0x%I64x.";
LABEL_17:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v16, Current, (__int64)this, 0LL, 0LL, 0LL);
LABEL_18:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
      if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v56);
      return (unsigned int)Current;
    }
    goto LABEL_22;
  }
LABEL_23:
  if ( (*(_BYTE *)&Value & 4) == 0 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
    if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v56);
    return 3221225659LL;
  }
LABEL_28:
  if ( *((int *)this + 239) < 0 )
  {
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
    if ( !v58 )
      return 3221226166LL;
    v10 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_40:
    if ( v10 )
      McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v56);
    return 3221226166LL;
  }
  if ( (*(_BYTE *)&Value & 0x20) != 0 )
  {
    *((_BYTE *)this + 575) = 1;
    if ( (int)BLTQUEUE::IssueCommand(this) < 0 )
    {
      WdLogSingleEntry2(2LL, -1073741130LL, this);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x for FlipRestart from BLTQUEUE::Present 0x%I64x.",
        -1073741130LL,
        (__int64)this,
        0LL,
        0LL,
        0LL);
      goto LABEL_6;
    }
  }
  LODWORD(v55) = 0;
  v22 = (struct _LIST_ENTRY *)((char *)this + 232);
  v62 = (struct _LIST_ENTRY *)((char *)this + 232);
  do
  {
    v23 = BLTQUEUE::RemoveQueueHead(this, v22);
    v63[0] = v23;
    if ( v23 )
      break;
    if ( (a3->Flags.Value & 0x10) != 0 )
    {
      WdLogSingleEntry2(4LL, -1071775486LL, this);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
      if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v56);
      return 3223191810LL;
    }
    *((_BYTE *)this + 574) = 1;
    v24 = BLTQUEUE::IssueCommand(this);
    Current = v24;
    if ( v24 < 0 )
    {
      WdLogSingleEntry2(2LL, v24, this);
      v16 = L"0x%I64x for WaitEntry from BLTQUEUE::Present 0x%I64x.";
      goto LABEL_17;
    }
    LODWORD(v55) = (_DWORD)v55 + 1;
    v22 = v62;
  }
  while ( (unsigned int)v55 < 3 );
  if ( !v23 )
  {
    WdLogSingleEntry2(1LL, -1073741130LL, this);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"0x%I64x No BLT entry available for BLTQUEUE::Present 0x%I64x.",
      -1073741130LL,
      (__int64)this,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
    if ( !v58 )
      return 3221226166LL;
    LOBYTE(v8) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v10 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_40;
  }
  Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
  v28 = BLTENTRY::SetupPresentParameters(
          v23,
          this,
          (struct DXGCONTEXT *)a2,
          a3,
          v68,
          a5,
          BYTE1(*((_DWORD *)Adapter + 109)) & 1);
  Current = v28;
  if ( v28 < 0 )
  {
    WdLogSingleEntry2(2LL, v28, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Error 0x%I64x to set up Present parameters 0x%I64x.",
      Current,
      (__int64)this,
      0LL,
      0LL,
      0LL);
    goto LABEL_85;
  }
  if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 109) & 0x100) != 0 )
  {
    KeWaitForSingleObject((char *)this + 2720, Executive, 0, 0, 0LL);
    if ( (v67->Flags.Value & 8) != 0 )
      LODWORD(Current) = 0;
    else
      LODWORD(Current) = BLTQUEUE::PreparePresentIndirect(this, v29, v67, v30, Timeout, v23);
    KeReleaseMutex((PRKMUTEX)((char *)this + 2720), 0);
    goto LABEL_85;
  }
  if ( !*((_BYTE *)a2 + 441) )
  {
    v55 = 0LL;
    v60 = a2[7];
    v47 = (_DWORD *)((char *)v60 + 8);
    v63[2] = (char *)v60 + 8;
    if ( *(_DWORD *)v60 != -791674878
      || ((v67->Flags.Value & 4) == 0 ? (hDestination = v67->hDestination) : (hDestination = v67->hSource),
          *v47 != hDestination) )
    {
      WdLogSingleEntry3(2LL, Current, a2, this);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid Present request 0x%I64x from 0x%I64x for 0x%I64x.",
        Current,
        (__int64)a2,
        (__int64)this,
        0LL,
        0LL);
      LODWORD(Current) = -1073741811;
      v59 = -1073741811;
      goto LABEL_85;
    }
    if ( (v67->Flags.Value & 4) != 0 )
    {
      memset(v47, 0, 0x48uLL);
      v47[2] |= 4u;
    }
    else
    {
      v49 = v68;
      *((_DWORD *)v60 + 4) = v68->Flags.0;
      v47[3] = v49->Color;
      *((_OWORD *)v47 + 2) = v49->DstRect;
      *((_OWORD *)v47 + 1) = v49->SrcRect;
      SubRectCnt = v49->SubRectCnt;
      if ( (unsigned int)SubRectCnt > (unsigned int)(((unsigned __int64)*((unsigned int *)a2 + 12) - 80) >> 4) )
      {
        v61 = (struct DXGPROCESS *)(16 * SubRectCnt);
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        if ( (*(int (__fastcall **)(__int64, void **, _QWORD, struct DXGPROCESS **, int, int))VirtualMemoryInterface)(
               -1LL,
               &v55,
               0LL,
               &v61,
               4096,
               4) < 0 )
          goto LABEL_85;
        v49 = v68;
      }
      else
      {
        v55 = v47 + 13;
      }
      memmove(v55, v49->pDstSubRects, 16LL * v49->SubRectCnt);
      v47[12] = v68->SubRectCnt;
      *(_QWORD *)v47 = v55;
    }
    *(_DWORD *)v60 = -791674877;
    goto LABEL_85;
  }
  v31 = a2[2];
  v60 = *(struct DXGDEVICE **)(*((_QWORD *)v31 + 2) + 16LL);
  LODWORD(Current) = BLTQUEUE::PrepareStagingBuffer(this, v31, a3->hSource, a5);
  if ( (int)Current >= 0 )
  {
    v36 = (*(_DWORD *)&a3->Flags.0 & 0x80u) == 0;
    p_SrcRect = &a3->SrcRect;
    v38 = (struct tagRECT *)((char *)this + 2840);
    if ( !v36 )
      v38 = p_SrcRect;
    Current = (__int64)DXGPROCESS::GetCurrent(v33, v32, v34, v35);
    v61 = (struct DXGPROCESS *)Current;
    DXGPROCESS::GetAllocationSafe(Current, (DXGALLOCATIONREFERENCE *)&v55, v67->hSource);
    LODWORD(Current) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                         (struct DXGDEVICE *)((char *)v60 + 4344),
                         (struct DXGPROCESS *)Current,
                         (struct DXGCONTEXT *)a2,
                         *((_DWORD *)v55 + 5),
                         *((_DWORD *)this + 697),
                         v38,
                         v38,
                         1u,
                         v38,
                         0,
                         0LL);
    if ( (int)Current >= 0 )
    {
      ++*((_QWORD *)this + 354);
      LODWORD(v65) = *((_DWORD *)a2 + 6);
      LODWORD(Current) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
                           (struct DXGDEVICE *)((char *)v60 + 4344),
                           v61,
                           1u,
                           (unsigned int *)this + 704,
                           0,
                           1u,
                           (unsigned int *)&v65,
                           (unsigned __int64 *)this + 354,
                           0LL,
                           0LL,
                           0,
                           0,
                           0LL);
      v59 = Current;
      if ( (int)Current >= 0 )
      {
        v41 = a2[2];
        *((_QWORD *)v23 + 70) = *((_QWORD *)this + 354);
        *((_QWORD *)v23 + 71) = v41;
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v63, (BLTQUEUE *)((char *)this + 728), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v63);
        v46 = DXGPROCESS::GetCurrent(v43, v42, v44, v45);
        DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v64, v46);
        if ( *(_DWORD *)(*(_QWORD *)this + 140LL) )
        {
          LODWORD(Current) = -1073741823;
        }
        else
        {
          *((_DWORD *)v23 + 22) = 4;
          *((_DWORD *)v23 + 18) = *((_DWORD *)this + 64);
          *((_DWORD *)v23 + 23) = *((_DWORD *)this + 699);
          *((_QWORD *)v23 + 10) = *((_QWORD *)this + 351);
          LODWORD(Current) = v59;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v64);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v63);
        goto LABEL_70;
      }
      v39 = 1201LL;
      WdLogSingleEntry1(2LL, 1201LL);
      v40 = L"VmBusSendSignalSyncObject failed";
    }
    else
    {
      v39 = 1181LL;
      WdLogSingleEntry1(2LL, 1181LL);
      v40 = L"Blt failed";
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v40, v39, 0LL, 0LL, 0LL, 0LL);
LABEL_70:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v55);
    goto LABEL_85;
  }
  WdLogSingleEntry1(2LL, 1156LL);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"PrepareStagingBuffer failed", 1156LL, 0LL, 0LL, 0LL, 0LL);
LABEL_85:
  if ( (int)Current < 0 )
  {
    BLTENTRY::Cleanup((struct _EX_RUNDOWN_REF **)v23, 1);
    BLTQUEUE::InsertQueueHead((__int64)this, (__int64 *)v62, (__int64)v23);
    goto LABEL_18;
  }
  BLTQUEUE::InsertQueueTail((__int64)this, (__int64)this + 216, (__int64)v23);
  *((LARGE_INTEGER *)this + 106) = KeQueryPerformanceCounter(0LL);
  KeSetEvent((PRKEVENT)((char *)this + 520), 0, 0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
  if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v52, &EventProfilerExit, v53, v56);
  return 0LL;
}
