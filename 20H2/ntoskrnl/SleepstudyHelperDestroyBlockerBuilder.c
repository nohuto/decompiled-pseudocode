/*
 * XREFs of SleepstudyHelperDestroyBlockerBuilder @ 0x1406D9360
 * Callers:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x14032AEF0 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     SleepstudyHelperBuildBlocker @ 0x1406D91A0 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperCreateBlockerFromComponent @ 0x1408FD7B0 (SleepstudyHelperCreateBlockerFromComponent.c)
 *     SleepstudyHelperCreateBlockerFromDevice @ 0x1408FD8A0 (SleepstudyHelperCreateBlockerFromDevice.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x1408FDCB0 (SleepstudyHelper_RegisterComponentEx.c)
 *     SleepstudyHelper_RegisterPdoWithParentGuid @ 0x1408FDD80 (SleepstudyHelper_RegisterPdoWithParentGuid.c)
 *     SleepstudyHelper_RegisterPdoWithParentHandle @ 0x1408FDE40 (SleepstudyHelper_RegisterPdoWithParentHandle.c)
 *     SleepstudyHelper_RegisterPdoWithParentPdo @ 0x1408FDF30 (SleepstudyHelper_RegisterPdoWithParentPdo.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140268308 (CmpFreeTransientPoolWithTag.c)
 *     SshpDereferenceBlocker @ 0x1406D93C4 (SshpDereferenceBlocker.c)
 */

__int64 __fastcall SleepstudyHelperDestroyBlockerBuilder(_QWORD *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  void *v4; // rcx
  ULONG v5; // esi

  v1 = 0;
  if ( a1 )
  {
    v3 = *a1;
    v4 = (void *)a1[7];
    v5 = *(_DWORD *)(v3 + 24);
    if ( v4 )
    {
      *((_DWORD *)a1 + 12) = 0;
      CmpFreeTransientPoolWithTag(v4, v5);
      a1[7] = 0LL;
    }
    if ( a1[8] )
      SshpDereferenceBlocker();
    CmpFreeTransientPoolWithTag(a1, v5);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
