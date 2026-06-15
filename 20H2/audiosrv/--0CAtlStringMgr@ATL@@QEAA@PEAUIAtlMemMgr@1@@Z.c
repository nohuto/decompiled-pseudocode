/*
 * XREFs of ??0CAtlStringMgr@ATL@@QEAA@PEAUIAtlMemMgr@1@@Z @ 0x18006933C
 * Callers:
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x180001760 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ATL::CAtlStringMgr::CAtlStringMgr(ATL::CAtlStringMgr *this, struct ATL::IAtlMemMgr *a2)
{
  __int64 *result; // rax

  dword_18019F7F8 = 2;
  ATL::g_strmgr = (__int64)&ATL::CAtlStringMgr::`vftable';
  qword_18019F7E0 = (__int64)&ATL::g_strheap;
  qword_18019F7F0 = 0LL;
  dword_18019F800 = 0;
  result = &ATL::g_strmgr;
  qword_18019F7E8 = (__int64)&ATL::g_strmgr;
  return result;
}
