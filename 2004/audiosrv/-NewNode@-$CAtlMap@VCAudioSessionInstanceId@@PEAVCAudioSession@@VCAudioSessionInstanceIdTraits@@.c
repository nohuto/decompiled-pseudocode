/*
 * XREFs of ?NewNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x18002BC30
 * Callers:
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x18002BA80 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     ?CreateNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x1800CF25C (-CreateNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrait.c)
 * Callees:
 *     memcpy_s @ 0x180034A94 (memcpy_s.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800BB66C (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ?PickSize@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEBAI_K@Z @ 0x1800D03D8 (-PickSize@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCE.c)
 *     ?Rehash@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXI@Z @ 0x1800D06C8 (-Rehash@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::NewNode(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  _QWORD *v8; // rax
  int v9; // r8d
  _QWORD *v10; // rax
  int i; // r8d
  __int64 v12; // rdi
  const void *v13; // r14
  volatile signed __int32 *v14; // rsi
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, __int64); // rax
  char *v16; // r13
  char *v17; // rsi
  __int64 (__fastcall ***v18)(_QWORD, _QWORD, __int64); // rax
  char *v19; // r13
  char *v20; // rsi
  __int64 (__fastcall ***v21)(_QWORD, _QWORD, __int64); // rax
  char *v22; // r13
  char *v23; // rsi
  __int64 (__fastcall ***v24)(_QWORD, _QWORD, __int64); // rax
  char *v25; // r15
  char *v26; // rsi
  __int64 (__fastcall ***v27)(_QWORD, _QWORD, __int64); // rax
  __int64 v28; // rdx
  __int64 result; // rax
  _DWORD *v30; // r12
  __int64 v31; // rax
  _DWORD *v32; // r12
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _DWORD *v36; // r12
  __int64 v37; // rax
  unsigned int v38; // eax
  _DWORD *v39; // [rsp+20h] [rbp-58h]
  _DWORD *v40; // [rsp+20h] [rbp-58h]
  __int64 v41; // [rsp+28h] [rbp-50h]

  try
  {
    if ( *(_QWORD *)(a1 + 64) )
    {
LABEL_12:
      v12 = *(_QWORD *)(a1 + 64);
      if ( !v12 )
        ATL::AtlThrowImpl(-2147467259);
      v41 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = *(_QWORD *)(v12 + 88);
      v13 = *(const void **)a2;
      v14 = (volatile signed __int32 *)(*(_QWORD *)a2 - 24LL);
      v15 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v14
                                                                                                 + 32LL))(*(_QWORD *)v14);
      if ( *((int *)v14 + 4) >= 0 && v15 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v14 )
      {
        _InterlockedIncrement(v14 + 4);
      }
      else
      {
        v30 = v14 + 2;
        v31 = (**v15)(v15, *((unsigned int *)v14 + 2), 2LL);
        v14 = (volatile signed __int32 *)v31;
        if ( !v31 )
          ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
        *(_DWORD *)(v31 + 8) = *v30;
        memcpy_s((void *const)(v31 + 24), 2LL * (*v30 + 1), v13, 2LL * (*v30 + 1));
      }
      *(_QWORD *)v12 = v14 + 6;
      v16 = *(char **)(a2 + 8);
      v17 = v16 - 24;
      v18 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v16 - 3)
                                                                                                 + 32LL))(*((_QWORD *)v16 - 3));
      if ( *((int *)v16 - 2) >= 0 && v18 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v17 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v17 + 4);
      }
      else
      {
        v32 = v17 + 8;
        v33 = (**v18)(v18, *((unsigned int *)v17 + 2), 2LL);
        v17 = (char *)v33;
        if ( !v33 )
          ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
        *(_DWORD *)(v33 + 8) = *v32;
        memcpy_s((void *const)(v33 + 24), 2LL * (*v32 + 1), v16, 2LL * (*v32 + 1));
      }
      *(_QWORD *)(v12 + 8) = v17 + 24;
      v19 = *(char **)(a2 + 16);
      v20 = v19 - 24;
      v21 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v19 - 3)
                                                                                                 + 32LL))(*((_QWORD *)v19 - 3));
      if ( *((int *)v19 - 2) >= 0 && v21 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v20 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v20 + 4);
      }
      else
      {
        v39 = v20 + 8;
        v34 = (**v21)(v21, *((unsigned int *)v20 + 2), 2LL);
        v20 = (char *)v34;
        if ( !v34 )
          ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
        *(_DWORD *)(v34 + 8) = *v39;
        memcpy_s((void *const)(v34 + 24), 2LL * (*v39 + 1), v19, 2LL * (*v39 + 1));
      }
      *(_QWORD *)(v12 + 16) = v20 + 24;
      *(_OWORD *)(v12 + 24) = *(_OWORD *)(a2 + 24);
      v22 = *(char **)(a2 + 40);
      v23 = v22 - 24;
      v24 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v22 - 3)
                                                                                                 + 32LL))(*((_QWORD *)v22 - 3));
      if ( *((int *)v22 - 2) >= 0 && v24 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v23 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v23 + 4);
      }
      else
      {
        v40 = v23 + 8;
        v35 = (**v24)(v24, *((unsigned int *)v23 + 2), 2LL);
        v23 = (char *)v35;
        if ( !v35 )
          ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
        *(_DWORD *)(v35 + 8) = *v40;
        memcpy_s((void *const)(v35 + 24), 2LL * (*v40 + 1), v22, 2LL * (*v40 + 1));
      }
      *(_QWORD *)(v12 + 40) = v23 + 24;
      *(_DWORD *)(v12 + 48) = *(_DWORD *)(a2 + 48);
      *(_QWORD *)(v12 + 56) = *(_QWORD *)(a2 + 56);
      *(_DWORD *)(v12 + 64) = *(_DWORD *)(a2 + 64);
      v25 = *(char **)(a2 + 72);
      v26 = v25 - 24;
      v27 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v25 - 3)
                                                                                                 + 32LL))(*((_QWORD *)v25 - 3));
      if ( *((int *)v25 - 2) >= 0 && v27 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v26 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v26 + 4);
      }
      else
      {
        v36 = v26 + 8;
        v37 = (**v27)(v27, *((unsigned int *)v26 + 2), 2LL);
        v26 = (char *)v37;
        if ( !v37 )
          ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
        *(_DWORD *)(v37 + 8) = *v36;
        memcpy_s((void *const)(v37 + 24), 2LL * (*v36 + 1), v25, 2LL * (*v36 + 1));
      }
      *(_QWORD *)(v12 + 72) = v26 + 24;
      *(_DWORD *)(v12 + 96) = a4;
      ++*(_QWORD *)(a1 + 8);
      v28 = 8LL * a3;
      *(_QWORD *)(v12 + 88) = *(_QWORD *)(v28 + *(_QWORD *)a1);
      *(_QWORD *)(v28 + *(_QWORD *)a1) = v12;
      if ( *(_QWORD *)(a1 + 8) > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
      {
        v38 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::PickSize(a1);
        ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::Rehash(
          a1,
          v38);
      }
      return v12;
    }
    v6 = *(unsigned int *)(a1 + 52);
    if ( v6 )
    {
      if ( v6 == 10 )
        v7 = 0x1999999999999999LL;
      else
        v7 = 0xFFFFFFFFFFFFFFFFuLL / v6;
      if ( v7 < 0x68 )
        goto LABEL_31;
      v6 *= 104LL;
    }
    if ( ~v6 >= 8 )
    {
      v8 = malloc(v6 + 8);
      if ( v8 )
      {
        *v8 = *(_QWORD *)(a1 + 56);
        *(_QWORD *)(a1 + 56) = v8;
        v9 = *(_DWORD *)(a1 + 52);
        v10 = &v8[13 * (unsigned int)(v9 - 1) + 1];
        for ( i = v9 - 1; i >= 0; --i )
        {
          v10[11] = *(_QWORD *)(a1 + 64);
          *(_QWORD *)(a1 + 64) = v10;
          v10 -= 13;
        }
        goto LABEL_12;
      }
    }
LABEL_31:
    ATL::AtlThrowImpl(-2147024882);
  }
  catch ( ... )
  {
    *(_QWORD *)(v41 + 88) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v41;
    throw;
  }
  return result;
}
