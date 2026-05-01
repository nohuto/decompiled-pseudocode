/*
 * XREFs of _CAppViewManager::_ProcessNextOperation_::_1_::dtor$2 @ 0x1801006C2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppViewManager::_ProcessNextOperation_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return CAutoHandle<void *>::~CAutoHandle<void *>(a2 + 40);
}
