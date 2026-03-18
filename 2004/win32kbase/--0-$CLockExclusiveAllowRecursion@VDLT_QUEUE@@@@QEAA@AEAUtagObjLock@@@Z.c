/*
 * XREFs of ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00AD0F0
 * Callers:
 *     zzzDestroyQueue @ 0x1C0076490 (zzzDestroyQueue.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C00AC874 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     AllocQueue @ 0x1C00ACEB0 (AllocQueue.c)
 *     UserDeleteW32Thread @ 0x1C0123370 (UserDeleteW32Thread.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax

  *(_QWORD *)a1 = GetDomainLockRef(5LL, a2, a3, a4);
  *(_WORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 18) = 0;
  result = a1;
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
