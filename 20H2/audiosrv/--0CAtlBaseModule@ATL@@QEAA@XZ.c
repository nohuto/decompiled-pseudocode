/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x180053ED8
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001780 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180010FA8 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  int v1; // eax
  char v2; // cl
  bool v3; // sf
  int *result; // rax

  ATL::_AtlBaseModule = 96;
  Block = 0LL;
  dword_18019E6F8 = 0;
  dword_18019E6FC = 0;
  *(&stru_18019E6C8 + 4) = 0LL;
  qword_18019E6B0 = (__int64)&_ImageBase;
  qword_18019E6A8 = (__int64)&_ImageBase;
  qword_18019E6C0 = (__int64)&GUID_ATLVer70;
  stru_18019E6C8 = 0LL;
  byte_18019E6B8 = 1;
  *(&stru_18019E6C8 + 1) = 0LL;
  dword_18019E6BC = 2048;
  v1 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&stru_18019E6C8);
  v2 = ATL::CAtlBaseModule::m_bInitFailed;
  v3 = v1 < 0;
  result = &ATL::_AtlBaseModule;
  if ( v3 )
    v2 = 1;
  ATL::CAtlBaseModule::m_bInitFailed = v2;
  return result;
}
