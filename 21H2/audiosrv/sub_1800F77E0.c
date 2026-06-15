/*
 * XREFs of sub_1800F77E0 @ 0x1800F77E0
 * Callers:
 *     sub_1800F7A80 @ 0x1800F7A80 (sub_1800F7A80.c)
 *     sub_180112774 @ 0x180112774 (sub_180112774.c)
 * Callees:
 *     sub_1800F79C8 @ 0x1800F79C8 (sub_1800F79C8.c)
 */

__int64 __fastcall sub_1800F77E0(int a1, int a2, __int64 a3)
{
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x20) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800F79C8(*((_QWORD *)off_18019C348 + 2), a2, a3, a1, a2, a3);
  }
  RtlAcquireResourceExclusive(&Resource, 1u);
  _InterlockedIncrement((volatile signed __int32 *)lpBaseAddress + 1);
  _InterlockedIncrement((volatile signed __int32 *)lpMem + 1);
  RtlReleaseResource(&Resource);
  return 0LL;
}
