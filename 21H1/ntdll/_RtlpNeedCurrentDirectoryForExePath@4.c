/*
 * XREFs of _RtlpNeedCurrentDirectoryForExePath@4 @ 0x4B2ABE9C
 * Callers:
 *     _RtlGetExePath@8 @ 0x4B2ABE60 (_RtlGetExePath@8.c)
 * Callees:
 *     _RtlQueryEnvironmentVariable@24 @ 0x4B2BF830 (_RtlQueryEnvironmentVariable@24.c)
 *     _wcschr @ 0x4B2FA680 (_wcschr.c)
 */

bool __thiscall RtlpNeedCurrentDirectoryForExePath(wchar_t *Str)
{
  int v2; // [esp+0h] [ebp-4h] BYREF

  v2 = (int)Str;
  return wcschr(Str, 0x5Cu)
      || RtlQueryEnvironmentVariable(0, (wchar_t *)L"NoDefaultCurrentDirectoryInExePath", 0x22u, 0, 0, (int)&v2) == -1073741568;
}
