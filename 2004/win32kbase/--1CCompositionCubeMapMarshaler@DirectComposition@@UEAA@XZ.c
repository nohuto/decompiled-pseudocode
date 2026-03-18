/*
 * XREFs of ??1CCompositionCubeMapMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01EFC74
 * Callers:
 *     ??_GCCompositionCubeMapMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D0770 (--_GCCompositionCubeMapMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CCompositionCubeMapMarshaler::~CCompositionCubeMapMarshaler(
        DirectComposition::CCompositionCubeMapMarshaler *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &DirectComposition::CCompositionCubeMapMarshaler::`vftable';
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    Win32FreePool(v2);
    *((_QWORD *)this + 7) = 0LL;
  }
}
