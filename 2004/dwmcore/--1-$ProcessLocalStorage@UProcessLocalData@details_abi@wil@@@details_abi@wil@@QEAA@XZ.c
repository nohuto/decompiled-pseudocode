/*
 * XREFs of ??1?$ProcessLocalStorage@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x1800E23D8
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x1800F3C90 (wil--details--_dynamic_atexit_destructor_for__g_processLocalData__.c)
 * Callees:
 *     <none>
 */

__int64 wil::details_abi::ProcessLocalStorage<wil::details_abi::ProcessLocalData>::~ProcessLocalStorage<wil::details_abi::ProcessLocalData>()
{
  __int64 result; // rax

  if ( qword_1803432B0 )
    return wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release(qword_1803432B0);
  return result;
}
