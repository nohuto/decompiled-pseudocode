/*
 * XREFs of ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C0022590
 * Callers:
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NPAAA@$0NPA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C00224CC (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@V-$CLookAsideT.c)
 * Callees:
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@V?$CTypeIsolation@$0HAAA@$0HA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C0022648 (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@V-$CTypeIsol.c)
 *     ?Destroy@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C0057AE4 (-Destroy@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

__int64 __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<28672,112>,NSInstrumentation::CTypeIsolation<233472,912>>::Destroy(
        __int64 a1)
{
  void *v1; // rbx
  struct _PAGED_LOOKASIDE_LIST *v3; // rcx
  void *v4; // rcx
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax

  v1 = *(void **)(a1 + 32);
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
  return TypeIsolationFactory<NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<28672,112>,NSInstrumentation::CTypeIsolation<233472,912>>::Destroy(a1);
}
