/*
 * XREFs of ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001B590
 * Callers:
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x180002DF8 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001B520 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x1800D3098 (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18006ACBE (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     memcpy_0 @ 0x18007418F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800BA9DC (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::Fork(const void **a1, unsigned int a2)
{
  const void *v2; // r14
  int v5; // ebp
  __int64 (__fastcall ***v6)(_QWORD, _QWORD, __int64); // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r15
  void *v10; // rbx
  size_t v11; // r8
  signed __int32 v12; // eax
  bool v13; // cc
  __int64 result; // rax

  v2 = *a1;
  v5 = *((_DWORD *)*a1 - 4);
  v6 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*a1 - 3)
                                                                                            + 32LL))(*((_QWORD *)*a1 - 3));
  v7 = (**v6)(v6, a2, 2LL);
  v9 = v7;
  if ( !v7 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
  v10 = (void *)(v7 + 24);
  if ( v5 < (int)a2 )
    a2 = v5;
  v11 = 2LL * (int)(a2 + 1);
  if ( v11 )
  {
    if ( v7 != -24 )
    {
      if ( v2 )
      {
        memcpy_0(v10, v2, v11);
        goto LABEL_8;
      }
      memset_0(v10, 0, v11);
    }
    *(_DWORD *)_o__errno(v8) = 22;
    invalid_parameter_noinfo();
  }
LABEL_8:
  *(_DWORD *)(v9 + 8) = v5;
  v12 = _InterlockedExchangeAdd((volatile signed __int32 *)v2 - 2, 0xFFFFFFFF);
  v13 = v12 <= 1;
  result = (unsigned int)(v12 - 1);
  if ( v13 )
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, size_t))(**((_QWORD **)v2 - 3) + 8LL))(
               *((_QWORD *)v2 - 3),
               (__int64)v2 - 24,
               v11);
  *a1 = v10;
  return result;
}
