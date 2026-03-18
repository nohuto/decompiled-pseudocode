/*
 * XREFs of ??1DDisplayPrimaryBufferResources@@QEAA@XZ @ 0x180279F4C
 * Callers:
 *     ??$_Destroy_range@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAXPEAUDDisplayPrimaryBufferResources@@QEAU1@AEAV?$allocator@UDDisplayPrimaryBufferResources@@@0@@Z @ 0x1802798FC (--$_Destroy_range@V-$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAXPEAUDDisplayPrima.c)
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x180283F0C (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 *     ?CreatePrimaryBuffer@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@_NAEBUDDisplayTargetResources@@PEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@IPEAUDDisplayPrimaryBufferResources@@@Z @ 0x1802844E4 (-CreatePrimaryBuffer@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@_NAEBUDDisplayTarget.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DDisplayPrimaryBufferResources::~DDisplayPrimaryBufferResources(DDisplayPrimaryBufferResources *this)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 2);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 1);
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
}
