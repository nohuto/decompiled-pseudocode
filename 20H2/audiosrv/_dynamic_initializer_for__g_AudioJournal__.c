/*
 * XREFs of _dynamic_initializer_for__g_AudioJournal__ @ 0x1800015B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AudioJournal@@QEAA@XZ @ 0x1800534E8 (--0AudioJournal@@QEAA@XZ.c)
 */

int __fastcall dynamic_initializer_for__g_AudioJournal__(AudioJournal *a1)
{
  AudioJournal::AudioJournal(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_AudioJournal__);
}
