/*
 * XREFs of MsiGetTargetInfo @ 0x1C009C148
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0099940 (IrqArbAddAllocation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     ProcessorGetMsiConnectionData @ 0x1C009C1C4 (ProcessorGetMsiConnectionData.c)
 */

__int64 __fastcall MsiGetTargetInfo(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 result; // rax
  _QWORD v8[12]; // [rsp+20h] [rbp-88h] BYREF

  memset(v8, 0, 0x5CuLL);
  result = ProcessorGetMsiConnectionData(a1, a2, v6, v8);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)a3 = v8[10];
    *(_WORD *)(a3 + 8) = v8[11];
  }
  return result;
}
