/*
 * XREFs of ??1CDesktopThumbnailCVI@@MEAA@XZ @ 0x1800B5E80
 * Callers:
 *     ??_GCDCompDesktopThumbnailCVI@@UEAAPEAXI@Z @ 0x180096190 (--_GCDCompDesktopThumbnailCVI@@UEAAPEAXI@Z.c)
 *     ??1CPerMonitorDesktopThumbnail@@EEAA@XZ @ 0x1800B5EC8 (--1CPerMonitorDesktopThumbnail@@EEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CDesktopThumbnailCVI::~CDesktopThumbnailCVI(CDesktopThumbnailCVI *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CDesktopThumbnailCVI::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v3 )
    CBaseObject::Release(v3);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
