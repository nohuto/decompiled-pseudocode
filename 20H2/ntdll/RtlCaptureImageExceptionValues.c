/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x180013FF4
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x1800108F0 (RtlInsertInvertedFunctionTable.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 */

__int64 __fastcall RtlCaptureImageExceptionValues(void *a1, __int64 *a2, _DWORD *a3)
{
  int v5; // eax
  __int64 v6; // rcx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v5 = RtlpImageDirectoryEntryToDataEx(a1, (__int64)&v8);
  v6 = v8;
  if ( v5 < 0 )
    v6 = 0LL;
  *a2 = v6;
  if ( !v6 )
    *a3 = 0;
  return 0LL;
}
