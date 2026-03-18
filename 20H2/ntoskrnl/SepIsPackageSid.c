/*
 * XREFs of SepIsPackageSid @ 0x1402055E4
 * Callers:
 *     SepMaximumAccessCheck @ 0x140204FB0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x140226B20 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140373854 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x14037397C (SepNormalAccessCheckEx.c)
 * Callees:
 *     RtlCompareMemory @ 0x140405B40 (RtlCompareMemory.c)
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
