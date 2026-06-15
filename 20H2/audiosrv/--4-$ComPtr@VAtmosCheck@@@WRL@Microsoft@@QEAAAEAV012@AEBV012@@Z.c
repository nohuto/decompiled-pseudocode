/*
 * XREFs of ??4?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180126754
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800BA740 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 *     ?FreeAtmosCheck@CSpatialAudioTech@@KAXXZ @ 0x1801268A0 (-FreeAtmosCheck@CSpatialAudioTech@@KAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x1800473A8 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047588 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<AtmosCheck>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = CSpatialAudioTech::s_spAtmosCheck;
  if ( *a1 != CSpatialAudioTech::s_spAtmosCheck )
  {
    v5 = CSpatialAudioTech::s_spAtmosCheck;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = v2;
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v5);
  }
  return a1;
}
