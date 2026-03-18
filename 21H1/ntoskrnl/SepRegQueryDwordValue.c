/*
 * XREFs of SepRegQueryDwordValue @ 0x140677BB8
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x1406778C0 (NtImpersonateAnonymousToken.c)
 *     SeGetImageRequiredSigningLevel @ 0x1406DED08 (SeGetImageRequiredSigningLevel.c)
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     SepRegQueryValue @ 0x140677C28 (SepRegQueryValue.c)
 *     SepRegOpenKey @ 0x140677D14 (SepRegOpenKey.c)
 */

__int64 __fastcall SepRegQueryDwordValue(const WCHAR *a1, __int64 a2, void *a3)
{
  int Value; // ebx
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  Handle = 0LL;
  Value = SepRegOpenKey(a1, 0x201u, &Handle);
  if ( Value >= 0 )
  {
    Value = SepRegQueryValue(Handle, a3);
    ZwClose(Handle);
  }
  return (unsigned int)Value;
}
