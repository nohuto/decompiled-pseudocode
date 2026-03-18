/*
 * XREFs of ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180026D44
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800268FC (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180026EC0 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAPEAVCComposition@@@Z @ 0x18002991C (-Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCD.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::Initialize(CPartitionVerticalBlankScheduler *this)
{
  HANDLE WaitableTimerW; // rax
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  struct CConnection *v6; // r8
  struct CTransport *v7; // rcx
  signed int LastError; // eax
  unsigned int v10; // ecx
  unsigned int v11; // [rsp+20h] [rbp-18h]

  *((_QWORD *)this + 1) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 56LL))(*((_QWORD *)this + 6));
  SetLastError(0);
  WaitableTimerW = CreateWaitableTimerW(0LL, 0, 0LL);
  *((_QWORD *)this + 3) = WaitableTimerW;
  if ( WaitableTimerW )
  {
    CPartitionVerticalBlankScheduler::Reinitialize(this);
    v3 = CoreUICreateEx(1LL, (char *)this + 136);
    v5 = v3;
    if ( v3 < 0 )
    {
      v11 = 223;
    }
    else
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 17) + 40LL))(
             *((_QWORD *)this + 17),
             (char *)this + 144);
      v5 = v3;
      if ( v3 < 0 )
      {
        v11 = 224;
      }
      else
      {
        v6 = (struct CConnection *)*((_QWORD *)this + 7);
        v7 = (struct CTransport *)*((_QWORD *)this + 6);
        *((_BYTE *)this + 5372) = 1;
        v3 = CGlobalComposition::Create(
               v7,
               this,
               v6,
               (CPartitionVerticalBlankScheduler *)((char *)this + 11200),
               (struct CComposition **)this + 8);
        v5 = v3;
        if ( v3 >= 0 )
          return v5;
        v11 = 234;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, v11, 0LL);
    return v5;
  }
  LastError = GetLastError();
  v5 = LastError;
  if ( LastError > 0 )
    v5 = (unsigned __int16)LastError | 0x80070000;
  if ( (v5 & 0x80000000) == 0 )
    v5 = -2003304445;
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v5, 0xD8u, 0LL);
  return v5;
}
