/*
 * XREFs of _RtlInsertInvertedFunctionTable@8 @ 0x4B2B9D0A
 * Callers:
 *     _LdrpProcessMappedModule@16 @ 0x4B2D05EC (_LdrpProcessMappedModule@16.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _AvrfMiniLoadDll@20 @ 0x4B3397A2 (_AvrfMiniLoadDll@20.c)
 * Callees:
 *     _RtlpInsertInvertedFunctionTableEntry@20 @ 0x4B2B9D68 (_RtlpInsertInvertedFunctionTableEntry@20.c)
 *     _RtlCaptureImageExceptionValues@12 @ 0x4B2B9DFF (_RtlCaptureImageExceptionValues@12.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _LdrProtectMrdata@4 @ 0x4B2E1D36 (_LdrProtectMrdata@4.c)
 */

void __fastcall RtlInsertInvertedFunctionTable(void *a1, int a2)
{
  int v3; // esi
  int v4[2]; // [esp+10h] [ebp-8h] BYREF

  RtlCaptureImageExceptionValues(a1, (int)v4);
  v3 = __ROR4__(v4[1] ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x1F);
  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
  LdrProtectMrdata(0);
  RtlpInsertInvertedFunctionTableEntry(v3, a2, v4[0]);
  LdrProtectMrdata(1);
  RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
