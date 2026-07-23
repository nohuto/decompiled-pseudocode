/*
 * XREFs of KiInitializeProcessorGroupSchedulingData @ 0x140523AA8
 * Callers:
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x1409B0BC4 (KiAddProcessorToGroupSchedulingDatabase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiInitializeProcessorGroupSchedulingData(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 33296) = a1 + 33288;
  *(_QWORD *)(a1 + 33288) = a1 + 33288;
  *(_DWORD *)(a1 + 216) = 424 * *(_DWORD *)(a1 + 36) + 128;
  result = KiGenerationEndTick;
  *(_QWORD *)(a1 + 33624) = KiGenerationEndTick;
  return result;
}
