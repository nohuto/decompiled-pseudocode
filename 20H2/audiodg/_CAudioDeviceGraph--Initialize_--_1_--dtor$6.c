/*
 * XREFs of _CAudioDeviceGraph::Initialize_::_1_::dtor$6 @ 0x14002C100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDeviceGraph::Initialize_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<CPipeInstance,wistd::default_delete<CPipeInstance>>::~unique_ptr<CPipeInstance,wistd::default_delete<CPipeInstance>>(a2 + 128);
}
