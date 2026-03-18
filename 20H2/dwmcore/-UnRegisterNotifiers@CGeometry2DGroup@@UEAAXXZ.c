/*
 * XREFs of ?UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ @ 0x1801B3DC0
 * Callers:
 *     ?ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY2DGROUP@@PEBXI@Z @ 0x1801B31B8 (-ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY2DGROUP@@PEBXI@Z.c)
 *     ??1CGeometry2DGroup@@MEAA@XZ @ 0x1801B419C (--1CGeometry2DGroup@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x180051D54 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 */

void __fastcall CGeometry2DGroup::UnRegisterNotifiers(CGeometry2DGroup *this)
{
  struct CResource **v1; // rdx

  v1 = (struct CResource **)*((_QWORD *)this + 13);
  if ( v1 )
  {
    CResource::UnRegisterNNotifiersInternal(this, v1, *((unsigned int *)this + 24));
    operator delete(*((void **)this + 13));
    *((_QWORD *)this + 13) = 0LL;
    *((_DWORD *)this + 24) = 0;
  }
}
