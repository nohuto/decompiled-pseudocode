/*
 * XREFs of ?Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ @ 0x1801C5F40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18006D9E8 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7124 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1800DC4DC (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x1801C5780 (-GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost.c)
 */

__int64 __fastcall CInteraction::Push2DVisualTransformToRenderThread(CInteraction *this)
{
  CComposition *v1; // rbx
  int ManipulationManager; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi
  struct CManipulationManager *v6; // rbx
  __int64 v7; // rbx
  unsigned int v9; // [rsp+20h] [rbp-69h]
  struct _D3DMATRIX v10; // [rsp+80h] [rbp-9h] BYREF
  struct IMessageCallSendHost *v11; // [rsp+F0h] [rbp+67h] BYREF
  struct CManipulationManager *v12; // [rsp+F8h] [rbp+6Fh] BYREF
  CInteraction *v13; // [rsp+100h] [rbp+77h]
  __int64 v14; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = (CComposition *)*((_QWORD *)this + 3);
  v12 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  ManipulationManager = CComposition::GetManipulationManager(v1, &v12);
  v5 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v9 = 726;
    goto LABEL_10;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  v6 = v12;
  ManipulationManager = CManipulationManager::GetManipulationThreadMessageCallSendHost(v12, &v11);
  v5 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v9 = 728;
    goto LABEL_10;
  }
  v7 = *((_QWORD *)v6 + 7);
  if ( v7 )
  {
    (**(void (__fastcall ***)(CInteraction *))this)(this);
    CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)((char *)this + 1252), &v10);
    v13 = this;
    v14 = v7;
    ManipulationManager = CoreUICallSend(v11, &v14, 1LL, 10LL, 3, &unk_18028862A);
    v5 = ManipulationManager;
    if ( ManipulationManager >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 504LL) + 96LL))(
        *(_QWORD *)(*((_QWORD *)this + 3) + 504LL),
        0LL,
        0x4000LL);
      goto LABEL_11;
    }
    v9 = 740;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, ManipulationManager, v9, 0LL);
    goto LABEL_11;
  }
  v5 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147467259, 0x2DBu, 0LL);
LABEL_11:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  return v5;
}
