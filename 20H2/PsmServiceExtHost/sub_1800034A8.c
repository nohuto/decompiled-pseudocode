/*
 * XREFs of sub_1800034A8 @ 0x1800034A8
 * Callers:
 *     sub_18000DA20 @ 0x18000DA20 (sub_18000DA20.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800034A8()
{
  _BYTE ThreadInformation[44]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v2; // [rsp+5Ch] [rbp-Ch]
  int v3; // [rsp+70h] [rbp+8h] BYREF

  NtQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
  v3 = 2;
  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &v3, 4u);
  return v2;
}
