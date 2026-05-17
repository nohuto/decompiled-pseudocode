/*
 * XREFs of @_EH4_TransferToHandler@8 @ 0x4B2F6FB8
 * Callers:
 *     __except_handler4_common @ 0x4B2F68B0 (__except_handler4_common.c)
 * Callees:
 *     __NLG_Notify @ 0x4B2FB915 (__NLG_Notify.c)
 */

int __thiscall _EH4_TransferToHandler(int (__fastcall *this)(_DWORD, _DWORD))
{
  _NLG_Notify(1);
  return this(0, 0);
}
