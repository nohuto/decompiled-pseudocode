/*
 * XREFs of ??1String@Internal@Windows@@QEAA@XZ @ 0x18012348C
 * Callers:
 *     _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$29 @ 0x1800DC680 (_WindowEventDispatcher--AppViewActivationRequested_--_1_--dtor$29.c)
 *     _CApplicationManager::_HandleViewCreation_::_1_::dtor$0 @ 0x1800DCA32 (_CApplicationManager--_HandleViewCreation_--_1_--dtor$0.c)
 *     _ViewEventDispatcher::_FindMatchingViewEventRegistration_::_1_::dtor$0 @ 0x180289F0E (_ViewEventDispatcher--_FindMatchingViewEventRegistration_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::String::~String(HSTRING *this)
{
  HSTRING v1; // rcx

  v1 = *this;
  if ( v1 )
    WindowsDeleteString(v1);
}
