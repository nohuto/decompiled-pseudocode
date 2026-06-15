/*
 * XREFs of ??0?$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ @ 0x1800633E8
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180063120 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1800114E8 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x180063484 (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 */

__int64 __fastcall ATL::CAtlExeModuleT<CAudioServiceModule>::CAtlExeModuleT<CAudioServiceModule>(__int64 a1)
{
  __int64 v2; // rcx
  DWORD CurrentThreadId; // eax
  ATL::CAtlComModule *v4; // rcx

  v2 = a1 + 24;
  ATL::_pAtlModule = (struct ATL::CAtlModule *)a1;
  *(_OWORD *)v2 = 0LL;
  *(_OWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)v2) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    *(_DWORD *)(a1 + 8) = 56;
  ATL::CAtlModule::m_libid = LIBID_PolicyServerLib;
  CurrentThreadId = GetCurrentThreadId();
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 72) = CurrentThreadId;
  *(_DWORD *)(a1 + 88) = 5000;
  *(_DWORD *)(a1 + 92) = 1000;
  *(_BYTE *)(a1 + 96) = 1;
  *(_BYTE *)(a1 + 98) = 1;
  ATL::CAtlComModule::ExecuteObjectMain(v4, 1);
  return a1;
}
