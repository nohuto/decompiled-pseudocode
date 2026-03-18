/*
 * XREFs of XilRegister_ReadUlong64 @ 0x1C003DC3C
 * Callers:
 *     Interrupter_DeInitializeAfterOffload @ 0x1C003C528 (Interrupter_DeInitializeAfterOffload.c)
 *     XilCoreCommand_AbortCommandRing @ 0x1C00508BC (XilCoreCommand_AbortCommandRing.c)
 *     XilCoreCommand_QueryIsRingRunning @ 0x1C0050958 (XilCoreCommand_QueryIsRingRunning.c)
 * Callees:
 *     Register_ReadSecureMmio @ 0x1C003D720 (Register_ReadSecureMmio.c)
 */

__int64 __fastcall XilRegister_ReadUlong64(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+50h] [rbp+18h] BYREF

  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8) + 553LL) )
    return *(_QWORD *)a2;
  v3 = 0LL;
  Register_ReadSecureMmio(a1, a2, 3, 1u, &v3);
  return v3;
}
