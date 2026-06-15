/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x140013678
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x140001230 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140012460 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  int v1; // eax
  char v2; // cl
  bool v3; // sf
  int *result; // rax

  ATL::_AtlBaseModule = 96;
  qword_140090040 = 0LL;
  dword_140090048 = 0;
  dword_14009004C = 0;
  *(&stru_140090018 + 4) = 0LL;
  qword_140090000 = (__int64)&_ImageBase;
  hModule = &_ImageBase;
  qword_140090010 = (__int64)&GUID_ATLVer70;
  stru_140090018 = 0LL;
  byte_140090008 = 1;
  *(&stru_140090018 + 1) = 0LL;
  dword_14009000C = 2048;
  v1 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&stru_140090018);
  v2 = ATL::CAtlBaseModule::m_bInitFailed;
  v3 = v1 < 0;
  result = &ATL::_AtlBaseModule;
  if ( v3 )
    v2 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v2;
  return result;
}
