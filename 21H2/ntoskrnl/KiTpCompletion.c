/*
 * XREFs of KiTpCompletion @ 0x140A13130
 * Callers:
 *     <none>
 * Callees:
 *     KiTpEmulateInstruction @ 0x140A138C0 (KiTpEmulateInstruction.c)
 */

__int64 __fastcall KiTpCompletion(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  v5[2] = a4;
  return KiTpEmulateInstruction(a1, v5, a3);
}
