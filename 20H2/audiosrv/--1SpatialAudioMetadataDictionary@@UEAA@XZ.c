/*
 * XREFs of ??1SpatialAudioMetadataDictionary@@UEAA@XZ @ 0x18012C654
 * Callers:
 *     ??_GSpatialAudioMetadataDictionary@@UEAAPEAXI@Z @ 0x18012C740 (--_GSpatialAudioMetadataDictionary@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180033A40 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SpatialAudioMetadataDictionary::~SpatialAudioMetadataDictionary(SpatialAudioMetadataDictionary *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &SpatialAudioMetadataDictionary::`vftable';
  *((_QWORD *)this + 1) = &SpatialAudioMetadataDictionary::`vftable'{for `ISpatialAudioMetadataDictionaryData'};
  *((_QWORD *)this + 2) = &SpatialAudioMetadataDictionary::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  operator delete(*((void **)this + 16));
  *((_QWORD *)this + 16) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  *((_DWORD *)this + 13) = -1073741823;
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
