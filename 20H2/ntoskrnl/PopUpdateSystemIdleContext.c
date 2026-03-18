/*
 * XREFs of PopUpdateSystemIdleContext @ 0x1408F3AA4
 * Callers:
 *     PopInitSIdle @ 0x140788CC8 (PopInitSIdle.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140381644 (PopIdleCancelAoAcDozeS4Timer.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14057A808 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopFilterCapabilities @ 0x14071EF54 (PopFilterCapabilities.c)
 *     PopPulseSystemIdleEvent @ 0x14078AB80 (PopPulseSystemIdleEvent.c)
 *     PopDiagTraceSystemIdleContextUpdate @ 0x1408EE0CC (PopDiagTraceSystemIdleContextUpdate.c)
 */

void __fastcall PopUpdateSystemIdleContext(int a1)
{
  int v2; // ebp
  int v3; // r14d
  unsigned __int64 v4; // r15
  int v5; // ebx
  int v6; // edi
  _BYTE v7[80]; // [rsp+30h] [rbp-68h] BYREF

  memset(v7, 0, 0x4CuLL);
  if ( !PopPlatformAoAc )
    KeBugCheckEx(0xA0u, 0xAuLL, 0x101uLL, 0LL, 0LL);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
  v2 = PopSystemIdleContext;
  v3 = dword_140C0F1B4;
  v4 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  PopFilterCapabilities(&PopCapabilities, (__int64)v7);
  if ( (PopFullWake & 3) != 0 || (PopSimulate & 0x1000000) != 0 )
  {
    v5 = *((_DWORD *)PopPolicy + 15);
    if ( v5 )
    {
      v6 = 1;
      goto LABEL_9;
    }
LABEL_8:
    v5 = 0;
    v6 = 5;
    goto LABEL_9;
  }
  v5 = dword_140C23D60;
  if ( !dword_140C23D60 )
    goto LABEL_8;
  v6 = 4;
LABEL_9:
  if ( a1 == 1 || a1 == 4 )
    PopPulseSystemIdleEvent(3u);
  if ( a1 == 3 )
  {
    PopIdleCancelAoAcDozeS4Timer(6u);
    if ( byte_140C23291 )
      PopIdleArmAoAcDozeS4Timer();
  }
  PopSystemIdleContext = v6;
  dword_140C0F1B4 = v5;
  qword_140C0F2E0 = v4;
  dword_140C0F2E8 = a1;
  dword_140C0F2EC = v2;
  dword_140C0F2F0 = v3;
  PopDiagTraceSystemIdleContextUpdate(a1, v2, v3, v6, v5);
  PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
}
