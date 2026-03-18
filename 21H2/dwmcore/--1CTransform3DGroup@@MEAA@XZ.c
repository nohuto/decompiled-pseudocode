/*
 * XREFs of ??1CTransform3DGroup@@MEAA@XZ @ 0x1802429D8
 * Callers:
 *     ??_ECTransform3DGroup@@MEAAPEAXI@Z @ 0x18019F9E0 (--_ECTransform3DGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z @ 0x18009504C (--$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z.c)
 */

void __fastcall CTransform3DGroup::~CTransform3DGroup(CTransform3DGroup *this)
{
  CTransform3DGroup **v2; // rdx
  CTransform3DGroup **v3; // rax

  *(_QWORD *)this = &CTransform3DGroup::`vftable'{for `CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>'};
  *((_QWORD *)this + 23) = &CTransform3DGroup::`vftable'{for `CCyclicResourceListEntry'};
  SAFE_DELETE<CMILMatrix>((void **)this + 26);
  *((_QWORD *)this + 23) = &CCyclicResourceListEntry::`vftable';
  v2 = (CTransform3DGroup **)*((_QWORD *)this + 24);
  if ( v2[1] != (CTransform3DGroup *)((char *)this + 192)
    || (v3 = (CTransform3DGroup **)*((_QWORD *)this + 25), *v3 != (CTransform3DGroup *)((char *)this + 192)) )
  {
    __fastfail(3u);
  }
  *v3 = (CTransform3DGroup *)v2;
  v2[1] = (CTransform3DGroup *)v3;
  CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>::~CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>((struct CResource ***)this);
}
