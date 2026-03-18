/*
 * XREFs of ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C000D58C
 * Callers:
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C000D4D4 (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V-$CTypeIsolat.c)
 * Callees:
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C000D650 (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@V-$CTypeIsol.c)
 *     ?Destroy@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C0049DD4 (-Destroy@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C0153090 (-Destroy@-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

__int64 __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<28672,112>,NSInstrumentation::CTypeIsolation<233472,912>>::Destroy(
        __int64 a1)
{
  void *v1; // rbx
  struct _PAGED_LOOKASIDE_LIST *v3; // rcx
  void *v4; // rcx
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  void *v8; // rcx

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    v3 = (struct _PAGED_LOOKASIDE_LIST *)*((_QWORD *)v1 + 3);
    if ( v3 )
    {
      ExDeletePagedLookasideList(v3);
      ExFreePoolWithTag(*((PVOID *)v1 + 3), 0);
      *((_BYTE *)v1 + 36) = 0;
    }
    v4 = (void *)*((_QWORD *)v1 + 2);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    while ( 1 )
    {
      v5 = *(_QWORD **)v1;
      if ( *(void **)v1 == v1 )
        break;
      v6 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      NSInstrumentation::CSectionEntry<49152,192>::Destroy(v5);
    }
    ExFreePoolWithTag(v1, 0);
  }
  v8 = *(void **)(a1 + 8);
  if ( v8 )
    NSInstrumentation::CLookAsideTypeIsolation<36864,144>::Destroy(v8);
  return TypeIsolationFactory<NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<28672,112>,NSInstrumentation::CTypeIsolation<233472,912>>::Destroy(a1);
}
