/*
 * XREFs of _LdrpQueryDllExecuteOptions@8 @ 0x4B2E76BD
 * Callers:
 *     _LdrpCheckNXCompatibility@4 @ 0x4B2E7520 (_LdrpCheckNXCompatibility@4.c)
 * Callees:
 *     _RtlQueryImageFileKeyOption@24 @ 0x4B2A6C80 (_RtlQueryImageFileKeyOption@24.c)
 *     _RtlpOpenImageFileOptionsKeyEx@16 @ 0x4B2E5DF9 (_RtlpOpenImageFileOptionsKeyEx@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

NTSTATUS __fastcall LdrpQueryDllExecuteOptions(int a1, ULONG *a2)
{
  HANDLE v2; // esi
  NTSTATUS result; // eax
  _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-Ch] BYREF
  HANDLE Handle; // [esp+14h] [ebp-4h] BYREF

  v2 = dword_4B3A6660;
  Handle = dword_4B3A6660;
  if ( !dword_4B3A6660 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\DllNXOptions");
    result = RtlpOpenImageFileOptionsKeyEx(&DestinationString.Length, 9u, 0, &Handle);
    if ( result < 0 )
      return result;
    v2 = Handle;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)&dword_4B3A6660, (signed __int32)Handle, 0) )
    {
      NtClose(v2);
      v2 = dword_4B3A6660;
    }
  }
  return RtlQueryImageFileKeyOption(v2, *(PCWSTR *)(a1 + 4), 4, a2, 4u, (ULONG *)&Handle);
}
