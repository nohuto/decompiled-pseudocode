/*
 * XREFs of ??1?$CTransformGroupGeneratedT@VCTransformGroup@@VCTransform@@@@MEAA@XZ @ 0x18001B254
 * Callers:
 *     ??1CTransformGroup@@MEAA@XZ @ 0x18001B114 (--1CTransformGroup@@MEAA@XZ.c)
 * Callees:
 *     ??$UnRegisterNotifiers@VCTransform@@@CResource@@QEAAXPEAV?$vector@PEAVCTransform@@V?$allocator@PEAVCTransform@@@std@@@std@@@Z @ 0x18001B4C8 (--$UnRegisterNotifiers@VCTransform@@@CResource@@QEAAXPEAV-$vector@PEAVCTransform@@V-$allocator@P.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8E4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CTransformGroupGeneratedT<CTransformGroup,CTransform>::~CTransformGroupGeneratedT<CTransformGroup,CTransform>(
        CResource *this)
{
  _QWORD *v1; // rdi

  v1 = (_QWORD *)((char *)this + 152);
  CResource::UnRegisterNotifiers<CTransform>(this);
  if ( *v1 )
  {
    std::_Deallocate<16,0>(*v1, (v1[2] - *v1) & 0xFFFFFFFFFFFFFFF8uLL);
    *v1 = 0LL;
    v1[1] = 0LL;
    v1[2] = 0LL;
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
