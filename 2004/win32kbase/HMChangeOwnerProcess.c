/*
 * XREFs of HMChangeOwnerProcess @ 0x1C003BA00
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0017700 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1C003BA48 (HMChangeOwnerPheProcessWorker.c)
 */

__int64 __fastcall HMChangeOwnerProcess(_DWORD *a1, __int64 a2)
{
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v5);
  return HMChangeOwnerPheProcessWorker(
           (char *)qword_1C024AD48 + dword_1C024AD50 * (unsigned int)(unsigned __int16)*a1,
           a2);
}
