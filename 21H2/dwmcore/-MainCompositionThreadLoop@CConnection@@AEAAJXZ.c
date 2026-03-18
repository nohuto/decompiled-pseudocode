/*
 * XREFs of ?MainCompositionThreadLoop@CConnection@@AEAAJXZ @ 0x1800DD6EC
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800DD5DC (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x18002E4BC (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x1800DD7C4 (-Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?Create@CKernelTransport@@SAJPEAPEAVCTransport@@@Z @ 0x1800F72B0 (-Create@CKernelTransport@@SAJPEAPEAVCTransport@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z @ 0x1801ADE00 (--_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CConnection::MainCompositionThreadLoop(struct CTransport **this)
{
  int v2; // ebx
  struct CTransport *v3; // rbx
  CPartitionVerticalBlankScheduler *v4; // rax
  CPartitionVerticalBlankScheduler *v5; // rax
  __int64 v6; // rcx
  CPartitionVerticalBlankScheduler *v7; // rsi
  int v8; // eax
  __int64 v9; // rcx
  struct CTransport *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rdx
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = CKernelTransport::Create(this + 1);
  if ( v2 < 0 )
  {
    v13 = 70LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v3 = this[1];
  v4 = (CPartitionVerticalBlankScheduler *)DefaultHeap::AllocClear(0x4340uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CPartitionVerticalBlankScheduler::CPartitionVerticalBlankScheduler(v4, v3, (struct CConnection *)this);
  v7 = v5;
  if ( !v5 )
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, -2147024882, 0x22u);
    goto LABEL_12;
  }
  v8 = CPartitionVerticalBlankScheduler::Initialize(v5);
  v2 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x23u);
    CPartitionVerticalBlankScheduler::`scalar deleting destructor'(v7, 1u);
LABEL_12:
    v13 = 75LL;
    goto LABEL_13;
  }
  v10 = this[6];
  this[4] = v7;
  SetEvent(v10);
  *((_BYTE *)this + 24) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_VBLANK_LOOP_Start,
      v11,
      1u,
      &v15);
  do
  {
    v2 = (*(__int64 (__fastcall **)(struct CTransport *))(*(_QWORD *)this[4] + 160LL))(this[4]);
    if ( v2 < 0 )
    {
      v13 = 89LL;
      goto LABEL_13;
    }
  }
  while ( *((_BYTE *)this + 24) );
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop,
      v12,
      1u,
      &v16);
  return 0LL;
}
