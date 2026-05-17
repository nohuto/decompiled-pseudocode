/*
 * XREFs of RtlGuardCheckImageBase @ 0x180074A68
 * Callers:
 *     LdrpResolveProcedureAddress @ 0x1800303F4 (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x1800318A0 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 *     LdrControlFlowGuardEnforced @ 0x180033520 (LdrControlFlowGuardEnforced.c)
 *     LdrIsEnclaveAddress @ 0x1800CCD80 (LdrIsEnclaveAddress.c)
 */

unsigned __int64 __fastcall RtlGuardCheckImageBase(unsigned __int64 a1, char a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  result = LdrControlFlowGuardEnforced();
  if ( (_DWORD)result )
  {
    if ( a1 < *((_QWORD *)&xmmword_18017F510 + 1)
      || (result = *((_QWORD *)&xmmword_18017F510 + 1) + (unsigned int)qword_18017F520, a1 >= result) )
    {
      result = RtlpxLookupFunctionTable(a1, (signed __int64)&v7, v5, v6);
    }
    else
    {
      v7 = xmmword_18017F510;
    }
    if ( *((_QWORD *)&v7 + 1) != a1 )
    {
      if ( !a2 || (result = LdrIsEnclaveAddress(a1), !(_BYTE)result) )
        __fastfail(0x18u);
    }
  }
  return result;
}
