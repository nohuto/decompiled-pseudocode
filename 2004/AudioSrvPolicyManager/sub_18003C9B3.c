/*
 * XREFs of sub_18003C9B3 @ 0x18003C9B3
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FA80 @ 0x18000FA80 (sub_18000FA80.c)
 */

__int64 __fastcall sub_18003C9B3(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_DWORD *)(a2 + 32) = sub_18000FA80(
                           *(_QWORD *)(a2 + 264),
                           197,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
                           a4);
  return 0LL;
}
