/*
 * XREFs of ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x140013CE0
 * Callers:
 *     ??0CAudioDGModule@@QEAA@XZ @ 0x140014E14 (--0CAudioDGModule@@QEAA@XZ.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140012490 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x140013DC8 (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 */

__int64 *ATL::CAtlExeModuleT<CAudioDGModule>::CAtlExeModuleT<CAudioDGModule>()
{
  DWORD CurrentThreadId; // eax
  HRESULT v1; // eax
  ATL::CAtlComModule *v2; // rcx

  dword_14008FED8 = 0;
  *(__int64 *)((char *)&qword_14008FEDC + 4) = 0LL;
  qword_14008FEDC = 0LL;
  qword_14008FF10 = 0LL;
  xmmword_14008FEE8 = 0LL;
  qword_14008FF08 = 0LL;
  xmmword_14008FEF8 = 0LL;
  ATL::_pAtlModule = (struct ATL::CAtlModule *)&_AtlModule;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&xmmword_14008FEE8) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    dword_14008FED8 = 56;
  ATL::CAtlModule::m_libid = LIBID_PolicyServerLib;
  CurrentThreadId = GetCurrentThreadId();
  qword_14008FF20 = 0LL;
  dword_14008FF18 = CurrentThreadId;
  dword_14008FF28 = 5000;
  dword_14008FF2C = 1000;
  byte_14008FF30 = 1;
  byte_14008FF32 = 0;
  v1 = CoInitializeEx(0LL, 0);
  if ( v1 < 0 )
  {
    if ( v1 != -2147417850 || !GetModuleHandleW(L"Mscoree.dll") )
    {
      ATL::CAtlBaseModule::m_bInitFailed = 1;
      return &_AtlModule;
    }
  }
  else
  {
    byte_14008FF32 = 1;
  }
  ATL::CAtlComModule::ExecuteObjectMain(v2, 1);
  return &_AtlModule;
}
