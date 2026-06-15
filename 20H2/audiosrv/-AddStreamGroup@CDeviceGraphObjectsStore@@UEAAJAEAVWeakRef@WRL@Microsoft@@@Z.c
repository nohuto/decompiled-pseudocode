/*
 * XREFs of ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180027830
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180028820 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     _lambda_ce21942885de90a1a6198292e021f395_::operator() @ 0x1800CDEDC (_lambda_ce21942885de90a1a6198292e021f395_--operator().c)
 *     ??$_Move_backward_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00@Z @ 0x1800E7320 (--$_Move_backward_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectsStore::AddStreamGroup(
        CDeviceGraphObjectsStore *this,
        struct Microsoft::WRL::WeakRef *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // r15
  __int64 v4; // rdx
  __int64 *v5; // rsi
  __int64 **v6; // r13
  __int64 *v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  bool v10; // r14
  __int64 *i; // r14
  __int64 *v12; // r14
  __int64 *j; // rsi
  __int64 v14; // rcx
  unsigned int v15; // esi
  char *v16; // rbx
  __int64 *v17; // r14
  __int64 *v18; // rdi
  __int64 *v19; // r14
  __int64 *v20; // r12
  __int64 *v21; // rsi
  __int64 *v22; // rbx
  struct Microsoft::WRL::WeakRef *v23; // r8
  __int64 v24; // rdi
  __int64 v26; // rcx
  int v27; // eax
  bool v28; // r12
  __int64 *v29; // r12
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // [rsp+70h] [rbp+8h] BYREF
  struct Microsoft::WRL::WeakRef *v35; // [rsp+78h] [rbp+10h]
  __int64 **v36; // [rsp+80h] [rbp+18h]
  char *v37; // [rsp+88h] [rbp+20h]

  v35 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v37 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  EnterCriticalSection(v3);
  v5 = (__int64 *)*((_QWORD *)this + 9);
  v6 = (__int64 **)((char *)this + 64);
  v36 = (__int64 **)((char *)this + 64);
  v7 = (__int64 *)*((_QWORD *)this + 8);
  if ( v7 != v5 )
  {
    do
    {
      v8 = 0LL;
      v34 = 0LL;
      v10 = 1;
      if ( *v7 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)*v7 + 24LL))(
               *v7,
               &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
               &v34);
        v8 = v34;
        if ( v9 >= 0 )
        {
          if ( v34 )
            v10 = 0;
        }
      }
      if ( v8 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      if ( v10 )
        break;
      ++v7;
    }
    while ( v7 != v5 );
    if ( v7 != v5 )
    {
      for ( i = v7 + 1; i != v5; ++i )
      {
        if ( !(unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v8, i) )
        {
          v31 = 0LL;
          if ( &v34 != i )
          {
            v31 = *i;
            *i = 0LL;
          }
          v8 = *v7;
          *v7 = v31;
          if ( v8 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          ++v7;
        }
      }
    }
  }
  v12 = (__int64 *)*((_QWORD *)this + 9);
  for ( j = v7; j != v12; ++j )
  {
    v14 = *j;
    if ( *j )
    {
      *j = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  *((_QWORD *)this + 9) = v7;
  v15 = 0;
  v16 = (char *)this + 88;
  do
  {
    v17 = (__int64 *)*((_QWORD *)v16 + 1);
    v18 = *(__int64 **)v16;
    if ( *(__int64 **)v16 != v17 )
    {
      do
      {
        v26 = 0LL;
        v34 = 0LL;
        v28 = 1;
        if ( *v18 )
        {
          v27 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)*v18 + 24LL))(
                  *v18,
                  &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                  &v34);
          v26 = v34;
          if ( v27 >= 0 )
          {
            if ( v34 )
              v28 = 0;
          }
        }
        if ( v26 )
        {
          v34 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        if ( v28 )
          break;
        ++v18;
      }
      while ( v18 != v17 );
      v6 = v36;
      if ( v18 != v17 )
      {
        v29 = v18 + 1;
        if ( v18 + 1 != v17 )
        {
          do
          {
            if ( !(unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v26, v29) )
            {
              v32 = 0LL;
              if ( &v34 != v29 )
              {
                v32 = *v29;
                *v29 = 0LL;
              }
              v26 = *v18;
              *v18 = v32;
              if ( v26 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
              ++v18;
            }
            ++v29;
          }
          while ( v29 != v17 );
          v6 = v36;
        }
      }
    }
    v19 = (__int64 *)*((_QWORD *)v16 + 1);
    v20 = v18;
    if ( v18 != v19 )
    {
      do
      {
        v30 = *v20;
        if ( *v20 )
        {
          *v20 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        }
        ++v20;
      }
      while ( v20 != v19 );
      v6 = v36;
    }
    *((_QWORD *)v16 + 1) = v18;
    ++v15;
    v16 += 24;
  }
  while ( v15 < 4 );
  if ( v3 )
    LeaveCriticalSection(v3);
  v21 = *v6;
  v22 = v6[1];
  v23 = v35;
  if ( v6[2] == v22 )
  {
    std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(v6, *v6, v35);
  }
  else
  {
    v24 = *(_QWORD *)v35;
    if ( v21 == v22 )
    {
      *v22 = v24;
      if ( v24 )
        (*(void (__fastcall **)(__int64, __int64, struct Microsoft::WRL::WeakRef *))(*(_QWORD *)v24 + 8LL))(
          v24,
          v4,
          v23);
      ++v6[1];
    }
    else
    {
      if ( v24 )
        (*(void (__fastcall **)(_QWORD, __int64, struct Microsoft::WRL::WeakRef *))(*(_QWORD *)v24 + 8LL))(
          *(_QWORD *)v35,
          v4,
          v35);
      *v22 = 0LL;
      *v22 = *(v22 - 1);
      *(v22 - 1) = 0LL;
      ++v6[1];
      std::_Move_backward_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *>(v21, v22 - 1, v22);
      v33 = *v21;
      *v21 = v24;
      if ( v33 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    }
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return 0LL;
}
