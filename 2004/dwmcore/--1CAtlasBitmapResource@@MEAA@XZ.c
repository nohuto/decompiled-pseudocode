/*
 * XREFs of ??1CAtlasBitmapResource@@MEAA@XZ @ 0x1802096F8
 * Callers:
 *     ??_GCAtlasBitmapResource@@MEAAPEAXI@Z @ 0x180209790 (--_GCAtlasBitmapResource@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CAtlasEntry@@QEAA@XZ @ 0x180249C40 (--1CAtlasEntry@@QEAA@XZ.c)
 */

void __fastcall CAtlasBitmapResource::~CAtlasBitmapResource(CAtlasBitmapResource *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _QWORD *v4; // r8

  *(_QWORD *)this = &CAtlasBitmapResource::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CAtlasBitmapResource::`vftable'{for `IPixelFormat's `IBitmapResource'};
  *((_QWORD *)this + 4) = &CAtlasBitmapResource::`vftable'{for `IBitmapRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CAtlasBitmapResource::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24) = &CAtlasBitmapResource::`vftable'{for `IPixelFormat's `IBitmapRealization'};
  v2 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  *(_DWORD *)((char *)this + v2 + 20) = v2 - 64;
  v3 = *(int *)(*((_QWORD *)this + 3) + 8LL);
  *(_DWORD *)((char *)this + v3 + 20) = v3 - 80;
  *((_QWORD *)this + 7) = 0LL;
  CAtlasEntry::~CAtlasEntry((CAtlasBitmapResource *)((char *)this + 48));
  *v4 = &CMILCOMBase::`vftable';
}
