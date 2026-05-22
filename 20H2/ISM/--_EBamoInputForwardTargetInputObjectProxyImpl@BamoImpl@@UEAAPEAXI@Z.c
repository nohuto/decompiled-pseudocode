/*
 * XREFs of ??_EBamoInputForwardTargetInputObjectProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1800E2870
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E50 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

BamoImpl::BamoInputForwardTargetInputObjectProxyImpl *__fastcall BamoImpl::BamoInputForwardTargetInputObjectProxyImpl::`vector deleting destructor'(
        BamoImpl::BamoInputForwardTargetInputObjectProxyImpl *this,
        char a2)
{
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
