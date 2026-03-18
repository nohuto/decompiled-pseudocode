/*
 * XREFs of HMUnlockDestroyObject @ 0x1C0016F00
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObjectWorker @ 0x1C0016F40 (HMUnlockObjectWorker.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C0017334 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0017700 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

void *__fastcall HMUnlockDestroyObject(void *a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v3);
  if ( *((_DWORD *)a1 + 2) == 1 )
  {
    HMMarkObjectDestroyWorker(a1);
    return (void *)HMUnlockObjectWorker();
  }
  return a1;
}
