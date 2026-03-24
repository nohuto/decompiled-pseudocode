/*
 * XREFs of ?s_RenderThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z @ 0x1800AA0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?s_EndpointProc@CManipulationManager@@KAJAEBUMessageCallThreadInfo@1@PEBUMsgCallTypeDefinition@@PEAXPEBXH@Z @ 0x1800AA120 (-s_EndpointProc@CManipulationManager@@KAJAEBUMessageCallThreadInfo@1@PEBUMsgCallTypeDefinition@@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CB404 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::s_RenderThreadEndpointProc(char *a1, const void *a2, int a3)
{
  unsigned int v6; // ebx
  char *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = a1;
  if ( a1 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
  v6 = CManipulationManager::s_EndpointProc(
         (const struct CManipulationManager::MessageCallThreadInfo *)(a1 + 56),
         (const struct MsgCallTypeDefinition *)&IManipulation_Receive<CManipulationManager>::Type,
         a1,
         a2,
         a3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  return v6;
}
