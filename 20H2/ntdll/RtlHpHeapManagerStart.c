/*
 * XREFs of RtlHpHeapManagerStart @ 0x18010E1A8
 * Callers:
 *     RtlHpInitializeHeapManager @ 0x18010B5F0 (RtlHpInitializeHeapManager.c)
 * Callees:
 *     RtlpHpVaMgrCtxStart @ 0x18010EE48 (RtlpHpVaMgrCtxStart.c)
 *     RtlCSparseBitmapStart @ 0x18010F87C (RtlCSparseBitmapStart.c)
 */

__int64 __fastcall RtlHpHeapManagerStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8

  qword_18016DC48 = 0LL;
  result = RtlCSparseBitmapStart(BaseAddress);
  if ( (int)result >= 0 )
  {
    result = RtlpHpVaMgrCtxStart(&unk_18016DC98, v6, v7, a4 - 1);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
