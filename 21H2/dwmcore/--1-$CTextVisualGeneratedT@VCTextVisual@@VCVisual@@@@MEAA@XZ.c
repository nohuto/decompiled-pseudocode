/*
 * XREFs of ??1?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@MEAA@XZ @ 0x1802427A8
 * Callers:
 *     ??_ECTextVisual@@MEAAPEAXI@Z @ 0x180242890 (--_ECTextVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@@Z @ 0x18019A7F4 (--$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV-$vector@PEAVCSceneComponent@@V-$a.c)
 */

void __fastcall CTextVisualGeneratedT<CTextVisual,CVisual>::~CTextVisualGeneratedT<CTextVisual,CVisual>(
        struct CResource ***this)
{
  char *v1; // rbx
  void **v3; // rdi

  v1 = (char *)(this + 91);
  CResource::UnRegisterNotifiers<CSceneComponent>((CResource *)this, this + 91);
  v3 = (void **)(this + 94);
  CResource::UnRegisterNotifiers<CSceneComponent>((CResource *)this, this + 94);
  CResource::UnRegisterNotifiers<CSceneComponent>((CResource *)this, this + 97);
  if ( this[97] )
  {
    std::_Deallocate<16,0>(this[97], ((char *)this[99] - (char *)this[97]) & 0xFFFFFFFFFFFFFFF8uLL);
    this[97] = 0LL;
    this[98] = 0LL;
    this[99] = 0LL;
  }
  if ( *v3 )
  {
    std::_Deallocate<16,0>(*v3, ((char *)this[96] - (_BYTE *)*v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *v3 = 0LL;
    this[95] = 0LL;
    this[96] = 0LL;
  }
  if ( *(_QWORD *)v1 )
  {
    std::_Deallocate<16,0>(*(void **)v1, (*((_QWORD *)v1 + 2) - *(_QWORD *)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)v1 = 0LL;
    *((_QWORD *)v1 + 1) = 0LL;
    *((_QWORD *)v1 + 2) = 0LL;
  }
  CVisual::~CVisual((CVisual *)this);
}
