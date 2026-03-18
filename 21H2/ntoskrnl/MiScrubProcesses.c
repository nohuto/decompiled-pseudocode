/*
 * XREFs of MiScrubProcesses @ 0x140983B80
 * Callers:
 *     MmScrubMemory @ 0x140983C8C (MmScrubMemory.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MiGetProcessPartition @ 0x14032A72C (MiGetProcessPartition.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiProcessHasAwePrivatePages @ 0x1405ABD04 (MiProcessHasAwePrivatePages.c)
 *     MiScrubInterrupted @ 0x1405C4F88 (MiScrubInterrupted.c)
 *     MiScrubProcessLargePages @ 0x1405C5930 (MiScrubProcessLargePages.c)
 *     PsGetNextProcess @ 0x1407B6B90 (PsGetNextProcess.c)
 *     MiScrubProcessPhysicalPages @ 0x14097D7F8 (MiScrubProcessPhysicalPages.c)
 *     MiInitializeScrubPacket @ 0x1409839C0 (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x140983AC0 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiScrubProcesses(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *i; // rcx
  _KPROCESS *v6; // rcx
  _DWORD *v7; // r9
  __int64 *NextProcess; // rax
  __int64 v9; // rbx
  __int64 v10; // [rsp+20h] [rbp-E0h] BYREF
  int v11; // [rsp+28h] [rbp-D8h]
  _DWORD v12[53]; // [rsp+2Ch] [rbp-D4h] BYREF
  _OWORD v13[3]; // [rsp+100h] [rbp+0h] BYREF

  memset(v13, 0, sizeof(v13));
  memset(v12, 0, sizeof(v12));
  v11 = -1;
  v10 = a1;
  result = MiInitializeScrubPacket(&v10);
  if ( (int)result >= 0 )
  {
    for ( i = 0LL; ; i = (_QWORD *)v9 )
    {
      NextProcess = PsGetNextProcess(i);
      v9 = (__int64)NextProcess;
      if ( !NextProcess )
        break;
      if ( MiGetProcessPartition((__int64)NextProcess) == *(_QWORD *)(a1 + 48) )
      {
        if ( MiScrubInterrupted((__int64)&v10) )
          break;
        if ( MiProcessHasAwePrivatePages(v9) || *(_DWORD *)(v9 + 2140) )
        {
          KiStackAttachProcess(v6, 0LL, (__int64)v13, v7);
          MiScrubProcessLargePages((__int64)&v10);
          MiScrubProcessPhysicalPages((__int64)&v10);
          KiUnstackDetachProcess((__int64)v13, 0LL);
        }
      }
    }
    *a2 = *(_QWORD *)&v12[49];
    MiReleaseScrubPacket((__int64)&v10);
    return 0LL;
  }
  return result;
}
