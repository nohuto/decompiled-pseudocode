/*
 * XREFs of ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1802244E8
 * Callers:
 *     ?OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z @ 0x180223E18 (-OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z.c)
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x180224110 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180224640 (-ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CFD54 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D0844 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ @ 0x1801C8348 (-ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x1801E4E14 (McTemplateU0pq_EventWriteTransfer.c)
 *     ?Remove@?$CArray@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@Z @ 0x180225314 (-Remove@-$CArray@V-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr.c)
 *     ?RemoveKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBI@Z @ 0x180225484 (-RemoveKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPt.c)
 *     ?RemoveKey@?$CMap@IW4InputType@@V?$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBI@Z @ 0x1802254B4 (-RemoveKey@-$CMap@IW4InputType@@V-$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBI@Z.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x180232480 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType.c)
 *     ?OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z @ 0x180232E04 (-OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x180235588 (-clear@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUDEV.c)
 */

__int64 __fastcall CManipulationManager::OnUp(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 (__fastcall ***a5)(_QWORD),
        char a6,
        char a7,
        char a8)
{
  __int64 (__fastcall ***v8)(_QWORD); // rbx
  unsigned int v9; // ebp
  const EVENT_DESCRIPTOR *v13; // rdx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // [rsp+70h] [rbp+18h] BYREF

  v19 = a3;
  v8 = a5;
  v9 = a4;
  if ( a5 )
  {
    CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::RemoveKey(
      a1 + 184,
      &v19);
    CMap<unsigned int,enum InputType,CMapEqualHelper<unsigned int,enum InputType>>::RemoveKey(a1 + 224, &v19);
    CManipulationContext::OnContactDepart(v8, a3, v9, a2, a6, a7, a8);
    if ( v8[6] )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
      {
        v13 = (const EVENT_DESCRIPTOR *)&MANIPULATION_CONTEXT_CONTACT_DEPARTED;
        goto LABEL_7;
      }
    }
    else
    {
      a5 = v8;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&a5);
      CArray<Microsoft::WRL::ComPtr<CManipulationContext>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationContext>>>::Remove(
        a1 + 208,
        &a5);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&a5);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
      {
        v13 = (const EVENT_DESCRIPTOR *)&MANIPULATION_CONTEXT_DESTROYED;
LABEL_7:
        McTemplateU0pq_EventWriteTransfer(Microsoft_Windows_Dwm_Core_Provider_Context, v13, (__int64)v8, a3);
      }
    }
    result = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD, _QWORD))(*v8)[9])(v8, a3, 0LL);
    goto LABEL_10;
  }
  LOBYTE(a4) = a7;
  result = CManipulationContext::CleanTreeState(a2, 0LL, *(_QWORD *)(a1 + 16), a4, v9);
LABEL_10:
  if ( !*(_DWORD *)(a1 + 216) )
  {
    CInteraction::ResetDefaultStateForAllInteractions(v16, v15, v17, v18);
    return std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::clear();
  }
  return result;
}
