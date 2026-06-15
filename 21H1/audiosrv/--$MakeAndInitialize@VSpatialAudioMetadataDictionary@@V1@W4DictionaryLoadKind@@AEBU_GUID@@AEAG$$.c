/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@W4DictionaryLoadKind@@AEBU_GUID@@AEAG$$TAEAPEAEAEAI@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioMetadataDictionary@@$$QEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG$$QEA$$TAEAPEAEAEAI@Z @ 0x18012D324
 * Callers:
 *     Create_SpatialAudioMetadataDictionaryFromData @ 0x18012E374 (Create_SpatialAudioMetadataDictionaryFromData.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AD8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AB9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??0SpatialAudioMetadataDictionary@@QEAA@XZ @ 0x18012D5C0 (--0SpatialAudioMetadataDictionary@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialAudioMetadataDictionary@@QEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBGPEAEI@Z @ 0x18012E188 (-RuntimeClassInitialize@SpatialAudioMetadataDictionary@@QEAAJW4DictionaryLoadKind@@AEBU_GUID@@GP.c)
 */

// Hidden C++ exception states: #wind=2
__int64 Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioMetadataDictionary,SpatialAudioMetadataDictionary,enum DictionaryLoadKind,_GUID const &,unsigned short &,std::nullptr_t,unsigned char * &,unsigned int &>(
        SpatialAudioMetadataDictionary **a1,
        unsigned int *a2,
        __int64 a3,
        ...)
{
  SpatialAudioMetadataDictionary *v6; // rax
  int v7; // edi
  SpatialAudioMetadataDictionary *v8; // rbx
  SpatialAudioMetadataDictionary *v10; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, SpatialAudioMetadataDictionary *);
  *a1 = 0LL;
  v6 = (SpatialAudioMetadataDictionary *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = SpatialAudioMetadataDictionary::SpatialAudioMetadataDictionary(v6);
    v10 = v8;
    v7 = SpatialAudioMetadataDictionary::RuntimeClassInitialize(v8, *a2, a3);
    if ( v7 >= 0 )
    {
      if ( v8 )
        (*(void (__fastcall **)(SpatialAudioMetadataDictionary *))(*(_QWORD *)v8 + 8LL))(v8);
      *a1 = v8;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)va);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
