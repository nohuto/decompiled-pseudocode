/*
 * XREFs of ?UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ @ 0x180092400
 * Callers:
 *     ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x1800922F4 (-ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSGROUP@@PEB.c)
 *     ??1CAtlasedRectsGroup@@MEAA@XZ @ 0x180092450 (--1CAtlasedRectsGroup@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x18008BFA4 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
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
