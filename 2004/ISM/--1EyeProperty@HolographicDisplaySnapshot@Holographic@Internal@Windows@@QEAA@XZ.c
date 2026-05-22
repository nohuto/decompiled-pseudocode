/*
 * XREFs of ??1EyeProperty@HolographicDisplaySnapshot@Holographic@Internal@Windows@@QEAA@XZ @ 0x1800C56E0
 * Callers:
 *     <none>
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18003D204 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1?$TimestampedProperty@U?$VariableSizeStructWrapper@UHOLOGRAPHIC_DISPLAY_DISTORTION_MESH@@@Holographic@Internal@Windows@@@Holographic@Internal@Windows@@QEAA@XZ @ 0x1800436F0 (--1-$TimestampedProperty@U-$VariableSizeStructWrapper@UHOLOGRAPHIC_DISPLAY_DISTORTION_MESH@@@Hol.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDisplaySnapshot::EyeProperty::~EyeProperty(
        Windows::Internal::Holographic::HolographicDisplaySnapshot::EyeProperty *this)
{
  Windows::Internal::Holographic::TimestampedProperty<Windows::Internal::Holographic::VariableSizeStructWrapper<HOLOGRAPHIC_DISPLAY_DISTORTION_MESH>>::~TimestampedProperty<Windows::Internal::Holographic::VariableSizeStructWrapper<HOLOGRAPHIC_DISPLAY_DISTORTION_MESH>>((char *)this + 416);
  `eh vector destructor iterator'(
    (char *)this + 288,
    40LL,
    2LL,
    (void (*)(void *))Windows::Internal::Holographic::TimestampedProperty<Windows::Internal::Holographic::VariableSizeStructWrapper<HOLOGRAPHIC_DISPLAY_DISTORTION_MESH>>::~TimestampedProperty<Windows::Internal::Holographic::VariableSizeStructWrapper<HOLOGRAPHIC_DISPLAY_DISTORTION_MESH>>);
  std::vector<unsigned char>::_Tidy((__int64)this + 256);
}
