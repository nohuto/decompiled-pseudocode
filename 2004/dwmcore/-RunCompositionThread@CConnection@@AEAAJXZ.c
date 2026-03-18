/*
 * XREFs of ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800268FC
 * Callers:
 *     ?CompositionThreadEntryPoint@CConnection@@CAKPEAX@Z @ 0x1800268F0 (-CompositionThreadEntryPoint@CConnection@@CAKPEAX@Z.c)
 * Callees:
 *     ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180026D44 (-Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x180027244 (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z.c)
 *     _anonymous_namespace_::State::State @ 0x1800283EC (_anonymous_namespace_--State--State.c)
 *     ??0CProcessResourceAttributionReporter@@AEAA@XZ @ 0x1800292C8 (--0CProcessResourceAttributionReporter@@AEAA@XZ.c)
 *     ??0CEnergyReporter@@AEAA@XZ @ 0x18002933C (--0CEnergyReporter@@AEAA@XZ.c)
 *     ??0CProcessAttributionReporter@@AEAA@XZ @ 0x1800293D8 (--0CProcessAttributionReporter@@AEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18009B990 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800A2588 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800D600C (McGenEventWrite_EventWriteTransfer.c)
 *     ?Create@CKernelTransport@@SAJPEAPEAVCTransport@@@Z @ 0x1800DB208 (-Create@CKernelTransport@@SAJPEAPEAVCTransport@@@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??1CProcessAttributionManager@@AEAA@XZ @ 0x180153314 (--1CProcessAttributionManager@@AEAA@XZ.c)
 *     _anonymous_namespace_::State::_State @ 0x180154030 (_anonymous_namespace_--State--_State.c)
 *     ??1CProcessAttributionReporter@@AEAA@XZ @ 0x180154750 (--1CProcessAttributionReporter@@AEAA@XZ.c)
 *     ??1CProcessResourceAttributionReporter@@AEAA@XZ @ 0x180154D64 (--1CProcessResourceAttributionReporter@@AEAA@XZ.c)
 *     ??_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z @ 0x1801556F0 (--_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CConnection::RunCompositionThread(CConnection *this)
{
  CProcessAttributionManager *v2; // rax
  void *v3; // rax
  void *v4; // rax
  void *v5; // rax
  CEnergyReporter *v6; // rax
  CProcessAttributionReporter *v7; // rax
  CProcessAttributionReporter *v8; // rax
  void *v9; // rax
  union _SLIST_HEADER *v10; // rax
  struct CTransport **v11; // r14
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // ebx
  struct CTransport *v15; // rbx
  CPartitionVerticalBlankScheduler *v16; // rax
  CPartitionVerticalBlankScheduler *v17; // rax
  unsigned int v18; // ecx
  CPartitionVerticalBlankScheduler *v19; // rsi
  unsigned int v20; // ecx
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r8
  void (__fastcall ***v24)(_QWORD, __int64); // rcx
  CProcessAttributionReporter *v25; // rdi
  CProcessResourceAttributionReporter *v26; // rdi
  CEnergyReporter *v27; // rdi
  void (__fastcall ***v28)(_QWORD, __int64); // rcx
  void *v29; // rdi
  CProcessAttributionManager *v30; // rdi
  unsigned int v32; // [rsp+20h] [rbp-68h]
  char v33[16]; // [rsp+30h] [rbp-58h] BYREF
  char v34[16]; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  v2 = (CProcessAttributionManager *)DefaultHeap::AllocClear(0x30uLL);
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *(_QWORD *)v2 = 0LL;
  *((_QWORD *)v2 + 1) = 0LL;
  *((_QWORD *)v2 + 2) = 0LL;
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  lpMem = v2;
  v3 = operator new(0x40uLL);
  if ( v3 )
    v4 = (void *)anonymous_namespace_::State::State(v3);
  else
    v4 = 0LL;
  qword_180345450 = v4;
  v5 = DefaultHeap::Alloc(0x78uLL);
  if ( v5 )
    v6 = CEnergyReporter::CEnergyReporter(v5);
  else
    v6 = 0LL;
  qword_180345458 = v6;
  v7 = (CProcessAttributionReporter *)DefaultHeap::Alloc(0x80uLL);
  if ( v7 )
    v8 = CProcessAttributionReporter::CProcessAttributionReporter(v7);
  else
    v8 = 0LL;
  qword_180345460 = v8;
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v9 = DefaultHeap::Alloc(0x40uLL);
  if ( v9 )
    v10 = (union _SLIST_HEADER *)CProcessResourceAttributionReporter::CProcessResourceAttributionReporter(v9);
  else
    v10 = 0LL;
  qword_180345468 = (CProcessResourceAttributionReporter *)v10;
  if ( !v10 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  InitializeSListHead(v10 + 1);
  v11 = (struct CTransport **)((char *)this + 40);
  v12 = CKernelTransport::Create((struct CTransport **)this + 5);
  v14 = v12;
  if ( v12 < 0 )
  {
    v32 = 200;
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, v32, 0LL);
  }
  else
  {
    v15 = *v11;
    v16 = (CPartitionVerticalBlankScheduler *)DefaultHeap::AllocClear(0x3E50uLL);
    if ( !v16 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v17 = CPartitionVerticalBlankScheduler::CPartitionVerticalBlankScheduler(v16, v15, this);
    v19 = v17;
    if ( !v17 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024882, 0x1Fu, 0LL);
      v14 = -2147024882;
LABEL_20:
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v14, 0xCDu, 0LL);
      goto LABEL_34;
    }
    v21 = CPartitionVerticalBlankScheduler::Initialize(v17);
    v14 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v21, 0x20u, 0LL);
      CPartitionVerticalBlankScheduler::`scalar deleting destructor'(v19, 1u);
    }
    else
    {
      *((_QWORD *)this + 2) = v19;
    }
    if ( v14 < 0 )
      goto LABEL_20;
    SetEvent(*((HANDLE *)this + 4));
    *((_BYTE *)this + 56) = 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_VBLANK_LOOP_Start,
        v22,
        1LL,
        v33);
    do
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 128LL))(*((_QWORD *)this + 2));
      v14 = v12;
      if ( v12 < 0 )
      {
        v32 = 218;
        goto LABEL_33;
      }
    }
    while ( *((_BYTE *)this + 56) );
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop,
        v23,
        1LL,
        v34);
  }
LABEL_34:
  (*(void (__fastcall **)(CConnection *, __int64))(*(_QWORD *)this + 40LL))(this, 2291663905LL);
  v24 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
  if ( v24 )
  {
    (**v24)(v24, 1LL);
    *((_QWORD *)this + 2) = 0LL;
  }
  if ( *v11 )
  {
    (**(void (__fastcall ***)(struct CTransport *, __int64))*v11)(*v11, 1LL);
    *v11 = 0LL;
  }
  v25 = qword_180345460;
  if ( qword_180345460 )
  {
    CProcessAttributionReporter::~CProcessAttributionReporter(qword_180345460);
    operator delete(v25, 0x80uLL);
  }
  v26 = qword_180345468;
  qword_180345460 = 0LL;
  if ( qword_180345468 )
  {
    CProcessResourceAttributionReporter::~CProcessResourceAttributionReporter(qword_180345468);
    operator delete(v26, 0x40uLL);
  }
  v27 = qword_180345458;
  qword_180345468 = 0LL;
  if ( qword_180345458 )
  {
    WaitForThreadpoolWorkCallbacks(*((PTP_WORK *)qword_180345458 + 9), 1);
    CloseThreadpoolWork(*((PTP_WORK *)v27 + 9));
    v28 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)v27 + 6);
    if ( v28 )
      (**v28)(v28, 1LL);
    DynArrayImpl<0>::~DynArrayImpl<0>((char *)v27 + 88);
    DynArrayImpl<0>::~DynArrayImpl<0>((char *)v27 + 16);
    operator delete(v27, 0x78uLL);
  }
  v29 = qword_180345450;
  qword_180345458 = 0LL;
  if ( qword_180345450 )
  {
    anonymous_namespace_::State::_State(qword_180345450);
    operator delete(v29, 0x40uLL);
  }
  v30 = lpMem;
  qword_180345450 = 0LL;
  if ( lpMem )
  {
    CProcessAttributionManager::~CProcessAttributionManager(lpMem);
    operator delete(v30);
  }
  lpMem = 0LL;
  return (unsigned int)v14;
}
