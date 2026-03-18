/*
 * XREFs of SepRmValidateProcUniqueLuidWrkr @ 0x140920780
 * Callers:
 *     SepRmCommandServerThread @ 0x140795150 (SepRmCommandServerThread.c)
 * Callees:
 *     SepIsValidProcUniqueLuid @ 0x140921374 (SepIsValidProcUniqueLuid.c)
 */

__int64 __fastcall SepRmValidateProcUniqueLuidWrkr(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 44);
  result = SepIsValidProcUniqueLuid(&v4);
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
