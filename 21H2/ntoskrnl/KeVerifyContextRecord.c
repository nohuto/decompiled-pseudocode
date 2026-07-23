/*
 * XREFs of KeVerifyContextRecord @ 0x14026542C
 * Callers:
 *     KiRaiseException @ 0x1405220D0 (KiRaiseException.c)
 *     PspSetContextThreadInternal @ 0x14063CA8C (PspSetContextThreadInternal.c)
 * Callees:
 *     KiVerifyContextRecord @ 0x140265110 (KiVerifyContextRecord.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x1405F65E8 (RtlGuardIsValidWow64StackPointer.c)
 *     RtlGuardIsValidStackPointer @ 0x14063D520 (RtlGuardIsValidStackPointer.c)
 */

__int64 __fastcall KeVerifyContextRecord(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  unsigned __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v12; // rax
  __int16 v13; // cx

  v5 = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(v5 + 632) & 0x20) == 0 )
    return KiVerifyContextRecord(a1, a2, a3, a4, a5);
  if ( (*(_DWORD *)(a2 + 48) & 0x100001) != 0x100001 )
    return KiVerifyContextRecord(a1, a2, a3, a4, a5);
  v9 = *(_QWORD *)(a2 + 152);
  v10 = *(_QWORD *)(a1 + 240);
  if ( (unsigned int)RtlGuardIsValidStackPointer(v9, v10) )
    return KiVerifyContextRecord(a1, a2, a3, a4, a5);
  if ( (v12 = *(_QWORD *)(v5 + 1408)) != 0
    && ((v13 = *(_WORD *)(v12 + 8), v13 == 332) || v13 == 452)
    && v9 < 0xFFFFFFFF
    && (unsigned int)RtlGuardIsValidWow64StackPointer((unsigned int)v9, v10) )
  {
    return KiVerifyContextRecord(a1, a2, a3, a4, a5);
  }
  else
  {
    return 3221225485LL;
  }
}
