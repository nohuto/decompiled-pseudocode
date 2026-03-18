/*
 * XREFs of ??1?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@MEAA@XZ @ 0x180209BA0
 * Callers:
 *     ??_ECAnimationTrigger@@UEAAPEAXI@Z @ 0x180209C20 (--_ECAnimationTrigger@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@@Z @ 0x18019A7F4 (--$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV-$vector@PEAVCSceneComponent@@V-$a.c)
 */

void __fastcall CAnimationTriggerGeneratedT<CAnimationTrigger,CPropertyChangeResource>::~CAnimationTriggerGeneratedT<CAnimationTrigger,CPropertyChangeResource>(
        CResource *this)
{
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 10));
  *((_QWORD *)this + 10) = 0LL;
  CResource::UnRegisterNotifiers<CSceneComponent>(this, (struct CResource ***)this + 11);
  if ( *((_QWORD *)this + 11) )
  {
    std::_Deallocate<16,0>(
      *((void **)this + 11),
      (*((_QWORD *)this + 13) - *((_QWORD *)this + 11)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
