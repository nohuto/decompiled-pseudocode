/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C0072884
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C00727F8 (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTy.c)
 * Callees:
 *     ?Create@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00728E4 (-Create@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0072BFC (-Create@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0073658 (-Create@-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0073828 (-Create@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ.c)
 */

char __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<28672,112>,NSInstrumentation::CTypeIsolation<233472,912>>::Create(
        _QWORD *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  v2 = NSInstrumentation::CTypeIsolation<81920,320>::Create();
  v3 = 0;
  if ( v2 )
  {
    a1[4] = v2;
    v4 = NSInstrumentation::CTypeIsolation<913408,3568>::Create();
    if ( v4 )
    {
      a1[6] = v4;
      v5 = NSInstrumentation::CTypeIsolation<28672,112>::Create();
      if ( v5 )
      {
        a1[7] = v5;
        v6 = NSInstrumentation::CTypeIsolation<233472,912>::Create();
        if ( v6 )
        {
          a1[5] = v6;
          v3 = 1;
        }
      }
    }
    LOBYTE(v2) = v3;
  }
  return v2;
}
