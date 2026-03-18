/*
 * XREFs of ?UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ @ 0x1802070A0
 * Callers:
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x180206528 (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ??1CGeometryGroup@@MEAA@XZ @ 0x180216E90 (--1CGeometryGroup@@MEAA@XZ.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x1800D7BE4 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 */

void __fastcall CGeometryGroup::UnRegisterNotifiers(CGeometryGroup *this)
{
  struct CResource **v1; // rdx

  v1 = (struct CResource **)*((_QWORD *)this + 22);
  if ( v1 )
  {
    CResource::UnRegisterNNotifiersInternal(this, v1, *((unsigned int *)this + 42));
    DefaultHeap::Free(*((void **)this + 22));
    *((_QWORD *)this + 22) = 0LL;
    *((_DWORD *)this + 42) = 0;
  }
}
