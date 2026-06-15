/*
 * XREFs of ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18001FC60
 * Callers:
 *     _CApplication::LinkProcess_::_1_::dtor$0 @ 0x1800412A2 (_CApplication--LinkProcess_--_1_--dtor$0.c)
 *     _CApplicationManager::ResetAllApplicationSpecificEndpoints_::_1_::dtor$1 @ 0x180041309 (_CApplicationManager--ResetAllApplicationSpecificEndpoints_--_1_--dtor$1.c)
 *     _CProcess::RecalculateVolume_::_1_::dtor$1 @ 0x18004131B (_CProcess--RecalculateVolume_--_1_--dtor$1.c)
 *     _HHOSTEDAPPMANAGERCONTEXTRundown_::_1_::dtor$0 @ 0x18004132D (_HHOSTEDAPPMANAGERCONTEXTRundown_--_1_--dtor$0.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$0 @ 0x180041429 (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$0.c)
 *     _PickerHostContextManager::OnHostedAppStateChanged_::_1_::dtor$0 @ 0x1800417FC (_PickerHostContextManager--OnHostedAppStateChanged_--_1_--dtor$0.c)
 *     _CProcess::RegisterProcessNotification_::_1_::dtor$1 @ 0x180041832 (_CProcess--RegisterProcessNotification_--_1_--dtor$1.c)
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
