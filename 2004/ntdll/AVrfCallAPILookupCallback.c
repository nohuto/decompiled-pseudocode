/*
 * XREFs of AVrfCallAPILookupCallback @ 0x1800D9650
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpHandleProtectedDelayload @ 0x1800318A0 (LdrpHandleProtectedDelayload.c)
 *     LdrpResolveDelayloadAddress @ 0x180087AEC (LdrpResolveDelayloadAddress.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x18004753C (RtlGuardGrantSuppressedCallAccess.c)
 *     LdrpFindLoadedDllByAddress @ 0x18006A290 (LdrpFindLoadedDllByAddress.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AVrfCallAPILookupCallback(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 *a5)
{
  unsigned int v7; // ebp
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rbx
  unsigned __int64 v15[3]; // [rsp+30h] [rbp-18h] BYREF

  v7 = a4;
  v9 = 0LL;
  if ( (int)LdrpFindLoadedDllByAddress(a1, v15, 0LL, a4) < 0 )
  {
    v9 = a1;
  }
  else
  {
    if ( v15[0] != LdrpNtDllDataTableEntry && (*(_DWORD *)(v15[0] + 104) & 0x400) == 0 )
      v9 = *(_QWORD *)(v15[0] + 48);
    LdrpDereferenceModule(v15[0], v10, v11, v12);
  }
  if ( v9 )
  {
    v13 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64, _QWORD))(__ROR8__(
                                                                                  AvrfpAPILookupCallbackRoutine,
                                                                                  64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
            v9,
            a2,
            a3,
            v7);
    if ( v13 != a3 )
      RtlGuardGrantSuppressedCallAccess(a3, 1u, v15);
  }
  else
  {
    v13 = a3;
  }
  *a5 = v13;
  return 0LL;
}
