/*
 * XREFs of ??0CAtlStringMgr@ATL@@QEAA@PEAUIAtlMemMgr@1@@Z @ 0x14001C480
 * Callers:
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x1400011E0 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ATL::CAtlStringMgr::CAtlStringMgr(ATL::CAtlStringMgr *this, struct ATL::IAtlMemMgr *a2)
{
  __int64 *result; // rax

  dword_1400852C8 = 2;
  ATL::g_strmgr = (__int64)&ATL::CAtlStringMgr::`vftable';
  qword_1400852B0 = (__int64)&ATL::g_strheap;
  qword_1400852C0 = 0LL;
  dword_1400852D0 = 0;
  result = &ATL::g_strmgr;
  qword_1400852B8 = (__int64)&ATL::g_strmgr;
  return result;
}
