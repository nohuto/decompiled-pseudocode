/*
 * XREFs of ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x1802314F0
 * Callers:
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x180223038 (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ?OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z @ 0x180231E74 (-OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18006D354 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CED94 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?LockComposition@CManipulationManager@@SAXPEAVCComposition@@_N@Z @ 0x1800D605C (-LockComposition@CManipulationManager@@SAXPEAVCComposition@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x18022206C (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z @ 0x1802319FC (-GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z.c)
 *     ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z @ 0x180232700 (-RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z.c)
 *     ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x180233E6C (-VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x180233EAC (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 */

void __fastcall CManipulationContext::CleanTreeState(__int64 a1, __int64 a2, RTL_SRWLOCK *a3, char a4, int a5)
{
  __int64 (__fastcall ***v6)(_QWORD); // rbx
  bool *v10; // rdx
  char v11; // r14
  __int64 v12; // rbp
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 (__fastcall ***v15)(_QWORD); // rcx
  __int64 v16; // rax
  const struct CVisual *VisualEffectiveParentImpl; // rbx
  char v18; // di
  __int64 (__fastcall ***v19)(_QWORD); // [rsp+60h] [rbp+8h] BYREF
  char v20; // [rsp+78h] [rbp+20h]

  v20 = a4;
  v19 = (__int64 (__fastcall ***)(_QWORD))a1;
  v6 = (__int64 (__fastcall ***)(_QWORD))a1;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v19);
  v11 = 1;
  if ( !a4 )
    CManipulationManager::LockComposition((struct CComposition *)a3, 1);
  v12 = a5;
  while ( v6 )
  {
    v13 = (__int64)v6[26];
    v14 = v12 - 1;
    if ( (unsigned int)(v12 - 1) >= 6 )
      v14 = 0LL;
    --*((_DWORD *)v6 + v14 + 60);
    if ( !(unsigned int)CInteraction::GetTotalNumContacts((CInteraction *)v6) )
    {
      CManipulationContext::RemoveInteractionLeafFromTree((struct CInteraction *)v6);
      if ( a2 )
      {
        v15 = *(__int64 (__fastcall ****)(_QWORD))(a2 + 48);
        if ( v6 == v15 )
        {
          if ( v15 )
          {
            *(_QWORD *)(a2 + 48) = 0LL;
            (*v15)[1](v15);
          }
        }
      }
    }
    Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)&v19, v13);
    v6 = v19;
  }
  if ( a1 )
  {
    v16 = *(_QWORD *)(a1 + 104);
    VisualEffectiveParentImpl = 0LL;
    if ( v16 )
      VisualEffectiveParentImpl = *(const struct CVisual **)(v16 + 16);
    for ( ;
          VisualEffectiveParentImpl;
          VisualEffectiveParentImpl = CManipulationContext::GetVisualEffectiveParentImpl(VisualEffectiveParentImpl, v10) )
    {
      if ( v11 )
      {
        v18 = *((_BYTE *)VisualEffectiveParentImpl + 94);
        if ( (v18 & 1) == 0
          || CManipulationContext::VisualHasActiveInteraction(VisualEffectiveParentImpl, 0)
          || CManipulationContext::VisualHasAnyChildFlagged(VisualEffectiveParentImpl) )
        {
          v11 = 0;
        }
        else
        {
          *((_BYTE *)VisualEffectiveParentImpl + 94) = v18 & 0xFE;
        }
      }
    }
  }
  if ( !v20 )
    ReleaseSRWLockShared(a3 + 65);
}
