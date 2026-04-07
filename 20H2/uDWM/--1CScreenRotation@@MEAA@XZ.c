/*
 * XREFs of ??1CScreenRotation@@MEAA@XZ @ 0x1800ABAAC
 * Callers:
 *     ??_ECScreenRotation@@MEAAPEAXI@Z @ 0x180095C50 (--_ECScreenRotation@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800ACBCC (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 */

void __fastcall CScreenRotation::~CScreenRotation(CScreenRotation *this)
{
  *(_QWORD *)this = &CScreenRotation::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 35) = &CScreenRotation::`vftable'{for `IAnimationListener'};
  CScreenRotation::Stop(this, 0);
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this);
}
