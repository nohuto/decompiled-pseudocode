/*
 * XREFs of ??0VirtualTouchpadControllerProxy@@QEAA@XZ @ 0x1800F0480
 * Callers:
 *     ?CreateVirtualTouchpadControllerProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x1800E458C (-CreateVirtualTouchpadControllerProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBa.c)
 * Callees:
 *     ?ServerCreated@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z @ 0x1800F0848 (-ServerCreated@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z.c)
 */

VirtualTouchpadControllerProxy *__fastcall VirtualTouchpadControllerProxy::VirtualTouchpadControllerProxy(
        VirtualTouchpadControllerProxy *this)
{
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 2) = &BamoImpl::BamoVirtualTouchpadControllerProxyImpl::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_BYTE *)this + 48) = 0;
  *(_OWORD *)((char *)this + 52) = 0LL;
  *(_QWORD *)this = &VirtualTouchpadControllerProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_BYTE *)this + 72) = 0;
  *((_QWORD *)this + 1) = &VirtualTouchpadControllerProxy::`vftable'{for `IVirtualTouchpadControllerProxy'};
  InputTraceLogging::VirtualTouchpad::ServerCreated(this);
  return this;
}
