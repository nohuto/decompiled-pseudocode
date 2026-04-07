/*
 * XREFs of ?ReleaseResources@SharedDwmDcompVisual@@QEAAXXZ @ 0x1800138E4
 * Callers:
 *     ??1UdwmDcompVisual@@UEAA@XZ @ 0x180012048 (--1UdwmDcompVisual@@UEAA@XZ.c)
 * Callees:
 *     ?ReleaseDCompResources@SharedDwmDcompVisual@@QEAAXXZ @ 0x180013910 (-ReleaseDCompResources@SharedDwmDcompVisual@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall SharedDwmDcompVisual::ReleaseResources(SharedDwmDcompVisual *this)
{
  SharedDwmDcompVisual::ReleaseDCompResources(this);
  if ( *(_QWORD *)this )
  {
    CBaseObject::Release(*(CBaseObject **)this);
    *(_QWORD *)this = 0LL;
  }
}
