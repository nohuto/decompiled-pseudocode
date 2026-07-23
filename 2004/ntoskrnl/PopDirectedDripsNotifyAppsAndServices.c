/*
 * XREFs of PopDirectedDripsNotifyAppsAndServices @ 0x1408DFFC8
 * Callers:
 *     PopDirectedDripsEngage @ 0x140563404 (PopDirectedDripsEngage.c)
 *     PopDirectedDripsNotify @ 0x14077B738 (PopDirectedDripsNotify.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x1402248C0 (MiLockPagableImageSection.c)
 *     MmUnlockPagableImageSection @ 0x14034B7D0 (MmUnlockPagableImageSection.c)
 *     PoBlockConsoleSwitch @ 0x140712794 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x1407127E4 (PopDispatchStateCallout.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1408E036C (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopDiagTraceDirectedDripsNotifyAppsAndServices @ 0x1408E6930 (PopDiagTraceDirectedDripsNotifyAppsAndServices.c)
 */

__int64 __fastcall PopDirectedDripsNotifyAppsAndServices(__int64 a1, _DWORD *a2, char a3)
{
  __int64 v6; // r14
  ULONG v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v14; // [rsp+50h] [rbp+18h] BYREF

  _InterlockedOr((volatile signed __int32 *)a1, 0);
  v6 = MEMORY[0xFFFFF78000000008];
  if ( a3 )
  {
    MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
    a2[12] = *a2;
    a2[10] = 2;
    a2[11] = 5;
    a2[14] = 21;
    v7 = PoBlockConsoleSwitch((__int64)(a2 + 9));
    LOBYTE(v8) = 1;
    a2[8] = v7;
    LOBYTE(v9) = 1;
    PopDirectedDripsSendSuspendResumeNotification(v9, v8);
    LOBYTE(v10) = 1;
    PopDirectedDripsSendSuspendResumeNotification(0LL, v10);
    _InterlockedOr((volatile signed __int32 *)a1, 8u);
    *(_DWORD *)(a1 + 116) = 0;
  }
  else
  {
    PopDirectedDripsSendSuspendResumeNotification(0LL, 0LL);
    LOBYTE(v11) = 1;
    PopDirectedDripsSendSuspendResumeNotification(v11, 0LL);
    v14 = a2[8];
    a2[13] = 7;
    PopDispatchStateCallout(a2 + 9, (__int64)&v14);
    MmUnlockPagableImageSection(ExPageLockHandle);
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFF7);
  }
  v12 = MEMORY[0xFFFFF78000000008] - v6;
  LOBYTE(v12) = a3;
  return PopDiagTraceDirectedDripsNotifyAppsAndServices(
           v12,
           (MEMORY[0xFFFFF78000000008] - v6) / 0x2710uLL,
           (MEMORY[0xFFFFF78000000008] - v6) / 0x2710uLL);
}
