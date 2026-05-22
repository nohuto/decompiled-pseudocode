/*
 * XREFs of ??1?$unique_ptr@VTestCommandHost@@U?$default_delete@VTestCommandHost@@@std@@@std@@QEAA@XZ @ 0x18003B4E0
 * Callers:
 *     _dynamic_atexit_destructor_for__TestCommandHost::m_instance__ @ 0x180051910 (_dynamic_atexit_destructor_for__TestCommandHost--m_instance__.c)
 * Callees:
 *     ??_GTestCommandHost@@QEAAPEAXI@Z @ 0x1800BC1F4 (--_GTestCommandHost@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<TestCommandHost>::~unique_ptr<TestCommandHost>(__int64 a1, unsigned int a2)
{
  void *result; // rax

  if ( TestCommandHost::m_instance )
    return TestCommandHost::`scalar deleting destructor'(TestCommandHost::m_instance, a2);
  return result;
}
