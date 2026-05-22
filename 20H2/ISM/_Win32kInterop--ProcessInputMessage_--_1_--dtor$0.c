/*
 * XREFs of _Win32kInterop::ProcessInputMessage_::_1_::dtor$0 @ 0x1800B173A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Win32kInterop::ProcessInputMessage_::_1_::dtor_0(__int64 a1, void **a2)
{
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(
    a2 + 17,
    (const struct std::nothrow_t *)a2);
}
