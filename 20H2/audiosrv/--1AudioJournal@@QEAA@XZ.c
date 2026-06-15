/*
 * XREFs of ??1AudioJournal@@QEAA@XZ @ 0x180069668
 * Callers:
 *     _dynamic_atexit_destructor_for__g_AudioJournal__ @ 0x18007CDE0 (_dynamic_atexit_destructor_for__g_AudioJournal__.c)
 * Callees:
 *     ??1CSerialWorkQueue@@QEAA@XZ @ 0x1800B7D64 (--1CSerialWorkQueue@@QEAA@XZ.c)
 *     ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x1800BA358 (-Shutdown@CSerialWorkQueue@@QEAAXXZ.c)
 *     ??_G_RecurringTask@@QEAAPEAXI@Z @ 0x1800EA7A0 (--_G_RecurringTask@@QEAAPEAXI@Z.c)
 */

void __fastcall AudioJournal::~AudioJournal(AudioJournal *this)
{
  unsigned int v1; // edx

  CSerialWorkQueue::Shutdown((CSerialWorkQueue *)&unk_18019EF80);
  if ( qword_18019F028 )
    _RecurringTask::`scalar deleting destructor'(qword_18019F028, v1);
  CSerialWorkQueue::~CSerialWorkQueue((CSerialWorkQueue *)&unk_18019EF80);
  DeleteCriticalSection(&CriticalSection);
}
