/*
 * XREFs of ?AllocateBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIIPEAPEAX@Z @ 0x18003F230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::AllocateBuffer(
        Microsoft::BamoImpl::BufferingMessageCallHost *this,
        unsigned __int64 *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 1) + 24LL))(
           *((_QWORD *)this + 1),
           a2);
}
