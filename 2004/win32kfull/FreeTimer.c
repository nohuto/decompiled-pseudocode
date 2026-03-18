/*
 * XREFs of FreeTimer @ 0x1C00C0BD0
 * Callers:
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00C02E4 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     DestroyWindowsTimers @ 0x1C00C09C8 (DestroyWindowsTimers.c)
 *     DestroyThreadsTimers @ 0x1C00C0A20 (DestroyThreadsTimers.c)
 *     FindTimer @ 0x1C00C0ABC (FindTimer.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C00C0FFC (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 */

void __fastcall FreeTimer(struct tagTIMER *a1)
{
  __int64 v2; // rcx
  struct tagTIMER **v3; // rdx
  __int64 v4; // rdx
  struct tagTIMER **v5; // rcx
  char v6; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned int)HMMarkObjectDestroy(a1) )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v6);
    if ( (*((_DWORD *)a1 + 12) & 1) != 0 )
      DecTimerCount(a1);
    v2 = *((_QWORD *)a1 + 9);
    if ( *(struct tagTIMER **)(v2 + 8) != (struct tagTIMER *)((char *)a1 + 72)
      || (v3 = (struct tagTIMER **)*((_QWORD *)a1 + 10), *v3 != (struct tagTIMER *)((char *)a1 + 72))
      || (*v3 = (struct tagTIMER *)v2,
          *(_QWORD *)(v2 + 8) = v3,
          v4 = *((_QWORD *)a1 + 14),
          *(struct tagTIMER **)(v4 + 8) != (struct tagTIMER *)((char *)a1 + 112))
      || (v5 = (struct tagTIMER **)*((_QWORD *)a1 + 15), *v5 != (struct tagTIMER *)((char *)a1 + 112)) )
    {
      __fastfail(3u);
    }
    *v5 = (struct tagTIMER *)v4;
    *(_QWORD *)(v4 + 8) = v5;
    if ( !*((_QWORD *)a1 + 11) )
      _bittestandreset(gTimerId, *((_DWORD *)a1 + 24) - 256);
    EtwTraceKillTimer(a1);
    HMAssignmentUnlock((char *)a1 + 88);
    HMFreeObject(a1);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v6);
  }
}
