/*
 * XREFs of ?UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ @ 0x180043790
 * Callers:
 *     ??1CAtlasedRectsGroup@@MEAA@XZ @ 0x1800434A4 (--1CAtlasedRectsGroup@@MEAA@XZ.c)
 *     ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x1800437E0 (-ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSGROUP@@PEB.c)
 * Callees:
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x180051D54 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180051DB0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 */

void __fastcall CAtlasedRectsGroup::UnRegisterNotifiers(CAtlasedRectsGroup *this)
{
  struct CResource **v2; // rdx

  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 8));
  *((_QWORD *)this + 8) = 0LL;
  v2 = (struct CResource **)*((_QWORD *)this + 10);
  if ( v2 )
  {
    CResource::UnRegisterNNotifiersInternal(this, v2, *((unsigned int *)this + 18));
    operator delete(*((void **)this + 10));
    *((_QWORD *)this + 10) = 0LL;
    *((_DWORD *)this + 18) = 0;
  }
}
