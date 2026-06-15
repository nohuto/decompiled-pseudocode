/*
 * XREFs of ??0CAtlStringMgr@ATL@@QEAA@PEAUIAtlMemMgr@1@@Z @ 0x180069B9C
 * Callers:
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x180001C00 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ATL::CAtlStringMgr::CAtlStringMgr(ATL::CAtlStringMgr *this, struct ATL::IAtlMemMgr *a2)
{
  __int64 *result; // rax

  dword_1801A0868 = 2;
  ATL::g_strmgr = (__int64)&ATL::CAtlStringMgr::`vftable';
  qword_1801A0850 = (__int64)&ATL::g_strheap;
  qword_1801A0860 = 0LL;
  dword_1801A0870 = 0;
  result = &ATL::g_strmgr;
  qword_1801A0858 = (__int64)&ATL::g_strmgr;
  return result;
}
