/*
 * XREFs of SshpSetBlockerActive @ 0x14030BA60
 * Callers:
 *     SleepstudyHelperBlockerActiveDereference @ 0x14030B960 (SleepstudyHelperBlockerActiveDereference.c)
 *     SleepstudyHelperBlockerActiveReference @ 0x14030B9E0 (SleepstudyHelperBlockerActiveReference.c)
 *     SshpFreeBlockerEntry @ 0x14057A210 (SshpFreeBlockerEntry.c)
 *     SleepstudyHelper_ComponentActiveLocked @ 0x14057AD70 (SleepstudyHelper_ComponentActiveLocked.c)
 *     SleepstudyHelper_ComponentInactive @ 0x14057ADC0 (SleepstudyHelper_ComponentInactive.c)
 * Callees:
 *     SshpStopBlockerAccounting @ 0x14057A69C (SshpStopBlockerAccounting.c)
 */

__int64 __fastcall SshpSetBlockerActive(__int64 a1, char a2)
{
  int v2; // r8d
  bool v3; // zf
  int v4; // edx
  int v5; // ebx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 8);
  v3 = a2 == 0;
  v4 = v2;
  v5 = !v3;
  result = v2 & 1;
  if ( v5 != (_DWORD)result && (v2 & 2) != 0 )
  {
    result = SshpStopBlockerAccounting(a1, MEMORY[0xFFFFF78000000008], 0LL);
    v4 = *(_DWORD *)(a1 + 8);
  }
  *(_DWORD *)(a1 + 8) = v5 | v4 & 0xFFFFFFFE;
  return result;
}
