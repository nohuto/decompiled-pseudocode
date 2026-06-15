/*
 * XREFs of ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x140013CB0
 * Callers:
 *     ??0CAudioDGModule@@QEAA@XZ @ 0x140014DE4 (--0CAudioDGModule@@QEAA@XZ.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140012460 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x140013D98 (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 */

__int64 *ATL::CAtlExeModuleT<CAudioDGModule>::CAtlExeModuleT<CAudioDGModule>()
{
  DWORD CurrentThreadId; // eax
  HRESULT v1; // eax
  ATL::CAtlComModule *v2; // rcx

  dword_14008FF08 = 0;
  *(__int64 *)((char *)&qword_14008FF0C + 4) = 0LL;
  qword_14008FF0C = 0LL;
  qword_14008FF40 = 0LL;
  xmmword_14008FF18 = 0LL;
  qword_14008FF38 = 0LL;
  xmmword_14008FF28 = 0LL;
  ATL::_pAtlModule = (struct ATL::CAtlModule *)&_AtlModule;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&xmmword_14008FF18) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    dword_14008FF08 = 56;
  ATL::CAtlModule::m_libid = LIBID_PolicyServerLib;
  CurrentThreadId = GetCurrentThreadId();
  qword_14008FF50 = 0LL;
  dword_14008FF48 = CurrentThreadId;
  dword_14008FF58 = 5000;
  dword_14008FF5C = 1000;
  byte_14008FF60 = 1;
  byte_14008FF62 = 0;
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
    byte_14008FF62 = 1;
  }
  ATL::CAtlComModule::ExecuteObjectMain(v2, 1);
  return &_AtlModule;
}
