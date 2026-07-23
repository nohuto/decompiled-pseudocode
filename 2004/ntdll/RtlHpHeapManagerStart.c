/*
 * XREFs of RtlHpHeapManagerStart @ 0x18010DC98
 * Callers:
 *     RtlHpInitializeHeapManager @ 0x18010B0E0 (RtlHpInitializeHeapManager.c)
 * Callees:
 *     RtlpHpVaMgrCtxStart @ 0x18010E938 (RtlpHpVaMgrCtxStart.c)
 *     RtlCSparseBitmapStart @ 0x18010F36C (RtlCSparseBitmapStart.c)
 */

__int64 __fastcall RtlHpHeapManagerStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8

  qword_18016BC18 = 0LL;
  result = RtlCSparseBitmapStart(BaseAddress);
  if ( (int)result >= 0 )
  {
    result = RtlpHpVaMgrCtxStart(&unk_18016BC68, v6, v7, a4 - 1);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
