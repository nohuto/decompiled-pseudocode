/*
 * XREFs of ?PlatformDebugModeEnabled@NSInstrumentation@@YA_NXZ @ 0x1C00D10E0
 * Callers:
 *     ?Initialize@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAA_NXZ @ 0x1C0008F14 (-Initialize@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAA_NXZ @ 0x1C000922C (-Initialize@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00093FC (-Initialize@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00095CC (-Initialize@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAA_NXZ @ 0x1C000979C (-Initialize@-$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAA_NXZ @ 0x1C000996C (-Initialize@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ @ 0x1C0009AB8 (-Initialize@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAA_NXZ @ 0x1C0009C88 (-Initialize@-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAA_NXZ @ 0x1C0009E58 (-Initialize@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAA_NXZ @ 0x1C000A028 (-Initialize@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAA_NXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAA_NXZ @ 0x1C000A284 (-Initialize@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall NSInstrumentation::PlatformDebugModeEnabled(NSInstrumentation *this)
{
  return MmIsDriverVerifyingByAddress(&unk_1C020BFD4) != 0;
}
