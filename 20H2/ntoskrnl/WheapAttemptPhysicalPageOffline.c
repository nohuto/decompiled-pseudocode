/*
 * XREFs of WheapAttemptPhysicalPageOffline @ 0x14095FE1C
 * Callers:
 *     WheaAttemptClearPoison @ 0x14095FA10 (WheaAttemptClearPoison.c)
 *     WheaAttemptPhysicalPageOffline @ 0x14095FAD0 (WheaAttemptPhysicalPageOffline.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x14095FFB0 (WheapAttemptPhysicalPageOfflineWorker.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403BA350 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052DE30 (MmMarkPhysicalMemoryAsBad.c)
 *     WheaPersistBadPageToBcd @ 0x1405BAD00 (WheaPersistBadPageToBcd.c)
 *     WheapLogPageOfflineAttemptEvent @ 0x1405BBBD8 (WheapLogPageOfflineAttemptEvent.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x14095FFF4 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapClearPoison @ 0x1409600D4 (WheapClearPoison.c)
 */

__int64 __fastcall WheapAttemptPhysicalPageOffline(LARGE_INTEGER a1, UNICODE_STRING *a2, char a3, char a4, char a5)
{
  __int64 v5; // r12
  char v6; // r13
  int v8; // r14d
  char v9; // si
  char v10; // bl
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // edi
  int v15; // eax
  __int64 v19; // [rsp+38h] [rbp-49h] BYREF
  __int64 v20; // [rsp+40h] [rbp-41h] BYREF
  LARGE_INTEGER StartAddress; // [rsp+48h] [rbp-39h] BYREF
  __int128 Src; // [rsp+50h] [rbp-31h] BYREF
  __int128 v23; // [rsp+60h] [rbp-21h]
  _QWORD v24[2]; // [rsp+70h] [rbp-11h] BYREF

  StartAddress = a1;
  v5 = (_QWORD)a2 << 12;
  v6 = 0;
  memset(v24, 0, 9);
  v19 = (_QWORD)a2 << 12;
  v20 = 4096LL;
  Src = 0LL;
  v23 = 0LL;
  if ( a4 )
  {
    v8 = 2;
  }
  else
  {
    v8 = 1;
    v19 = v5 | 1;
  }
  v9 = -1;
  v10 = -1;
  v11 = MmMarkPhysicalMemoryAsBad((int *)&v19, &v20);
  v14 = v11;
  if ( v11 >= 0 )
  {
    v10 = v11 == 0;
    if ( WheapClearPoisonSupported && a5 && (int)WheapClearPoison(&StartAddress) >= 0 )
      return v14;
    if ( !v10 )
    {
      LOBYTE(v13) = a4;
      LOBYTE(v12) = a3;
      WheapCallInUsePageNotificationCallbacks(a2, v12, v13);
    }
    if ( KeGetCurrentIrql() <= 2u )
    {
      *(_QWORD *)&Src = 0x1674C6857LL;
      *((_QWORD *)&Src + 1) = 41LL;
      *(_QWORD *)&v23 = 0x800000064C4E524BuLL;
      *((_QWORD *)&v23 + 1) = 0x900000002LL;
      LODWORD(v24[0]) = v8;
      BYTE4(v24[0]) = v10;
      *(_DWORD *)((char *)v24 + 5) = (_DWORD)a2;
      WheaLogInternalEvent(&Src);
    }
  }
  if ( WheapPolicyMemPersistOffline )
  {
    v15 = WheaPersistBadPageToBcd(a2);
    if ( v15 >= 0 )
      v6 = 1;
    else
      v14 = v15;
  }
  if ( v10 != -1 )
    v9 = v10 == 0;
  WheapLogPageOfflineAttemptEvent(v5, v9, a4, v6, a3);
  return v14;
}
