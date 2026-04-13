/*
 * XREFs of ??_GSetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x180099710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::`scalar deleting destructor'(
        void **this,
        char a2)
{
  void *v4; // rcx
  void *v5; // rcx

  if ( (unsigned __int64)this[14] >= 8 )
    operator delete(this[11]);
  this[14] = (void *)7;
  this[13] = 0LL;
  *((_WORD *)this + 44) = 0;
  if ( (unsigned __int64)this[10] >= 8 )
    operator delete(this[7]);
  this[10] = (void *)7;
  this[9] = 0LL;
  *((_WORD *)this + 28) = 0;
  if ( (unsigned __int64)this[6] >= 8 )
    operator delete(this[3]);
  this[6] = (void *)7;
  this[5] = 0LL;
  *((_WORD *)this + 12) = 0;
  v4 = this[2];
  if ( v4 )
    CoTaskMemFree(v4);
  v5 = this[1];
  if ( v5 )
    LocalFree(v5);
  *this = &CreativeFramework::Actions::IActionService::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
