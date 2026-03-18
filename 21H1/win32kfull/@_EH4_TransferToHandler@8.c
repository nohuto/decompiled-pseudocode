/*
 * XREFs of @_EH4_TransferToHandler@8 @ 0xEE280
 * Callers:
 *     __except_handler4 @ 0xEE020 (__except_handler4.c)
 * Callees:
 *     __NLG_Notify @ 0xEE2D9 (__NLG_Notify.c)
 */

int __thiscall _EH4_TransferToHandler(int (__fastcall *this)(_DWORD, _DWORD))
{
  _NLG_Notify(1);
  return this(0, 0);
}
