/*
 * XREFs of HMChangeOwnerProcess @ 0x1C002D2C0
 * Callers:
 *     <none>
 * Callees:
 *     HMChangeOwnerPheProcessWorker @ 0x1C002D308 (HMChangeOwnerPheProcessWorker.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

__int64 __fastcall HMChangeOwnerProcess(_DWORD *a1, __int64 a2)
{
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v5);
  return HMChangeOwnerPheProcessWorker(
           (char *)qword_1C0250D48 + dword_1C0250D50 * (unsigned int)(unsigned __int16)*a1,
           a2);
}
