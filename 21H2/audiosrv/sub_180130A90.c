/*
 * XREFs of sub_180130A90 @ 0x180130A90
 * Callers:
 *     sub_180075070 @ 0x180075070 (sub_180075070.c)
 *     sub_180075080 @ 0x180075080 (sub_180075080.c)
 *     sub_180075090 @ 0x180075090 (sub_180075090.c)
 *     sub_1800750A0 @ 0x1800750A0 (sub_1800750A0.c)
 *     sub_1800750B0 @ 0x1800750B0 (sub_1800750B0.c)
 *     sub_1800750C0 @ 0x1800750C0 (sub_1800750C0.c)
 *     sub_1800750D0 @ 0x1800750D0 (sub_1800750D0.c)
 *     sub_1800750E0 @ 0x1800750E0 (sub_1800750E0.c)
 *     sub_1800750F0 @ 0x1800750F0 (sub_1800750F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180130A90(__int64 a1)
{
  __int64 (__fastcall ***v2)(_QWORD); // rcx

  v2 = *(__int64 (__fastcall ****)(_QWORD))(a1 + 128);
  if ( !v2 )
    v2 = (__int64 (__fastcall ***)(_QWORD))(a1 - 8);
  return (**v2)(v2);
}
