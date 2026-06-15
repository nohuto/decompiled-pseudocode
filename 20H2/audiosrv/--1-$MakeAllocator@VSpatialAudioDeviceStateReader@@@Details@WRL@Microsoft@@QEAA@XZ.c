/*
 * XREFs of ??1?$MakeAllocator@VSpatialAudioDeviceStateReader@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800C6108
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioDeviceStateReader_SpatialAudioDeviceStateReader_unsigned_short_const___&_IPropertyStore___&__::_1_::dtor$0 @ 0x180079D60 (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioDeviceStateReader_SpatialAudioDeviceStat.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$3 @ 0x18007B1C0 (_CAudioStream--CAudioStream_--_1_--dtor$3.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$4 @ 0x18007B1E0 (_CAudioStream--CAudioStream_--_1_--dtor$4.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioEncoderProperties_SpatialAudioEncoderProperties__GUID_const_&_int_&__::_1_::dtor$0 @ 0x18012A563 (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioEncoderProperties_SpatialAudioEncoderPro.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioMetadataDictionary_SpatialAudioMetadataDictionary_enum_DictionaryLoadKind__GUID_const_&_unsigned_short_&_std::nullptr_t_unsigned_char___&_unsigned_int_&__::_1_::dtor$0 @ 0x18012C420 (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioMetadataDictionary_SpatialAudioMetadataD.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180033A40 (--3@YAXPEAX@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<SpatialAudioDeviceStateReader>::~MakeAllocator<SpatialAudioDeviceStateReader>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
