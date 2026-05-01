/*
 * XREFs of ?HampHostTryEstimateRemainingQuiesceTime@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180037E80
 * Callers:
 *     ?HamSrvTryEstimateRemainingQuiesceTime@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAK@Z @ 0x180037D3C (-HamSrvTryEstimateRemainingQuiesceTime@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAK@Z.c)
 * Callees:
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000A0D0 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CempLockTrackerMarkReleased @ 0x18001E700 (CempLockTrackerMarkReleased.c)
 */

__int64 __fastcall HampHostTryEstimateRemainingQuiesceTime(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  HampHostAcquireLockSharedEx(a1, 0LL);
  RtlQueryUnbiasedInterruptTime(&v5);
  v2 = (unsigned int)(v5 / 0x2710) - *((_DWORD *)a1 + 167);
  v3 = 0;
  if ( (unsigned int)v2 <= *((_DWORD *)a1 + 168) )
    v3 = *((_DWORD *)a1 + 168) - v2;
  CempLockTrackerMarkReleased((unsigned int)(*((_DWORD *)a1 + 168) - v2), v2, 1u);
  RtlReleaseSRWLockShared(a1);
  return v3;
}
