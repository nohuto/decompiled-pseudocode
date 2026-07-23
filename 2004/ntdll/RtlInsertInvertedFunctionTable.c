/*
 * XREFs of RtlInsertInvertedFunctionTable @ 0x1800108F0
 * Callers:
 *     LdrpProcessMappedModule @ 0x18000F9AC (LdrpProcessMappedModule.c)
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800DB580 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180012224 (LdrProtectMrdata.c)
 *     RtlpInsertInvertedFunctionTableEntry @ 0x180013F10 (RtlpInsertInvertedFunctionTableEntry.c)
 *     RtlCaptureImageExceptionValues @ 0x180013FF4 (RtlCaptureImageExceptionValues.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlInsertInvertedFunctionTable(__int64 a1, int a2)
{
  int v3; // edi
  int v4; // ecx
  int v5; // [rsp+50h] [rbp+18h] BYREF
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1;
  RtlCaptureImageExceptionValues(a1, &v6, &v5);
  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
  LdrProtectMrdata(0LL);
  RtlpInsertInvertedFunctionTableEntry(v4, v3, v6, a2, v5);
  LdrProtectMrdata(1LL);
  RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
