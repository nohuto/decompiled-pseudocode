/*
 * XREFs of HMUnlockDestroyObject @ 0x1C005ACB0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObjectWorker @ 0x1C005ACF0 (HMUnlockObjectWorker.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C005ADEC (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

void *__fastcall HMUnlockDestroyObject(void *a1)
{
  __int64 v2; // rcx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v4);
  if ( *((_DWORD *)a1 + 2) == 1 )
  {
    HMMarkObjectDestroyWorker(a1);
    return (void *)HMUnlockObjectWorker(v2);
  }
  return a1;
}
