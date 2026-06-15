/*
 * XREFs of ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z @ 0x180005D24
 * Callers:
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x180005AC0 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002BB40 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     memcpy_s @ 0x18003440C (memcpy_s.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800BA9DC (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall CAudioEndpointId::Copy(CAudioEndpointId *this, const struct CAudioEndpointId *a2)
{
  unsigned int *v3; // r14
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rdi
  __int64 (__fastcall ***v6)(_QWORD, _QWORD, __int64); // rcx
  _DWORD *v8; // r12
  __int64 v9; // rax

  v3 = *(unsigned int **)a2;
  v4 = (volatile signed __int32 *)(*(_QWORD *)a2 - 24LL);
  v5 = (volatile signed __int32 *)(*(_QWORD *)this - 24LL);
  if ( v4 != v5 )
  {
    if ( *((int *)v5 + 4) >= 0 && *(_QWORD *)v4 == *(_QWORD *)v5 )
    {
      v6 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 32LL))(*(_QWORD *)v4);
      if ( *((int *)v4 + 4) >= 0 && v6 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v4 )
      {
        _InterlockedIncrement(v4 + 4);
      }
      else
      {
        v8 = v4 + 2;
        v9 = (**v6)(v6, *((unsigned int *)v4 + 2), 2LL);
        v4 = (volatile signed __int32 *)v9;
        if ( !v9 )
          ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
        *(_DWORD *)(v9 + 8) = *v8;
        memcpy_s((void *const)(v9 + 24), 2LL * (*v8 + 1), v3, 2LL * (*v8 + 1));
      }
      if ( _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5, v5);
      *(_QWORD *)this = v4 + 6;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(this, *(_QWORD *)a2, *(v3 - 4));
    }
  }
  return 0LL;
}
