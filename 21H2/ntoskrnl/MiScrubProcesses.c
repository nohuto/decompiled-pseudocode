/*
 * XREFs of MiScrubProcesses @ 0x1408DC170
 * Callers:
 *     MmScrubMemory @ 0x1408DC27C (MmScrubMemory.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MiGetProcessPartition @ 0x1402BF640 (MiGetProcessPartition.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiProcessHasAwePrivatePages @ 0x14054D588 (MiProcessHasAwePrivatePages.c)
 *     MiScrubInterrupted @ 0x140563C98 (MiScrubInterrupted.c)
 *     MiScrubProcessLargePages @ 0x140564734 (MiScrubProcessLargePages.c)
 *     PsGetNextProcess @ 0x1406A5A80 (PsGetNextProcess.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D67A0 (MiScrubProcessPhysicalPages.c)
 *     MiInitializeScrubPacket @ 0x1408DBFB0 (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x1408DC0B0 (MiReleaseScrubPacket.c)
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
          KiUnstackDetachProcess((__int64)v12, 0LL);
        }
      }
    }
    *a2 = *(_QWORD *)&v11[49];
    MiReleaseScrubPacket((__int64)&v9);
    return 0LL;
  }
  return result;
}
