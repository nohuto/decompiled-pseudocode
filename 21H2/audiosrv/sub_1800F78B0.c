/*
 * XREFs of sub_1800F78B0 @ 0x1800F78B0
 * Callers:
 *     sub_1800F7BD0 @ 0x1800F7BD0 (sub_1800F7BD0.c)
 * Callees:
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 */

__int64 __fastcall sub_1800F78B0(const wchar_t *a1)
{
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x20) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x1Bu, (__int64)&unk_180171E90, a1);
  }
  RtlAcquireResourceExclusive(&Resource, 1u);
  _InterlockedIncrement((volatile signed __int32 *)lpBaseAddress + 1);
  _InterlockedIncrement((volatile signed __int32 *)lpMem + 1);
  RtlReleaseResource(&Resource);
  return 0LL;
}
