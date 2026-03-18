/*
 * XREFs of ?Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ @ 0x1801CA710
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18006FEEC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1234 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1800DB84C (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x1801C9F50 (-GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost.c)
 */

__int64 __fastcall CInteraction::Push2DVisualTransformToRenderThread(CInteraction *this)
{
  CComposition *v1; // rbx
  int ManipulationManager; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi
  struct CManipulationManager *v6; // rbx
  __int64 v7; // rbx
  struct _D3DMATRIX *D3DMatrix; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  unsigned int v13; // [rsp+20h] [rbp-69h]
  unsigned int v14; // [rsp+20h] [rbp-69h]
  _OWORD v15[4]; // [rsp+40h] [rbp-49h] BYREF
  struct _D3DMATRIX v16; // [rsp+80h] [rbp-9h] BYREF
  struct IMessageCallSendHost *v17; // [rsp+F0h] [rbp+67h] BYREF
  struct CManipulationManager *v18; // [rsp+F8h] [rbp+6Fh] BYREF
  CInteraction *v19; // [rsp+100h] [rbp+77h] BYREF
  __int64 v20; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = (CComposition *)*((_QWORD *)this + 3);
  v18 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
  ManipulationManager = CComposition::GetManipulationManager(v1, &v18);
  v5 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v14 = 726;
    goto LABEL_10;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
  v6 = v18;
  ManipulationManager = CManipulationManager::GetManipulationThreadMessageCallSendHost(v18, &v17);
  v5 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v14 = 728;
    goto LABEL_10;
  }
  v7 = *((_QWORD *)v6 + 7);
  if ( v7 )
  {
    (**(void (__fastcall ***)(CInteraction *))this)(this);
    D3DMatrix = CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)((char *)this + 1252), &v16);
    v19 = this;
    v20 = v7;
    v9 = *(_OWORD *)&D3DMatrix->_21;
    v15[0] = *(_OWORD *)&D3DMatrix->_11;
    v10 = *(_OWORD *)&D3DMatrix->_31;
    v15[1] = v9;
    v11 = *(_OWORD *)&D3DMatrix->_41;
    v15[2] = v10;
    LOWORD(v13) = 3;
    v15[3] = v11;
    ManipulationManager = CoreUICallSend(v17, &v20, 1LL, 10LL, v13, &unk_1802CFB1A, (unsigned int)&v19, v15);
    v5 = ManipulationManager;
    if ( ManipulationManager >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 504LL) + 96LL))(
        *(_QWORD *)(*((_QWORD *)this + 3) + 504LL),
        0LL,
        0x4000LL);
      goto LABEL_11;
    }
    v14 = 740;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, ManipulationManager, v14, 0LL);
    goto LABEL_11;
  }
  v5 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147467259, 0x2DBu, 0LL);
LABEL_11:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
  return v5;
}
