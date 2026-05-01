/*
 * XREFs of sub_1800464EC @ 0x1800464EC
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012238 @ 0x180012238 (sub_180012238.c)
 */

__int64 __fastcall sub_1800464EC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_DWORD *)(a2 + 48) = sub_180012238(
                           *(_QWORD *)(a2 + 136),
                           227,
                           (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
                           a4);
  return 0LL;
}
