/*
 * XREFs of ??1?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@MEAA@XZ @ 0x18023DE40
 * Callers:
 *     ??1CSceneNode@@MEAA@XZ @ 0x18023DEE8 (--1CSceneNode@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@@Z @ 0x18019A7F4 (--$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV-$vector@PEAVCSceneComponent@@V-$a.c)
 */

void __fastcall CSceneNodeGeneratedT<CSceneNode,CSceneObject>::~CSceneNodeGeneratedT<CSceneNode,CSceneObject>(
        CResource *this)
{
  void **v2; // rbx

  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 8));
  *((_QWORD *)this + 8) = 0LL;
  v2 = (void **)((char *)this + 72);
  CResource::UnRegisterNotifiers<CSceneComponent>(this, (struct CResource ***)this + 9);
  CResource::UnRegisterNotifiers<CSceneComponent>(this, (struct CResource ***)this + 12);
  if ( *((_QWORD *)this + 12) )
  {
    std::_Deallocate<16,0>(
      *((void **)this + 12),
      (*((_QWORD *)this + 14) - *((_QWORD *)this + 12)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  if ( *v2 )
  {
    std::_Deallocate<16,0>(*v2, (*((_QWORD *)this + 11) - (_QWORD)*v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *v2 = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  CResource::~CResource(this);
}
