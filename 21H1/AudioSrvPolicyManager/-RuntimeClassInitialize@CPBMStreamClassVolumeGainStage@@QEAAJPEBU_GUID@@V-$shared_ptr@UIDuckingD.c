/*
 * XREFs of ?RuntimeClassInitialize@CPBMStreamClassVolumeGainStage@@QEAAJPEBU_GUID@@V?$shared_ptr@UIDuckingDescriptor@@@std@@@Z @ 0x1800145CC
 * Callers:
 *     ??$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V?$shared_ptr@UIDuckingDescriptor@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVCPBMStreamClassVolumeGainStage@@$$QEAPEBU_GUID@@$$QEAV?$shared_ptr@UIDuckingDescriptor@@@std@@@Z @ 0x180012BF8 (--$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V-$shared_ptr@UIDuckingDescr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPBMStreamClassVolumeGainStage::RuntimeClassInitialize(__int64 a1, __int128 *a2, _QWORD *a3)
{
  __int64 v5; // rcx
  volatile signed __int32 *v7; // rbx
  __int128 v8; // xmm0
  volatile signed __int32 *v9; // rbx

  v5 = a3[1];
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = a3[1];
  }
  v7 = *(volatile signed __int32 **)(a1 + 64);
  *(_QWORD *)(a1 + 56) = *a3;
  *(_QWORD *)(a1 + 64) = v5;
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v8 = *a2;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_BYTE *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 16) = v8;
  v9 = (volatile signed __int32 *)a3[1];
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  return 0LL;
}
