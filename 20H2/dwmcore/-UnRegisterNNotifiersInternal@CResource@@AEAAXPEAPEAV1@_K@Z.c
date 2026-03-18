/*
 * XREFs of ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x180051D54
 * Callers:
 *     ?UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ @ 0x180043790 (-UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x1800C933C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1801B2724 (-ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ @ 0x1801B3DC0 (-UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ.c)
 *     ?UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ @ 0x1801B3E00 (-UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ.c)
 *     ??1CContainerVectorShape@@MEAA@XZ @ 0x1801BDBB4 (--1CContainerVectorShape@@MEAA@XZ.c)
 *     ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x1801BDD30 (-SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180051DB0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CResource::UnRegisterNNotifiersInternal(CResource *this, struct CResource **a2, unsigned __int64 a3)
{
  unsigned __int64 i; // rbx

  if ( a3 )
  {
    for ( i = 0LL; i < a3; ++i )
    {
      CResource::UnRegisterNotifierInternal(this, a2[i]);
      a2[i] = 0LL;
    }
  }
}
