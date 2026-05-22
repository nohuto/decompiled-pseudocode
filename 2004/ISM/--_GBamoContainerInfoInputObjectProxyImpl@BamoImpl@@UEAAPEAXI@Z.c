/*
 * XREFs of ??_GBamoContainerInfoInputObjectProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1800E27C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E60 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

BamoImpl::BamoContainerInfoInputObjectProxyImpl *__fastcall BamoImpl::BamoContainerInfoInputObjectProxyImpl::`scalar deleting destructor'(
        BamoImpl::BamoContainerInfoInputObjectProxyImpl *this,
        char a2)
{
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
