/*
 * XREFs of ??1?$ProcessLocalStorage@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x14001CB04
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x14002DA70 (wil--details--_dynamic_atexit_destructor_for__g_processLocalData__.c)
 * Callees:
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x14003BB48 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 */

__int64 wil::details_abi::ProcessLocalStorage<wil::details_abi::ProcessLocalData>::~ProcessLocalStorage<wil::details_abi::ProcessLocalData>()
{
  __int64 result; // rax

  if ( qword_14008F148 )
    return wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release(qword_14008F148);
  return result;
}
