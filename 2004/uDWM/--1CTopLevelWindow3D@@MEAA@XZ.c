/*
 * XREFs of ??1CTopLevelWindow3D@@MEAA@XZ @ 0x18000F558
 * Callers:
 *     ??_GCTopLevelWindow3D@@MEAAPEAXI@Z @ 0x18000F510 (--_GCTopLevelWindow3D@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x18001A850 (-ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18001A8C0 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 */

void __fastcall CTopLevelWindow3D::~CTopLevelWindow3D(CTopLevelWindow3D *this)
{
  *(_QWORD *)this = &CTopLevelWindow3D::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 35) = &CTopLevelWindow3D::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  CTopLevelWindow3D::ReleaseSceneObjects(this);
  CTopLevelWindow3D::StopAnimation(this);
  CRenderDataVisual::~CRenderDataVisual(this);
}
