/*
 * XREFs of sub_180046498 @ 0x180046498
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012238 @ 0x180012238 (sub_180012238.c)
 */

__int64 __fastcall sub_180046498(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_DWORD *)(a2 + 168) = sub_180012238(
                            *(_QWORD *)(a2 + 136),
                            121,
                            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
                            a4);
  return 0LL;
}
