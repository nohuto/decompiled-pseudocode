/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C001F3AC
 * Callers:
 *     HmgCreate @ 0x1C001EE8C (HmgCreate.c)
 * Callees:
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C001F408 (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTy.c)
 *     ?Create@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C001FF4C (-Create@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0020608 (-Create@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV?$CTypeIsolation@$0CMAAA@$0CMA@@2@XZ @ 0x1C00207D8 (-Create@-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV-$CTypeIsolation@$0CMA.c)
 */

char TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<180224,704>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<28672,112>,NSInstrumentation::CTypeIsolation<233472,912>>::Create()
{
  unsigned __int8 **v0; // rdi
  __int64 v1; // rax
  char v2; // bl
  __int64 v3; // rax
  __int64 v4; // rax

  v0 = gpTypeIsolation;
  v1 = NSInstrumentation::CLookAsideTypeIsolation<180224,704>::Create();
  v2 = 0;
  if ( v1 )
  {
    *v0 = (unsigned __int8 *)v1;
    v3 = NSInstrumentation::CTypeIsolation<40960,160>::Create();
    if ( v3 )
    {
      v0[2] = (unsigned __int8 *)v3;
      v4 = NSInstrumentation::CTypeIsolation<49152,192>::Create();
      if ( v4 )
      {
        v0[3] = (unsigned __int8 *)v4;
        v2 = TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<28672,112>,NSInstrumentation::CTypeIsolation<233472,912>>::Create(v0);
      }
    }
    LOBYTE(v1) = v2;
  }
  return v1;
}
