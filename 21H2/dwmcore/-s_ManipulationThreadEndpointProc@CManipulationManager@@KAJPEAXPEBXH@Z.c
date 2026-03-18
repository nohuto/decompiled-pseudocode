/*
 * XREFs of ?s_ManipulationThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z @ 0x180180B00
 * Callers:
 *     <none>
 * Callees:
 *     ?s_EndpointProc@CManipulationManager@@KAJAEBUMessageCallThreadInfo@1@PEBUMsgCallTypeDefinition@@PEAXPEBXH@Z @ 0x1800F3228 (-s_EndpointProc@CManipulationManager@@KAJAEBUMessageCallThreadInfo@1@PEBUMsgCallTypeDefinition@@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::s_ManipulationThreadEndpointProc(char *a1, const void *a2)
{
  unsigned int v4; // ebx
  char *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = a1;
  if ( a1 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
  v4 = CManipulationManager::s_EndpointProc(
         (const struct CManipulationManager::MessageCallThreadInfo *)(a1 + 32),
         (const struct MsgCallTypeDefinition *)&IManipulation_Receive<CManipulationManager>::Type,
         a1,
         a2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v6);
  return v4;
}
