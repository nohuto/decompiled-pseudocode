/*
 * XREFs of ??0AudioJournal@@QEAA@XZ @ 0x1800534E8
 * Callers:
 *     _dynamic_initializer_for__g_AudioJournal__ @ 0x1800015B0 (_dynamic_initializer_for__g_AudioJournal__.c)
 * Callees:
 *     ?Initialize@AudioJournal@@AEAAJXZ @ 0x180053124 (-Initialize@AudioJournal@@AEAAJXZ.c)
 *     ??0CSerialWorkQueue@@QEAA@XZ @ 0x180053558 (--0CSerialWorkQueue@@QEAA@XZ.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 */

// Hidden C++ exception states: #wind=3
AudioJournal *__fastcall AudioJournal::AudioJournal(AudioJournal *this)
{
  AudioJournal *v1; // rcx

  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  CSerialWorkQueue::CSerialWorkQueue((CSerialWorkQueue *)&unk_18019EF80);
  qword_18019F028 = 0LL;
  memset_0(&word_18019F4E8, 0, 0x208uLL);
  AudioJournal::Initialize(v1);
  return (AudioJournal *)&g_AudioJournal;
}
