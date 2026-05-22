/*
 * XREFs of ?GetInstance@InputSinkTreeCache@@SAAEAV1@XZ @ 0x1800155A4
 * Callers:
 *     ?NotifyInputSinkRemoved@@YAHPEAX@Z @ 0x180014000 (-NotifyInputSinkRemoved@@YAHPEAX@Z.c)
 *     ?NotifyInputSinkParented@@YAHPEAX0@Z @ 0x1800153C0 (-NotifyInputSinkParented@@YAHPEAX0@Z.c)
 * Callees:
 *     ??0InputSinkTreeCache@@QEAA@XZ @ 0x18002AF5C (--0InputSinkTreeCache@@QEAA@XZ.c)
 *     atexit @ 0x18003BF5C (atexit.c)
 *     _Init_thread_footer @ 0x18003C8C8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18003C930 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=1
RTL_SRWLOCK *InputSinkTreeCache::GetInstance(void)
{
  InputSinkTreeCache *v1; // rcx

  if ( dword_1802087C0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1802087C0);
    if ( dword_1802087C0 == -1 )
    {
      InputSinkTreeCache::InputSinkTreeCache(v1);
      atexit(InputSinkTreeCache::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__);
      Init_thread_footer(&dword_1802087C0);
    }
  }
  return &SRWLock;
}
