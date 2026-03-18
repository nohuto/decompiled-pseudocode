/*
 * XREFs of SshpDereferenceBlocker @ 0x1407063D4
 * Callers:
 *     SleepstudyHelperSetBlockerParentHandle @ 0x14035F090 (SleepstudyHelperSetBlockerParentHandle.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140706370 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SshpSendSessionData @ 0x1408F78E8 (SshpSendSessionData.c)
 *     SleepstudyHelperDestroyLibrary @ 0x1408F85D0 (SleepstudyHelperDestroyLibrary.c)
 * Callees:
 *     SshpFreeBlockerEntry @ 0x14057A850 (SshpFreeBlockerEntry.c)
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
