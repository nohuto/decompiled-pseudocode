/*
 * XREFs of ??_GTabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAPEAXI@Z @ 0x18029A5B8
 * Callers:
 *     ??_ETabSetMediator@Tabs@ComposableShell@Internal@Windows@@WDA@EAAPEAXI@Z @ 0x1800F7500 (--_ETabSetMediator@Tabs@ComposableShell@Internal@Windows@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAA@XZ @ 0x18029A3E4 (--1TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::ComposableShell::Tabs::TabSetMediator *__fastcall Windows::Internal::ComposableShell::Tabs::TabSetMediator::`scalar deleting destructor'(
        Windows::Internal::ComposableShell::Tabs::TabSetMediator *this,
        char a2)
{
  Windows::Internal::ComposableShell::Tabs::TabSetMediator::~TabSetMediator(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x168);
  return this;
}
