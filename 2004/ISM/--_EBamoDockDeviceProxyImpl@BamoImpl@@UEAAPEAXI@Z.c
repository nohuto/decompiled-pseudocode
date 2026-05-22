/*
 * XREFs of ??_EBamoDockDeviceProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1800E2860
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E60 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x18003A360 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

BamoImpl::BamoDockDeviceProxyImpl *__fastcall BamoImpl::BamoDockDeviceProxyImpl::`vector deleting destructor'(
        BamoImpl::BamoDockDeviceProxyImpl *this,
        void *a2)
{
  char v2; // di
  wil::details *v4; // rcx

  v2 = (char)a2;
  v4 = (wil::details *)*((_QWORD *)this + 4);
  if ( v4 )
    wil::details::FreeProcessHeap(v4, a2);
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))this + 2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
