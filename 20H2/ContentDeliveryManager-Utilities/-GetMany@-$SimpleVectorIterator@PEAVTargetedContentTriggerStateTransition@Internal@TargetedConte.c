/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@V?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@PEAI@Z @ 0x18001B7A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,XWinRT::IntVersionTag,0>::GetMany(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4)
{
  unsigned int i; // r8d
  __int64 v5; // rdx
  _DWORD *v6; // r13
  _DWORD *v7; // r15
  int v8; // ebx
  volatile signed __int32 *v9; // r12
  unsigned __int32 v10; // esi
  unsigned int *v11; // rax
  unsigned int k; // ebx
  __int64 v13; // rdi
  __int64 v14; // rcx
  bool v15; // zf
  signed __int32 v16; // eax
  unsigned int *v17; // rax
  unsigned int j; // ebx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v22; // [rsp+80h] [rbp+48h]
  unsigned int v23; // [rsp+88h] [rbp+50h]

  v23 = a2;
  *a4 = 0;
  for ( i = 0; i < v23; a2 = v23 )
  {
    v5 = i++;
    *(_QWORD *)(a3 + 8 * v5) = 0LL;
  }
  v6 = *(_DWORD **)(a1 + 32);
  v7 = (_DWORD *)(a1 + 48);
  v8 = *(_DWORD *)(a1 + 48);
  if ( v8 >= 0 )
  {
    v9 = (volatile signed __int32 *)(a1 + 40);
    v22 = a1;
    v10 = *(_DWORD *)(a1 + 40);
    if ( *(_BYTE *)(a1 + 56) )
    {
      v8 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, _QWORD, __int64, unsigned int *))(*(_QWORD *)v6 + 128LL))(
             v6,
             v10,
             a2,
             a3,
             a4);
      if ( v8 >= 0 )
        *v9 = v10 + *a4;
    }
    else
    {
      while ( 1 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, unsigned int *))(**(_QWORD **)(a1 + 32) + 128LL))(
               *(_QWORD *)(a1 + 32),
               v10,
               a2,
               a3,
               a4);
        if ( v8 < 0 )
          break;
        v16 = _InterlockedCompareExchange(v9, v10 + *a4, v10);
        v15 = v10 == v16;
        v10 = v16;
        if ( v15 )
          break;
        v17 = a4;
        for ( j = 0; j < *a4; v17 = a4 )
        {
          v19 = a3;
          v20 = *(_QWORD *)(a3 + 8LL * j);
          if ( v20 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
            *(_QWORD *)(a3 + 8LL * j) = 0LL;
            v19 = a3;
          }
          *(_QWORD *)(v19 + 8LL * j++) = 0LL;
        }
        *v17 = 0;
        a2 = v23;
        a1 = v22;
      }
    }
    if ( v7[1] != v6[22] )
    {
      *v7 = -2147483636;
      if ( v8 < 0 )
      {
        RoTransformError((unsigned int)v8, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v11 = a4;
        for ( k = 0; k < *a4; v11 = a4 )
        {
          v13 = a3;
          v14 = *(_QWORD *)(a3 + 8LL * k);
          if ( v14 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
            *(_QWORD *)(a3 + 8LL * k) = 0LL;
            v13 = a3;
          }
          *(_QWORD *)(v13 + 8LL * k++) = 0LL;
        }
        *v11 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v8, 0LL);
  }
  return (unsigned int)v8;
}
