/*
 * XREFs of VidSchiCalculatePeriodicTargetFrameNumber @ 0x1C002F098
 * Callers:
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C0030484 (VidSchiProcessPeriodicNotificationCookie.c)
 *     ?VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0032CD0 (-VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiCalculatePeriodicTargetFrameNumber(__int64 a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rbx
  LARGE_INTEGER v9; // r9
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  union _LARGE_INTEGER v14; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v14.QuadPart = 0LL;
  v9 = KeQueryPerformanceCounter(&v14);
  if ( is_mul_ok(v9.QuadPart, 0x989680uLL) )
    v10 = (unsigned __int64)v9.QuadPart * (unsigned __int128)0x989680uLL / (unsigned __int64)v14.QuadPart;
  else
    v10 = 10000000 * (v9.QuadPart / (unsigned __int64)v14.QuadPart)
        + 10000000 * (v9.QuadPart % (unsigned __int64)v14.QuadPart) / v14.QuadPart;
  if ( is_mul_ok(a2, 0x989680uLL) )
    v11 = a2 * (unsigned __int128)0x989680uLL / (unsigned __int64)v14.QuadPart;
  else
    v11 = 10000000 * (a2 / v14.QuadPart) + 10000000 * (a2 % v14.QuadPart) / v14.QuadPart;
  v12 = v11 + *(_QWORD *)(a1 + 48) / 2LL - *(_QWORD *)(a1 + 16);
  if ( v10 > v12 )
  {
    if ( v10 > *(_QWORD *)(a1 + 48) + v12 )
    {
      *a4 = 1;
      v5 = 2LL;
    }
    else
    {
      *a4 = 0;
      v5 = 1LL;
    }
  }
  else
  {
    *a4 = -1;
  }
  return v5 + a3;
}
