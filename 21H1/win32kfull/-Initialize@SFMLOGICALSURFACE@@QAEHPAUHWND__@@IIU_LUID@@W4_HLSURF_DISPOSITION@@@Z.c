/*
 * XREFs of ?Initialize@SFMLOGICALSURFACE@@QAEHPAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z @ 0x23176
 * Callers:
 *     ?hlsurfCreateLogicalSurfaceObject@@YGPAUHLSURF__@@QAUHDEV__@@KPAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1F124 (-hlsurfCreateLogicalSurfaceObject@@YGPAUHLSURF__@@QAUHDEV__@@KPAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SGPAUHLSURF__@@PAUHDEV__@@PAV1@HHH@Z @ 0x22222 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SGPAUHLSURF__@@PAUHDEV__@@PAV1@HHH@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall SFMLOGICALSURFACE::Initialize(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  SfmTokenArray::Initialize((SfmTokenArray *)(this + 34));
  this[39] &= ~2u;
  this[27] = a2;
  GreInitializePushLock(this + 42);
  this[46] = -1;
  this[47] = -1;
  this[39] &= 0xFFFFFFA2;
  this[49] = 0;
  this[40] = 0;
  this[44] = a3;
  this[45] = a4;
  this[30] = a6;
  this[31] = a7;
  this[48] = a5;
  this[43] = a2;
  this[6] = this + 5;
  this[5] = this + 5;
  this[8] = this + 7;
  this[7] = this + 7;
  return 1;
}
