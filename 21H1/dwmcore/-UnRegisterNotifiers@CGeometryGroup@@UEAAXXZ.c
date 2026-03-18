/*
 * XREFs of ?UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ @ 0x1801B8660
 * Callers:
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1801B7B10 (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ??1CGeometryGroup@@MEAA@XZ @ 0x1801C7C44 (--1CGeometryGroup@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x18008BFA4 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 */

void __fastcall CGeometryGroup::UnRegisterNotifiers(CGeometryGroup *this)
{
  struct CResource **v1; // rdx

  v1 = (struct CResource **)*((_QWORD *)this + 21);
  if ( v1 )
  {
    CResource::UnRegisterNNotifiersInternal(this, v1, *((unsigned int *)this + 40));
    operator delete(*((void **)this + 21));
    *((_QWORD *)this + 21) = 0LL;
    *((_DWORD *)this + 40) = 0;
  }
}
