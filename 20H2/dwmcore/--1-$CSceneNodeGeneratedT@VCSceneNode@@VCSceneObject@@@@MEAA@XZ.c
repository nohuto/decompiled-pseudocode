/*
 * XREFs of ??1?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@MEAA@XZ @ 0x1801EA958
 * Callers:
 *     ??1CSceneNode@@MEAA@XZ @ 0x1801EAA00 (--1CSceneNode@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180051DB0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@@Z @ 0x180168914 (--$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV-$vector@PEAVCSceneComponent@@V-$a.c)
 */

void __fastcall CSceneNodeGeneratedT<CSceneNode,CSceneObject>::~CSceneNodeGeneratedT<CSceneNode,CSceneObject>(
        CResource *this)
{
  void **v2; // rbx

  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 7));
  *((_QWORD *)this + 7) = 0LL;
  v2 = (void **)((char *)this + 64);
  CResource::UnRegisterNotifiers<CSceneComponent>(this, (__int64)this + 64);
  CResource::UnRegisterNotifiers<CSceneComponent>(this, (__int64)this + 88);
  if ( *((_QWORD *)this + 11) )
  {
    std::_Deallocate<16,0>(
      *((void **)this + 11),
      (*((_QWORD *)this + 13) - *((_QWORD *)this + 11)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
  }
  if ( *v2 )
  {
    std::_Deallocate<16,0>(*v2, (*((_QWORD *)this + 10) - (_QWORD)*v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *v2 = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  CResource::~CResource(this);
}
