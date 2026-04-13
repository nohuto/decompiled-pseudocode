/*
 * XREFs of std::_dynamic_initializer_for__initlocks__ @ 0x180003F70
 * Callers:
 *     <none>
 * Callees:
 *     ??0_Init_locks@std@@QEAA@XZ @ 0x1800B0A90 (--0_Init_locks@std@@QEAA@XZ.c)
 */

int std::_dynamic_initializer_for__initlocks__()
{
  std::_Init_locks::_Init_locks((std::_Init_locks *)&unk_1801983B0);
  return atexit((void (__cdecl *)())std::_dynamic_atexit_destructor_for__initlocks__);
}
