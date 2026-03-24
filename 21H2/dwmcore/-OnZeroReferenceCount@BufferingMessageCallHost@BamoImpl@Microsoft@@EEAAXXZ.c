/*
 * XREFs of ?OnZeroReferenceCount@BufferingMessageCallHost@BamoImpl@Microsoft@@EEAAXXZ @ 0x180166AD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::OnZeroReferenceCount(
        Microsoft::BamoImpl::BufferingMessageCallHost *this)
{
  if ( this )
    (*(void (__fastcall **)(Microsoft::BamoImpl::BufferingMessageCallHost *, __int64))(*(_QWORD *)this + 8LL))(
      this,
      1LL);
}
