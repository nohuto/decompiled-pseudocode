/*
 * XREFs of ??1AudioJournal@@QEAA@XZ @ 0x180069FC8
 * Callers:
 *     _dynamic_atexit_destructor_for__g_AudioJournal__ @ 0x18007D8A0 (_dynamic_atexit_destructor_for__g_AudioJournal__.c)
 * Callees:
 *     ??1CSerialWorkQueue@@QEAA@XZ @ 0x1800B89D4 (--1CSerialWorkQueue@@QEAA@XZ.c)
 *     ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x1800BAFE8 (-Shutdown@CSerialWorkQueue@@QEAAXXZ.c)
 *     ??_G_RecurringTask@@QEAAPEAXI@Z @ 0x1800EB430 (--_G_RecurringTask@@QEAAPEAXI@Z.c)
 */

void __fastcall AudioJournal::~AudioJournal(AudioJournal *this)
{
  unsigned int v1; // edx

  CSerialWorkQueue::Shutdown((CSerialWorkQueue *)&unk_18019FFF0);
  if ( qword_1801A0098 )
    _RecurringTask::`scalar deleting destructor'(qword_1801A0098, v1);
  CSerialWorkQueue::~CSerialWorkQueue((CSerialWorkQueue *)&unk_18019FFF0);
  DeleteCriticalSection(&CriticalSection);
}
