/*
 * XREFs of sub_140A35080 @ 0x140A35080
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     PsQueryThreadStartAddress @ 0x140277F78 (PsQueryThreadStartAddress.c)
 */

__int64 __fastcall sub_140A35080(__int64 a1, void *a2, __int64 a3)
{
  if ( !*(_QWORD *)(a3 + 2456)
    && (void (__noreturn *)())PsQueryThreadStartAddress((__int64)a2, 0) == PopIrpWorkerControl )
  {
    ObfReferenceObject(a2);
    *(_QWORD *)(a3 + 2456) = a2;
  }
  return 0LL;
}
