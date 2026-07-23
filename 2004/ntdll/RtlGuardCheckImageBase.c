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

char __fastcall RtlGuardCheckImageBase(PVOID BaseAddress, char a2)
{
  unsigned __int64 v4; // rax
  char *v5; // r8
  char *v6; // r9
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  LOBYTE(v4) = LdrControlFlowGuardEnforced();
  if ( (_DWORD)v4 )
  {
    if ( (unsigned __int64)BaseAddress < *((_QWORD *)&xmmword_18017F510 + 1)
      || (v4 = *((_QWORD *)&xmmword_18017F510 + 1) + (unsigned int)qword_18017F520, (unsigned __int64)BaseAddress >= v4) )
    {
      LOBYTE(v4) = RtlpxLookupFunctionTable((unsigned __int64)BaseAddress, (signed __int64)&v8, v5, v6);
    }
    else
    {
      v8 = xmmword_18017F510;
    }
    if ( *((PVOID *)&v8 + 1) != BaseAddress )
    {
      if ( !a2 || (LOBYTE(v4) = LdrIsEnclaveAddress(BaseAddress), !(_BYTE)v4) )
        __fastfail(0x18u);
    }
  }
  return v4;
}
