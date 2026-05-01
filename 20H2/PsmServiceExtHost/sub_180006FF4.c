/*
 * XREFs of sub_180006FF4 @ 0x180006FF4
 * Callers:
 *     sub_180007084 @ 0x180007084 (sub_180007084.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_180006FF4(__int64 a1, void *a2)
{
  NTSTATUS result; // eax

  result = NtDuplicateObject(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             a2,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             (PHANDLE)(a1 + 112),
             0,
             0,
             2u);
  if ( result >= 0 )
  {
    result = TpAllocWork(a1 + 96, sub_1800202A0, a1, 0LL);
    if ( result >= 0 )
    {
      result = TpAllocTimer(a1 + 104, sub_180027BF0, a1, 0LL);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
