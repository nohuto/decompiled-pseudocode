/*
 * XREFs of _LampArrayTelemetry::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x180051820
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180037600 (-Release@RefCountedObject@@UEAAKXZ.c)
 */

void __fastcall LampArrayTelemetry::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__()
{
  RefCountedObject *v0; // rcx

  v0 = qword_180208910;
  if ( qword_180208910 )
  {
    qword_180208910 = 0LL;
    RefCountedObject::Release(v0);
  }
}
