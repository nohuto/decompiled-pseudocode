/*
 * XREFs of _AVrfCallAPILookupCallback@20 @ 0x4B338404
 * Callers:
 *     _LdrGetProcedureAddressForCaller@24 @ 0x4B2CCED0 (_LdrGetProcedureAddressForCaller@24.c)
 *     _LdrpHandleProtectedDelayload@24 @ 0x4B2CF930 (_LdrpHandleProtectedDelayload@24.c)
 *     _LdrpResolveDelayloadAddress@24 @ 0x4B32FA18 (_LdrpResolveDelayloadAddress@24.c)
 * Callees:
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _LdrpFindLoadedDllByAddress@12 @ 0x4B330FCF (_LdrpFindLoadedDllByAddress@12.c)
 *     _RtlGuardGrantSuppressedCallAccess@12 @ 0x4B363AA3 (_RtlGuardGrantSuppressedCallAccess@12.c)
 */

int __fastcall AVrfCallAPILookupCallback(unsigned int a1, int a2, int a3, int a4, int *a5)
{
  unsigned int v6; // edi
  int (__thiscall *v8)(_DWORD, unsigned int, int, int, int); // ecx
  int v9; // esi
  PVOID BaseAddress; // [esp+10h] [ebp-4h] BYREF

  v6 = 0;
  if ( LdrpFindLoadedDllByAddress(a1, (volatile signed __int32 **)&BaseAddress, 0) < 0 )
  {
    v6 = a1;
  }
  else
  {
    if ( BaseAddress != LdrpNtDllDataTableEntry && (*((_DWORD *)BaseAddress + 13) & 0x400) == 0 )
      v6 = *((_DWORD *)BaseAddress + 6);
    LdrpDereferenceModule((char *)BaseAddress);
  }
  if ( v6 )
  {
    v8 = (int (__thiscall *)(_DWORD, unsigned int, int, int, int))(MEMORY[0x7FFE0330] ^ __ROR4__(
                                                                                          AvrfpAPILookupCallbackRoutine,
                                                                                          32
                                                                                        - (MEMORY[0x7FFE0330] & 0x1F)));
    v9 = v8(v8, v6, a2, a3, a4);
    if ( v9 != a3 )
      RtlGuardGrantSuppressedCallAccess(&BaseAddress);
  }
  else
  {
    v9 = a3;
  }
  *a5 = v9;
  return 0;
}
