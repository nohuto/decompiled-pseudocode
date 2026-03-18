/*
 * XREFs of PopPolicySystemIdle @ 0x14070E290
 * Callers:
 *     PopPolicyWorkerThread @ 0x140315930 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopResetIdleTime @ 0x140320350 (PopResetIdleTime.c)
 *     PopScanIdleList @ 0x14035C514 (PopScanIdleList.c)
 *     PopGetConsoleDisplayRequestCount @ 0x14035D708 (PopGetConsoleDisplayRequestCount.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PopTraceSystemIdleUpdate @ 0x14070F8EC (PopTraceSystemIdleUpdate.c)
 *     PopIsDozeSupported @ 0x14070FA68 (PopIsDozeSupported.c)
 *     PopIsHibernateSupported @ 0x14070FAA8 (PopIsHibernateSupported.c)
 *     PopFilterCapabilities @ 0x14070FBC4 (PopFilterCapabilities.c)
 *     PopExecutePowerAction @ 0x140761338 (PopExecutePowerAction.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 */

__int64 PopPolicySystemIdle()
{
  bool v0; // bl
  bool v1; // di
  int ConsoleDisplayRequestCount; // ebp
  int v3; // ecx
  bool v4; // si
  int v5; // r9d
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rcx
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
  if ( MEMORY[0xFFFFF780000002E4] != dword_140C23350 )
  {
    dword_140C23350 = MEMORY[0xFFFFF780000002E4];
    PopResetIdleTime();
  }
  PopFilterCapabilities(&PopCapabilities, v13);
  v4 = 0;
  if ( !v13[20] && dword_140C23380 )
    v4 = dword_140C23348 - dword_140C23380 < (unsigned int)dword_140C23EE0;
  if ( dword_140C2334C && dword_140C23348 >= (unsigned int)dword_140C2334C && !v4 && !PopUserShutdownInProgress )
  {
    if ( v13[20] )
    {
      if ( !PopConsoleDisplayState || !ConsoleDisplayRequestCount )
        v0 = 1;
    }
    else
    {
      v0 = dword_140C23364 == 0;
    }
  }
  byte_140C23390 = v0;
  if ( v13[20] && (_DWORD)qword_140C23354 == 2 )
    v1 = dword_140C23360 == 1;
  if ( v0 )
  {
    if ( !v1 )
      PopResetIdleTime();
    byte_140C23375 = 0;
  }
  PopIsHibernateSupported(v13);
  PopIsDozeSupported(v13);
  LOBYTE(v5) = v4;
  LOBYTE(v6) = dword_140C23364 != 0;
  v7 = *((_DWORD *)PopPolicy + 22);
  LOBYTE(v7) = v0;
  PopTraceSystemIdleUpdate(dword_140C23348, v7, v6, v5);
  if ( v0 && !v1 )
  {
    *(_QWORD *)&v11 = 0x8000000007LL;
    PopExecutePowerAction((unsigned int)&v11, 0, (unsigned int)&qword_140C23354, dword_140C23360, 1);
  }
  PopReleasePolicyLock(v9, v8);
  if ( !v0 && PsWin32CalloutsEstablished )
    PopScanIdleList();
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
