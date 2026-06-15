/*
 * XREFs of ??$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V?$shared_ptr@UIDuckingDescriptor@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVCPBMStreamClassVolumeGainStage@@$$QEAPEBU_GUID@@$$QEAV?$shared_ptr@UIDuckingDescriptor@@@std@@@Z @ 0x180012BF8
 * Callers:
 *     _lambda_1a6013364819a622eb1c78e19bf6fec0_::operator() @ 0x180011BE8 (_lambda_1a6013364819a622eb1c78e19bf6fec0_--operator().c)
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HPEAUIDuckingController@@PEAH@Z @ 0x1800335C8 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV-$shared_ptr@VDuckingDescriptor.c)
 * Callees:
 *     ?RuntimeClassInitialize@CPBMStreamClassVolumeGainStage@@QEAAJPEBU_GUID@@V?$shared_ptr@UIDuckingDescriptor@@@std@@@Z @ 0x1800145CC (-RuntimeClassInitialize@CPBMStreamClassVolumeGainStage@@QEAAJPEBU_GUID@@V-$shared_ptr@UIDuckingD.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800148F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003F69C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPBMStreamClassVolumeGainStage,CPBMStreamClassVolumeGainStage,_GUID const *,std::shared_ptr<IDuckingDescriptor>>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  int v8; // edi
  struct Microsoft::WRL::Details::ModuleBase *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  signed __int32 v13; // eax
  _QWORD v15[3]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    v9 = Microsoft::WRL::Details::ModuleBase::module_;
    *(_QWORD *)v6 = &CGainStage::`vftable';
    v6[9] = 1;
    v6[13] = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CGainStage>::`vftable';
    if ( v9 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v9 + 8LL))(v9);
    *(_QWORD *)v7 = &CPBMStreamClassVolumeGainStage::`vftable';
    *((_QWORD *)v7 + 7) = 0LL;
    *((_QWORD *)v7 + 8) = 0LL;
    v10 = *a3;
    *a3 = 0LL;
    v15[0] = v10;
    v11 = a3[1];
    a3[1] = 0LL;
    v12 = *a2;
    v15[1] = v11;
    v8 = CPBMStreamClassVolumeGainStage::RuntimeClassInitialize(v7, v12, v15);
    if ( v8 >= 0 )
    {
      do
        v13 = v7[13];
      while ( v13 != 0x7FFFFFFF && v13 != _InterlockedCompareExchange(v7 + 13, v13 + 1, v13) );
      *a1 = v7;
      v8 = 0;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
