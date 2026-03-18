/*
 * XREFs of GreIncQuotaCount @ 0x1C00A5520
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C004A4E0 (GreSetDCOwnerEx.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1C00A53C8 (HMChangeOwnerPheProcessWorker.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 *     ?Feature_Servicing_gdi_leak_tracking__private_IsEnabled@@YAHXZ @ 0x1C00CF0D0 (-Feature_Servicing_gdi_leak_tracking__private_IsEnabled@@YAHXZ.c)
 *     ?HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z @ 0x1C00CF140 (-HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z.c)
 */

__int64 __fastcall GreIncQuotaCount(struct _W32PROCESS *a1, int a2, int a3)
{
  __int64 v4; // rdx
  int v5; // r8d
  unsigned int v6; // ecx

  GreAcquireHmgrSemaphore((__int64)a1, a2, a3);
  if ( (unsigned int)Feature_Servicing_gdi_leak_tracking__private_IsEnabled() )
  {
    HmgpIncProcessHandleCountEx(a1);
  }
  else
  {
    v6 = *((_DWORD *)a1 + 16);
    if ( ++*((_DWORD *)a1 + 15) > v6 )
      v6 = *((_DWORD *)a1 + 15);
    *((_DWORD *)a1 + 16) = v6;
  }
  return GreReleaseHmgrSemaphore(v6, v4, v5);
}
