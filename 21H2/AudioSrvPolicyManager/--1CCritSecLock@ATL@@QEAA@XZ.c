/*
 * XREFs of ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18001A300
 * Callers:
 *     _CApplication::LinkProcess_::_1_::dtor$0 @ 0x18003B964 (_CApplication--LinkProcess_--_1_--dtor$0.c)
 *     _CApplicationManager::ResetAllApplicationSpecificEndpoints_::_1_::dtor$1 @ 0x18003B9CB (_CApplicationManager--ResetAllApplicationSpecificEndpoints_--_1_--dtor$1.c)
 *     _CProcess::RecalculateVolume_::_1_::dtor$1 @ 0x18003B9DD (_CProcess--RecalculateVolume_--_1_--dtor$1.c)
 *     _HHOSTEDAPPMANAGERCONTEXTRundown_::_1_::dtor$0 @ 0x18003B9EF (_HHOSTEDAPPMANAGERCONTEXTRundown_--_1_--dtor$0.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$0 @ 0x18003BAEB (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$0.c)
 *     _PickerHostContextManager::OnHostedAppStateChanged_::_1_::dtor$0 @ 0x18003BEBE (_PickerHostContextManager--OnHostedAppStateChanged_--_1_--dtor$0.c)
 *     _CProcess::RegisterProcessNotification_::_1_::dtor$1 @ 0x18003BEF4 (_CProcess--RegisterProcessNotification_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CCritSecLock::~CCritSecLock(LPCRITICAL_SECTION *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    LeaveCriticalSection(*this);
    *((_BYTE *)this + 8) = 0;
  }
}
