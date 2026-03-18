/*
 * XREFs of SepIsCapabilitySid @ 0x140205C40
 * Callers:
 *     SepMaximumAccessCheck @ 0x140205D00 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x1402089D0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140370CD4 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140370DFC (SepNormalAccessCheckEx.c)
 * Callees:
 *     RtlCompareMemory @ 0x1403FE5E0 (RtlCompareMemory.c)
 */

bool __fastcall SepIsCapabilitySid(__int64 a1)
{
  __int64 v2; // rdi

  v2 = SeCapabilityPrefixSid;
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == *(_BYTE *)SeCapabilityPrefixSid
      && RtlCompareMemory((const void *)(a1 + 2), (const void *)(SeCapabilityPrefixSid + 2), 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(v2 + 8);
}
