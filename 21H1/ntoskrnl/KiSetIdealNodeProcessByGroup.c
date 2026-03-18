/*
 * XREFs of KiSetIdealNodeProcessByGroup @ 0x140337FEC
 * Callers:
 *     KeSetAffinityProcess @ 0x1403C6EAC (KeSetAffinityProcess.c)
 *     KiExtendProcessAffinity @ 0x14051E8FC (KiExtendProcessAffinity.c)
 *     KeInitializeProcess @ 0x1406F70A0 (KeInitializeProcess.c)
 * Callees:
 *     KeSelectNodeForAffinity @ 0x1402CA648 (KeSelectNodeForAffinity.c)
 *     KiSelectIdealProcessorForProcess @ 0x14033807C (KiSelectIdealProcessorForProcess.c)
 */

__int64 __fastcall KiSetIdealNodeProcessByGroup(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rdi
  __int64 v4; // r9
  __int64 v6; // r11
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3;
  v4 = a2;
  v8 = 0LL;
  WORD4(v8) = a3;
  v6 = *(_QWORD *)(a1 + 8LL * a3 + 88);
  *(_QWORD *)&v8 = v6;
  if ( !a2 )
    v4 = KeSelectNodeForAffinity((__int64)&v8);
  *(_WORD *)(a1 + 2 * v3 + 772) = *(_WORD *)(v4 + 146);
  *(_QWORD *)&v8 = v6 & *(_QWORD *)(v4 + 136);
  result = KiSelectIdealProcessorForProcess(v4, &v8);
  *(_WORD *)(a1 + 2 * v3 + 708) = result;
  *(_WORD *)(a1 + 2 * v3 + 644) = result;
  return result;
}
