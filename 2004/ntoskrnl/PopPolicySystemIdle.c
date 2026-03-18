/*
 * XREFs of PopPolicySystemIdle @ 0x1406A6300
 * Callers:
 *     PopPolicyWorkerThread @ 0x1403537B0 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopGetConsoleDisplayRequestCount @ 0x1402DC750 (PopGetConsoleDisplayRequestCount.c)
 *     PopScanIdleList @ 0x1402DCEA0 (PopScanIdleList.c)
 *     PopResetIdleTime @ 0x14035DF70 (PopResetIdleTime.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PopFilterCapabilities @ 0x1406A528C (PopFilterCapabilities.c)
 *     PopIsDozeSupported @ 0x1406A611C (PopIsDozeSupported.c)
 *     PopIsHibernateSupported @ 0x1406A615C (PopIsHibernateSupported.c)
 *     PopTraceSystemIdleUpdate @ 0x1406A6180 (PopTraceSystemIdleUpdate.c)
 *     PopExecutePowerAction @ 0x140762C18 (PopExecutePowerAction.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 */

__int64 PopPolicySystemIdle()
{
  unsigned __int8 v0; // bl
  char v1; // di
  int ConsoleDisplayRequestCount; // ebp
  int v3; // ecx
  char v4; // si
  char IsDozeSupported; // al
  char v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v10; // [rsp+20h] [rbp-B8h]
  __int128 v11; // [rsp+60h] [rbp-78h] BYREF
  __int64 v12; // [rsp+70h] [rbp-68h]
  _BYTE v13[80]; // [rsp+80h] [rbp-58h] BYREF

  memset(v13, 0, 0x4CuLL);
  v0 = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( PopPlatformAoAc )
    KeBugCheckEx(0xA0u, 0xAuLL, 3uLL, 0LL, 0LL);
  v1 = 0;
  ConsoleDisplayRequestCount = PopGetConsoleDisplayRequestCount();
  PopAcquirePolicyLock(v3);
  if ( MEMORY[0xFFFFF780000002E4] != dword_140C22D90 )
  {
    dword_140C22D90 = MEMORY[0xFFFFF780000002E4];
    PopResetIdleTime();
  }
  PopFilterCapabilities(&PopCapabilities, (__int64)v13);
  v4 = 0;
  if ( !v13[20] && dword_140C22DC0 )
    v4 = dword_140C22D88 - dword_140C22DC0 < (unsigned int)dword_140C238C0;
  if ( dword_140C22D8C && dword_140C22D88 >= (unsigned int)dword_140C22D8C && !v4 && !PopUserShutdownInProgress )
  {
    if ( v13[20] )
    {
      if ( !PopConsoleDisplayState || !ConsoleDisplayRequestCount )
        v0 = 1;
    }
    else
    {
      v0 = dword_140C22DA4 == 0;
    }
  }
  byte_140C22DD0 = v0;
  if ( v13[20] && (_DWORD)qword_140C22D94 == 2 )
    v1 = dword_140C22DA0 == 1;
  if ( v0 )
  {
    if ( !v1 )
      PopResetIdleTime();
    byte_140C22DB5 = 0;
  }
  PopIsHibernateSupported(v13);
  IsDozeSupported = PopIsDozeSupported((__int64)v13);
  PopTraceSystemIdleUpdate(
    dword_140C22D88,
    v0,
    dword_140C22DA4 != 0,
    v4,
    v10,
    v6,
    IsDozeSupported,
    *((_DWORD *)PopPolicy + 22),
    v1,
    byte_140C22DC4,
    qword_140C22D94,
    dword_140C22DA0);
  if ( v0 && !v1 )
  {
    *(_QWORD *)&v11 = 0x8000000007LL;
    PopExecutePowerAction((unsigned int)&v11, 0, (unsigned int)&qword_140C22D94, dword_140C22DA0, 1);
  }
  PopReleasePolicyLock(v8, v7);
  if ( !v0 && PsWin32CalloutsEstablished )
    PopScanIdleList(dword_140C22D8C, dword_140C22D88 / (unsigned int)PopIdleScanInterval);
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
