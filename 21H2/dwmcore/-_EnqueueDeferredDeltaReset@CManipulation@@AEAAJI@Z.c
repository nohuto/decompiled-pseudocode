/*
 * XREFs of ?_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z @ 0x1801D56A0
 * Callers:
 *     ?GetProperty@CManipulation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801D4240 (-GetProperty@CManipulation@@UEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800625D8 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CB404 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800E03E0 (--1-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?ScheduleDeferredWorkOnRenderThread@CManipulationManager@@QEAAJP6AJPEAX@Z0W4MsgPriority@@@Z @ 0x180227340 (-ScheduleDeferredWorkOnRenderThread@CManipulationManager@@QEAAJP6AJPEAX@Z0W4MsgPriority@@@Z.c)
 */

__int64 __fastcall CManipulation::_EnqueueDeferredDeltaReset(CManipulation *this, int a2)
{
  int v3; // edx
  int v4; // ebx
  unsigned __int8 v5; // cl
  char v6; // al
  char v7; // cl
  CComposition *v8; // rbx
  int ManipulationManager; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v13; // [rsp+20h] [rbp-18h]
  struct CManipulationManager *v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = 0LL;
  v3 = a2 - 1;
  if ( v3 )
  {
    if ( v3 != 2 )
    {
      v4 = -2147024809;
      v13 = 924;
LABEL_4:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v4, v13, 0LL);
      goto LABEL_14;
    }
    v5 = *((_BYTE *)this + 440);
    v6 = v5 | 2;
    v7 = v5 >> 1;
  }
  else
  {
    v7 = *((_BYTE *)this + 440);
    v6 = v7 | 1;
  }
  *((_BYTE *)this + 440) = v6;
  if ( (v7 & 1) != 0 )
    goto LABEL_13;
  v8 = (CComposition *)*((_QWORD *)this + 2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
  ManipulationManager = CComposition::GetManipulationManager(v8, &v14);
  v4 = ManipulationManager;
  if ( ManipulationManager >= 0 )
  {
    (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)this + 8LL))(this);
    v4 = CManipulationManager::ScheduleDeferredWorkOnRenderThread(v14, v11, this);
    if ( v4 < 0 )
    {
      (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)this + 16LL))(this);
      v13 = 943;
      goto LABEL_4;
    }
LABEL_13:
    v4 = 0;
    goto LABEL_14;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, ManipulationManager, 0x3A1u, 0LL);
LABEL_14:
  Microsoft::WRL::ComPtr<CManipulationManager>::~ComPtr<CManipulationManager>((__int64 *)&v14);
  return (unsigned int)v4;
}
