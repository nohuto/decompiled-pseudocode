/*
 * XREFs of ??$?4VModuleCommandResult@Devices@Media@Windows@@X@?$com_ptr_t@UIModuleCommandResult@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV?$ComPtr@VModuleCommandResult@Devices@Media@Windows@@@WRL@Microsoft@@@Z @ 0x14001ED98
 * Callers:
 *     ?OnStart@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAJXZ @ 0x140058D30 (-OnStart@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<Windows::Media::Devices::IModuleCommandResult,wil::err_returncode_policy>::operator=<Windows::Media::Devices::ModuleCommandResult,void>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}
