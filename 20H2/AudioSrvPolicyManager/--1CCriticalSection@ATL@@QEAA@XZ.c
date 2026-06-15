/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x18000A150
 * Callers:
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$1 @ 0x18003B1EA (_CDuckingManager--CDuckingManager_--_1_--dtor$1.c)
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$4 @ 0x18003B22C (_CDuckingManager--CDuckingManager_--_1_--dtor$4.c)
 *     _CProcess::CProcess_::_1_::dtor$1 @ 0x18003B88C (_CProcess--CProcess_--_1_--dtor$1.c)
 *     _CApplication::CApplication_::_1_::dtor$5 @ 0x18003B8CE (_CApplication--CApplication_--_1_--dtor$5.c)
 *     _CApplication::CApplication_::_1_::dtor$6 @ 0x18003B8E7 (_CApplication--CApplication_--_1_--dtor$6.c)
 *     _CApplication::CApplication_::_1_::dtor$7 @ 0x18003B900 (_CApplication--CApplication_--_1_--dtor$7.c)
 *     _CApplication::CApplication_::_1_::dtor$8 @ 0x18003B919 (_CApplication--CApplication_--_1_--dtor$8.c)
 *     _CApplication::CApplication_::_1_::dtor$9 @ 0x18003B932 (_CApplication--CApplication_--_1_--dtor$9.c)
 *     _CApplication::CApplication_::_1_::dtor$10 @ 0x18003B94B (_CApplication--CApplication_--_1_--dtor$10.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$7 @ 0x18003BB6E (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$7.c)
 *     _CProcess::CProcess_::_1_::dtor$4 @ 0x18003BC9E (_CProcess--CProcess_--_1_--dtor$4.c)
 *     _CProcess::CProcess_::_1_::dtor$15 @ 0x18003BDB1 (_CProcess--CProcess_--_1_--dtor$15.c)
 *     _CProcess::CProcess_::_1_::dtor$16 @ 0x18003BDCA (_CProcess--CProcess_--_1_--dtor$16.c)
 *     _CProcess::CProcess_::_1_::dtor$17 @ 0x18003BDE3 (_CProcess--CProcess_--_1_--dtor$17.c)
 *     _AudioStateMonitorManager::AudioStateMonitorManager_::_1_::dtor$1 @ 0x18003C0DF (_AudioStateMonitorManager--AudioStateMonitorManager_--_1_--dtor$1.c)
 *     _TSSession::Create_::_1_::dtor$7 @ 0x18003C544 (_TSSession--Create_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
