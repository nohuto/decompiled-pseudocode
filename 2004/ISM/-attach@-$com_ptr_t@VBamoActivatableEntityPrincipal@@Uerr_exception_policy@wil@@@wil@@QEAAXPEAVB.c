/*
 * XREFs of ?attach@?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVBamoActivatableEntityPrincipal@@@Z @ 0x1800462C4
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x18001A5B0 (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_exception_policy>::attach(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return result;
}
