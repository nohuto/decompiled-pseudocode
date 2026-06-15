/*
 * XREFs of ??0CAtlStringMgr@ATL@@QEAA@PEAUIAtlMemMgr@1@@Z @ 0x14001C710
 * Callers:
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x140001210 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ATL::CAtlStringMgr::CAtlStringMgr(ATL::CAtlStringMgr *this, struct ATL::IAtlMemMgr *a2)
{
  __int64 *result; // rax

  dword_140090338 = 2;
  ATL::g_strmgr = (__int64)&ATL::CAtlStringMgr::`vftable';
  qword_140090320 = (__int64)&ATL::g_strheap;
  qword_140090330 = 0LL;
  dword_140090340 = 0;
  result = &ATL::g_strmgr;
  qword_140090328 = (__int64)&ATL::g_strmgr;
  return result;
}
