/*
 * XREFs of ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18000A19C
 * Callers:
 *     PickerHostContextManager::_dynamic_initializer_for__s_csPickerHostContextList__ @ 0x180001DD0 (PickerHostContextManager--_dynamic_initializer_for__s_csPickerHostContextList__.c)
 *     _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x180001E00 (_dynamic_initializer_for__s_HostedAppInteractivityManager__.c)
 *     ??0CDuckingManager@@QEAA@XZ @ 0x1800089D0 (--0CDuckingManager@@QEAA@XZ.c)
 *     ??0CApplication@@IEAA@K@Z @ 0x18000FEA0 (--0CApplication@@IEAA@K@Z.c)
 *     ??0CProcess@@IEAA@XZ @ 0x180013B34 (--0CProcess@@IEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CCriticalSection::CCriticalSection(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return this;
}
