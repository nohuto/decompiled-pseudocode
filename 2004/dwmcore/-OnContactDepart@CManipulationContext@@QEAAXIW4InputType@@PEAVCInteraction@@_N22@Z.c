/*
 * XREFs of ?OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z @ 0x180232E04
 * Callers:
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1802244E8 (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CFD54 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1802234E8 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x180232480 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType.c)
 *     ?RemoveKey@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBI@Z @ 0x1802337E0 (-RemoveKey@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInte.c)
 */

void __fastcall CManipulationContext::OnContactDepart(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD),
        char a5,
        char a6,
        char a7)
{
  __int64 (__fastcall ***v7)(_QWORD); // rbx
  int Key; // eax
  __int64 (__fastcall ***v12)(_QWORD); // rsi
  __int64 v13; // rsi
  __int64 (__fastcall ***v14)(_QWORD); // [rsp+50h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = a2;
  v7 = a4;
  v14 = a4;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v14);
  if ( !v7 )
  {
    Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
            a1 + 56,
            (int *)&v15);
    if ( Key == -1 )
    {
      v14 = 0LL;
      v12 = 0LL;
    }
    else
    {
      v14 = *(__int64 (__fastcall ****)(_QWORD))(*(_QWORD *)(a1 + 64) + 8LL * Key);
      v7 = v14;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v14);
      v12 = v7;
    }
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v14);
    if ( v12 )
      (*v12)[1](v12);
  }
  if ( a5 )
  {
    v13 = (__int64)v7;
    if ( v7 )
    {
      do
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 56LL))(v13, a3);
        v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v13);
      }
      while ( v13 );
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 136) + 56LL))(*(_QWORD *)(a1 + 136), a3);
  }
  CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::RemoveKey(
    a1 + 56,
    &v15);
  if ( !a5
    && ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))(*v7)[27])(v7, 0LL)
    && ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD, _QWORD))(*v7)[28])(v7, a2, 0LL) )
  {
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))(*v7)[29])(v7, a2);
  }
  else if ( a7 )
  {
    NtDCompositionUpdatePointerCapture(0LL, a2);
  }
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, a2, 0LL);
  CManipulationContext::CleanTreeState((__int64)v7, a1, *(RTL_SRWLOCK **)(a1 + 40), a6, a3);
  if ( v7 )
    (*v7)[1](v7);
}
