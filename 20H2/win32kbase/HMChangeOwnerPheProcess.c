/*
 * XREFs of HMChangeOwnerPheProcess @ 0x1C0119530
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1C00A53C8 (HMChangeOwnerPheProcessWorker.c)
 */

__int64 __fastcall HMChangeOwnerPheProcess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r8d
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v8,
    a2,
    a3,
    a4);
  return HMChangeOwnerPheProcessWorker(a1, a2, v6);
}
