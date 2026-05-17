/*
 * XREFs of LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D48A0
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800D10CC (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800752DC (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryImageFileKeyOption @ 0x18007A4A0 (RtlQueryImageFileKeyOption.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     ZwSetValueKey @ 0x18009DCA0 (ZwSetValueKey.c)
 */

__int64 __fastcall LdrpQueryAndUpdateVerifierLaunchCounter(unsigned __int16 *a1, int *a2)
{
  int v2; // r14d
  __int64 v4; // rax
  int v5; // edx
  int v7; // edi
  __int64 v8; // [rsp+38h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int v10; // [rsp+80h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+38h] BYREF

  v2 = 0;
  v4 = *((_QWORD *)a1 + 1) + *a1;
  v5 = *a1;
  if ( *a1 )
  {
    do
    {
      if ( *(_WORD *)(v4 - 2) == 92 )
        break;
      v4 -= 2LL;
      v5 -= 2;
    }
    while ( v5 );
  }
  v8 = v4;
  RtlInitUnicodeString(&DestinationString, L"\\VerifierCounter");
  if ( (int)RtlpOpenImageFileOptionsKeyEx(&DestinationString.Length, 11LL, 0, &Handle) < 0 )
  {
    if ( (int)RtlpOpenImageFileOptionsKeyEx(&DestinationString.Length, 9LL, 0, &Handle) < 0 )
    {
      *a2 = 1;
      return 0LL;
    }
    v2 = 1;
  }
  v7 = RtlQueryImageFileKeyOption((__int64)Handle, v8, 4, a2, 4u, &v10);
  if ( v7 >= 0 )
  {
    if ( v2 || !*a2 )
      goto LABEL_14;
    ZwSetValueKey();
  }
  else
  {
    *a2 = 1;
  }
  v7 = 0;
LABEL_14:
  NtClose(Handle);
  return (unsigned int)v7;
}
