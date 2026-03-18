/*
 * XREFs of HMChangeOwnerPheProcess @ 0x1C0121D00
 * Callers:
 *     <none>
 * Callees:
 *     HMChangeOwnerPheProcessWorker @ 0x1C002D308 (HMChangeOwnerPheProcessWorker.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

__int64 __fastcall HMChangeOwnerPheProcess(__int64 a1, __int64 a2)
{
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v5);
  return HMChangeOwnerPheProcessWorker(a1, a2);
}
