/*
 * XREFs of ??1CGeometry2DGroup@@MEAA@XZ @ 0x1801B4B5C
 * Callers:
 *     ??_ECGeometry2DGroup@@MEAAPEAXI@Z @ 0x18016D240 (--_ECGeometry2DGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ @ 0x1801B4780 (-UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ.c)
 */

void __fastcall CGeometry2DGroup::~CGeometry2DGroup(CGeometry2DGroup *this)
{
  CGeometry2DGroup **v2; // rdx
  CGeometry2DGroup **v3; // rax

  *(_QWORD *)this = &CGeometry2DGroup::`vftable'{for `CGeometry2D'};
  *((_QWORD *)this + 9) = &CGeometry2DGroup::`vftable'{for `CCyclicResourceListEntry'};
  CGeometry2DGroup::UnRegisterNotifiers(this);
  *((_QWORD *)this + 9) = &CCyclicResourceListEntry::`vftable';
  v2 = (CGeometry2DGroup **)*((_QWORD *)this + 10);
  if ( v2[1] != (CGeometry2DGroup *)((char *)this + 80)
    || (v3 = (CGeometry2DGroup **)*((_QWORD *)this + 11), *v3 != (CGeometry2DGroup *)((char *)this + 80)) )
  {
    __fastfail(3u);
  }
  *v3 = (CGeometry2DGroup *)v2;
  v2[1] = (CGeometry2DGroup *)v3;
  CGeometry2D::~CGeometry2D(this);
}
