/*
 * XREFs of sub_18003C8EF @ 0x18003C8EF
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FA80 @ 0x18000FA80 (sub_18000FA80.c)
 */

__int64 __fastcall sub_18003C8EF(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_DWORD *)(a2 + 208) = sub_18000FA80(
                            *(_QWORD *)(a2 + 184),
                            176,
                            (__int64)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
                            a4);
  return 0LL;
}
