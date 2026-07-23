/*
 * XREFs of LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D4504
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800D0EEC (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800751DC (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryImageFileKeyOption @ 0x18007A3A0 (RtlQueryImageFileKeyOption.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     ZwSetValueKey @ 0x18009DA00 (ZwSetValueKey.c)
 */

__int64 __fastcall LdrpQueryAndUpdateVerifierLaunchCounter(unsigned __int16 *a1, ULONG *a2)
{
  __int16 v2; // r8
  int v3; // r14d
  wchar_t *v5; // rax
  int v6; // edx
  NTSTATUS ImageFileKeyOption; // edi
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int Data; // [rsp+70h] [rbp+20h] BYREF
  __int64 v12; // [rsp+80h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+38h] BYREF

  v2 = *a1;
  v3 = 0;
  v5 = (wchar_t *)(*((_QWORD *)a1 + 1) + *a1);
  v6 = *a1;
  if ( *a1 )
  {
    do
    {
      if ( *(v5 - 1) == 92 )
        break;
      --v5;
      v6 -= 2;
    }
    while ( v6 );
  }
  ValueName.Buffer = v5;
  ValueName.Length = v2 - v6;
  ValueName.MaximumLength = v2 - v6 + 2;
  RtlInitUnicodeString(&DestinationString, L"\\VerifierCounter");
  if ( (int)RtlpOpenImageFileOptionsKeyEx(&DestinationString.Length, 11LL, 0, &KeyHandle) < 0 )
  {
    if ( (int)RtlpOpenImageFileOptionsKeyEx(&DestinationString.Length, 9LL, 0, &KeyHandle) < 0 )
    {
      *a2 = 1;
      return 0LL;
    }
    v3 = 1;
  }
  ImageFileKeyOption = RtlQueryImageFileKeyOption(KeyHandle, ValueName.Buffer, 4, a2, 4u, (ULONG *)&v12);
  if ( ImageFileKeyOption >= 0 )
  {
    if ( v3 || !*a2 )
      goto LABEL_14;
    Data = *a2 - 1;
    ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
  }
  else
  {
    *a2 = 1;
  }
  ImageFileKeyOption = 0;
LABEL_14:
  NtClose(KeyHandle);
  return (unsigned int)ImageFileKeyOption;
}
