/*
 * XREFs of ??_GModuleCommandResult@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140055410
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCA8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ModuleCommandResult@Devices@Media@Windows@@MEAA@XZ @ 0x140054D38 (--1ModuleCommandResult@Devices@Media@Windows@@MEAA@XZ.c)
 */

Windows::Media::Devices::ModuleCommandResult *__fastcall Windows::Media::Devices::ModuleCommandResult::`scalar deleting destructor'(
        Windows::Media::Devices::ModuleCommandResult *this,
        char a2)
{
  Windows::Media::Devices::ModuleCommandResult::~ModuleCommandResult(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
