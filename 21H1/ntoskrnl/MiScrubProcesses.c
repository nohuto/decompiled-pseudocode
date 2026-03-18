/*
 * XREFs of MiScrubProcesses @ 0x1408D76C0
 * Callers:
 *     MmScrubMemory @ 0x1408D77CC (MmScrubMemory.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14021A6D0 (MiGetProcessPartition.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiProcessHasAwePrivatePages @ 0x140547828 (MiProcessHasAwePrivatePages.c)
 *     MiScrubInterrupted @ 0x14055DF68 (MiScrubInterrupted.c)
 *     MiScrubProcessLargePages @ 0x14055EA04 (MiScrubProcessLargePages.c)
 *     PsGetNextProcess @ 0x1405EF280 (PsGetNextProcess.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D1CF0 (MiScrubProcessPhysicalPages.c)
 *     MiInitializeScrubPacket @ 0x1408D7500 (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x1408D7600 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiScrubProcesses(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *i; // rcx
  _KPROCESS *v6; // rcx
  _DWORD *v7; // r9
  __int64 v8; // r8
  _DWORD *v9; // r9
  unsigned __int64 NextProcess; // rax
  __int64 v11; // rbx
  __int64 v12; // [rsp+20h] [rbp-E0h] BYREF
  int v13; // [rsp+28h] [rbp-D8h]
  _DWORD v14[53]; // [rsp+2Ch] [rbp-D4h] BYREF
  _OWORD v15[3]; // [rsp+100h] [rbp+0h] BYREF

  memset(v15, 0, sizeof(v15));
  memset(v14, 0, sizeof(v14));
  v13 = -1;
  v12 = a1;
  result = MiInitializeScrubPacket(&v12);
  if ( (int)result >= 0 )
  {
    for ( i = 0LL; ; i = (_QWORD *)v11 )
    {
      NextProcess = PsGetNextProcess(i);
      v11 = NextProcess;
      if ( !NextProcess )
        break;
      if ( MiGetProcessPartition(NextProcess) == *(_QWORD *)(a1 + 48) )
      {
        if ( MiScrubInterrupted((__int64)&v12) )
          break;
        if ( MiProcessHasAwePrivatePages(v11) || *(_DWORD *)(v11 + 2140) )
        {
          KiStackAttachProcess(v6, 0LL, (__int64)v15, v7);
          MiScrubProcessLargePages((__int64)&v12);
          MiScrubProcessPhysicalPages((__int64)&v12);
          KiUnstackDetachProcess((__int64)v15, 0LL, v8, v9);
        }
      }
    }
    *a2 = *(_QWORD *)&v14[49];
    MiReleaseScrubPacket((__int64)&v12);
    return 0LL;
  }
  return result;
}
