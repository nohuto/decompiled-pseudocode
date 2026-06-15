/*
 * XREFs of ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18000F99C
 * Callers:
 *     PickerHostContextManager::_dynamic_initializer_for__s_csPickerHostContextList__ @ 0x1800022B0 (PickerHostContextManager--_dynamic_initializer_for__s_csPickerHostContextList__.c)
 *     _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x1800022E0 (_dynamic_initializer_for__s_HostedAppInteractivityManager__.c)
 *     ??0CDuckingManager@@QEAA@XZ @ 0x18000E0B8 (--0CDuckingManager@@QEAA@XZ.c)
 *     ??0CApplication@@IEAA@K@Z @ 0x180015800 (--0CApplication@@IEAA@K@Z.c)
 *     ??0CProcess@@IEAA@XZ @ 0x180019494 (--0CProcess@@IEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000F974 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CCriticalSection::CCriticalSection(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return this;
}
