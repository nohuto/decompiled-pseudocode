/*
 * XREFs of sub_18003EE64 @ 0x18003EE64
 * Callers:
 *     sub_18003ED34 @ 0x18003ED34 (sub_18003ED34.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003EE64(__int64 a1)
{
  *(_QWORD *)a1 = off_18008D608;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_DWORD *)(a1 + 216) = 1;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_DWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 280) = a1 + 272;
  *(_QWORD *)(a1 + 272) = a1 + 272;
  RtlInitializeCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 224));
  return a1;
}
