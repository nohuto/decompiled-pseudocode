/*
 * XREFs of ??1?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@MEAA@XZ @ 0x1801F10EC
 * Callers:
 *     ??_ECTextVisual@@MEAAPEAXI@Z @ 0x1801F11D0 (--_ECTextVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8E4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV?$vector@PEAVCSceneComponent@@V?$allocator@PEAVCSceneComponent@@@std@@@std@@@Z @ 0x180168E24 (--$UnRegisterNotifiers@VCSceneComponent@@@CResource@@QEAAXPEAV-$vector@PEAVCSceneComponent@@V-$a.c)
 */

void __fastcall CTextVisualGeneratedT<CTextVisual,CVisual>::~CTextVisualGeneratedT<CTextVisual,CVisual>(void **this)
{
  char *v1; // rbx
  void **v3; // rdi

  v1 = (char *)(this + 77);
  CResource::UnRegisterNotifiers<CSceneComponent>((CResource *)this, (__int64)(this + 77));
  v3 = this + 80;
  CResource::UnRegisterNotifiers<CSceneComponent>((CResource *)this, (__int64)(this + 80));
  CResource::UnRegisterNotifiers<CSceneComponent>((CResource *)this, (__int64)(this + 83));
  if ( this[83] )
  {
    std::_Deallocate<16,0>(this[83], ((_BYTE *)this[85] - (_BYTE *)this[83]) & 0xFFFFFFFFFFFFFFF8uLL);
    this[83] = 0LL;
    this[84] = 0LL;
    this[85] = 0LL;
  }
  if ( *v3 )
  {
    std::_Deallocate<16,0>(*v3, ((_BYTE *)this[82] - (_BYTE *)*v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *v3 = 0LL;
    this[81] = 0LL;
    this[82] = 0LL;
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
