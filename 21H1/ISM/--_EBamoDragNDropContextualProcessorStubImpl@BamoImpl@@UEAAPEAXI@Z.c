/*
 * XREFs of ??_EBamoDragNDropContextualProcessorStubImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180071DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E60 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

BamoImpl::BamoDragNDropContextualProcessorStubImpl *__fastcall BamoImpl::BamoDragNDropContextualProcessorStubImpl::`vector deleting destructor'(
        BamoImpl::BamoDragNDropContextualProcessorStubImpl *this,
        char a2)
{
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))this + 5);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
