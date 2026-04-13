/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@PEAVAppInstallInfoRecord@ContentManagement@@V?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAppInstallInfoRecord@ContentManagement@@PEAI@Z @ 0x18005FD10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,XWinRT::IntVersionTag,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4)
{
  unsigned int i; // r8d
  __int64 v5; // rdx
  __int64 v6; // r13
  _DWORD *v7; // rsi
  int v8; // ebx
  volatile signed __int32 *v9; // r15
  unsigned __int32 v10; // r12d
  bool v11; // zf
  signed __int32 v12; // eax
  unsigned int *v13; // rax
  unsigned int j; // ebx
  __int64 v15; // rdi
  __int64 v16; // rcx
  unsigned int *v17; // rax
  unsigned int k; // ebx
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
  v6 = *(_QWORD *)(a1 + 64);
  v7 = (_DWORD *)(a1 + 80);
  v8 = *(_DWORD *)(a1 + 80);
  if ( v8 >= 0 )
  {
    v9 = (volatile signed __int32 *)(a1 + 72);
    v22 = a1;
    v10 = *(_DWORD *)(a1 + 72);
    while ( 1 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, unsigned int *))(**(_QWORD **)(a1 + 64) + 128LL))(
             *(_QWORD *)(a1 + 64),
             v10,
             a2,
             a3,
             a4);
      if ( v8 < 0 )
        break;
      v12 = _InterlockedCompareExchange(v9, v10 + *a4, v10);
      v11 = v10 == v12;
      v10 = v12;
      if ( v11 )
        break;
      v13 = a4;
      for ( j = 0; j < *a4; v13 = a4 )
      {
        v15 = a3;
        v16 = *(_QWORD *)(a3 + 8LL * j);
        if ( v16 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          *(_QWORD *)(a3 + 8LL * j) = 0LL;
          v15 = a3;
        }
        *(_QWORD *)(v15 + 8LL * j++) = 0LL;
      }
      *v13 = 0;
      a2 = v23;
      a1 = v22;
    }
    if ( v7[1] != *(_DWORD *)(v6 + 120) )
    {
      *v7 = -2147483636;
      if ( v8 < 0 )
      {
        RoTransformError((unsigned int)v8, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v17 = a4;
        for ( k = 0; k < *a4; v17 = a4 )
        {
          v19 = a3;
          v20 = *(_QWORD *)(a3 + 8LL * k);
          if ( v20 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
            *(_QWORD *)(a3 + 8LL * k) = 0LL;
            v19 = a3;
          }
          *(_QWORD *)(v19 + 8LL * k++) = 0LL;
        }
        *v17 = 0;
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
