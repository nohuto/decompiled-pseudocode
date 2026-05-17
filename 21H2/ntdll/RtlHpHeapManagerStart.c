/*
 * XREFs of RtlHpHeapManagerStart @ 0x18010E048
 * Callers:
 *     RtlHpInitializeHeapManager @ 0x18010B490 (RtlHpInitializeHeapManager.c)
 * Callees:
 *     RtlpHpVaMgrCtxStart @ 0x18010ECE8 (RtlpHpVaMgrCtxStart.c)
 *     RtlCSparseBitmapStart @ 0x18010F71C (RtlCSparseBitmapStart.c)
 */

__int64 __fastcall RtlHpHeapManagerStart(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8

  qword_18016DC58 = 0LL;
  result = RtlCSparseBitmapStart(&unk_18016DC60, 2 * (a4 >> 20), a3, 0LL);
  if ( (int)result >= 0 )
  {
    result = RtlpHpVaMgrCtxStart(&unk_18016DCA8, v6, v7, a4 - 1);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
