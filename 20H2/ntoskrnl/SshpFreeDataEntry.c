/*
 * XREFs of SshpFreeDataEntry @ 0x1408FD468
 * Callers:
 *     SleepstudyHelperCreateBlockerData @ 0x1408FE010 (SleepstudyHelperCreateBlockerData.c)
 *     SleepstudyHelperDestroyBlockerData @ 0x1408FE1B0 (SleepstudyHelperDestroyBlockerData.c)
 *     SleepstudyHelperDestroyLibrary @ 0x1408FE1E0 (SleepstudyHelperDestroyLibrary.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     CmpFreeTransientPoolWithTag @ 0x140268308 (CmpFreeTransientPoolWithTag.c)
 *     SSHSupportReleasePushLockExclusive @ 0x140328558 (SSHSupportReleasePushLockExclusive.c)
 */

void __fastcall SshpFreeDataEntry(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  unsigned int i; // edi

  ExAcquirePushLockExclusiveEx(a1[2] + 16LL, 0LL);
  v2 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = (_QWORD *)a1[1], (_QWORD *)*v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  SSHSupportReleasePushLockExclusive(a1[2] + 16LL);
  for ( i = 0; i < *((_DWORD *)a1 + 10); ++i )
    CmpFreeTransientPoolWithTag((void *)a1[4 * i + 7], *(_DWORD *)(a1[2] + 24LL));
  CmpFreeTransientPoolWithTag(a1, *(_DWORD *)(a1[2] + 24LL));
}
