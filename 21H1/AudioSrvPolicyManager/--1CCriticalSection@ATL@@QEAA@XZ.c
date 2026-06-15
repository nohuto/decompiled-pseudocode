/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x18000F950
 * Callers:
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$1 @ 0x180040B28 (_CDuckingManager--CDuckingManager_--_1_--dtor$1.c)
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$4 @ 0x180040B6A (_CDuckingManager--CDuckingManager_--_1_--dtor$4.c)
 *     _CProcess::CProcess_::_1_::dtor$1 @ 0x1800411CA (_CProcess--CProcess_--_1_--dtor$1.c)
 *     _CApplication::CApplication_::_1_::dtor$5 @ 0x18004120C (_CApplication--CApplication_--_1_--dtor$5.c)
 *     _CApplication::CApplication_::_1_::dtor$6 @ 0x180041225 (_CApplication--CApplication_--_1_--dtor$6.c)
 *     _CApplication::CApplication_::_1_::dtor$7 @ 0x18004123E (_CApplication--CApplication_--_1_--dtor$7.c)
 *     _CApplication::CApplication_::_1_::dtor$8 @ 0x180041257 (_CApplication--CApplication_--_1_--dtor$8.c)
 *     _CApplication::CApplication_::_1_::dtor$9 @ 0x180041270 (_CApplication--CApplication_--_1_--dtor$9.c)
 *     _CApplication::CApplication_::_1_::dtor$10 @ 0x180041289 (_CApplication--CApplication_--_1_--dtor$10.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$7 @ 0x1800414AC (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$7.c)
 *     _CProcess::CProcess_::_1_::dtor$4 @ 0x1800415DC (_CProcess--CProcess_--_1_--dtor$4.c)
 *     _CProcess::CProcess_::_1_::dtor$15 @ 0x1800416EF (_CProcess--CProcess_--_1_--dtor$15.c)
 *     _CProcess::CProcess_::_1_::dtor$16 @ 0x180041708 (_CProcess--CProcess_--_1_--dtor$16.c)
 *     _CProcess::CProcess_::_1_::dtor$17 @ 0x180041721 (_CProcess--CProcess_--_1_--dtor$17.c)
 *     _AudioStateMonitorManager::AudioStateMonitorManager_::_1_::dtor$1 @ 0x180041A1D (_AudioStateMonitorManager--AudioStateMonitorManager_--_1_--dtor$1.c)
 *     _TSSession::Create_::_1_::dtor$7 @ 0x180041E82 (_TSSession--Create_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
