/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x1400139B8
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x140001200 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1400125C0 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  int v1; // eax
  char v2; // cl
  bool v3; // sf
  int *result; // rax

  ATL::_AtlBaseModule = 96;
  qword_140085010 = 0LL;
  dword_140085018 = 0;
  dword_14008501C = 0;
  *(&stru_140084FE8 + 4) = 0LL;
  qword_140084FD0 = (__int64)&_ImageBase;
  hModule = &_ImageBase;
  qword_140084FE0 = (__int64)&GUID_ATLVer70;
  stru_140084FE8 = 0LL;
  byte_140084FD8 = 1;
  *(&stru_140084FE8 + 1) = 0LL;
  dword_140084FDC = 2048;
  v1 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&stru_140084FE8);
  v2 = ATL::CAtlBaseModule::m_bInitFailed;
  v3 = v1 < 0;
  result = &ATL::_AtlBaseModule;
  if ( v3 )
    v2 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v2;
  return result;
}
