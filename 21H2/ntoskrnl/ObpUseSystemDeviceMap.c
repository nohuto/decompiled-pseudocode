/*
 * XREFs of ObpUseSystemDeviceMap @ 0x1405CF1CC
 * Callers:
 *     ObpLookupObjectName @ 0x14070B300 (ObpLookupObjectName.c)
 * Callees:
 *     RtlGetNtSystemRoot @ 0x14061B3E0 (RtlGetNtSystemRoot.c)
 *     RtlUpcaseUnicodeChar @ 0x1406F14F0 (RtlUpcaseUnicodeChar.c)
 */

bool __fastcall ObpUseSystemDeviceMap(__int64 a1)
{
  PWSTR NtSystemRoot; // rax
  WCHAR *v3; // rcx
  WCHAR *v4; // rdi
  WCHAR v5; // bx
  bool result; // al

  result = 0;
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8) != 0 && *(_WORD *)a1 >= 0xEu )
  {
    NtSystemRoot = RtlGetNtSystemRoot();
    v3 = *(WCHAR **)(a1 + 8);
    v4 = NtSystemRoot;
    if ( v3[5] == 58 && v3[6] == 92 )
    {
      v5 = RtlUpcaseUnicodeChar(v3[4]);
      if ( RtlUpcaseUnicodeChar(*v4) == v5 )
        return 1;
    }
  }
  return result;
}
