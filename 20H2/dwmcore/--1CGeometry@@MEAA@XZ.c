/*
 * XREFs of ??1CGeometry@@MEAA@XZ @ 0x1800CAA7C
 * Callers:
 *     ??_ECRectangleGeometry@@UEAAPEAXI@Z @ 0x1800CA9B0 (--_ECRectangleGeometry@@UEAAPEAXI@Z.c)
 *     ??_GCRegionGeometry@@UEAAPEAXI@Z @ 0x1800CAA00 (--_GCRegionGeometry@@UEAAPEAXI@Z.c)
 *     ??_ECLineGeometry@@UEAAPEAXI@Z @ 0x18016CBF0 (--_ECLineGeometry@@UEAAPEAXI@Z.c)
 *     ??_GCPathGeometry@@MEAAPEAXI@Z @ 0x18016D540 (--_GCPathGeometry@@MEAAPEAXI@Z.c)
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x1801B7E20 (--1CCombinedGeometry@@MEAA@XZ.c)
 *     ??1CGeometryGroup@@MEAA@XZ @ 0x1801C3444 (--1CGeometryGroup@@MEAA@XZ.c)
 *     ??1CProxyGeometry@@MEAA@XZ @ 0x1801E5658 (--1CProxyGeometry@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180051DB0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C463C (-Release@CShapePtr@@QEAAXXZ.c)
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
