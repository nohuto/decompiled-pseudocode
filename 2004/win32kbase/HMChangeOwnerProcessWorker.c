/*
 * XREFs of HMChangeOwnerProcessWorker @ 0x1C011B030
 * Callers:
 *     <none>
 * Callees:
 *     HMChangeOwnerPheProcessWorker @ 0x1C003BA48 (HMChangeOwnerPheProcessWorker.c)
 */

__int64 __fastcall HMChangeOwnerProcessWorker(_DWORD *a1, __int64 a2)
{
  return HMChangeOwnerPheProcessWorker(
           (__int64)qword_1C024AD48 + dword_1C024AD50 * (unsigned int)(unsigned __int16)*a1,
           a2);
}
