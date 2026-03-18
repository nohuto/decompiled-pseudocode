/*
 * XREFs of ??1CCombinedGeometry@@MEAA@XZ @ 0x1800CE0D4
 * Callers:
 *     ??_ECCombinedGeometry@@MEAAPEAXI@Z @ 0x1800CE090 (--_ECCombinedGeometry@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ @ 0x1800CF570 (-UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ.c)
 */

void __fastcall CCombinedGeometry::~CCombinedGeometry(CCombinedGeometry *this)
{
  CCombinedGeometry **v2; // rdx
  CCombinedGeometry **v3; // rax

  *(_QWORD *)this = &CCombinedGeometry::`vftable'{for `CGeometry'};
  *((_QWORD *)this + 18) = &CCombinedGeometry::`vftable'{for `CCyclicResourceListEntry'};
  CCombinedGeometry::UnRegisterNotifiers(this);
  *((_QWORD *)this + 18) = &CCyclicResourceListEntry::`vftable';
  v2 = (CCombinedGeometry **)*((_QWORD *)this + 19);
  if ( v2[1] != (CCombinedGeometry *)((char *)this + 152)
    || (v3 = (CCombinedGeometry **)*((_QWORD *)this + 20), *v3 != (CCombinedGeometry *)((char *)this + 152)) )
  {
    __fastfail(3u);
  }
  *v3 = (CCombinedGeometry *)v2;
  v2[1] = (CCombinedGeometry *)v3;
  CGeometry::~CGeometry(this);
}
