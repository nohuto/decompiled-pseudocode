/*
 * XREFs of ??1CGeometry@@MEAA@XZ @ 0x1800C433C
 * Callers:
 *     ??_ECRectangleGeometry@@UEAAPEAXI@Z @ 0x1800C4270 (--_ECRectangleGeometry@@UEAAPEAXI@Z.c)
 *     ??_GCRegionGeometry@@UEAAPEAXI@Z @ 0x1800C42C0 (--_GCRegionGeometry@@UEAAPEAXI@Z.c)
 *     ??_ECLineGeometry@@UEAAPEAXI@Z @ 0x180171560 (--_ECLineGeometry@@UEAAPEAXI@Z.c)
 *     ??_GCPathGeometry@@MEAAPEAXI@Z @ 0x180171EB0 (--_GCPathGeometry@@MEAAPEAXI@Z.c)
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x1801BC680 (--1CCombinedGeometry@@MEAA@XZ.c)
 *     ??1CGeometryGroup@@MEAA@XZ @ 0x1801C7C44 (--1CGeometryGroup@@MEAA@XZ.c)
 *     ??1CProxyGeometry@@MEAA@XZ @ 0x1801E9E58 (--1CProxyGeometry@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800BDC0C (-Release@CShapePtr@@QEAAXXZ.c)
 */

void __fastcall CGeometry::~CGeometry(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
  this[9] = 0LL;
  CShapePtr::Release((CShapePtr *)(this + 14));
  CShapePtr::Release((CShapePtr *)(this + 12));
  *this = (struct CResource *)&CNotificationResource::`vftable';
  CResource::~CResource((CResource *)this);
}
