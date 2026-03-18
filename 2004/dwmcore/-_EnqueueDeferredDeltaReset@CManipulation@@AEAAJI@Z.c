/*
 * XREFs of ?_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z @ 0x1801D69B0
 * Callers:
 *     ?GetProperty@CManipulation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801D5550 (-GetProperty@CManipulation@@UEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18009A50C (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7C34 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulation::_EnqueueDeferredDeltaReset(CManipulation *this, int a2)
{
  int v3; // edx
  unsigned int v4; // ebx
  int v5; // r9d
  unsigned __int8 v6; // cl
  char v7; // al
  char v8; // cl
  CComposition *v9; // rbx
  int ManipulationManager; // eax
  __int64 v11; // rax
  unsigned int v13; // [rsp+20h] [rbp-18h]
  struct CManipulationManager *v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = 0LL;
  v3 = a2 - 1;
  if ( !v3 )
  {
    v8 = *((_BYTE *)this + 440);
    v7 = v8 | 1;
LABEL_7:
    *((_BYTE *)this + 440) = v7;
    if ( (v8 & 1) == 0 )
    {
      v9 = (CComposition *)*((_QWORD *)this + 2);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
      ManipulationManager = CComposition::GetManipulationManager(v9, &v14);
      v4 = ManipulationManager;
      if ( ManipulationManager < 0 )
      {
        v13 = 929;
        goto LABEL_12;
      }
      v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)v14 + 2) + 504LL) + 88LL))(*(_QWORD *)(*((_QWORD *)v14 + 2) + 504LL));
      ManipulationManager = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), CManipulation *, __int64))(*(_QWORD *)v11 + 144LL))(
                              v11,
                              CManipulation::s_ResetDeltaProperties,
                              this,
                              4LL);
      v4 = ManipulationManager;
      if ( ManipulationManager < 0 )
      {
        v13 = 934;
LABEL_12:
        v5 = ManipulationManager;
        goto LABEL_4;
      }
    }
    v4 = 0;
    goto LABEL_14;
  }
  if ( v3 == 2 )
  {
    v6 = *((_BYTE *)this + 440);
    v7 = v6 | 2;
    v8 = v6 >> 1;
    goto LABEL_7;
  }
  v4 = -2147024809;
  v5 = -2147024809;
  v13 = 924;
LABEL_4:
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v5, v13, 0LL);
LABEL_14:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
  return v4;
}
