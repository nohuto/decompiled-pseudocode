/*
 * XREFs of _ControllerProcessor::InjectManipulationInput_::_1_::dtor$0 @ 0x180120F7F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ControllerProcessor::InjectManipulationInput_::_1_::dtor_0(__int64 a1, void **a2)
{
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(
    a2 + 8,
    (const struct std::nothrow_t *)a2);
}
