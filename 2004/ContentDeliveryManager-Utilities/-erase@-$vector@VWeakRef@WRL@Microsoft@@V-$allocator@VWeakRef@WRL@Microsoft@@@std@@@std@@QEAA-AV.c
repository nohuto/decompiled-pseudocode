/*
 * XREFs of ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x180046E28
 * Callers:
 *     ?UnregisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@@Z @ 0x1800459E0 (-UnregisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

char **__fastcall std::vector<Microsoft::WRL::WeakRef>::erase(__int64 a1, char **a2, char *a3, char *a4)
{
  __int64 *v4; // rdi
  char *v5; // rsi
  char *v9; // rbp
  __int64 v10; // rcx
  char *v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 *i; // rsi
  __int64 v15; // rcx
  char **result; // rax
  char v17; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(__int64 **)a1;
  v5 = a4;
  if ( a3 == *(char **)a1 )
  {
    v9 = *(char **)(a1 + 8);
    if ( a4 == v9 )
    {
      if ( v4 != (__int64 *)v9 )
      {
        do
        {
          v10 = *v4;
          if ( *v4 )
          {
            *v4 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          }
          ++v4;
        }
        while ( v4 != (__int64 *)v9 );
        v4 = *(__int64 **)a1;
      }
LABEL_20:
      *(_QWORD *)(a1 + 8) = v4;
      goto LABEL_21;
    }
  }
  if ( a3 != a4 )
  {
    v11 = *(char **)(a1 + 8);
    v4 = (__int64 *)a3;
    if ( a4 != v11 )
    {
      do
      {
        v12 = 0LL;
        if ( &v17 != v5 )
        {
          v12 = *(_QWORD *)v5;
          *(_QWORD *)v5 = 0LL;
        }
        v13 = *v4;
        *v4 = v12;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        ++v4;
        v5 += 8;
      }
      while ( v5 != v11 );
      v11 = *(char **)(a1 + 8);
    }
    for ( i = v4; i != (__int64 *)v11; ++i )
    {
      v15 = *i;
      if ( *i )
      {
        *i = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
    goto LABEL_20;
  }
LABEL_21:
  result = a2;
  *a2 = a3;
  return result;
}
