/*
 * XREFs of _ThreadHelpers::ChainedThreadpoolWorker::ChainedThreadpoolWorker_::_1_::dtor$1 @ 0x180156675
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ThreadHelpers::ChainedThreadpoolWorker::ChainedThreadpoolWorker_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return std::queue<std::shared_ptr<std::function<void (void)>>>::~queue<std::shared_ptr<std::function<void (void)>>,std::deque<std::shared_ptr<std::function<void (void)>>>>(*(_QWORD *)(a2 + 48) + 24LL);
}
