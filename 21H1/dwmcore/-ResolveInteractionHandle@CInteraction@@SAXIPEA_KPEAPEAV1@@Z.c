/*
 * XREFs of ?ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z @ 0x1801CACC4
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180227194 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x18006FDA0 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800DB494 (-GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInteraction::ResolveInteractionHandle(unsigned int a1, unsigned __int64 *a2, struct CInteraction **a3)
{
  struct CInteraction *v6; // rbx
  struct CInteraction::HANDLE_ENTRY *Entry; // rax
  struct CInteraction *v8; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  if ( a1 )
  {
    v6 = 0LL;
    v8 = 0LL;
    AcquireSRWLockShared(&CInteraction::s_InteractionHandleTableLock);
    Entry = CInteraction::GetEntry(a1);
    if ( Entry )
    {
      Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)&v8, *((_QWORD *)Entry + 1));
      v6 = v8;
      if ( v8 )
      {
        if ( a2 )
        {
          if ( *a2 < *((_QWORD *)v8 + 213) )
          {
            v6 = 0LL;
            (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v8 + 8LL))(v8);
          }
        }
      }
    }
    *a3 = v6;
    ReleaseSRWLockShared(&CInteraction::s_InteractionHandleTableLock);
  }
}
