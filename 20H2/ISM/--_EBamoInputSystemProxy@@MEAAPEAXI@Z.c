/*
 * XREFs of ??_EBamoInputSystemProxy@@MEAAPEAXI@Z @ 0x1800E28F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoInputSystemProxyImpl@BamoImpl@@UEAA@XZ @ 0x1800E246C (--1BamoInputSystemProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoInputSystemProxy *__fastcall BamoInputSystemProxy::`vector deleting destructor'(
        BamoInputSystemProxy *this,
        char a2)
{
  BamoImpl::BamoInputSystemProxyImpl::~BamoInputSystemProxyImpl((BamoInputSystemProxy *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}
