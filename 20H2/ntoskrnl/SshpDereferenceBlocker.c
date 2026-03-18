/*
 * XREFs of SshpDereferenceBlocker @ 0x1406D93C4
 * Callers:
 *     SleepstudyHelperSetBlockerParentHandle @ 0x14032FE90 (SleepstudyHelperSetBlockerParentHandle.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x1406D9360 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SshpSendSessionData @ 0x1408FD4F8 (SshpSendSessionData.c)
 *     SleepstudyHelperDestroyLibrary @ 0x1408FE1E0 (SleepstudyHelperDestroyLibrary.c)
 * Callees:
 *     SshpFreeBlockerEntry @ 0x14057E280 (SshpFreeBlockerEntry.c)
 */

void __fastcall SshpDereferenceBlocker(_QWORD *a1)
{
  _QWORD *v1; // rbx

  do
  {
    v1 = (_QWORD *)a1[35];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1[36] + 96LL), 0xFFFFFFFF) != 1 )
      break;
    SshpFreeBlockerEntry(a1);
    a1 = v1;
  }
  while ( v1 );
}
