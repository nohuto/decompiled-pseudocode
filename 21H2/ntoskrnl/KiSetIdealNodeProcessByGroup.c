/*
 * XREFs of KiSetIdealNodeProcessByGroup @ 0x14029AA54
 * Callers:
 *     KeSetAffinityProcess @ 0x1403CB43C (KeSetAffinityProcess.c)
 *     KiExtendProcessAffinity @ 0x14052463C (KiExtendProcessAffinity.c)
 *     KeInitializeProcess @ 0x1406AD59C (KeInitializeProcess.c)
 * Callees:
 *     KiSelectIdealProcessorForProcess @ 0x14029AAE4 (KiSelectIdealProcessorForProcess.c)
 *     KeSelectNodeForAffinity @ 0x14029E0B0 (KeSelectNodeForAffinity.c)
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
    v4 = KeSelectNodeForAffinity(&v8);
  *(_WORD *)(a1 + 2 * v3 + 772) = *(_WORD *)(v4 + 146);
  *(_QWORD *)&v8 = v6 & *(_QWORD *)(v4 + 136);
  result = KiSelectIdealProcessorForProcess(v4, &v8);
  *(_WORD *)(a1 + 2 * v3 + 708) = result;
  *(_WORD *)(a1 + 2 * v3 + 644) = result;
  return result;
}
