/*
 * XREFs of IoDiskIoAttributionReference @ 0x140505948
 * Callers:
 *     IoDiskIoAttributionAllocate @ 0x1405DAEE0 (IoDiskIoAttributionAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoDiskIoAttributionReference(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 32));
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}
