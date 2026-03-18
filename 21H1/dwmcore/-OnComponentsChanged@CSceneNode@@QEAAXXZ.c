/*
 * XREFs of ?OnComponentsChanged@CSceneNode@@QEAAXXZ @ 0x1801EF748
 * Callers:
 *     ?SetOrAppendComponents@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@_N@Z @ 0x180176210 (-SetOrAppendComponents@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAV.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z @ 0x18020CD34 (-HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z.c)
 */

void __fastcall CSceneNode::OnComponentsChanged(CSceneNode *this)
{
  __int64 v1; // rbx
  CSceneComponent **v3; // r14
  unsigned __int64 v4; // rsi

  v1 = 0LL;
  if ( *((_QWORD *)this + 16) )
  {
    v3 = (CSceneComponent **)*((_QWORD *)this + 11);
    v4 = (unsigned __int64)(*((_QWORD *)this + 12) - (_QWORD)v3 + 7LL) >> 3;
    if ( (unsigned __int64)v3 > *((_QWORD *)this + 12) )
      v4 = 0LL;
    if ( v4 )
    {
      do
      {
        CSceneComponent::HydrateSpectreResources(*v3, this);
        ++v1;
        ++v3;
      }
      while ( v1 != v4 );
    }
    (*(void (__fastcall **)(CSceneNode *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  }
}
