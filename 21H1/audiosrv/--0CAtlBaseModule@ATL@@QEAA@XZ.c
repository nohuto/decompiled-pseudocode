/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x180054578
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001C20 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1800114E8 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  int v1; // eax
  char v2; // cl
  bool v3; // sf
  int *result; // rax

  ATL::_AtlBaseModule = 96;
  Block = 0LL;
  dword_18019F748 = 0;
  dword_18019F74C = 0;
  *(&stru_18019F718 + 4) = 0LL;
  qword_18019F700 = (__int64)&_ImageBase;
  qword_18019F6F8 = (__int64)&_ImageBase;
  qword_18019F710 = (__int64)&GUID_ATLVer70;
  stru_18019F718 = 0LL;
  byte_18019F708 = 1;
  *(&stru_18019F718 + 1) = 0LL;
  dword_18019F70C = 2048;
  v1 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&stru_18019F718);
  v2 = ATL::CAtlBaseModule::m_bInitFailed;
  v3 = v1 < 0;
  result = &ATL::_AtlBaseModule;
  if ( v3 )
    v2 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v2;
  return result;
}
