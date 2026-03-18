/*
 * XREFs of ??1CAtlasedRectsGroup@@MEAA@XZ @ 0x180041A04
 * Callers:
 *     ??_ECAtlasedRectsGroup@@MEAAPEAXI@Z @ 0x1800419C0 (--_ECAtlasedRectsGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ @ 0x180042D50 (-UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ.c)
 */

void __fastcall CAtlasedRectsGroup::~CAtlasedRectsGroup(CAtlasedRectsGroup *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  *(_QWORD *)this = &CAtlasedRectsGroup::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CAtlasedRectsGroup::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CAtlasedRectsGroup::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v2 + 60) = v2 - 64;
  v3 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 80;
  CAtlasedRectsGroup::UnRegisterNotifiers(this);
  CResource::~CResource(this);
}
