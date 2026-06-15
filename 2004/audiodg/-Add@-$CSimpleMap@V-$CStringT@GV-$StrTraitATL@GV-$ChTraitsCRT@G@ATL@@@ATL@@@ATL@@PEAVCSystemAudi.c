/*
 * XREFs of ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAVCSystemAudioDeviceBase@@@Z @ 0x140003694
 * Callers:
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x1400037D4 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x14001DB2E (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x14001DBE8 (memset_0.c)
 *     memcpy_0 @ 0x14001F43F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x140037718 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::Add(
        __int64 a1,
        const void **a2,
        _QWORD *a3)
{
  void *v5; // rax
  char *v6; // rax
  int v7; // edx
  __int64 v8; // rbp
  _QWORD *v9; // rdi
  char *v10; // rsi
  char *v11; // rbx
  __int64 (__fastcall ***v12)(_QWORD, _QWORD, __int64); // rax
  char *v13; // r8
  _DWORD *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  void *v19; // rcx
  size_t v20; // r8

  v5 = (void *)_o__recalloc(qword_140085208, (int)qword_140085218 + 1, 8LL);
  if ( !v5 )
    return 0LL;
  qword_140085208 = v5;
  v6 = (char *)_o__recalloc(qword_140085210, (int)qword_140085218 + 1, 8LL);
  if ( !v6 )
    return 0LL;
  qword_140085210 = v6;
  v7 = qword_140085218;
  v8 = (int)qword_140085218;
  v9 = (char *)qword_140085208 + 8 * (int)qword_140085218;
  if ( v9 )
  {
    v10 = (char *)*a2;
    v11 = v10 - 24;
    v12 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v10 - 3)
                                                                                               + 32LL))(*((_QWORD *)v10 - 3));
    if ( *((int *)v10 - 2) >= 0 && v12 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v11 + 4);
LABEL_7:
      *v9 = v11 + 24;
      v7 = qword_140085218;
      v6 = (char *)qword_140085210;
      goto LABEL_8;
    }
    v15 = v11 + 8;
    v16 = (**v12)(v12, *((unsigned int *)v11 + 2), 2LL);
    v11 = (char *)v16;
    if ( !v16 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v18);
    *(_DWORD *)(v16 + 8) = *v15;
    v19 = (void *)(v16 + 24);
    v20 = 2LL * (*v15 + 1);
    if ( !v20 )
      goto LABEL_7;
    if ( v16 != -24 )
    {
      if ( v10 )
      {
        memcpy_0(v19, v10, v20);
        goto LABEL_7;
      }
      memset_0(v19, 0, v20);
    }
    *(_DWORD *)_o__errno(v19, v17, v20) = 22;
    invalid_parameter_noinfo();
    goto LABEL_7;
  }
LABEL_8:
  v13 = &v6[8 * v8];
  if ( v13 )
  {
    *(_QWORD *)v13 = *a3;
    v7 = qword_140085218;
  }
  LODWORD(qword_140085218) = v7 + 1;
  return 1LL;
}
