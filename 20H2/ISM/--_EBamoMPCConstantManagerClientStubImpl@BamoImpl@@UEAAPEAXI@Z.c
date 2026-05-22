/*
 * XREFs of ??_EBamoMPCConstantManagerClientStubImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18006DDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E50 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

BamoImpl::BamoMPCConstantManagerClientStubImpl *__fastcall BamoImpl::BamoMPCConstantManagerClientStubImpl::`vector deleting destructor'(
        BamoImpl::BamoMPCConstantManagerClientStubImpl *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 8);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))this + 5);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
