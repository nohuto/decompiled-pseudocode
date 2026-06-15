/*
 * XREFs of sub_18003CB11 @ 0x18003CB11
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FA80 @ 0x18000FA80 (sub_18000FA80.c)
 */

__int64 __fastcall sub_18003CB11(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_DWORD *)(a2 + 56) = sub_18000FA80(
                           *(_QWORD *)(a2 + 40),
                           352,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspe"
                                    "cificendpointinfo.cpp",
                           a4);
  return 0LL;
}
