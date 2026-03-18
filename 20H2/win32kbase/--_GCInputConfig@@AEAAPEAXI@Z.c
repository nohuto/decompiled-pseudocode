/*
 * XREFs of ??_GCInputConfig@@AEAAPEAXI@Z @ 0x1C0009EB4
 * Callers:
 *     UnInitializeInputComponents @ 0x1C0007ED8 (UnInitializeInputComponents.c)
 * Callees:
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000AC9C (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 */

struct _LIST_ENTRY **__fastcall CInputConfig::`scalar deleting destructor'(struct _LIST_ENTRY **this)
{
  CInputConfig *v2; // rcx

  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(CInputConfig::slock, 1u);
  while ( *this != (struct _LIST_ENTRY *)this )
    CInputConfig::_FreeInputSpace(v2, *this);
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  Win32FreePool(this);
  return this;
}
