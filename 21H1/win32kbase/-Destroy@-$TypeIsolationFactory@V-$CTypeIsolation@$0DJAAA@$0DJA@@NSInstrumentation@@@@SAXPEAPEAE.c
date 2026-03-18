/*
 * XREFs of ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@SAXPEAPEAE@Z @ 0x1C000DB58
 * Callers:
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SAXPEAPEAE@Z @ 0x1C000D7C0 (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@V-$CTypeIsolat.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SAXPEAPEAE@Z @ 0x1C000DAA0 (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@V-$CTypeIsolat.c)
 * Callees:
 *     ?Destroy@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C0049DD4 (-Destroy@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<233472,912>>::Destroy(__int64 a1)
{
  void *v1; // rbx
  struct _PAGED_LOOKASIDE_LIST *v2; // rcx
  void *v3; // rcx
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rax

  v1 = *(void **)(a1 + 40);
  if ( v1 )
  {
    v2 = (struct _PAGED_LOOKASIDE_LIST *)*((_QWORD *)v1 + 3);
    if ( v2 )
    {
      ExDeletePagedLookasideList(v2);
      ExFreePoolWithTag(*((PVOID *)v1 + 3), 0);
      *((_BYTE *)v1 + 36) = 0;
    }
    v3 = (void *)*((_QWORD *)v1 + 2);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    while ( 1 )
    {
      v4 = *(_QWORD **)v1;
      if ( *(void **)v1 == v1 )
        break;
      v5 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      NSInstrumentation::CSectionEntry<49152,192>::Destroy(v4);
    }
    ExFreePoolWithTag(v1, 0);
  }
}
