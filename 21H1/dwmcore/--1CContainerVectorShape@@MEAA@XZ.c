/*
 * XREFs of ??1CContainerVectorShape@@MEAA@XZ @ 0x1801C2404
 * Callers:
 *     ??_ECShapeTree@@UEAAPEAXI@Z @ 0x180171360 (--_ECShapeTree@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x18008BFA4 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CContainerVectorShape::~CContainerVectorShape(CContainerVectorShape *this)
{
  __int64 v2; // rdx
  void *v3; // rcx

  *(_QWORD *)this = &CContainerVectorShape::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &CContainerVectorShape::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &CContainerVectorShape::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 7) + 4LL);
  *(_DWORD *)((char *)this + v2 + 52) = v2 - 72;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 52) = *(_DWORD *)(*((_QWORD *)this + 7) + 8LL) - 88;
  CResource::UnRegisterNNotifiersInternal(
    this,
    *((struct CResource ***)this + 12),
    (unsigned int)((__int64)(*((_QWORD *)this + 13) - *((_QWORD *)this + 12)) >> 3));
  v3 = (void *)*((_QWORD *)this + 12);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, (*((_QWORD *)this + 14) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 8));
  CResource::~CResource(this);
}
