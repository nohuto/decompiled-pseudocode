/*
 * XREFs of PdcTaskClientUnregister @ 0x1C01293C8
 * Callers:
 *     ?ndisMDeRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011E5A4 (-ndisMDeRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     PdcAcquireRwLockExclusive @ 0x1C0129454 (PdcAcquireRwLockExclusive.c)
 *     PdcPortClose @ 0x1C01294D8 (PdcPortClose.c)
 */

__int64 __fastcall PdcTaskClientUnregister(PVOID *P)
{
  unsigned int v1; // edi

  v1 = 0;
  if ( P && *(_DWORD *)P == 1667458128 )
  {
    PdcAcquireRwLockExclusive(P + 1);
    PdcPortClose(P[5]);
    P[5] = 0LL;
    *(_DWORD *)P = 0;
    P[2] = 0LL;
    ExReleasePushLockEx(P + 1, 0LL);
    KeLeaveCriticalRegion();
    ExFreePoolWithTag(P, 0);
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v1;
}
