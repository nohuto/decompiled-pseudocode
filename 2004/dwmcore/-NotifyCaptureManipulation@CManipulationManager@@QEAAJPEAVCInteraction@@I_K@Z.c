/*
 * XREFs of ?NotifyCaptureManipulation@CManipulationManager@@QEAAJPEAVCInteraction@@I_K@Z @ 0x180223944
 * Callers:
 *     ?ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_CAPTUREMANIPULATIONINCOMPOSITOR@@@Z @ 0x1801C7AA4 (-ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x1800460E0 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18009A4C4 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x18009C74C (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0ppqx_EventWriteTransfer @ 0x180226C00 (McTemplateU0ppqx_EventWriteTransfer.c)
 */

__int64 __fastcall CManipulationManager::NotifyCaptureManipulation(
        CManipulationManager *this,
        struct CInteraction *a2,
        int a3,
        __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // r9
  void *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
  {
    v7 = *((_QWORD *)a2 + 13);
    LODWORD(v8) = 0;
    if ( v7 )
      v8 = *(_QWORD *)(v7 + 16);
    McTemplateU0ppqx_EventWriteTransfer((_DWORD)this, (_DWORD)a2, (_DWORD)a2 + 8, v8, a3, a4);
  }
  v9 = operator new(0x48uLL);
  v11 = (__int64)v9;
  if ( v9 )
    memset_0(v9, 0, 0x48uLL);
  else
    v11 = 0LL;
  if ( v11 )
  {
    *(_DWORD *)v11 = 6;
    v13 = *(_QWORD *)(v11 + 8);
    if ( v13 )
    {
      *(_QWORD *)(v11 + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)(v11 + 16), (__int64)a2);
    *(_DWORD *)(v11 + 24) = a3;
    *(_QWORD *)(v11 + 32) = a4;
    v16 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v15, v14, v11);
    v12 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x2BFu, 0LL);
      CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v11);
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x2B0u, 0LL);
  }
  return v12;
}
