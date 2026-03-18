/*
 * XREFs of HMChangeOwnerProcessWorker @ 0x1C0121D40
 * Callers:
 *     <none>
 * Callees:
 *     HMChangeOwnerPheProcessWorker @ 0x1C002D308 (HMChangeOwnerPheProcessWorker.c)
 */

__int64 __fastcall HMChangeOwnerProcessWorker(_DWORD *a1, __int64 a2)
{
  return HMChangeOwnerPheProcessWorker(
           (__int64)qword_1C0250D48 + dword_1C0250D50 * (unsigned int)(unsigned __int16)*a1,
           a2);
}
