/*
 * XREFs of PspApplyTimerDelayProcess @ 0x14057C468
 * Callers:
 *     PspTimerDelayProcess @ 0x14057CCF0 (PspTimerDelayProcess.c)
 *     PspTimerDelayWorkerRoutine @ 0x14057CD60 (PspTimerDelayWorkerRoutine.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x14057C9E8 (PspSetProcessTimerDelayForKTimers.c)
 *     PspSetProcessTimerDelayForWin32 @ 0x14057CC2C (PspSetProcessTimerDelayForWin32.c)
 */

__int64 __fastcall PspApplyTimerDelayProcess(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v4; // esi
  __int64 v5; // r9
  unsigned __int64 v7; // rbx
  unsigned int v8; // kr00_4
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  signed __int64 v11; // rax
  __int64 v12; // rtt
  signed __int64 v13; // rcx
  unsigned __int64 v14; // rdi

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = a2;
  --CurrentThread->SpecialApcDisable;
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 632), 4u);
  v7 = 0LL;
  if ( a2 )
  {
    LOBYTE(a3) = 0;
    v8 = *(_DWORD *)(a2 + 4);
    LODWORD(a2) = (3518437209u * (unsigned __int64)*(unsigned int *)a2) >> 32;
    v7 = (*(_DWORD *)v5 / 0x2710u) & 0x3FFFFFFF | ((unsigned __int64)((v8 / 0x2710) & 0x3FFFFFFF) << 30);
  }
  else
  {
    LOBYTE(a3) = 1;
  }
  v9 = *(_QWORD *)(a1 + 2416);
  if ( (_BYTE)a3 )
  {
    if ( ((v9 | (v9 >> 30)) & 0x3FFFFFFF) == 0 )
      goto LABEL_22;
    v7 = v9 & 0xFFFFFFFFFFFFFFFLL;
  }
  else if ( (((unsigned int)v7 ^ (unsigned int)v9) & 0x3FFFFFFF) == 0 )
  {
    v5 = 0xFFFFFFFC0000000LL;
    a2 = v7 & 0xFFFFFFFFC0000000uLL;
    if ( (v9 & 0xFFFFFFFC0000000LL) == (v7 & 0xFFFFFFFFC0000000uLL) )
      goto LABEL_22;
  }
  a2 = 0x8000000000000000uLL;
  v5 = 0x4000000000000000LL;
  v10 = ((unsigned __int64)(unsigned __int8)a3 << 61) | 0x8000000000000000uLL | v7;
  v12 = v9 & 0x7FFFFFFFFFFFFFFFLL;
  v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2416), v10, v9 & 0x7FFFFFFFFFFFFFFFLL);
  if ( v12 != v11 )
  {
    do
    {
      v13 = v11;
      if ( v11 < 0 )
      {
        if ( (_BYTE)a3 )
        {
          a2 = v11 & 0xFFFFFFFFFFFFFFFLL;
          v10 = v11 & 0xFFFFFFFFFFFFFFFLL | v10 & 0xF000000000000000uLL;
        }
        else
        {
          a2 = (unsigned __int64)v11 >> 61;
          if ( (v11 & 0x2000000000000000LL) == 0 )
            goto LABEL_22;
        }
        v10 |= 0x4000000000000000uLL;
      }
      else
      {
        a2 = 0xBFFFFFFFFFFFFFFFuLL;
        v10 &= ~0x4000000000000000uLL;
        if ( (_BYTE)a3 )
        {
          a2 = (v11 ^ v10) & 0xFFFFFFFFFFFFFFFLL;
          v10 ^= a2;
        }
      }
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2416), v10, v11);
    }
    while ( v11 != v13 );
  }
  if ( (v10 & 0x4000000000000000LL) == 0 )
  {
    do
    {
      v14 = v10;
      PspSetProcessTimerDelayForKTimers(a1, a2, a3, v5);
      v4 = PspSetProcessTimerDelayForWin32(a1);
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2416), v10 & 0x1FFFFFFFFFFFFFFFLL, v10);
    }
    while ( v14 != v10 );
  }
LABEL_22:
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, a2, a3, v5);
  return v4;
}
