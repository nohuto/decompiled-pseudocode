/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioMetadataDictionaryData@@V1@AEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioMetadataDictionaryData@@AEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG@Z @ 0x18012BBC4
 * Callers:
 *     Create_MetadataDictionaryData @ 0x18012C208 (Create_MetadataDictionaryData.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046308 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A33C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??0SpatialAudioMetadataDictionaryData@@QEAA@XZ @ 0x18012BD34 (--0SpatialAudioMetadataDictionaryData@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialAudioMetadataDictionaryData@@QEAAJW4DictionaryLoadKind@@AEBU_GUID@@G@Z @ 0x18012C14C (-RuntimeClassInitialize@SpatialAudioMetadataDictionaryData@@QEAAJW4DictionaryLoadKind@@AEBU_GUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioMetadataDictionaryData,SpatialAudioMetadataDictionaryData,enum DictionaryLoadKind &,_GUID const &,unsigned short &>(
        SpatialAudioMetadataDictionaryData **a1,
        unsigned int *a2,
        __int64 a3,
        unsigned __int16 *a4)
{
  SpatialAudioMetadataDictionaryData *v8; // rax
  int v9; // edi
  SpatialAudioMetadataDictionaryData *v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  SpatialAudioMetadataDictionaryData *v13; // rbx
  SpatialAudioMetadataDictionaryData *v15; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (SpatialAudioMetadataDictionaryData *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = SpatialAudioMetadataDictionaryData::SpatialAudioMetadataDictionaryData(v8);
    v11 = *a4;
    v12 = *a2;
    v13 = v10;
    v15 = v10;
    v9 = SpatialAudioMetadataDictionaryData::RuntimeClassInitialize(v10, v12, a3, v11);
    if ( v9 >= 0 )
    {
      if ( v13 )
        (*(void (__fastcall **)(SpatialAudioMetadataDictionaryData *))(*(_QWORD *)v13 + 8LL))(v13);
      *a1 = v13;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
