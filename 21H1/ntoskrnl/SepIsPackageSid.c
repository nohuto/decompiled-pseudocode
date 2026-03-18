/*
 * XREFs of SepIsPackageSid @ 0x140205C9C
 * Callers:
 *     SepMaximumAccessCheck @ 0x140205D00 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x1402089D0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140370CD4 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140370DFC (SepNormalAccessCheckEx.c)
 * Callees:
 *     RtlCompareMemory @ 0x1403FE5E0 (RtlCompareMemory.c)
 */

bool __fastcall SepIsPackageSid(__int64 a1)
{
  __int64 v2; // rdi

  v2 = SePackagePrefixSid;
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == *(_BYTE *)SePackagePrefixSid
      && RtlCompareMemory((const void *)(a1 + 2), (const void *)(SePackagePrefixSid + 2), 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(v2 + 8);
}
