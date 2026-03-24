/*
 * XREFs of MsiGetTargetInfo @ 0x1C0095864
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0092810 (IrqArbAddAllocation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031C80 (__security_check_cookie.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     ProcessorGetMsiConnectionData @ 0x1C00958E0 (ProcessorGetMsiConnectionData.c)
 */

__int64 __fastcall MsiGetTargetInfo(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 result; // rax
  _QWORD v8[12]; // [rsp+20h] [rbp-88h] BYREF

  memset(v8, 0, sizeof(v8));
  result = ProcessorGetMsiConnectionData(a1, a2, v6, v8);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)a3 = v8[10];
    *(_WORD *)(a3 + 8) = v8[11];
  }
  return result;
}
