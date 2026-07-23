/*
 * XREFs of KiStartDpcThread @ 0x14079F874
 * Callers:
 *     KiInitializeDynamicProcessor @ 0x1409B0250 (KiInitializeDynamicProcessor.c)
 *     KeInitSystem @ 0x140A4D33C (KeInitSystem.c)
 * Callees:
 *     KeCancelTimer @ 0x1402819B0 (KeCancelTimer.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     PsCreateSystemThreadEx @ 0x1406A7470 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall KiStartDpcThread(__int64 a1)
{
  __int16 v1; // ax
  int v3; // ebx
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF
  __int128 v6; // [rsp+58h] [rbp-20h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 208);
  Handle = 0LL;
  v6 = 0LL;
  WORD4(v6) = v1;
  *(_QWORD *)&v6 = *(_QWORD *)(a1 + 200);
  v3 = PsCreateSystemThreadEx(
         (__int64)&Handle,
         0x1FFFFF,
         0LL,
         0LL,
         0LL,
         (__int64)KiExecuteDpc,
         a1,
         &v6,
         (_DWORD *)(a1 + 36));
  if ( v3 < 0 )
  {
    if ( KeDpcWatchdogPeriod )
      KeCancelTimer((PKTIMER)(a1 + 33432));
  }
  else
  {
    ZwClose(Handle);
  }
  return (unsigned int)v3;
}
