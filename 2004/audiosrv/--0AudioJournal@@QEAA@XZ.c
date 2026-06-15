/*
 * XREFs of ??0AudioJournal@@QEAA@XZ @ 0x180053C88
 * Callers:
 *     _dynamic_initializer_for__g_AudioJournal__ @ 0x180001A50 (_dynamic_initializer_for__g_AudioJournal__.c)
 * Callees:
 *     ?Initialize@AudioJournal@@AEAAJXZ @ 0x1800538C4 (-Initialize@AudioJournal@@AEAAJXZ.c)
 *     ??0CSerialWorkQueue@@QEAA@XZ @ 0x180053CF8 (--0CSerialWorkQueue@@QEAA@XZ.c)
 *     memset_0 @ 0x18006B69C (memset_0.c)
 */

// Hidden C++ exception states: #wind=3
AudioJournal *__fastcall AudioJournal::AudioJournal(AudioJournal *this)
{
  AudioJournal *v1; // rcx

  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  CSerialWorkQueue::CSerialWorkQueue((CSerialWorkQueue *)&unk_18019FFF0);
  qword_1801A0098 = 0LL;
  memset_0(&word_1801A0558, 0, 0x208uLL);
  AudioJournal::Initialize(v1);
  return (AudioJournal *)&g_AudioJournal;
}
