/*
 * XREFs of ?UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ @ 0x180042D50
 * Callers:
 *     ??1CAtlasedRectsGroup@@MEAA@XZ @ 0x180041A04 (--1CAtlasedRectsGroup@@MEAA@XZ.c)
 *     ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x180042DA0 (-ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSGROUP@@PEB.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x1800D7BE4 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CAtlasedRectsGroup::UnRegisterNotifiers(CAtlasedRectsGroup *this)
{
  struct CResource **v2; // rdx

  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 9));
  *((_QWORD *)this + 9) = 0LL;
  v2 = (struct CResource **)*((_QWORD *)this + 11);
  if ( v2 )
  {
    CResource::UnRegisterNNotifiersInternal(this, v2, *((unsigned int *)this + 20));
    DefaultHeap::Free(*((void **)this + 11));
    *((_QWORD *)this + 11) = 0LL;
    *((_DWORD *)this + 20) = 0;
  }
}
