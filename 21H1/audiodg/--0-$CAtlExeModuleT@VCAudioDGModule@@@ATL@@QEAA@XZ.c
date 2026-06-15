/*
 * XREFs of ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x140013FF0
 * Callers:
 *     ??0CAudioDGModule@@QEAA@XZ @ 0x140015124 (--0CAudioDGModule@@QEAA@XZ.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1400125C0 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x1400140D8 (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 */

__int64 *ATL::CAtlExeModuleT<CAudioDGModule>::CAtlExeModuleT<CAudioDGModule>()
{
  DWORD CurrentThreadId; // eax
  HRESULT v1; // eax
  ATL::CAtlComModule *v2; // rcx

  dword_140084ED8 = 0;
  *(__int64 *)((char *)&qword_140084EDC + 4) = 0LL;
  qword_140084EDC = 0LL;
  qword_140084F10 = 0LL;
  xmmword_140084EE8 = 0LL;
  qword_140084F08 = 0LL;
  xmmword_140084EF8 = 0LL;
  ATL::_pAtlModule = (struct ATL::CAtlModule *)&_AtlModule;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&xmmword_140084EE8) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    dword_140084ED8 = 56;
  ATL::CAtlModule::m_libid = LIBID_PolicyServerLib;
  CurrentThreadId = GetCurrentThreadId();
  qword_140084F20 = 0LL;
  dword_140084F18 = CurrentThreadId;
  dword_140084F28 = 5000;
  dword_140084F2C = 1000;
  byte_140084F30 = 1;
  byte_140084F32 = 0;
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
    byte_140084F32 = 1;
  }
  ATL::CAtlComModule::ExecuteObjectMain(v2, 1);
  return &_AtlModule;
}
