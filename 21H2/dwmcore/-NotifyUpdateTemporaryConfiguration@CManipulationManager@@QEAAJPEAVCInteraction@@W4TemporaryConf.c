/*
 * XREFs of ?NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x18017CC64
 * Callers:
 *     ?SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1801F2FB0 (-SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionCo.c)
 * Callees:
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x18002B7E0 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18006D8AC (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x1800E5668 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::NotifyUpdateTemporaryConfiguration(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        int a6)
{
  void *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _DWORD *v15; // rsi
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // edi

  v9 = operator new(0x48uLL);
  v11 = (__int64)v9;
  if ( !v9 )
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, -2147024882, 0x363u);
    return v18;
  }
  memset_0(v9, 0, 0x48uLL);
  *(_DWORD *)v11 = 8;
  v12 = *(_QWORD *)(v11 + 8);
  if ( v12 )
  {
    *(_QWORD *)(v11 + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)(v11 + 16), a2);
  *(_BYTE *)(v11 + 64) &= ~1u;
  *(_BYTE *)(v11 + 64) |= a5;
  *(_DWORD *)(v11 + 40) = a4;
  *(_DWORD *)(v11 + 44) = a3;
  *(_DWORD *)(v11 + 48) = 1;
  v15 = operator new(4uLL);
  if ( v15 )
  {
    *v15 = a6;
    *(_QWORD *)(v11 + 56) = v15;
    v16 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v14, v13, v11);
    v18 = v16;
    if ( v16 >= 0 )
      return v18;
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0x37Au);
  }
  else
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, -2147024882, 0x36Fu);
    v15 = 0LL;
  }
  CManipulationManager::InteractionUpdate::`scalar deleting destructor'((CManipulationManager::InteractionUpdate *)v11);
  if ( v15 )
    operator delete(v15);
  return v18;
}
