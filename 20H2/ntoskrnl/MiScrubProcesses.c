/*
 * XREFs of MiScrubProcesses @ 0x1408DE850
 * Callers:
 *     MmScrubMemory @ 0x1408DE95C (MmScrubMemory.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     MiGetProcessPartition @ 0x14027C520 (MiGetProcessPartition.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiProcessHasAwePrivatePages @ 0x14054B848 (MiProcessHasAwePrivatePages.c)
 *     MiScrubInterrupted @ 0x140561F88 (MiScrubInterrupted.c)
 *     MiScrubProcessLargePages @ 0x140562A24 (MiScrubProcessLargePages.c)
 *     PsGetNextProcess @ 0x140659AB0 (PsGetNextProcess.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D8E80 (MiScrubProcessPhysicalPages.c)
 *     MiInitializeScrubPacket @ 0x1408DE690 (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x1408DE790 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiScrubProcesses(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *i; // rcx
  _KPROCESS *v6; // rcx
  unsigned __int64 NextProcess; // rax
  __int64 v8; // rbx
  __int64 v9; // [rsp+20h] [rbp-E0h] BYREF
  int v10; // [rsp+28h] [rbp-D8h]
  _DWORD v11[53]; // [rsp+2Ch] [rbp-D4h] BYREF
  _OWORD v12[3]; // [rsp+100h] [rbp+0h] BYREF

  memset(v12, 0, sizeof(v12));
  memset(v11, 0, sizeof(v11));
  v10 = -1;
  v9 = a1;
  result = MiInitializeScrubPacket(&v9);
  if ( (int)result >= 0 )
  {
    for ( i = 0LL; ; i = (_QWORD *)v8 )
    {
      NextProcess = PsGetNextProcess(i);
      v8 = NextProcess;
      if ( !NextProcess )
        break;
      if ( MiGetProcessPartition(NextProcess) == *(_QWORD *)(a1 + 48) )
      {
        if ( MiScrubInterrupted((__int64)&v9) )
          break;
        if ( MiProcessHasAwePrivatePages(v8) || *(_DWORD *)(v8 + 2140) )
        {
          KiStackAttachProcess(v6, 0, (__int64)v12);
          MiScrubProcessLargePages((__int64)&v9);
          MiScrubProcessPhysicalPages((__int64)&v9);
          KiUnstackDetachProcess((__int64)v12, 0);
        }
      }
    }
    *a2 = *(_QWORD *)&v11[49];
    MiReleaseScrubPacket((__int64)&v9);
    return 0LL;
  }
  return result;
}
