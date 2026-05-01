/*
 * XREFs of ??_GShellHookRegistration@details@AppViewEventHelpers@@UEAAPEAXI@Z @ 0x18031A140
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@details@AppViewEventHelpers@@UEAA@XZ @ 0x180319AF8 (--1-$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@details@Ap.c)
 */

AppViewEventHelpers::details::ShellHookRegistration *__fastcall AppViewEventHelpers::details::ShellHookRegistration::`scalar deleting destructor'(
        AppViewEventHelpers::details::ShellHookRegistration *this,
        char a2)
{
  AppViewEventHelpers::details::EventRegistration<IApplicationViewCollection,IApplicationViewChangeListener>::~EventRegistration<IApplicationViewCollection,IApplicationViewChangeListener>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
