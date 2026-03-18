/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x140371DB0
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x1402FAAD8 (RtlpLookupUserFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x1403719EC (RtlInsertInvertedFunctionTable.c)
 *     KiLockServiceTable @ 0x14039F554 (KiLockServiceTable.c)
 *     KiLockExtendedServiceTable @ 0x1403DB558 (KiLockExtendedServiceTable.c)
 *     KiVerifyXcpt15 @ 0x140A1E320 (KiVerifyXcpt15.c)
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
 *     KiFatalExceptionFilter @ 0x140A7529C (KiFatalExceptionFilter.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402FD940 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall RtlCaptureImageExceptionValues(int a1, __int64 *a2, _DWORD *a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rax

  v4 = a2;
  LOBYTE(a2) = 1;
  v5 = RtlImageDirectoryEntryToData(a1, (int)a2, 3, (int)a3);
  *v4 = v5;
  if ( !v5 )
    *a3 = 0;
  return 0LL;
}
