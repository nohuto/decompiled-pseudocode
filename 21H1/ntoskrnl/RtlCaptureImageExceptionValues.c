/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x14036F230
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x14032E9C4 (RtlpLookupUserFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x14036EE6C (RtlInsertInvertedFunctionTable.c)
 *     KiLockServiceTable @ 0x14039BC74 (KiLockServiceTable.c)
 *     KiLockExtendedServiceTable @ 0x1403D7A88 (KiLockExtendedServiceTable.c)
 *     KiVerifyXcpt15 @ 0x140A18320 (KiVerifyXcpt15.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 *     KiFatalExceptionFilter @ 0x140A6E3C4 (KiFatalExceptionFilter.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14033AA90 (RtlImageDirectoryEntryToData.c)
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
