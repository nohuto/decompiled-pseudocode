/*
 * XREFs of sub_140A3B080 @ 0x140A3B080
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     PsQueryThreadStartAddress @ 0x14023F318 (PsQueryThreadStartAddress.c)
 */

__int64 __fastcall sub_140A3B080(__int64 a1, void *a2, __int64 a3)
{
  if ( !*(_QWORD *)(a3 + 2456)
    && (void (__noreturn *)())PsQueryThreadStartAddress((__int64)a2, 0) == PopIrpWorkerControl )
  {
    ObfReferenceObject(a2);
    *(_QWORD *)(a3 + 2456) = a2;
  }
  return 0LL;
}
