/*
 * XREFs of ??1CTransformGroup@@MEAA@XZ @ 0x180242BCC
 * Callers:
 *     ??_GCTransformGroup@@MEAAPEAXI@Z @ 0x18019FA30 (--_GCTransformGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z @ 0x18009504C (--$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z.c)
 */

void __fastcall CTransformGroup::~CTransformGroup(CTransformGroup *this)
{
  CTransformGroup **v2; // rdx
  CTransformGroup **v3; // rax

  *(_QWORD *)this = &CTransformGroup::`vftable'{for `CTransformGroupGeneratedT<CTransformGroup,CTransform>'};
  *((_QWORD *)this + 23) = &CTransform3DGroup::`vftable'{for `CCyclicResourceListEntry'};
  SAFE_DELETE<CMILMatrix>((void **)this + 26);
  *((_QWORD *)this + 23) = &CCyclicResourceListEntry::`vftable';
  v2 = (CTransformGroup **)*((_QWORD *)this + 24);
  if ( v2[1] != (CTransformGroup *)((char *)this + 192)
    || (v3 = (CTransformGroup **)*((_QWORD *)this + 25), *v3 != (CTransformGroup *)((char *)this + 192)) )
  {
    __fastfail(3u);
  }
  *v3 = (CTransformGroup *)v2;
  v2[1] = (CTransformGroup *)v3;
  CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>::~CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>((struct CResource ***)this);
}
