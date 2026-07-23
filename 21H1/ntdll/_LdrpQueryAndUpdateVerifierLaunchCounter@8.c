/*
 * XREFs of _LdrpQueryAndUpdateVerifierLaunchCounter@8 @ 0x4B333771
 * Callers:
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 * Callees:
 *     _RtlQueryImageFileKeyOption@24 @ 0x4B2A6C80 (_RtlQueryImageFileKeyOption@24.c)
 *     _RtlpOpenImageFileOptionsKeyEx@16 @ 0x4B2E5DF9 (_RtlpOpenImageFileOptionsKeyEx@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwSetValueKey@24 @ 0x4B2F2F80 (_ZwSetValueKey@24.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

NTSTATUS __fastcall LdrpQueryAndUpdateVerifierLaunchCounter(unsigned __int16 *a1, ULONG *a2)
{
  __int16 v3; // si
  int v4; // edx
  int v5; // ebx
  wchar_t *v6; // eax
  NTSTATUS ImageFileKeyOption; // esi
  _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-1Ch] BYREF
  _UNICODE_STRING ValueName; // [esp+14h] [ebp-14h] BYREF
  int v11; // [esp+1Ch] [ebp-Ch] BYREF
  int Data; // [esp+20h] [ebp-8h] BYREF
  HANDLE KeyHandle; // [esp+24h] [ebp-4h] BYREF

  v3 = *a1;
  v4 = *a1;
  v5 = 0;
  v6 = (wchar_t *)(v4 + *((_DWORD *)a1 + 1));
  if ( *a1 )
  {
    do
    {
      if ( *(v6 - 1) == 92 )
        break;
      --v6;
      v4 -= 2;
    }
    while ( v4 );
  }
  ValueName.Buffer = v6;
  ValueName.Length = v3 - v4;
  ValueName.MaximumLength = v3 - v4 + 2;
  RtlInitUnicodeString(&DestinationString, L"\\VerifierCounter");
  if ( RtlpOpenImageFileOptionsKeyEx(&DestinationString.Length, 0xBu, 0, &KeyHandle) < 0 )
  {
    if ( RtlpOpenImageFileOptionsKeyEx(&DestinationString.Length, 9u, 0, &KeyHandle) < 0 )
    {
      *a2 = 1;
      return 0;
    }
    v5 = 1;
  }
  ImageFileKeyOption = RtlQueryImageFileKeyOption(KeyHandle, (PCWSTR)ValueName.Buffer, 4, a2, 4u, (ULONG *)&v11);
  if ( ImageFileKeyOption >= 0 )
  {
    if ( v5 || !*a2 )
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
  return ImageFileKeyOption;
}
