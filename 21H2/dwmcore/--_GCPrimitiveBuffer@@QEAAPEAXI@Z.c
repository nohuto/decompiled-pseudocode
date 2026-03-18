/*
 * XREFs of ??_GCPrimitiveBuffer@@QEAAPEAXI@Z @ 0x18000CDF8
 * Callers:
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x18000B76C (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIBitmapResource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x18000C850 (-Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV-$span@PEAVI.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

void **__fastcall CPrimitiveBuffer::`scalar deleting destructor'(void **this)
{
  DefaultHeap::Free(*this);
  operator delete(this, 0x10uLL);
  return this;
}
