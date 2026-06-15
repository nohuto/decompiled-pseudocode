/*
 * XREFs of ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18000D02C
 * Callers:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18000CF70 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x1800322B0 (-ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdevice.c)
 *     ?Delete@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z @ 0x180032FAC (-Delete@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z.c)
 * Callees:
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x18000F0A8 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ?CopyChars@?$CSimpleStringT@G$0A@@ATL@@SAXPEAG_KPEBGH@Z @ 0x18000F0C0 (-CopyChars@-$CSimpleStringT@G$0A@@ATL@@SAXPEAG_KPEBGH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::Fork(__int64 *a1, unsigned int a2)
{
  __int64 v2; // r13
  _QWORD *v5; // rdi
  int v6; // ebp
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, __int64); // rax
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rsi
  signed __int32 v11; // eax
  bool v12; // cc
  __int64 result; // rax

  v2 = *a1;
  v5 = (_QWORD *)(*a1 - 24);
  v6 = *((_DWORD *)v5 + 2);
  v7 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 32LL))(*v5);
  v8 = (**v7)(v7, a2, 2LL);
  v9 = v8;
  if ( !v8 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
  v10 = v8 + 24;
  if ( v6 < (int)a2 )
    a2 = v6;
  ATL::CSimpleStringT<unsigned short,0>::CopyChars(v8 + 24, (int)(a2 + 1), v2, a2 + 1);
  *(_DWORD *)(v9 + 8) = v6;
  v11 = _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 4, 0xFFFFFFFF);
  v12 = v11 <= 1;
  result = (unsigned int)(v11 - 1);
  if ( v12 )
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v5 + 8LL))(*v5, v5);
  *a1 = v10;
  return result;
}
