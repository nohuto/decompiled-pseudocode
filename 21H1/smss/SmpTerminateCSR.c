/*
 * XREFs of SmpTerminateCSR @ 0x1400058B4
 * Callers:
 *     SmpDestroyControlBlock @ 0x140003BE4 (SmpDestroyControlBlock.c)
 *     SmpStopCsr @ 0x1400059C0 (SmpStopCsr.c)
 * Callees:
 *     SmpSetCoreProcessIds @ 0x14000260C (SmpSetCoreProcessIds.c)
 *     SmpSessionIdToInitialSessionIndex @ 0x140002704 (SmpSessionIdToInitialSessionIndex.c)
 *     SmpUnlockKnownSubSysList @ 0x1400035B8 (SmpUnlockKnownSubSysList.c)
 *     SmpWaitForSubSysStartup @ 0x140003918 (SmpWaitForSubSysStartup.c)
 *     SmpDereferenceKnownSubSys @ 0x140003A84 (SmpDereferenceKnownSubSys.c)
 */

__int64 __fastcall SmpTerminateCSR(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rcx
  __int64 *v3; // r10
  __int64 v4; // rax
  __int64 *v5; // rbx
  NTSTATUS v6; // eax
  _QWORD v8[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v9; // [rsp+30h] [rbp-10h] BYREF

  v8[1] = v8;
  v1 = a1;
  v8[0] = v8;
  SmpWaitForSubSysStartup(a1, 0, (__int64)v8, (__int64)&v9);
  SmpUnlockKnownSubSysList((__int64)&v9);
  if ( (_QWORD *)v8[0] != v8 )
  {
    if ( (unsigned int)SmpSessionIdToInitialSessionIndex(v1) != -1 )
    {
      v9 = 0LL;
      SmpSetCoreProcessIds(v2, (PVOID *)&v9);
      v3 = (__int64 *)v8[0];
    }
    do
    {
      if ( (_QWORD *)v3[1] != v8 || (v4 = *v3, *(__int64 **)(*v3 + 8) != v3) )
        __fastfail(3u);
      v8[0] = *v3;
      v5 = v3 - 9;
      *(_QWORD *)(v4 + 8) = v8;
      v6 = NtTerminateProcess((HANDLE)*(v3 - 5), 0);
      if ( ((v6 + 0x80000000) & 0x80000000) != 0 || v6 == -1073741558 )
        NtWaitForSingleObject((HANDLE)v5[4], 0, 0LL);
      SmpDereferenceKnownSubSys(v5);
      v3 = (__int64 *)v8[0];
    }
    while ( (_QWORD *)v8[0] != v8 );
  }
  return 0LL;
}
