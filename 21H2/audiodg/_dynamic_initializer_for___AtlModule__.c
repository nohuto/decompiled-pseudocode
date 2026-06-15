/*
 * XREFs of _dynamic_initializer_for___AtlModule__ @ 0x1400010E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAudioDGModule@@QEAA@XZ @ 0x140014DE4 (--0CAudioDGModule@@QEAA@XZ.c)
 */

int __fastcall dynamic_initializer_for___AtlModule__(CAudioDGModule *a1)
{
  CAudioDGModule::CAudioDGModule(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for___AtlModule__);
}
