/*
 * XREFs of ?Insert@HmgInsertObjectHelper@@QAEPAUHOBJ__@@PAVOBJECT@@EK@Z @ 0x22A2E
 * Callers:
 *     ?hspCreateDwmSpriteObj@@YGPAUHSPRITE__@@PAUHWND__@@KPAUHDEV__@@H@Z @ 0x1EF6E (-hspCreateDwmSpriteObj@@YGPAUHSPRITE__@@PAUHWND__@@KPAUHDEV__@@H@Z.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YGPAUHLSURF__@@QAUHDEV__@@KPAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1F124 (-hlsurfCreateLogicalSurfaceObject@@YGPAUHLSURF__@@QAUHDEV__@@KPAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SGPAUHLSURF__@@PAUHDEV__@@PAV1@HHH@Z @ 0x22222 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SGPAUHLSURF__@@PAUHDEV__@@PAV1@HHH@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QAEPAUHRGN__@@XZ @ 0x22A08 (-hrgnAssociate@RGNOBJ@@QAEPAUHRGN__@@XZ.c)
 *     _EngCreateDriverObj@12 @ 0x1E4069 (_EngCreateDriverObj@12.c)
 *     ?bInit@UMPDOBJ@@QAEHXZ @ 0x1F428A (-bInit@UMPDOBJ@@QAEHXZ.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QAEPAXAAVXDCOBJ@@PAUtagLOGCOLORSPACEW@@PAXK2K2K@Z @ 0x1F4A5E (-hCreate@COLORTRANSFORMOBJ@@QAEPAXAAVXDCOBJ@@PAUtagLOGCOLORSPACEW@@PAXK2K2K@Z.c)
 *     _NtGdiCreateClientObj@4 @ 0x1FD7E7 (_NtGdiCreateClientObj@4.c)
 * Callees:
 *     <none>
 */

struct HOBJ__ *__thiscall HmgInsertObjectHelper::Insert(
        HmgInsertObjectHelper *this,
        struct OBJECT *a2,
        unsigned __int8 a3,
        unsigned int a4)
{
  struct HOBJ__ *result; // eax

  result = 0;
  if ( !*(_DWORD *)this )
  {
    result = HmgInsertObjectInternal(a2, a4 | 1, a3);
    if ( result )
      *(_DWORD *)this = a2;
  }
  return result;
}
